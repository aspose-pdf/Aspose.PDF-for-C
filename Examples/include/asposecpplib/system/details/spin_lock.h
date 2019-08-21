#pragma once

#include <atomic>

namespace System { namespace Details {

class SpinLock final
{
public:
    SpinLock() noexcept = default;
	
	SpinLock(const SpinLock&) = delete;
    SpinLock& operator=(const SpinLock&) = delete;

    void lock() noexcept
    {
        while (!try_lock())
            ; // spin
    }

    bool try_lock() noexcept
    {
        return !m_flag.test_and_set(std::memory_order_acquire);
    }

    void unlock() noexcept
    {
        m_flag.clear(std::memory_order_release);
    }

private:
    std::atomic_flag m_flag = ATOMIC_FLAG_INIT;
};

class OptionalSpinLock final
{
public:
    explicit OptionalSpinLock(bool enabled) noexcept
        : m_enabled(enabled)
    {}

    OptionalSpinLock(const OptionalSpinLock&) = delete;
    OptionalSpinLock& operator=(const OptionalSpinLock&) = delete;

    void lock() noexcept
    {
        while (!try_lock())
            ; // spin
    }

    bool try_lock() noexcept
    {
        return m_enabled
            ? !m_flag.test_and_set(std::memory_order_acquire)
            : true;
    }

    void unlock() noexcept
    {
        if (m_enabled)
            m_flag.clear(std::memory_order_release);
    }

private:
    const bool m_enabled;
    std::atomic_flag m_flag = ATOMIC_FLAG_INIT;
};

}} // namespace System::Details
