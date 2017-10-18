#ifndef _shared_ptr_h_
#define _shared_ptr_h_

#include <system/type_info.h>
#include <system/refcount.h>
#include <singletons/refcount_singletons.h>

#include <algorithm>
#include <utility>
#include <cassert>
#include <cstddef>

#include <detail.h>

#if defined(_DEBUG) && (!defined(DISABLE_EXTERNAL_REFCOUNT) || (DISABLE_EXTERNAL_REFCOUNT == 0))
#define ENABLE_EXTERNAL_REFCOUNT
#endif

namespace System {

class Object;
class WeakPtrCounter;
class WeakPtrBase;
template <class T> class WeakPtr;

class ObjectHolder
{
protected:
    Object* m_obj;

#ifdef ENABLE_EXTERNAL_REFCOUNT
public:
    // Separating RefCount from Object allows us to avoid object double deletion if constructors create some shared pointers first and then throw an exception.
    class RefCount
    {
    public:
        inline RefCount() : m_ownedByPointers(NextOwnedByPointers()), m_isObjectAlive(true)
        {
            // A little messy logic here.
            // OwnedByPointers flag shows whether the object should be deleted when the reference count reaches zero.
            // When the object is created by MakeObject(), it is false at the beginning and then turns true when all constructors succeed (no exception thrown).
            // Both global (NextOwnedByPointers) and object-local (m_ownedByPointers) flags are explicitly modified by MakeObject() in this case.
            // But, if the object is created by operator new, no such control is possible, so it is considered owned by pointers from the beginning.
            // That's why we can only set NextOwnedByPointers value to false for a short time (until the next object gets created).
            // The better approach is to forbid creating objects with operator new() rather than with MakeObject() call, but this requires revising the whole asposecpp library and will
            // inevitably be broken again anyway.
            // So, this messy magic seems the most reliable way to allow for what we want.
            NextOwnedByPointers() = true;
        }

        inline int Add()
        {
            assert(0 <= m_Refs);
            return ++m_Refs;
        }
        inline int Release()
        {
            assert(0 < m_Refs);
            return --m_Refs;
        }
        inline int Release(int number)
        {
            return m_Refs -= number;
        }
        inline int Count() const
        {
            assert(0 <= m_Refs);
            return m_Refs;
        }

        inline bool IsOwnedByPointers() const
        {
            return m_ownedByPointers;
        }
        inline void SetOwnedByPointers(bool owned)
        {
            m_ownedByPointers = owned;
        }

        static bool& NextOwnedByPointers();

        bool IsObjectAlive() const
        {
            return m_isObjectAlive;
        }

        void SetObjectIsDead()
        {
            m_isObjectAlive = false;
        }

    private:
        Detail::RefCount m_Refs;
        bool volatile m_ownedByPointers;
        bool m_isObjectAlive;
    };

protected:
    RefCount* m_refCount;
private:
    static RefCount* GetRefCount(Object *o);
#endif

protected:
    inline ObjectHolder()
        : m_obj(nullptr)
#ifdef ENABLE_EXTERNAL_REFCOUNT
        , m_refCount(nullptr)
#endif
    {}
    inline ObjectHolder(Object* p)
        : m_obj(p)
#ifdef ENABLE_EXTERNAL_REFCOUNT
        , m_refCount(GetRefCount(p))
#endif
    {}

    int AddSharedRef() const;
    int SharedCount() const;
    int ReleaseSharedRef() const;

    friend class Object;
    virtual void reset_internal() = 0;  // it this case it is ok to have pure virtual function without virtual dtor

    static void NullReferenceError();

public:
    virtual ~ObjectHolder() = default;
    Object* objectPtr() const { return m_obj; }

    virtual void __FreePointers() = 0;
};

template<class PointeeT>
class SharedPtr : public ObjectHolder
{
public:
    typedef PointeeT Pointee_;
    typedef SharedPtr<Pointee_> SharedPtr_;
    typedef WeakPtr<Pointee_> WeakPtr_;

    inline Pointee_* get() const
    {
        return m_pointee;
    }

    static const System::TypeInfo& Type()
    {
        return Pointee_::Type();
    }

    inline Pointee_* operator -> () const
    {
        #ifdef ASPOSE_NULLREFCHECK
            if (m_pointee == nullptr)
                NullReferenceError();
        #endif
        return m_pointee;
    }

    inline Pointee_& operator *() const
    {
#ifdef ASPOSE_NULLREFCHECK
        if (m_pointee == nullptr)
            NullReferenceError();
#endif
        return *m_pointee;
    }

    explicit operator bool() const
    {
        return m_pointee != nullptr;
    }

    bool operator !() const throw()
    {
        return (nullptr == m_pointee);
    }

    template<class T>
    bool operator < (T* p) const
    {
        return (m_pointee < p);
    }

    template<class T>
    bool operator < (SharedPtr<T> const& x) const
    {
        return (m_pointee < x.get());
    }

    SharedPtr() : m_pointee(0)
    {
    }

    SharedPtr(std::nullptr_t) : m_pointee(0)
    {
    }

    SharedPtr(Pointee_* p) : ObjectHolder(p), m_pointee(p)
    {
        if (p)
            ObjectHolder::AddSharedRef();
    }

    SharedPtr(Pointee_* p, bool addRef) : ObjectHolder(p), m_pointee(p)
    {
        if (p && addRef)
            ObjectHolder::AddSharedRef();
    }

    SharedPtr(SharedPtr_&& x) : ObjectHolder(std::move(x)), m_pointee(x.m_pointee)
    {
        x.m_obj = 0;
        x.m_pointee = 0;
    }

    inline SharedPtr& operator=(SharedPtr_&& x)
    {
        swap(x);

        return *this;
    }

    SharedPtr(SharedPtr_ const& x) : ObjectHolder(x), m_pointee(x.get())
    {
        if (m_pointee)
            ObjectHolder::AddSharedRef();
    }

    template<class T>
    SharedPtr(SharedPtr<T> const& x, typename detail::sp_enable_if_convertible<T, Pointee_>::type = detail::sp_empty()) : ObjectHolder(x), m_pointee(x.get())
    {
        if (m_pointee)
            ObjectHolder::AddSharedRef();
    }

    inline SharedPtr_& operator = (Pointee_* p)
    {
        if (p != m_pointee)
        {
            SharedPtr_ tmp(p);
            swap(tmp);
        }
        return *this;
    }

    SharedPtr_& operator = (std::nullptr_t)
    {
        reset();
        return *this;
    }

    Pointee_* detach()
    {
        Pointee_* result = m_pointee;
        m_pointee = 0;
        m_obj = 0;
        return result;
    }

    inline void reset()
    {
        SharedPtr_ tmp;
        swap(tmp);
    }

    inline void reset(Pointee_* p)
    {
        SharedPtr_ tmp(p);
        swap(tmp);
    }

    inline void reset(Pointee_* p, bool addRef)
    {
        SharedPtr_ tmp(p, addRef);
        swap(tmp);
    }

    inline void swap(SharedPtr_& x)
    {
        std::swap(m_obj, x.m_obj);
#ifdef ENABLE_EXTERNAL_REFCOUNT
        std::swap(m_refCount, x.m_refCount);
#endif
        std::swap(m_pointee, x.m_pointee);
    }

    int use_count() const
    {
        if (!m_pointee)
            return 0;
        return ObjectHolder::SharedCount();
    }

    inline SharedPtr_& operator = (SharedPtr_ const& x)
    {
        if (m_pointee != x.get())
        {
            SharedPtr_ tmp(x);
            swap(tmp);
        }
        return *this;
    }

    template<class T>
    SharedPtr_& operator = (SharedPtr<T> const& x)
    {
        if (m_pointee != x.get())
        {
            SharedPtr_ tmp(x);
            swap(tmp);
        }
        return *this;
    }

    template<class Y>
    SharedPtr<Y> static_pointer_cast() const
    {
        return SharedPtr<Y>(static_cast<Y*>(m_pointee), true);
    }

    template<class Y>
    SharedPtr<Y> dynamic_pointer_cast() const
    {
        return SharedPtr<Y>(dynamic_cast<Y*>(m_pointee), true);
    }

    template<class Y>
    SharedPtr<Y> const_pointer_cast() const
    {
        return SharedPtr<Y>(const_cast<Y*>(m_pointee), true);
    }

    bool Is(const System::TypeInfo &target) const
    {
        return m_pointee ? m_pointee->Is(target) : false;
    }

    ~SharedPtr()
    {
        if (m_pointee)
            ObjectHolder::ReleaseSharedRef();
    }

    virtual void __FreePointers() override
    {
        *this = nullptr;
    }

private:
    Pointee_* m_pointee;

    virtual void reset_internal() override
    {
        m_pointee = 0;
    }
};

template<class X, class Y>
bool operator == (SharedPtr<X> x, SharedPtr<Y> y)
{
    return (x.get() == y.get());
}

template<class X, class Y>
bool operator != (SharedPtr<X> x, SharedPtr<Y> y)
{
    return (x.get() != y.get());
}

template<class X>
bool operator ==(SharedPtr<X> const& x, std::nullptr_t)
{
    return (nullptr == x.get());
}

template<class X>
bool operator ==(std::nullptr_t, SharedPtr<X> const& x)
{
    return (nullptr == x.get());
}

template<class X>
bool operator !=(SharedPtr<X> const& x, std::nullptr_t)
{
    return (nullptr != x.get());
}

template<class X>
bool operator !=(std::nullptr_t, SharedPtr<X> const& x)
{
    return (nullptr != x.get());
}

template<class T>
typename std::enable_if<!std::is_scalar<T>::value && !std::is_pointer<T>::value && !std::is_array<T>::value, bool>::type operator ==(T const& x, std::nullptr_t)
{
    return x.IsNull();
}

template<class T>
typename std::enable_if<!std::is_scalar<T>::value && !std::is_pointer<T>::value && !std::is_array<T>::value, bool>::type operator ==(std::nullptr_t, T const& x)
{
    return x.IsNull();
}

template<class X>
SharedPtr<X> MakeSharedPtr(X* p)
{
    return std::move(SharedPtr<X>(p, true));
}

template<class X>
SharedPtr<X> MakeSharedPtr(const X* p)
{
    return std::move(SharedPtr<X>(const_cast<X*>(p), true));
}

template<class Y, class X>
SharedPtr<Y> static_pointer_cast(SharedPtr<X> const& x)
{
    return x.template static_pointer_cast<Y>();
}

template<class Y, class X>
SharedPtr<Y> dynamic_pointer_cast(SharedPtr<X> const& x)
{
    return x.template dynamic_pointer_cast<Y>();
}

template<class Y, class X>
SharedPtr<Y> const_pointer_cast(SharedPtr<X> const& x)
{
    return x.template const_pointer_cast<Y>();
}


template <class T>
struct IsSharedPtr : System::detail::is_a<T, System::SharedPtr> {};

//.......................................................................................................

template<class T, class ...Args>
typename std::enable_if<!IsSharedPtr<T>::value, SharedPtr<T> >::type  MakeObject(Args&&... args)
{
#ifdef ENABLE_EXTERNAL_REFCOUNT
    ObjectHolder::RefCount::NextOwnedByPointers() = false; // Not until constructors succeed
    class OwnNextObject
    {
    public:
        ~OwnNextObject()
        {
            ObjectHolder::RefCount::NextOwnedByPointers() = true; //So that if we have a bad_alloc and next object gets created via new pointers own it
        }
    } ownNextObject;
#endif
    T *const object = ::new T(std::forward<Args>(args)...);
#ifdef ENABLE_EXTERNAL_REFCOUNT
    object->Object::GetRefCount()->SetOwnedByPointers(true); // No exceptions thrown - should now manage memory by shared pointers
#endif
    return std::move(SharedPtr<T>(object, true));
}

template<class T, class ...Args>
typename std::enable_if<IsSharedPtr<T>::value, T >::type MakeObject(Args&&... args)
{
    return std::move(MakeObject<typename T::Pointee_>(std::forward<Args>(args)...));
}

#define FRIEND_FUNCTION_System_MakeObject \
    template<class T0_, class ...Args> friend typename std::enable_if<!System::IsSharedPtr<T0_>::value, System::SharedPtr<T0_> >::type  System::MakeObject(Args&&... args); \
    template<class T0_, class ...Args> friend typename std::enable_if<System::IsSharedPtr<T0_>::value, T0_>::type System::MakeObject(Args&&... args);

//.......................................................................................................

template<class T>
T* get_pointer(System::SharedPtr<T> const& x)
{
    return x.get();
}

} // namespace System

#endif
