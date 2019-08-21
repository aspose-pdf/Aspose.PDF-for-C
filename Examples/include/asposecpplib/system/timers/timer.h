/// @file system/timers/timer.h
/// Contains definition of class System::Timers::Timer class.
#ifndef _aspose_system_timers_timer_h_
#define _aspose_system_timers_timer_h_

#include <system/eventhandler.h>
#include <system/component_model/component.h>
#include <system/threading/timer.h>

#include "elapsed_event_args.h"

namespace System { namespace Timers {

/// Delegate type to handle timer event.
using ElapsedEventHandler = EventHandler<SharedPtr<ElapsedEventArgs>>;

/// Timer that calls delegate in a loop.
class ASPOSECPP_SHARED_CLASS Timer final : public ComponentModel::Component
{
    /// This type.
    typedef Timers::Timer ThisType;
    /// Base type info.
    typedef BaseTypesInfo<ComponentModel::Component> ThisBaseTypesInfo;
    /// RTTI information.
    RTTI_INFO(ThisType, ThisBaseTypesInfo)

public:
    /// Constructs stopped timer with unspecified interval.
    ASPOSECPP_SHARED_API Timer();
    /// Constructs stopped timer with specified interval.
    /// @param interval Interval between consequental timer invocations or between timer start and first invocation, in miliseconds.
    ASPOSECPP_SHARED_API Timer(double interval);

    /// Gets timer interval.
    /// @return Interval between consequental timer invocations or between timer start and first invocation, in miliseconds.
    ASPOSECPP_SHARED_API double get_Interval() const;
    /// Sets timer interval.
    /// @param ms Interval between consequental timer invocations or between timer start and first invocation, in miliseconds.
    ASPOSECPP_SHARED_API void set_Interval(double ms);

    /// Checks if timer is in auto-reset mode.
    /// @return true if timer invokes in a loop, false if it stops after first invocation.
    ASPOSECPP_SHARED_API bool get_AutoReset() const;
    /// Sets timer into auto-reset mode or out of it.
    /// @param autoreset true to make timer invoke in a loop, false to stop it after first invocation.
    ASPOSECPP_SHARED_API void set_AutoReset(bool autoreset);

    /// Checks if timer is active.
    /// @return true if timer is executing, false if it is stopped.
    ASPOSECPP_SHARED_API bool get_Enabled() const;
    /// Starts or stops timer. Starting timer doesn't restart time counting if timer is already executing.
    /// @param value true to start timer, false to stop.
    ASPOSECPP_SHARED_API void set_Enabled(bool value);

    /// Checks if timer is stopped.
    /// @return true if timer is stopped, false if it is executing.
    ASPOSECPP_SHARED_API bool get_IsStopped() const;

    /// Starts timer. Doesn't restart time counting if timer is already executing.
    ASPOSECPP_SHARED_API void Start();
    /// Stops timer.
    ASPOSECPP_SHARED_API void Stop();

    /// Stops timer, frees allocated resources.
    ASPOSECPP_SHARED_API void Close();
    /// Stops timer, frees allocated resources.
    ASPOSECPP_SHARED_API void Dispose();

    /// Callback function to be called by timer.
    ElapsedEventHandler Elapsed;

private:
    /// Updates internal object state.
    void UpdateTimer();
    /// Callback function that calls into Elapsed object.
    void TimerCallback(SharedPtr<Object> state);

private:
    /// True if timer is executing, false if it is stopped.
    bool m_enabled;
    /// True to re-start timer after it is signalled, false to stop.
    bool m_auto_reset;
    /// Timeout in milliseconds.
    int m_interval;
    /// Timer that actually is being executed.
    SharedPtr<Threading::Timer> m_timer;
};

}} // System::Timers

#endif //_aspose_system_timers_timer_h_
