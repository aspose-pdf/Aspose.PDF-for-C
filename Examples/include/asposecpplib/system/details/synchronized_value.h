/// @file system/details/synchronized_value.h
#pragma once

#include <mutex>
#include <type_traits>

namespace System { namespace Details {

/// SynchronizedValueLockPtr provides a pointer access to the synchronized value.
/// @param T Value type.
/// @param Lockable The mutex type.
template <typename T, typename Lockable>
class SynchronizedValueLockPtr final
{
public:
    SynchronizedValueLockPtr(T* value_ptr, std::unique_lock<Lockable>&& lockable)
        : m_value_ptr(value_ptr)
        , m_lock(std::move(lockable))
    {}

    SynchronizedValueLockPtr(SynchronizedValueLockPtr&& other)
        : m_value_ptr(other.m_value_ptr)
        , m_lock(std::move(other.m_lock))
    {}

    SynchronizedValueLockPtr& operator=(SynchronizedValueLockPtr&& other)
    {
        std::swap(m_value_ptr, other.m_value_ptr);
        std::swap(m_lock, other.m_lock);
        return *this;
    }

    SynchronizedValueLockPtr(const SynchronizedValueLockPtr&) = delete;
    SynchronizedValueLockPtr& operator=(const SynchronizedValueLockPtr&) = delete;

    /// Returns a pointer to the protected value.
    T* operator->() const
    {
        return m_value_ptr;
    }

    /// Returns a reference to the protected value.
    T& operator*() const
    {
        return *m_value_ptr;
    }
    
private:
    T* m_value_ptr;
    std::unique_lock<Lockable> m_lock;
};

/// @SynchronizedValue default traits.
template <typename T>
class DefaultSynchronizedValueTraits
{
public:
    using value_type = std::remove_const_t<T>;
    using value_data_type = value_type;

    static const value_data_type& get_data_reference(const value_type& value)
    {
        return value;
    }

    static value_data_type& get_data_reference(value_type& value)
    {
        return value;
    }
};

/// SynchronizedValue associate the value and the mutex (lockable) used to protect it.
/// @param T Value type.
/// @param Lockable The mutex type.
/// @param Traits SynchronizedValue class traits.
template <typename T, typename Lockable = std::recursive_mutex,
    typename Traits = DefaultSynchronizedValueTraits<T>>
class SynchronizedValue final
{
public:
    using value_type = std::remove_const_t<T>;
    using lockable_type = Lockable;
    using value_data_type = typename Traits::value_data_type;
    using synchronized_value_lock_ptr = SynchronizedValueLockPtr<value_data_type, Lockable>;
    using const_synchronized_value_lock_ptr = SynchronizedValueLockPtr<const value_data_type, Lockable>;

    /// Default consturctor.
    SynchronizedValue()
        : m_value()
    {}

    /// Copy constructor.
    SynchronizedValue(const SynchronizedValue& other)
        : m_value(*other.locked_ptr())
    {}

    struct DefaultValueTag {};
    static constexpr DefaultValueTag DefaultValue{};

    template <typename... LockableArgs>
    SynchronizedValue(DefaultValueTag, LockableArgs&&... args)
        : m_value()
        , m_lockable(std::forward<LockableArgs>(args)...)
    {}

    template <typename Arg, typename... LockableArgs>
    SynchronizedValue(const Arg& value, LockableArgs&&... args)
        : m_value(value)
        , m_lockable(std::forward<LockableArgs>(args)...)
    {}

    template <typename Arg, typename... LockableArgs>
    SynchronizedValue(Arg&& value, LockableArgs&&... args)
        : m_value(std::move(value))
        , m_lockable(std::forward<LockableArgs>(args)...)
    {}

    SynchronizedValue& operator=(const SynchronizedValue&) = delete;
    
    /// Returns a copy of the protected value.
    value_type get() const
    {
        const std::lock_guard<Lockable> lock(m_lockable);
        return m_value;
    }

    /// Copies the value on a scope protected by the mutex.
    template <typename Arg>
    void store(const Arg& value)
    {
        const std::lock_guard<Lockable> lock(m_lockable);
        m_value = value;
    }

    /// Moves the value on a scope protected by the mutex.
    template <typename Arg>
    void store(Arg&& value)
    {
        const std::lock_guard<Lockable> lock(m_lockable);
        m_value = std::move(value);
    }

    SynchronizedValueLockPtr<T, Lockable> locked_ptr()
    {
        std::unique_lock<Lockable> lock(m_lockable);
        return SynchronizedValueLockPtr<T, Lockable>{ &m_value, std::move(lock) };
    }

    SynchronizedValueLockPtr<const T, Lockable> locked_ptr() const
    {
        std::unique_lock<Lockable> lock(m_lockable);
        return SynchronizedValueLockPtr<const T, Lockable>{ &m_value, std::move(lock) };
    }

    /// Gets a locked pointer to the value data.
    synchronized_value_lock_ptr synchronize()
    {
        std::unique_lock<Lockable> lock(m_lockable);
        return synchronized_value_lock_ptr{ &Traits::get_data_reference(m_value), std::move(lock) };
    }

    /// Gets a locked pointer to the value data.
    const_synchronized_value_lock_ptr synchronize() const
    {
        std::unique_lock<Lockable> lock(m_lockable);
        return const_synchronized_value_lock_ptr{ &Traits::get_data_reference(m_value), std::move(lock) };
    }

    template <typename Arg>
    void operator=(const Arg& value)
    {
        store(value);
    }

    template <typename Arg>
    void operator=(Arg&& value)
    {
        store(std::move(value));
    }

    /// Conversion to value type.
    operator value_type() const
    {
        const std::lock_guard<Lockable> lock(m_lockable);
        return m_value;
    }

    /// Gets a locked pointer to the value data.
    synchronized_value_lock_ptr operator->()
    {
        return synchronize();
    }

    /// Gets a locked pointer to the value data.
    const_synchronized_value_lock_ptr operator->() const
    {
        return synchronize();
    }
    
private:
    T m_value;
    mutable Lockable m_lockable;
};

/// Traits for @SynchronizedPointer.
template <typename T>
class SynchronizedPointerTraits
{
public:
    using value_type = std::remove_const_t<T>;
    using dereferenced_value_type = decltype(*std::declval<value_type>());
    using value_data_type = std::remove_reference_t<dereferenced_value_type>;

    static const value_data_type& get_data_reference(const value_type& value)
    {
        return *value;
    }

    static value_data_type& get_data_reference(value_type& value)
    {
        return *value;
    }

private:
    using must_be_reference_check = std::enable_if_t<std::is_reference<dereferenced_value_type>::value>;
};

/// SynchronizedPointer associate the pointer (raw, std::shared_ptr, etc) and the mutex (lockable) used to protect it.
template <typename T, typename Lockable = std::recursive_mutex>
using SynchronizedPointer = SynchronizedValue<T, Lockable, SynchronizedPointerTraits<T>>;

}} // namespace System::Details
