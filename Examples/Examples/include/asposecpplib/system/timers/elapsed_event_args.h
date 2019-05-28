/// @file system/timers/elapsed_event_args.h
/// Contains definition of class System::Timers::ElapsedEventArgs type.
#ifndef _aspose_system_timers_elapsed_event_args_h_
#define _aspose_system_timers_elapsed_event_args_h_

#include <system/eventargs.h>
#include <system/date_time.h>

namespace System { namespace Timers {

/// Arguments of timer event.
class ASPOSECPP_SHARED_CLASS ElapsedEventArgs : public System::EventArgs
{
    /// This type.
    typedef ElapsedEventArgs ThisType;
    /// Base type.
    typedef System::EventArgs BaseType;
    /// RTTI information.
    RTTI_INFO(System::Timers::ElapsedEventArgs, ::System::BaseTypesInfo<System::EventArgs>);

public:
    /// Constructs arguments object with given parameters.
    /// @param low Low part of signal time in file time format.
    /// @param high High part of signal time in file time format.
    ElapsedEventArgs(int32_t low, int32_t high) 
    {
        int64_t fileTime = (int64_t)((((uint64_t)high) << 32) | (((uint64_t)low) & 0xffffffff));
        m_signal_time = DateTime::FromFileTime(fileTime);
    }
    /// Gets singal time.
    DateTime get_SignalTime()
    {
        return m_signal_time;
    }

private:
    /// Signal time.
    DateTime m_signal_time;
};

} }

#endif 
