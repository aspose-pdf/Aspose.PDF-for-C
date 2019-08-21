/// @file system/threading/timer.h
#ifndef _aspose_system_threading_timer_h_
#define _aspose_system_threading_timer_h_

#include <system/threading/timeout.h>
#include <functional>
#include <system/shared_ptr.h>
#include <system/timespan.h>


namespace System { namespace Threading {

/// Callback function to be called by timer.
typedef std::function<void(System::SharedPtr<System::Object>)> TimerCallback;

/// Timer class that executes job item in separate thread after delay.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Timer final : public System::Object
{
friend class TimerQueue;
public:
    /// Constructor.
    /// @param callback Function to be called by the timer.
    ASPOSECPP_SHARED_API Timer(TimerCallback callback);
    /// Constructor.
    /// @param callback Function to be called by the timer.
    /// @param state Callback function argument.
    /// @param dueTime Timeout before first invocation of callback function, in milliseconds; negative values doesn't schedule timer after creation so it can be re-scheduled later.
    /// @param period Timeout between consequental invocations of callback function, in milliseconds; non-positive values mean that timer should only be executed once.
    ASPOSECPP_SHARED_API Timer(TimerCallback callback, const System::SharedPtr<System::Object>& state, int64_t dueTime, int64_t period);
    /// Constructor.
    /// @param callback Function to be called by the timer.
    /// @param state Callback function argument.
    /// @param dueTime Timeout before first invocation of callback function; negative values doesn't schedule timer after creation so it can be re-scheduled later.
    /// @param period Timeout between consequental invocations of callback function; non-positive values mean that timer should only be executed once.
    ASPOSECPP_SHARED_API Timer(TimerCallback callback, const System::SharedPtr<System::Object>& state,
        System::TimeSpan dueTime, System::TimeSpan period);

    /// Re-schedules or cancels timer.
    /// @param dueTime Timeout before next invocation of callback function, in milliseconds; negative values cancel timer even if it was scheduled.
    /// @param period Timeout between consequental invocations of callback function, in milliseconds; non-positive values mean that timer should only be executed once.
    ASPOSECPP_SHARED_API bool Change(int64_t dueTime, int64_t period);
    /// Re-schedules or cancels timer.
    /// @param dueTime Timeout before next invocation of callback function; negative values cancel timer even if it was scheduled.
    /// @param period Timeout between consequental invocations of callback function; non-positive values mean that timer should only be executed once.
    ASPOSECPP_SHARED_API bool Change(System::TimeSpan dueTime, System::TimeSpan period);

    /// De-schedules timer.
    ASPOSECPP_SHARED_API void Dispose();

private:
    /// Callback function.
    TimerCallback m_callback;
    /// Callback function argument.
    System::SharedPtr<System::Object> m_state;
    /// Timeout before first execution of timer.
    int64_t m_dueTime;
    /// Timeout between consequental executions of timer.
    int64_t m_period;

    /// Checks that field is in valid range.
    /// @param value Value to check.
    /// @param field Field name.
    /// @return Passed value.
    /// @throw ArgumentOutOfRangeException if value is not applicable to milliseconds duration.
    int64_t CheckRange(int64_t value, const String & field);
    /// Checks that callback value is valid.
    /// @param callback Callback function.
    /// @return Same callback function.
    /// @throw ArgumentNullException If callback is null.
    TimerCallback CheckCallback(TimerCallback callback);
};

}} // System::Threading
#endif
