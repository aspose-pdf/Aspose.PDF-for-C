/// @file system/smart_ptr.h
#ifndef _aspose_system_smart_ptr_h_
#define _aspose_system_smart_ptr_h_


#include "smart_ptr_counter.h"
#include "detail.h"
#include "select_type.h"

#include <utility>
#include <cassert>
#include <type_traits>


namespace System { 

class TypeInfo;
class SmartPtrInfo;
template <typename T> class Array;
template <typename T> class SmartPtr;


namespace Details {
    /// Resolves types defined by SmartPtr for non-array types.
    /// @tparam T SmartPtr pointee type.
    template <typename T> struct ArrayTypeResolver
    { 
        /// Array type; void as pointee is non-array type.
        using type = void; 
        /// Element type; void as pointee is non-array type.
        using value_type = void;
    };
    /// Resolves types defined by SmartPtr for array types.
    /// @tparam T Array element type.
    template <typename T> struct ArrayTypeResolver<Array<T>>
    {
        /// Array type.
        using type = Array<T>;
        /// Array element type.
        using value_type = T;
    };

    /// Gets array element by index; moves operator [] template magic out of SmartPtr class.
    /// @tparam X Array element type.
    /// @tparam IdxType Index type.
    /// @param ptr Array to get element from.
    /// @param idx Array index.
    /// @return Reference to array element.
    template <typename X, typename IdxType> typename Array<X>::UnderlyingType& GetByIndex(const SmartPtr<Array<X>> *ptr, IdxType idx);
    /// Creates empty array of required type.
    /// @tparam T Array element type.
    /// @return Raw pointer to newly created array.
    template <typename T> Array<T>* CreateArray(Array<T>*);
}
/// SmartPtr pointer type: weak or shared.
/// Defines whether pointer is being counted when it is being decided whether to delete object or not.
enum class SmartPtrMode : char
{
    /// Shared mode: pointer participates in reference counting
    Shared,
    /// Weak mode: pointer does not participate in reference counting
    Weak
};


struct EmptyArrayInitializer {};
/// @brief Pointer class to wrap types being allocated on heap. Use it to manage memory for classes inheriting Object.
/// This pointer type follows intrusive pointer semantics. Reference counter is stored either in Object itself or in counter structure
/// which is tied to Object instance tightly. In any case, all SmartPtr instances form single ownership group regardless how they were created
/// which is unlike how std::shared_ptr class behaves. Converting raw pointer to SmartPtr is safe given there are other SmartPtr instances
/// holding shared references to the same object.
/// SmartPtr class instance can be in one of two states: shared pointer and weak pointer. To keep object alive, one should have count of shared
/// references to it positive. Both weak and shared pointers can be used to access pointed object (to call methods, read or write fields, etc.),
/// but weak pointers do not participate to shared pointer reference counting.
/// Object is being deleted when the last 'shared' SmartPtr pointer to it is being destroyed. So, make sure that this doesn't happen when no 
/// other shared SmartPtr pointers to object exist, e. g. during object construction or destruction. Use System::Object::ThisProtector sentry
/// objects (in C++ code) or CppCTORSelfReference or CppSelfReference attribute (in C# code being ported) to fix this issue.
/// Similarily, make sure to break loop references by using System::WeakPtr pointer class or System::SmartPtrMode::Weak pointer mode (in C++
/// code) or CppWeakPtr attribute (in C# code being ported). If two or more  objects reference each other using 'shared' pointers, they will
/// never be deleted.
/// If pointer type (weak or shared) should be switched in runtime, use System::SmartPtr<T>::set_Mode() method or System::DynamicWeakPtr class.
/// SmartPtr class doesn't contain any virtual methods. You should only inherit it if you're creating a memory management strategy of your own.
/// This type is a pointer to manage other object's deletion.
/// It should be allocated on stack and passed to functions either by value or by const reference.
/// @tparam T Type of the pointed object. Must be either System::Object or subclass of it.
template <class T>
class SmartPtr
{
public:
    /// @brief Pointed type.
    typedef T Pointee_;
    /// @brief Specialized smart pointer type.
    typedef SmartPtr<T> SmartPtr_;
    /// @brief Same as Pointee_, if it is a specialization of System::Array, and void otherwise.
    typedef typename System::Details::ArrayTypeResolver<T>::type ArrayType;
    /// @brief Storage type of pointed array. Only meaningful if T is a specialization of System::Array.
    using ValueType = typename System::Details::SelectType<typename System::Details::ArrayTypeResolver<T>::value_type>::type;
    /// @brief Creates SmartPtr object of required mode.
    /// @param mode Pointer mode.
    SmartPtr(SmartPtrMode mode)
        : m_data(mode)
    {
        m_data.SetNull();
    }
    /// @brief Creates null-pointer SmartPtr object of required mode.
    /// @param mode Pointer mode.
    SmartPtr(std::nullptr_t = nullptr, SmartPtrMode mode = SmartPtrMode::Shared)
        : m_data(mode)
    {
        m_data.SetNull();
    }
    /// @brief Creates SmartPtr pointing to specified object, or converts raw pointer to SmartPtr.
    /// @param object Pointee.
    /// @param mode Pointer mode.
    SmartPtr(Pointee_ *object, SmartPtrMode mode = SmartPtrMode::Shared)
        : m_data(mode)
    {
        Lock(object);
    }
    /// @brief Copy constructs SmartPtr object. Both pointers point to the same object afterwards.
    /// @param ptr Pointer to copy.
    /// @param mode Pointer mode.
    SmartPtr(const SmartPtr_ &ptr, SmartPtrMode mode = SmartPtrMode::Shared)
        : m_data(mode)
    {
        Lock(ptr);
    }
    /// @brief Copy constructs SmartPtr object. Both pointers point to the same object afterwards. Performs type conversion if allowed.
    /// @tparam Q Type of object pointed by x.
    /// @param x Pointer to copy.
    /// @param mode Pointer mode.
    template<class Q, typename = typename std::enable_if<std::is_convertible<Q*, Pointee_*>::value>::type>
    SmartPtr(const SmartPtr<Q>& x, SmartPtrMode mode = SmartPtrMode::Shared)
        : m_data(mode)
    {
        Lock(x);
    }
    /// @brief Move constructs SmartPtr object. Effectively, swaps two pointers, if they are both of same mode. x may be unusable after call.
    /// @param x Pointer to move.
    /// @param mode Pointer mode.
    SmartPtr(SmartPtr_&& x, SmartPtrMode mode = SmartPtrMode::Shared) noexcept
        : m_data(mode)
    {
        if (m_data.GetMode() == x.m_data.GetMode())
        {
            m_data.SetNull();
            m_data.swapPointers(x.m_data);
        }
        else
        {
            if (m_data.GetMode() == SmartPtrMode::Shared)
                MoveSharedFromWeak(std::move(x));
            else
                MoveWeakFromShared(std::move(x));
        }
    }
    /// @brief Converts type of referenced array by creating a new array of different type. Useful if in C# there is an array type cast which is unsupported in C++.
    /// @tparam Y Type of source array.
    /// @param src Pointer to array to create a copy of, but with different type of elements.
    /// @param mode Pointer mode.
    template <typename Y>
    explicit SmartPtr(const SmartPtr<Array<Y>> &src, SmartPtrMode mode = SmartPtrMode::Shared)
        : m_data(mode)
    {
        InitArray(this, src);
    }
    /// @brief Initializes empty array. Used to port some C# code constructs.
    /// @tparam Y Placeholder of EmptyArrayInitializer type.
    template <typename Y, typename = typename std::enable_if<std::is_same<Y, EmptyArrayInitializer>::value, void>::type>
    explicit SmartPtr(const Y &)
    {
        Lock(Details::CreateArray((Pointee_*)nullptr));
    }
    /// @brief Constructs a SmartPtr which shares ownership information with the initial value of ptr, but holds an unrelated and unmanaged pointer p.
    /// @param ptr Another smart pointer to share the ownership to the ownership from.
    /// @param p Pointer to an object to manage.
    /// @param mode Pointer mode.
    template <typename P>
    SmartPtr(const SmartPtr<P> &ptr, Pointee_ *p, SmartPtrMode mode = SmartPtrMode::Shared)
        : m_data(mode)
    {
        if (ptr == nullptr)
            m_data.SetNull();
        else if (m_data.GetMode() == SmartPtrMode::Weak)
        {
            if (ptr.m_data.GetMode() == SmartPtrMode::Weak)
                m_data.WeakSetPointer(
                    p
                    , ptr.m_data.WeakGetCounter()->WeakRefAdded()
                );
            else
                m_data.WeakSetPointer(
                    p
#ifdef ENABLE_EXTERNAL_REFCOUNT
                    , ptr.m_data.SharedGetCounter()->WeakRefAdded()
#else
                    , ptr.m_data.SharedGetObject()->WeakRefAdded()
#endif
                );
        }
        else
        {
            if (ptr.m_data.GetMode() == SmartPtrMode::Weak)
                m_data.SharedSetPointer(
                    p
                    , detail::cast_statically_or_dynamically<Pointee_, Object>::cast(p)
                    , ptr.m_data.WeakGetCounter()->Lock()
#ifdef ENABLE_EXTERNAL_REFCOUNT
                    , ptr.m_data.WeakGetCounter()
#endif
                );
            else
                m_data.SharedSetPointer(
                    p
                    , detail::cast_statically_or_dynamically<Pointee_, Object>::cast(p)
                    , ptr.m_data.SharedGetOwned()->SharedRefAdded()
#ifdef ENABLE_EXTERNAL_REFCOUNT
                    , ptr.m_data.SharedGetCounter()
#endif
                );
        }
    }
    /// @brief Destroys SmartPtr object. If required, decreases pointed object's reference counter and deletes object.
    ~SmartPtr()
    {
        Release();
    }
    /// @brief Move-assigns SmartPtr object. x becomes unusable.
    /// @param x Pointer to move-assign.
    /// @return Reference to this object.
    SmartPtr_& operator = (SmartPtr_&& x) noexcept
    {
        if (m_data.GetPointee() != x.m_data.GetPointee())
        {
            if (m_data.GetMode() == x.m_data.GetMode())
            {
                m_data.swapPointers(x.m_data);
            }
            else if (m_data.GetMode() == SmartPtrMode::Shared)
            {
                if (m_data.HoldsReference())
                {
                    SharedRefReleaser *const releaser = GetSharedReleaser();
                    MoveSharedFromWeak(std::move(x));
                    ReleaseShared(releaser);
                }
                else
                {
                    MoveSharedFromWeak(std::move(x));
                }
            }
            else
            {
                if (m_data.HoldsReference())
                {
                    System::Detail::SmartPtrCounter *const releaser = m_data.WeakGetCounter();
                    MoveWeakFromShared(std::move(x));
                    ReleaseWeak(releaser);
                }
                else
                {
                    MoveWeakFromShared(std::move(x));
                }
            }
        }
        return *this;
    }
    /// @brief Copy-assigns SmartPtr object.
    /// @param x Pointer to copy-assign.
    /// @return Reference to this object.
    SmartPtr_& operator = (const SmartPtr_ &x)
    {
        Assign(x);
        return *this;
    }
    /// @brief Copy-assigns SmartPtr object. Does required type conversions.
    /// @tparam Q Type of object pointed by x.
    /// @param x Pointer to copy-assign.
    /// @return Reference to this object.
    template <typename Q>
    SmartPtr_& operator = (const SmartPtr<Q> &x)
    {
        Assign(x);
        return *this;
    }
    /// @brief Assigns raw pointer to SmartPtr object.
    /// @param p Pointer value to assign.
    /// @return Reference to this object.
    SmartPtr_& operator = (Pointee_ *p)
    {
        if (GetPointer() != p)
        {
            SmartPtr_ temp(p, get_Mode());
            m_data.swapPointers(temp.m_data);
        }
        return *this;
    }
    /// @brief Sets pointer value to nullptr.
    /// @return Reference to this object.
    SmartPtr_& operator = (std::nullptr_t)
    {
        Release();
        m_data.SetNull();
        return *this;
    }
    /// @brief Allows to access members of referenced object.
    /// @return Raw pointer to referenced object.
    /// @throw System::NullReferenceException If pointer is null.
    Pointee_* operator -> () const
    {
        return GetObjectNotNull();
    }
    /// @brief Checks if pointer points to nullptr.
    /// @return True if pointer points to nullptr and false otherwise.
    bool operator == (std::nullptr_t) const
    {
        return m_data.IsNull();
    }
    /// @brief Gets pointed object.
    /// @return Raw pointer to referenced object.
    Pointee_* get() const
    {
        return m_data.GetPointee();
    }
    /// @brief Gets pointed object, but asserts that pointer is in shared mode.
    /// @return Raw pointer to referenced object.
    Pointee_* get_shared() const
    {
        return m_data.SharedGetPointee();
    }
    /// @brief Sets pointed object.
    /// @param ptr Raw pointer to new referenced object.
    void reset(Pointee_ *ptr)
    {
        Release();
        Lock(ptr);
    }
    /// @brief Makes pointer pointing to nullptr.
    void reset()
    {
        Release();
        m_data.SetNull();
    }
    /// @brief Gets pointer mode.
    /// @return Mode of pointer object.
    SmartPtrMode get_Mode() const
    {
        return m_data.GetMode();
    }
    /// @brief Checks if pointer is in shared mode.
    /// @return True if pointer is in shared mode, false otherwise.
    bool IsShared() const
    {
        return m_data.GetMode() == SmartPtrMode::Shared;
    }
    /// @brief Checks if pointer is in weak mode.
    /// @return True if pointer is in weak mode, false otherwise.
    bool IsWeak() const
    {
        return m_data.GetMode() == SmartPtrMode::Weak;
    }
    /// @brief Sets pointer mode. May alter referenced object's reference counts.
    /// @param mode New mode of pointer.
    void set_Mode(SmartPtrMode mode)
    {
        if (m_data.GetMode() == mode)
            return;
        SmartPtr_ ptr(*this, mode);
        m_data.swap(ptr.m_data);
    }
    /// @brief Gets reference to pointed object. Asserts that pointer is not null.
    /// @return Reference to pointed object.
    Pointee_& operator *() const
    {
        return *GetObjectNotNull();
    }
    /// @brief Checks if pointer is not null.
    /// @return False if pointer is null, true otherwise.
    explicit operator bool() const noexcept
    {
        return *this != nullptr;
    }
    /// @brief Checks if pointer is null.
    /// @return True if pointer is null, false otherwise.
    bool operator !() const noexcept
    {
        return *this == nullptr;
    }
    /// @brief Provides less-compare semantics for SmartPtr class.
    /// @tparam Y Type of pointer to compare current one to.
    /// @param p Pointer to compare current one to.
    /// @return True if the object referenced by SmartPtr is 'less' than p and false otherwise.
    template<class Y>
    bool operator < (Y* p) const
    {
        return GetObjectOrNull() < p;
    }
    /// @brief Provides less-compare semantics for SmartPtr class.
    /// @tparam Y Type of pointer to compare current one to.
    /// @param x Pointer to compare current one to.
    /// @return True if the object referenced by SmartPtr is 'less' than x and false otherwise.
    template<class Y>
    bool operator < (SmartPtr<Y> const& x) const
    {
        return GetObjectOrNull() < x.GetObjectOrNull();
    }
    /// @brief Shortcut to get System::TypeInfo object for the Pointee_ type.
    /// @return Const reference to TypeInfo structure which describes Pointee_ type.
    static const System::TypeInfo& Type()
    {
        return Pointee_::Type();
    }
    /// @brief Casts pointer to different type using static_cast on pointed object.
    /// @tparam Y Target type of pointed object.
    /// @return Pointer of changed type which is always in shared mode.
    template<class Y>
    SmartPtr<Y> static_pointer_cast() const
    {
        return m_data.IsNull() ? SmartPtr<Y>() : SmartPtr<Y>(*this, static_cast<Y*>(m_data.GetPointee()), get_Mode());
    }
    /// @brief Casts pointer to different type using dynamic_cast on pointed object.
    /// @tparam Y Target type of pointed object.
    /// @return Pointer of changed type which is always in shared mode.
    template<class Y>
    SmartPtr<Y> dynamic_pointer_cast() const
    {
        return m_data.IsNull() ? SmartPtr<Y>() : SmartPtr<Y>(*this, dynamic_cast<Y*>(m_data.GetPointee()), get_Mode());
    }
    /// @brief Casts pointer to different type using const_cast on pointed object.
    /// @tparam Y Target type of pointed object.
    /// @return Pointer of changed type which is always in shared mode.
    template<class Y>
    SmartPtr<Y> const_pointer_cast() const
    {
        return m_data.IsNull() ? SmartPtr<Y>() : SmartPtr<Y>(*this, const_cast<Y*>(m_data.GetPointee()), get_Mode());
    }
    /// @brief Checks if pointed object is of specific type or its child type. Follows C# 'is' semantics.
    /// @param target Specifies target type to check against.
    /// @return True if C# 'is'-style check is positive and false otherwise.
    bool Is(const System::TypeInfo &target) const;
    /// @brief Gets pointed object (if any) or nullptr. Same as get().
    /// @return Raw pointer to referenced object (if any) or nullptr.
    Object* GetObjectOrNull() const
    {
        if (m_data.IsNull())
            return nullptr;
        else if (m_data.GetMode() == SmartPtrMode::Shared)
            return m_data.SharedGetObject();
        else
            return m_data.WeakGetCounter()->GetObject();
    }
    /// @brief Converts any pointer type to pointer to Object. Doesn't require Pointee_ type to be complete.
    /// @return Raw pointer to referenced object (if any) or nullptr.
    SmartPtr<Object> ToObjectPtr() const;
    /// @brief Gets pointed object (if any) or nullptr. Same as get().
    /// @return Raw pointer to referenced object (if any) or nullptr.
    Pointee_* GetPointer() const
    {
        return m_data.GetPointee();
    }
    /// @brief Gets number of shared pointers existing to referenced object, including current one. Asserts current pointer being in shared mode.
    /// @return Number of shared pointers existing to referenced object, if any. If pointer is null, returns 0.
    int get_shared_count() const
    {
        if (m_data.SharedGetPointee() == nullptr) //Asserts we're in shared pointer mode
            return 0;
        else
#ifdef ENABLE_EXTERNAL_REFCOUNT
            return m_data.SharedGetCounter()->SharedCount();
#else
            return m_data.SharedGetOwned()->SharedCount();
#endif
    }
    /// @brief Calls SetTemplateWeakPtr() method on pointed object (if any).
    /// @param argument Argument of SetTemplateWeakPtr method called on referenced object.
    void SetContainedTemplateWeakPtr(unsigned int argument) const;
    /// @brief Accessor for array elements. Only compiles if SmartPtr_ is specialization of System::Array.
    /// @tparam IdxType Type of index (assumed integral).
    /// @param idx Index in array.
    /// @return Array value at idx position.
    template <typename IdxType>
    decltype(System::Details::GetByIndex(std::declval<const SmartPtr_*>(), std::declval<IdxType>())) operator[] (IdxType idx) const
    {
        return System::Details::GetByIndex(this, idx);
    }

    /// @brief Accessor for begin() method of an underling collection. Only compiles if SmartPtr_ is specialization type
    /// with begin() method.
    /// @return iterator to the begin of collection
    template <typename Q = T> auto begin() noexcept -> decltype(std::declval<Q>().begin())
    {
        return GetObjectNotNull()->begin();
    }

    /// @brief Accessor for end() method of an underling collection. Only compiles if SmartPtr_ is specialization type
    /// with end() method.
    /// @return iterator to the end of collection
    template <typename Q = T> auto end() noexcept -> decltype(std::declval<Q>().end())
    {
        return GetObjectNotNull()->end();
    }

    /// @brief Accessor for begin() method of an underling collection. Only compiles if SmartPtr_ is specialization type
    /// with begin() method.
    /// @return iterator to the begin of collection
    template <typename Q = T> auto begin() const noexcept -> decltype(std::declval<const Q>().begin())
    {
        return GetObjectNotNull()->begin();
    }

    /// @brief Accessor for end() method of an underling collection. Only compiles if SmartPtr_ is specialization type
    /// with end() method.
    /// @return iterator to the end of collection
    template <typename Q = T> auto end() const noexcept -> decltype(std::declval<const Q>().end())
    {
        return GetObjectNotNull()->end();
    }

    /// @brief Calls GetHashCode() on pointed object.
    /// @return Result of GetHashCode() call on referenced object (if any) or 0.
    int GetHashCode() const
    {
        return GetHashCodeImpl(static_cast<Pointee_*>(nullptr));
    }

protected:
    template <class Q> friend class SmartPtr;
    friend class SmartPtrInfo;
    /// @brief Sets pointee object. Increments shared or weak reference count, depending on pointer mode.
    /// @param object Object to lock.
    void Lock(Pointee_ *object)
    {
        if (object == nullptr)
            m_data.SetNull();
        else
        {
            if (m_data.GetMode() == SmartPtrMode::Shared)
#ifdef ENABLE_EXTERNAL_REFCOUNT
                m_data.SharedSetPointer(object, object->Object::SharedRefAdded(), object->Object::GetCounter());
#else
                m_data.SharedSetPointer(object, object->Object::SharedRefAdded());
#endif
            else
                m_data.WeakSetPointer(object, object->Object::WeakRefAdded());
        }
    }
    /// @brief Sets pointee object. Increments shared or weak reference count, depending on pointer mode.
    /// @tparam Q Source object type.
    /// @param ptr Pointer to object to lock.
    template <class Q>
    void Lock(const SmartPtr<Q> &ptr)
    {
        if (ptr == nullptr)
            m_data.SetNull();
        else if (m_data.GetMode() == SmartPtrMode::Weak)
        {
            if (ptr.m_data.GetMode() == SmartPtrMode::Weak)
                LockWeakFromWeak(ptr);
            else
                LockWeakFromShared(ptr);
        }
        else
        {
            if (ptr.m_data.GetMode() == SmartPtrMode::Weak)
                LockSharedFromWeak(ptr);
            else
                LockSharedFromShared(ptr);
        }
    }
    /// @brief Sets pointee object. Asserts that both current object and ptr are in shared mode.
    /// @tparam Q Source object type.
    /// @param ptr Pointer to object to lock.
    template <typename Q>
    void LockSharedFromShared(const SmartPtr<Q> &ptr)
    {
        m_data.SharedSetPointer(
            ptr.m_data.SharedGetPointee()
            , ptr.m_data.SharedGetObject()
            , ptr.m_data.SharedGetOwned()->SharedRefAdded()
#ifdef ENABLE_EXTERNAL_REFCOUNT
            , ptr.m_data.SharedGetCounter()
#endif
        );
    }
    /// @brief Sets pointee object. Asserts that current object is in shared mode and ptr is in weak mode.
    /// @tparam Q Source object type.
    /// @param ptr Pointer to object to lock.
    template <typename Q>
    void LockSharedFromWeak(const SmartPtr<Q> &ptr)
    {
        m_data.SharedSetPointer(
            ptr.m_data.WeakGetPointee()
            , ptr.m_data.WeakGetCounter()->Lock()
#ifdef ENABLE_EXTERNAL_REFCOUNT
            , ptr.m_data.WeakGetCounter()
#endif
        );
    }
    /// @brief Sets pointee object. Asserts that current object is in weak mode and ptr is in shared mode.
    /// @tparam Q Source object type.
    /// @param ptr Pointer to object to lock.
    template <typename Q>
    void LockWeakFromShared(const SmartPtr<Q> &ptr)
    {
        m_data.WeakSetPointer(
            ptr.m_data.SharedGetPointee()
#ifdef ENABLE_EXTERNAL_REFCOUNT
            , ptr.m_data.SharedGetCounter()->WeakRefAdded()
#else
            , ptr.m_data.SharedGetOwned()->WeakRefAdded()
#endif
        );
    }
    /// @brief Sets pointee object. Asserts that both current object and ptr are in weak mode.
    /// @tparam Q Source object type.
    /// @param ptr Pointer to object to lock.
    template <typename Q>
    void LockWeakFromWeak(const SmartPtr<Q> &ptr)
    {
        m_data.WeakSetPointer(
            ptr.m_data.WeakGetPointee()
            , ptr.m_data.WeakGetCounter()->WeakRefAdded()
        );
    }
    /// @brief Decrements currently referenced object's shared or weak pointer counter, depending on current pointer mode.
    void Release()
    {
        if (m_data.GetPointee() != nullptr)
        {
            if (m_data.GetMode() == SmartPtrMode::Shared)
                ReleaseShared();
            else
                ReleaseWeak();
        }
    }
#ifdef ENABLE_EXTERNAL_REFCOUNT
    /// @brief Type to use to release shared pointers. Depends on whether external refcount is on or off.
    typedef System::Detail::SmartPtrCounter SharedRefReleaser;
    /// @brief Gets object to use to release shared pointer to.
    /// @return Pointer to owned object pointer.
    SharedRefReleaser* GetSharedReleaser() const
    {
        return m_data.SharedGetCounter();
    }
#else
    /// @brief Type to use to release shared pointers. Depends on whether external refcount is on or off.
    typedef Object SharedRefReleaser;
    /// @brief Gets object to use to release shared pointer to.
    /// @return Pointer to owned object.
    SharedRefReleaser* GetSharedReleaser() const
    {
        return m_data.SharedGetOwned();
    }
#endif
    /// @brief Removes shared pointer of a specific object, possibly deleting it.
    /// @param releaser Object to release.
    static void ReleaseShared(SharedRefReleaser *releaser);
    /// @brief Decrements currently referenced object's shared pointer counter.
    void ReleaseShared()
    {
        ReleaseShared(GetSharedReleaser());
    }
    /// @brief Decrements weak pointer counter.
    /// @param counter Counter to decrement.
    static void ReleaseWeak(System::Detail::SmartPtrCounter *counter)
    {
        counter->WeakRefRemoved();
    }
    /// @brief Decrements currently referenced object's weak pointer counter.
    void ReleaseWeak()
    {
        m_data.WeakGetCounter()->WeakRefRemoved();
    }
    /// @brief Gets currently referenced object (if any) or throws.
    /// @return Raw pointer to referenced object.
    /// @throws System::NullReferenceException Thrown if called on null-pointer.
    T* GetObjectNotNull() const
    {
        if (m_data.IsNull())
            System::Detail::SmartPtrCounter::ThrowNullReferenceException();
        return m_data.GetPointee();
    }
    /// @brief Implements move semantics. Asserts that current object is in shared mode and x is in weak mode.
    /// @param x Pointer to move value from.
    void MoveSharedFromWeak(SmartPtr &&x)
    {
        if (x.m_data.IsNull())
            m_data.SetNull();
        else
        {
            m_data.SharedSetPointer(
                x.m_data.WeakGetPointee()
                , x.m_data.WeakGetCounter()->Lock()
#ifdef ENABLE_EXTERNAL_REFCOUNT
                , x.m_data.WeakGetCounter()
#endif
            );
            x.ReleaseWeak();
            x.m_data.SetNull();
        }
    }
    /// @brief Implements move semantics. Asserts that current object is in weak mode and x is in shared mode.
    /// @param x Pointer to move value from.
    void MoveWeakFromShared(SmartPtr &&x)
    {
        if (x.m_data.IsNull())
            m_data.SetNull();
        else
        {
            m_data.WeakSetPointer(
                x.m_data.SharedGetPointee()
#ifdef ENABLE_EXTERNAL_REFCOUNT
                , x.m_data.SharedGetCounter()->WeakRefAdded()
#else
                , x.m_data.SharedGetOwned()->WeakRefAdded()
#endif
            );
            x.ReleaseShared();
            x.m_data.SetNull();
        }
    }
    /// @brief Performs actual array copying on cast constructor calls.
    /// @tparam X Target array element type.
    /// @tparam Y Source array element type.
    /// @param ptr Target array pointer.
    /// @param src Source array pointer.
    template <typename X, typename Y>
    static void InitArray(SmartPtr<Array<X>> *ptr, const SmartPtr<Array<Y>> &src)
    {
        T *const destination = new T(src->get_Length());
        ptr->Lock(destination);
        std::copy(src->data().begin(), src->data().end(), destination->data().begin());
    }
    /// @brief Calls into GetHashCode() method if it is available on Pointee_ type (which is true if it is a complete type).
    /// @tparam Q Same as Pointee_, needed for template magic here.
    /// @tparam R Result of GetHashCode() call, should be int.
    template <typename Q, typename R = decltype(std::declval<Q*>()->GetHashCode())>
    R GetHashCodeImpl(Q*) const
    {
        if (m_data.IsNull())
            return 0;
        else
            return GetPointer()->GetHashCode();
    }
    /// @brief Calls GetHashCode() method from Object if it is not available on Pointee_ type (e. g. if it is incomplete).
    int GetHashCodeImpl(void*) const
    {
        if (m_data.IsNull())
            return 0;
        else if (m_data.GetMode() == SmartPtrMode::Shared)
            return m_data.SharedGetObject()->GetHashCode();
        else
            return m_data.WeakGetCounter()->GetObject()->GetHashCode();
    }
    /// @brief Copy-assigns SmartPtr object. Does type conversions, if required.
    /// @tparam Q Type of object pointed by x.
    /// @param x Pointer to copy-assign.
    /// @return Reference to this object.
    template <typename Q>
    void Assign(const SmartPtr<Q> &x)
    {
        if (m_data.GetPointee() == x.m_data.GetPointee()) return;

        if (m_data.GetMode() == SmartPtrMode::Shared)
        {
            if (!x.m_data.HoldsReference())
            {
                ReleaseShared(); //Both can't be null at the same time here as GetPointer() results would match
                m_data.SetNull();
            }
            else if (m_data.HoldsReference())
            {
                SharedRefReleaser *const releaser = GetSharedReleaser();
                if (x.m_data.GetMode() == SmartPtrMode::Shared)
                    LockSharedFromShared(x);
                else
                    LockSharedFromWeak(x);
                ReleaseShared(releaser);
            }
            else
            {
                if (x.m_data.GetMode() == SmartPtrMode::Shared)
                    LockSharedFromShared(x);
                else
                    LockSharedFromWeak(x);
            }
        }
        else
        {
            if (!x.m_data.HoldsReference())
            {
                ReleaseWeak(); //Both can't be null at the same time here as GetComparable() results would match
                m_data.SetNull();
            }
            else if (m_data.HoldsReference())
            {
                System::Detail::SmartPtrCounter *const releaser = m_data.WeakGetCounter();
                if (x.m_data.GetMode() == SmartPtrMode::Shared)
                    LockWeakFromShared(x);
                else
                    LockWeakFromWeak(x);
                ReleaseWeak(releaser);
            }
            else
            {
                if (x.m_data.GetMode() == SmartPtrMode::Shared)
                    LockWeakFromShared(x);
                else
                    LockWeakFromWeak(x);
            }
        }
    }
    /// @brief Internal data storage class which hides data members and enforces neccessary asserts around them.
    class Data {
        /// @brief Pointer mode.
        SmartPtrMode m_mode;
        union {
           /// @brief Referenced object.
            Pointee_ *m_pointee;
           /// @brief Representation to make it possible setting m_pointee to nullptr without knowing its actual type.
            void *m_internal_pointer;
        };
        /// @brief Same as m_pointee, but kept as Object type reference.
        Object *m_object;
#ifdef ENABLE_EXTERNAL_REFCOUNT
        /// @brief Owned object
        Object *m_owned;
        /// @brief Reference counter structure linked to m_pointee.
        System::Detail::SmartPtrCounter *m_counter;
#else
        union {
            /// @brief Owned pointer
            Object *m_owned;
            /// @brief Reference counter structure linked to m_pointee.
            System::Detail::SmartPtrCounter *m_counter;
        };
#endif
    public:
        /// @brief Initializes Data structure. Doesn't set any members except for m_mode.
        Data(SmartPtrMode mode)
            : m_mode(mode) //No initialization for other members - they will be assigned by SmartPtr constructor
        {}
        Data(const Data&) = delete;
        Data(Data&&) = delete;
        Data& operator = (const Data&) = delete;
        Data& operator = (Data&&) = delete;
        /// @brief Gets current pointer mode.
        /// @return Current pointer mode.
        SmartPtrMode GetMode() const
        {
            return m_mode;
        }
        /// @brief Sets pointer mode. Doesn't do any reference count or pointer changes.
        /// @param mode New pointer mode.
        void SetMode(SmartPtrMode mode)
        {
            m_mode = mode;
        }
        /// @brief Gets pointed object (if any) or nullptr.
        /// @return Referenced object (if any) or nullptr.
        T* GetPointee() const
        {
            return m_pointee;
        }
        /// @brief Gets pointed object (if set and not yet deleted) or nullptr.
        /// @return Referenced object (if set and not yet deleted) or nullptr (if pointer is weak and referenced object is already deleted).
        T* GetComparable() const
        {
            if (m_mode == SmartPtrMode::Shared)
                return m_pointee;
            else if (m_pointee == nullptr)
                return nullptr;
            else if (m_counter->GetObject() == nullptr)
                return nullptr;
            else
                return m_pointee;
        }
        /// @brief Checks if referenced object is set and not yet deleted.
        /// @return False if referenced object is non-null and exists and false if pointer is null or pointer is weak and referenced object is already deleted.
        bool IsNull() const
        {
            return m_pointee == nullptr || (m_mode == SmartPtrMode::Weak && m_counter->GetObject() == nullptr);
        }
        /// @brief Sets pointer to null.
        void SetNull()
        {
            m_pointee = nullptr;
        }
        /// @brief Checks if pointer actually holds a shared or weak reference to an object.
        /// @return True if reference is being held, false otherwise.
        bool HoldsReference() const
        {
            return m_pointee != nullptr;
        }
        /// @brief Gets referenced object. Asserts that pointer is weak.
        /// @return Raw pointer to referenced object.
        Pointee_* WeakGetPointee() const
        {
            assert(m_mode == SmartPtrMode::Weak);
            return m_pointee;
        }
        /// @brief Gets referenced object reference counter. Asserts that pointer is weak. Doesn't null-check.
        /// @return Raw pointer to reference counter.
        System::Detail::SmartPtrCounter* WeakGetCounter() const
        {
            assert(m_mode == SmartPtrMode::Weak);
            return m_counter;
        }
        /// @brief Gets referenced object (if any) reference counter or null. Asserts that pointer is weak.
        /// @return Raw pointer to reference counter or null if pointer is null.
        System::Detail::SmartPtrCounter* WeakGetCounterOrNull() const
        {
            assert(m_mode == SmartPtrMode::Weak);
            return IsNull() ? nullptr : m_counter;
        }
        /// @brief Sets pointer value. Asserts that pointer is weak.
        /// @param pointee Pointee object.
        /// @param counter Reference counter of pointee object.
        void WeakSetPointer(Pointee_ *pointee, System::Detail::SmartPtrCounter *counter)
        {
            assert(m_mode == SmartPtrMode::Weak);
            m_pointee = pointee;
            m_counter = counter;
        }
        /// @brief Gets referenced object. Asserts that pointer is shared.
        /// @return Raw pointer to referenced object.
        Pointee_* SharedGetPointee() const
        {
            assert(m_mode == SmartPtrMode::Shared);
            return m_pointee;
        }
        /// @brief Gets referenced object which is cast to System::Object. Asserts that pointer is shared. Doesn't null-check.
        /// @return Raw pointer to referenced object.
        Object* SharedGetObject() const
        {
            assert(m_mode == SmartPtrMode::Shared);
            return m_object;
        }
        /// @brief Gets owned object which. Asserts that pointer is shared. Doesn't null-check.
        /// @return Raw pointer to owned object.
        Object* SharedGetOwned() const
        {
            assert(m_mode == SmartPtrMode::Shared);
            return m_owned;
        }
        /// @brief Gets referenced object (if any) which is cast to System::Object or null. Asserts that pointer is shared.
        /// @return Raw pointer to referenced object (if any) or null.
        Object* SharedGetObjectOrNull() const
        {
            assert(m_mode == SmartPtrMode::Shared);
            return IsNull() ? nullptr : m_object;
        }
        /// @brief Gets owned object. Asserts that pointer is shared.
        /// @return Raw pointer to owned object (if any) or null.
        Object* SharedGetOwnedOrNull() const
        {
            assert(m_mode == SmartPtrMode::Shared);
            return IsNull() ? nullptr : m_owned;
        }
        /// @brief Gets pointer to internal pointer storage field.
        /// @return Raw pointer to internal pointer storage field.
        void** SharedGetInternalPointer()
        {
            assert(m_mode == SmartPtrMode::Shared);
            return &m_internal_pointer;
        }
#ifdef ENABLE_EXTERNAL_REFCOUNT
        /// @brief Gets referenced object reference counter. Asserts that pointer is shared. Doesn't null-check.
        /// @return Raw pointer to reference counter.
        System::Detail::SmartPtrCounter* SharedGetCounter() const
        {
            assert(m_mode == SmartPtrMode::Shared);
            return m_counter;
        }
        /// @brief Gets pointer to internal reference counter pointer storage field. Doesn't null-check.
        /// @return Raw pointer to internal reference counter pointer storage field.
        System::Detail::SmartPtrCounter** SharedGetCounterPointer()
        {
            assert(m_mode == SmartPtrMode::Shared);
            return &m_counter;
        }
        /// @brief Gets pointer to internal reference counter pointer storage field or null.
        /// @return Raw pointer to internal reference counter pointer storage field (if pointer is non-null) or null.
        System::Detail::SmartPtrCounter* SharedGetCounterOrNull() const
        {
            assert(m_mode == SmartPtrMode::Shared);
            return IsNull() ? nullptr : m_counter;
        }
        /// @brief Sets pointer value. Asserts that pointer is shared.
        /// @param pointee Pointee object.
        /// @param object Pointee object cast to System::Object.
        /// @param owned Owned object cast to System::Object.
        /// @param counter Reference counter of pointee object.
        void SharedSetPointer(Pointee_ *pointee, Object *object, Object *owned, System::Detail::SmartPtrCounter *counter)
        {
            assert(m_mode == SmartPtrMode::Shared);
            m_pointee = pointee;
            m_object = object;
            m_owned = owned;
            m_counter = counter;
        }
        /// @brief Sets pointer value. Asserts that pointer is shared.
        /// @param pointee Pointee object.
        /// @param object Pointee object cast to System::Object.
        /// @param counter Reference counter of pointee object.
        void SharedSetPointer(Pointee_ *pointee, Object *object, System::Detail::SmartPtrCounter *counter)
        {
            assert(m_mode == SmartPtrMode::Shared);
            m_pointee = pointee;
            m_object = object;
            m_owned = object;
            m_counter = counter;
        }
#else
        /// @brief Sets pointer value. Asserts that pointer is shared.
        /// @param pointee Pointee object.
        /// @param owned Owned object cast to System::Object.
        /// @param object Pointee object cast to System::Object.
        void SharedSetPointer(Pointee_ *pointee, Object *object, Object *owned)
        {
            assert(m_mode == SmartPtrMode::Shared);
            m_pointee = pointee;
            m_object = object;
            m_owned = owned;
        }
        /// @brief Sets pointer value. Asserts that pointer is shared.
        /// @param pointee Pointee object.
        /// @param object Pointee object cast to System::Object.
        void SharedSetPointer(Pointee_ *pointee, Object *object)
        {
            assert(m_mode == SmartPtrMode::Shared);
            m_pointee = pointee;
            m_object = object;
            m_owned = object;
        }
#endif
        /// @brief Swaps data of two Data instances, including modes and pointers.
        /// @param data Data instance to swap data with.
        void swap(Data &data) noexcept
        {
            std::swap(m_mode, data.m_mode);
            swapPointers(data);
        }
        /// @brief Swaps pointer data of two Data instances, excluding modes.
        /// @param data Data instance to swap data with.
        void swapPointers(Data &data) noexcept
        {
            std::swap(m_pointee, data.m_pointee);
            std::swap(m_object, data.m_object);
            std::swap(m_owned, data.m_owned);
#ifdef ENABLE_EXTERNAL_REFCOUNT
            std::swap(m_counter, data.m_counter);
#endif
        }
    }
    /// An instance of Data class.
    m_data;
};


namespace Detail {
#ifdef ENABLE_EXTERNAL_REFCOUNT
    /// Sentry object to guarantee that object being constructed is not owned by pointers before it is fully constructed; otherwise, constructor exceptions lead to double deletion.
    class OwnNextObject
    {
    public:
        /// Constructor.
        OwnNextObject()
        {
            SmartPtrCounter::NextOwnership() = SmartPtrCounter::BeingConstructed; // Not until constructors succeed
        }
        /// Destructor.
        ~OwnNextObject()
        {
            SmartPtrCounter::NextOwnership() = SmartPtrCounter::OwnedByPointers; //So that if we have a bad_alloc and next object gets created via operator new pointers own it.
        }
        /// Marks object to be owned by pointers from now on.
        /// @tparam T Object type.
        /// @param object Pointer to object to switch ownership for.
        template <typename T>
        void CreatedSuccessfully(T *object) {
            object->Object::GetCounter()->CreatedSuccessfully(); // No exceptions thrown - should now manage memory by shared pointers
        }
    };
#else
    /// Dummy class to be used in case of shared pointers counter being stored inside the object so no protection exists against deleted memory access.
    class OwnNextObject
    {
    public:
        /// Stub function that does nothing.
        /// @tparam T Type of object that was constructed successfully.
        template <typename T>
        void CreatedSuccessfully(T *) {}
    };
#endif
}
/// @brief Trait class to check if a type is a specialization of SmartPtr class.
/// @tparam T Tested class.
template <class T>
struct IsSmartPtr : System::detail::is_a<T, System::SmartPtr> {};
/// @brief Creates object on heap and returns shared pointer to it.
/// @tparam T Class to instantiate.
/// @tparam Args Constructor arguments' types.
/// @param args Constructor arguments.
/// @return SmartPtr to newly created object, always in shared mode.
template<class T, class ...Args>
typename std::enable_if<!IsSmartPtr<T>::value, SmartPtr<T> >::type  MakeObject(Args&&... args)
{
    System::Detail::OwnNextObject ownershipSentry;
    T *const object = ::new T(std::forward<Args>(args)...);
    ownershipSentry.CreatedSuccessfully(object);
    return SmartPtr<T>(object);
}
/// @brief Creates object on heap and returns shared pointer to it.
/// @tparam T SmartPtr to class to instantiate.
/// @tparam Args Constructor arguments' types.
/// @param args Constructor arguments.
/// @return SmartPtr to newly created object, always in shared mode.
template<class T, class ...Args>
typename std::enable_if<IsSmartPtr<T>::value, T>::type MakeObject(Args&&... args)
{
    return MakeObject<typename T::Pointee_>(std::forward<Args>(args)...);
}
/// @brief Equal-compares two smart pointers.
/// @tparam X Pointee type of first pointer.
/// @tparam Y Pointee type of second pointer.
/// @param x First pointer to compare.
/// @param y Second pointer to compare.
/// @return True if pointers match, false otherwise.
template<class X, class Y>
bool operator == (const SmartPtr<X> &x, const SmartPtr<Y> &y)
{
    return x.GetObjectOrNull() == y.GetObjectOrNull();
}
/// @brief Non-equal-compares two smart pointers.
/// @tparam X Pointee type of first pointer.
/// @tparam Y Pointee type of second pointer.
/// @param x First pointer to compare.
/// @param y Second pointer to compare.
/// @return False if pointers match, true otherwise.
template<class X, class Y>
bool operator != (const SmartPtr<X> &x, const SmartPtr<Y> &y)
{
    return x.GetObjectOrNull() != y.GetObjectOrNull();
}
/// @brief Checks if smart pointer is null.
/// @tparam X Pointee type of pointer.
/// @param x Pointer to check.
/// @return True if pointer is null, false otherwise.
template<class X>
bool operator == (std::nullptr_t, SmartPtr<X> const& x)
{
    return x == nullptr;
}
/// @brief Checks if smart pointer is not null.
/// @tparam X Pointee type of pointer.
/// @param x Pointer to check.
/// @return False if pointer is null, true otherwise.
template<class X>
bool operator !=(SmartPtr<X> const& x, std::nullptr_t)
{
    return !(x == nullptr);
}
/// @brief Checks if smart pointer is not null.
/// @tparam X Pointee type of pointer.
/// @param x Pointer to check.
/// @return False if pointer is null, true otherwise.
template<class X>
bool operator !=(std::nullptr_t, SmartPtr<X> const& x)
{
    return !(x == nullptr);
}
/// @brief Checks if value type object (ported C# structure, etc.) is null.
/// @tparam T Value type.
/// @param x Object to check.
/// @return True if object is null, false otherwise.
template<class T>
typename std::enable_if<!std::is_scalar<T>::value && !std::is_pointer<T>::value && !std::is_array<T>::value, bool>::type operator ==(T const& x, std::nullptr_t)
{
    return x.IsNull();
}
/// @brief Checks if value type object (ported C# structure, etc.) is null.
/// @tparam T Value type.
/// @param x Object to check.
/// @return True if object is null, false otherwise.
template<class T>
typename std::enable_if<!std::is_scalar<T>::value && !std::is_pointer<T>::value && !std::is_array<T>::value, bool>::type operator ==(std::nullptr_t, T const& x)
{
    return x.IsNull();
}
/// @brief Converts raw pointer to smart pointer.
/// @tparam X Pointee type.
/// @param p Raw pointer to object.
/// @return Shared smart pointer to object.
template<class X>
SmartPtr<X> MakeSharedPtr(X* p)
{
    return SmartPtr<X>(p, SmartPtrMode::Shared);
}
/// @brief Converts raw pointer to smart pointer. Overload for const pointers. Useful e. g. when using 'this' variable in C# methods ported as const.
/// @tparam X Pointee type.
/// @param p Raw pointer to object.
/// @return Shared smart pointer to object.
template<class X>
SmartPtr<X> MakeSharedPtr(const X* p)
{
    return SmartPtr<X>(const_cast<X*>(p), SmartPtrMode::Shared);
}
/// @brief Casts smart pointers using static_cast.
/// @tparam X Source pointer pointee type.
/// @tparam Y Target pointer pointee type.
/// @param x Source pointer.
/// @return Pointer after cast.
template<class Y, class X>
SmartPtr<Y> static_pointer_cast(SmartPtr<X> const& x)
{
    return x.template static_pointer_cast<Y>();
}
/// @brief Casts smart pointers using dynamic_cast.
/// @tparam X Source pointer pointee type.
/// @tparam Y Target pointer pointee type.
/// @param x Source pointer.
/// @return Pointer after cast.
template<class Y, class X>
SmartPtr<Y> dynamic_pointer_cast(SmartPtr<X> const& x)
{
    return x.template dynamic_pointer_cast<Y>();
}
/// @brief Casts smart pointers using const_cast.
/// @tparam X Source pointer pointee type.
/// @tparam Y Target pointer pointee type.
/// @param x Source pointer.
/// @return Pointer after cast.
template<class Y, class X>
SmartPtr<Y> const_pointer_cast(SmartPtr<X> const& x)
{
    return x.template const_pointer_cast<Y>();
}
/// @brief Service class to test and alter SmartPtr's contents without knowing final type. Used for garbage collection and loop references detection, etc.
/// Think of it as of 'pointer to pointer'. We can't use SmartPtr's basetype as it doesn't have any; instead, we use this 'info' class.
class SmartPtrInfo
{
public:
    /// @brief Creates empty SmartPtrInfo object.
    inline SmartPtrInfo()
        : m_object(nullptr)
        , m_owned(nullptr)
        , m_internal_pointer(nullptr)
#ifdef ENABLE_EXTERNAL_REFCOUNT
        , m_counter(nullptr)
#endif
    {}
    /// @brief Creates SmartPtrInfo object with information on specific smart pointer.
    /// @tparam T Pointee type.
    /// @param ptr Smart pointer to create info for.
    template <typename T>
    explicit inline SmartPtrInfo(SmartPtr<T> &ptr)
        : m_object(ptr.IsShared() ? ptr.m_data.SharedGetObject() : nullptr)
        , m_owned(ptr.IsShared() ? ptr.m_data.SharedGetOwned() : nullptr)
        , m_internal_pointer(ptr.IsShared() ? ptr.m_data.SharedGetInternalPointer() : PointToNullptr())
#ifdef ENABLE_EXTERNAL_REFCOUNT
        , m_counter(ptr.m_data.SharedGetCounterPointer())
#endif
    {}
    /// @brief Checks if info object points to non-null pointer.
    /// @return True if info object points to the pointer and this pointer is not null, false otherwise.
    inline operator bool() const
    {
        return *m_internal_pointer != nullptr;
    }
    /// @brief Checks if info object does not point to non-null pointer.
    /// @return False if info object doesn't point to any pointer or if referenced pointer is null, true otherwise.
    inline bool operator ! () const
    {
        return m_object == nullptr;
    }
    /// @brief Allows to call methods of Object pointed by the referenced pointer.
    /// @return Poinee object of referenced pointer.
    inline Object* operator -> () const
    {
        return m_object;
    }
    /// @brief Sets refereced pointer to null.
    inline void reset() const
    {
        //No reason to reset m_object - the pointer checks m_data.m_pointee to understand if it is null, not m_data.m_object.
        *m_internal_pointer = nullptr;
#ifdef ENABLE_EXTERNAL_REFCOUNT
        *m_counter = nullptr;
#endif
    }
    /// @brief Less-compares values of pointers referenced by two info objects.
    /// @param other Information on pointer to compare with.
    /// @return True if value of pointer referenced by current info object preceeds the value of other one, false otherwise..
    inline bool operator < (const SmartPtrInfo &other) const
    {
        return m_internal_pointer < other.m_internal_pointer;
    }
    /// @brief Gets object referenced pointer points to.
    /// @return Raw pointer to object referenced smart pointer points to.
    inline Object* getObject() const
    {
        return m_object;
    }
    /// @brief Gets object owned pointer.
    /// @return Raw pointer to object owned smart pointer.
    inline Object* getOwned() const
    {
        return m_owned;
    }
    /// @brief Make ptr point to the same object referenced smart pointer does.
    /// @param ptr Target smart pointer.
    void mapTo(SmartPtr<Object> &ptr) const;

private:
    /// @brief Pointee object of referenced smart pointer.
    Object *m_object;
    Object *m_owned;
    /// @brief Pointer to referenced smart pointer's (if any) m_pointee field or to static variable containing nullptr.
    void **m_internal_pointer;
#ifdef ENABLE_EXTERNAL_REFCOUNT
    /// @brief Pointer to referenced smart pointer's (if any) m_counter field or to static variable containing nullptr.
    System::Detail::SmartPtrCounter **m_counter;
#endif
    /// @brief Helper function to generate substitution to m_internal_pointer values for info objects not pointing to any object.
    static void** PointToNullptr()
    {
        static void *pointer = nullptr;
        return &pointer;
    }
};
/// @brief Gets referenced object of smart pointer.
/// @tparam T Pointee type.
/// @param x Source smart pointer.
/// @return Raw pointer to object referenced by smart pointer passed.
template<class T>
T* get_pointer(System::SmartPtr<T> const& x)
{
    return x.GetPointer();
}
/// @brief Alias for 'pointer to array' type.
/// @tparam T Array element type.
template <typename T> using ArrayPtr = SmartPtr<Array<T>>;
/// @brief Alias for smart pointer widely used in the library.
/// @tparam T Pointee type.
template <typename T> using SharedPtr = SmartPtr<T>;
/// @brief Helper function to acquire references to objects. Used to guarantee that System::DynamicWeakPtr updates referenced object after assignments.
/// @tparam T Type to create reference to.
/// @param value Value to create reference to.
/// @return Reference to the value passed to this function.
template <typename T>
T& Ref(T &value)
{
    return value;
}

} //namespace System


/// Macro to befriend MakeObject function.
#define FRIEND_FUNCTION_System_MakeObject \
    template<class T0_, class ...Args> friend typename std::enable_if<!System::IsSmartPtr<T0_>::value, System::SmartPtr<T0_> >::type  System::MakeObject(Args&&... args); \
    template<class T0_, class ...Args> friend typename std::enable_if<System::IsSmartPtr<T0_>::value, T0_>::type System::MakeObject(Args&&... args);


namespace std
{
    /// Hashing implementation for SmartPtr class.
    /// @tparam T Pointee type.
    template <class T>
    struct hash<System::SharedPtr<T> >
    {
        /// Hasher argument type.
        using argument_type = System::SharedPtr<T>;
        /// Hasher result type.
        using result_type = std::size_t;
        /// Hasher algorithm which calls into actual GetHashCode() implementation.
        /// @param val Smart pointer to hash.
        /// @return Hash value.
        std::size_t operator()(System::SharedPtr<T> const& val) const
        {
            return val.GetHashCode();
        }
    };
}

#endif //_aspose_system_smart_ptr_h_
