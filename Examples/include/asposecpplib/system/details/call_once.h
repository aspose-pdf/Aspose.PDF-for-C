/// @file system/details/call_once.h
#pragma once

#include <atomic>
#include <mutex>

namespace System { namespace Details {

/// Specifies how a CallOnce instance synchronizes access among multiple threads.
enum class CallOnceThreadSafetyMode
{
    /// The CallOnce instance is thread safe.
    ThreadSafe,

    /// The CallOnce instance is not thread safe.
    NotThreadSafe,

    /// Thread-safety mode is specified at runtime.
    Customizable
};

/// Executes the callable object exactly once.
template <CallOnceThreadSafetyMode thread_safety_mode>
class CallOnce;

/// Thread safe CallOnce specialization.
template <>
class CallOnce<CallOnceThreadSafetyMode::ThreadSafe>
{
public:
    constexpr CallOnce() noexcept
        : m_called(false)
    {}

    CallOnce(const CallOnce&) = delete;
    CallOnce& operator=(const CallOnce&) = delete;

    /// Executes the Callable object exactly once.
    template <typename Callable>
    bool operator()(Callable&& callable)
    {
        bool result = false;
        if (!called())
        {
            std::call_once(m_once_flag, [&]()
            {
                result = true;
                callable();
                m_called.store(true, std::memory_order_release);
            });
        }
        return result;
    }

    /// Get the flag indicating that CallOnce was already called.
    bool called(std::memory_order order = std::memory_order_acquire) const
    {
        return m_called.load(order);
    }

private:
    std::once_flag m_once_flag;
    std::atomic_bool m_called;
};

/// Not thread safe CallOnce specialization.
template <>
class CallOnce<CallOnceThreadSafetyMode::NotThreadSafe>
{
public:
    constexpr CallOnce() noexcept
        : m_called(false)
    {}

    CallOnce(const CallOnce&) = delete;
    CallOnce& operator=(const CallOnce&) = delete;

    /// Executes the Callable object exactly once.
    template <typename Callable>
    bool operator()(Callable&& callable)
    {
        if (!called())
        {
            callable();
            m_called.store(true, std::memory_order_release);
            return true;
        }
        return false;
    }

    /// Get the flag indicating that CallOnce was already called.
    bool called(std::memory_order order = std::memory_order_acquire) const
    {
        return m_called.load(order);
    }

private:
    std::atomic_bool m_called;
};

/// Customizable CallOnce specialization.
template <>
class CallOnce<CallOnceThreadSafetyMode::Customizable>
{
public:
    constexpr CallOnce(bool thread_safe = true) noexcept
        : m_called(false)
        , m_thread_safe(thread_safe)
    {}

    CallOnce(const CallOnce&) = delete;
    CallOnce& operator=(const CallOnce&) = delete;

    /// Executes the Callable object exactly once.
    template <typename Callable>
    bool operator()(Callable&& callable)
    {
        bool result = false;
        if (!called())
        {
            if (m_thread_safe)
            {
                std::call_once(m_once_flag, [&]()
                {
                    result = true;
                    callable();
                    m_called.store(true, std::memory_order_release);
                });
            }
            else
            {
                result = true;
                callable();
                m_called.store(true, std::memory_order_release);
            }
        }
        return result;
    }

    /// Get the flag indicating that CallOnce was already called.
    bool called(std::memory_order order = std::memory_order_acquire) const
    {
        return m_called.load(order);
    }

    bool is_thread_safe() const
    {
        return m_thread_safe;
    }

private:
    std::once_flag m_once_flag;
    std::atomic_bool m_called;
    const bool m_thread_safe;
};

using ThreadSafeCallOnce = CallOnce<CallOnceThreadSafetyMode::ThreadSafe>;
using NotThreadSafeCallOnce = CallOnce<CallOnceThreadSafetyMode::NotThreadSafe>;
using CustomizableCallOnce = CallOnce<CallOnceThreadSafetyMode::Customizable>;

}} // namespace System::Details
