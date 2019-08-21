/// @file system/dynamic_weak_ptr.h
#ifndef _aspose_system_dynamic_weak_ptr_h_
#define _aspose_system_dynamic_weak_ptr_h_

#include "system/smart_ptr.h"
#include "detail.h"

namespace System
{

namespace Details
{
    /// Service class used by DynamicWeakPtr to make stored objects treat their template arguments as weak pointers.
    /// @tparam leafs Indexes of template arguments to make weak pointers.
    template <unsigned int ...leafs> struct WeakLeafMaker;

    /// Specialization to mark one more argument as weak.
    /// @tparam leaf Template argument index to weaken.
    /// @tparam leafs Remaining template arguments to weaken.
    template <unsigned int leaf, unsigned int ...leafs>
    struct WeakLeafMaker<leaf, leafs...>
    {
        /// Marks that DynamicWeakPtr has template arguments to force weak.
        static constexpr bool HasLeafs = true;
        /// Makes object treat template argument with @p leaf index as weak pointer, then unwinds other leafs.
        static void Apply(System::Object *ptr);
    };

    /// Specialization to break the recursion.
    template <>
    struct WeakLeafMaker<>
    {
        /// Marks that DynamicWeakPtr has no template arguments to force weak.
        static constexpr bool HasLeafs = false;
        /// Does nothing.
        static void Apply(System::Object*)
        {}
    };
} //Details
/// @brief Smart pointer class which tracks pointer modes of template arguments of stored object and updates them after each assignment.
/// This type is a pointer to manage other object's deletion.
/// It should be allocated on stack and passed to functions either by value or by const reference.
/// @tparam Pointee type.
/// @tparam trunkMode Mode of smart pointer itself, shared or weak.
/// @tparam weakLeafs Indexes of template arguments of stored type which should be set to weak pointer mode.
template <typename T, SmartPtrMode trunkMode, unsigned int ...weakLeafs>
class DynamicWeakPtr : public SmartPtr<T>
{
public:
    /// @brief SmartPtr baseclass alias.
    typedef SmartPtr<T> SmartPtr_;
    /// @brief Self type alias.
    typedef DynamicWeakPtr<T, trunkMode, weakLeafs...> DynamicWeakPtr_;
    /// @brief Pointee type alias.
    using typename SmartPtr_::Pointee_;
    /// @brief Creates null smart pointer.
    DynamicWeakPtr(std::nullptr_t = nullptr)
        : SmartPtr_(nullptr, trunkMode)
    {}
    /// @brief Creates smart pointer pointing to given object.
    /// @param object Pointee.
    DynamicWeakPtr(Pointee_ *object)
        : SmartPtr_(object, trunkMode)
    {
        Apply();
    }
    /// @brief Copy-constructs smart pointer.
    /// @param ptr Smart pointer to copy pointee information from.
    DynamicWeakPtr(const SmartPtr_ &ptr)
        : SmartPtr_(ptr, trunkMode)
    {
        Apply();
    }
    /// @brief Copy-constructs smart pointer.
    /// @tparam Q Source pointer pointee type.
    /// @param x Smart pointer to copy pointee information from.
    template<class Q>
    DynamicWeakPtr(const SmartPtr<Q>& x)
        : SmartPtr_(x, trunkMode)
    {
        Apply();
    }
    /// @brief Copy-constructs smart pointer.
    /// @param ptr Smart pointer to copy pointee information from.
    DynamicWeakPtr(const DynamicWeakPtr_ &ptr)
        : SmartPtr_(ptr, trunkMode)
    {
        Apply();
    }
    /// @brief Move-constructs smart pointer.
    /// @param x Smart pointer to move pointee information from. Becomes unusable after call.
    DynamicWeakPtr(SmartPtr_&& x)
        : SmartPtr_(x, trunkMode)
    {
        Apply();
    }
    /// @brief Checks if smart pointer is null.
    /// @return True if smart pointer is null and false otherwise.
    bool operator == (std::nullptr_t) const
    {
        return SmartPtr_::operator == (nullptr);
    }
    /// @brief Move-assigns smart pointer.
    /// @param x Pointer to move-assign value from.
    /// @return Self reference.
    DynamicWeakPtr_& operator = (SmartPtr_&& x)
    {
        SmartPtr_::operator = (x);
        Apply();
        return *this;
    }
    /// @brief Copy-assigns smart pointer.
    /// @param x Pointer to copy-assign value from.
    /// @return Self reference.
    DynamicWeakPtr_& operator = (const SmartPtr_ &x)
    {
        SmartPtr_::operator = (x);
        Apply();
        return *this;
    }
    /// @brief Copy-assigns smart pointer.
    /// @tparam Q Source pointee type.
    /// @param x Pointer to copy-assign value from.
    /// @return Self reference.
    template <typename Q>
    DynamicWeakPtr_& operator = (const SmartPtr<Q> &x)
    {
        SmartPtr_::operator = (x);
        Apply();
        return *this;
    }
    /// @brief Assigns smart pointer.
    /// @param p Pointer value.
    /// @return Self reference.
    DynamicWeakPtr_& operator = (typename SmartPtr_::Pointee_ *p)
    {
        SmartPtr_::operator = (p);
        Apply();
        return *this;
    }
    /// @brief Sets smart pointer to null.
    /// @return Self reference.
    DynamicWeakPtr_& operator = (std::nullptr_t)
    {
        return SmartPtr_::operator = (nullptr);
    }
    /// @brief Reference class which ensures that DynamicWeakPtr::Apply is called. Used if DynamicWeakPtr is passed as SmartPtr reference parameter to function which may assign to it.
    class Reference
    {
    public:
        /// @brief Creates smart pointer reference.
        /// @param ptr Raw reference to smart pointer.
        Reference(DynamicWeakPtr_ &ptr)
            : m_ptr(&ptr)
        {}
        /// @brief Move-constructs smart pointer reference.
        /// @param reference Reference to move.
        Reference(Reference &&reference) noexcept
            : m_ptr(reference.m_ptr)
        {
            reference.m_ptr = nullptr;
        }
        /// @brief Destroys reference. Ensures Apply() call on referenced smart pointer.
        ~Reference()
        {
            if (m_ptr)
                m_ptr->Apply();
        }
        /// @brief Conversion operator. Allows using Reference in contexts where DynamicWeakPtr_ is needed.
        /// @return Raw reference to referenced smart pointer.
        operator DynamicWeakPtr_& () const
        {
            return *m_ptr;
        }

    private:
        /// @brief Raw pointer to smart pointer of interest.
        DynamicWeakPtr_ *m_ptr;
    };

private:
    /// @brief Calls SetTemplateWeakPtr() method on referenced object (if any).
    void Apply()
    {
        if (!System::Details::WeakLeafMaker<weakLeafs...>::HasLeafs)
            return;
        if (Object *const object = SmartPtr_::GetObjectOrNull())
            System::Details::WeakLeafMaker<weakLeafs...>::Apply(object);
    }
};
/// @brief Creates reference to DynamicWeakPtr object. Used by porter when passing function arguments by reference.
/// @tparam T Pointee type.
/// @tparam trunkMode Mode of smart pointer itself.
/// @tparam weakLeafs Indexes of template arguments for which SetTemplateWeakPtr method must be called.
/// @param ptr Smart pointer to create reference to.
/// @return Smart pointer reference.
template <typename T, SmartPtrMode trunkMode, unsigned int ...weakLeafs>
typename DynamicWeakPtr<T, trunkMode, weakLeafs...>::Reference Ref(DynamicWeakPtr<T, trunkMode, weakLeafs...> &ptr)
{
    return typename DynamicWeakPtr<T, trunkMode, weakLeafs...>::Reference(ptr);
}
/// @brief Wrapper to make sure Ref(std::ref(DynamicWeakPtr)) works.
/// @tparam T Referenced type.
/// @param wrapper std wrapper to unwrap.
/// @return Reference type defined in System:: rather than in std.
template <typename T>
decltype(Ref(std::declval<T&>())) Ref(const std::reference_wrapper<T> &wrapper)
{
    return Ref(wrapper.get());
}

} // namespace System

#endif // _aspose_system_dynamic_weak_ptr_h_
