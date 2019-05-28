/// @file system/details/shared_lockable.h
#pragma once

#include <mutex>

namespace System { namespace Details {

/// Gets shared Lockable instance for the specified type.
/// @tparam Lockable The mutex type.
/// @tparam IntendedForType The type used to specialize this function.
template <typename Lockable, typename IntendedForType = void>
Lockable& default_shared_lockable()
{
    static Lockable lockable_;
    return lockable_;
}

/// Wrapper around the reference to shared mutex.
template <typename Lockable = std::recursive_mutex, typename IntendedForType = void>
class SharedLockable final
{
public:
    using underlying_lockable_type = Lockable;
    using intended_for_type = IntendedForType;

    SharedLockable()
        : m_lockable(default_shared_lockable<Lockable, IntendedForType>())
    {}

    explicit SharedLockable(Lockable& external_lockable)
        : m_lockable(external_lockable)
    {}
    
    SharedLockable(const SharedLockable&) = delete;
    SharedLockable& operator=(const SharedLockable&) = delete;

    void lock()
    {
        m_lockable.lock();
    }

    void unlock()
    {
        m_lockable.unlock();
    }

    bool try_lock()
    {
        return m_lockable.try_lock();
    }

private:
    Lockable& m_lockable;
};

/// Wrapper around the reference to shared mutex returned by the @default_shared_lockable.
template <typename Lockable = std::recursive_mutex, typename IntendedForType = void>
class CompactSharedLockable final
{
public:
    using underlying_lockable_type = Lockable;
    using intended_for_type = IntendedForType;

    CompactSharedLockable() = default;

    CompactSharedLockable(const CompactSharedLockable&) = delete;
    CompactSharedLockable& operator=(const CompactSharedLockable&) = delete;

    void lock()
    {
        lockable().lock();
    }

    void unlock()
    {
        lockable().unlock();
    }

    bool try_lock()
    {
        return lockable().try_lock();
    }

private:
    Lockable& lockable() const
    {
        return default_shared_lockable<Lockable, IntendedForType>();
    }
};

}} // namespace System::Details
