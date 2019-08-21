/// @file system/weak_ptr.h
#ifndef _aspose_system_weak_ptr_h_
#define _aspose_system_weak_ptr_h_

#include "system/smart_ptr.h"
#include "detail.h"

namespace System
{

/// @brief Subclass of System::SmartPtr which sets itself to weak mode at construction.
/// Please note that this class doesn't guarantee that its instance will always remain in weak mode as set_Mode() is still accessible.
/// This type is a pointer to manage other object's deletion.
/// It should be allocated on stack and passed to functions either by value or by const reference.
/// @tparam T Pointee type.
template <class T>
class WeakPtr : public SmartPtr<T>
{
public:
    /// @brief Alias for corresponding SmartPtr class.
    typedef SmartPtr<T> SmartPtr_;
    /// @brief Alias for self type.
    typedef WeakPtr<T> WeakPtr_;
    /// @brief Alias for pointee type.
    using typename SmartPtr_::Pointee_;

private:
    using SmartPtr_::m_data;

public:
    /// @brief Creates null pointer.
    WeakPtr(std::nullptr_t = nullptr)
        : SmartPtr_(nullptr, SmartPtrMode::Weak)
    {}
    /// @brief Creates weak pointer to given object.
    /// @param object Object to create weak pointer to.
    WeakPtr(Pointee_ *object)
        : SmartPtr_(object, SmartPtrMode::Weak)
    {}
    /// @brief Creates weak pointer referencing same pointer ptr points to.
    /// @param ptr Pointer to copy pointee value from.
    WeakPtr(const SmartPtr_ &ptr)
        : SmartPtr_(ptr, SmartPtrMode::Weak)
    {}
    /// @brief Creates weak pointer referencing same pointer x points to.
    /// @tparam Q Pointee type of source pointer.
    /// @param x Pointer to copy pointee value from.
    template<class Q, typename = typename std::enable_if<std::is_convertible<Q*, Pointee_*>::value>::type>
    WeakPtr(const SmartPtr<Q>& x)
        : SmartPtr_(x, SmartPtrMode::Weak)
    {}
    /// @brief Copy-constructs weak pointer.
    /// @param ptr Pointer to copy pointee value from.
    WeakPtr(const WeakPtr_ &ptr)
        : SmartPtr_(ptr, SmartPtrMode::Weak)
    {}
    /// @brief Copy-constructs weak pointer.
    /// @tparam Q Source pointee type.
    /// @param x Pointer to copy pointee value from.
    template<class Q, typename = typename std::enable_if<std::is_convertible<Q*, Pointee_*>::value>::type>
    WeakPtr(const WeakPtr<Q>& x)
        : SmartPtr_(x, SmartPtrMode::Weak)
    {}
    /// @brief Move-constructs weak pointer
    /// @param x Pointer to move pointee value from.
    WeakPtr(SmartPtr_&& x)
        : SmartPtr_(x, SmartPtrMode::Weak)
    {}
    /// @brief Assigns value to weak pointer. Calls into specific assignment operator of SmartPtr_.
    /// @tparam Q Argument type supported by System::SmartPtr assignment operators.
    /// @param value Pointer to copy pointee value from.
    template <typename Q>
    WeakPtr& operator = (Q &&value)
    {
        SmartPtr_::operator = (value);
        return *this;
    }
    /// @brief Checks if weak pointer is null.
    /// @return True if weak pointer is null and false otherwise.
    bool operator == (std::nullptr_t) const
    {
        return SmartPtr_::operator == (nullptr);
    }
    /// @brief Checks if referenced object was already deleted.
    /// @return True if referenced object was already deleted, false otherwise.
    bool expired() const
    {
        assert(m_data.GetMode() == SmartPtrMode::Weak);
        return m_data.IsNull();
    }
    /// @brief Gets referenced object. Asserts that pointer is in weak mode.
    /// @return Raw pointer to referenced object (if assigned and not expired) or nullptr.
    Object* get_weak() const
    {
        assert(m_data.GetMode() == SmartPtrMode::Weak);
        return m_data.IsNull() ? nullptr : m_data.WeakGetCounter()->GetObject();
    }
};
/// @brief Traits class to check if specific class is a specialization of System::WeakPtr. Doesn't check if instance is actually in weak mode.
/// @tparam T Tested type.
template <class T>
struct IsWeakPtr : System::detail::is_a<T, System::WeakPtr> {};

} // namespace System

namespace std
{
    /// Hashing implementation for WeakPtr class.
    /// @tparam T Pointee type.
    template <class T>
    struct hash<System::WeakPtr<T> >
    {
        /// Hasher argument type.
        using argument_type = System::WeakPtr<T>;
        /// Hasher result type.
        using result_type = std::size_t;
        /// Hasher algorithm which calls into actual GetHashCode() implementation.
        /// @param val Smart pointer to hash.
        /// @return Hash value.
        std::size_t operator()(System::WeakPtr<T> const& val) const
        {
            return val.GetHashCode();
        }
    };
}

#endif // _aspose_system_weak_ptr_h_
