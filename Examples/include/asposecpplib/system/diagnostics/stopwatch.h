/// @file system/diagnostics/stopwatch.h
#ifndef _stopwatch_h
#define _stopwatch_h

#include <system/object.h>
#include <system/timespan.h>


#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/chrono.hpp>
#endif


namespace System { namespace Diagnostics
{
    namespace Detail {
        /// Holds boost time point type without including boost headers.
        ASPOSECPP_3RD_PARTY_TYPE_HOLDER_HIDDEN_TYPE(boost::chrono::high_resolution_clock::time_point, time_point, sizeof(long long), long long, TimePointHolder);
    }

    
class Stopwatch;
/// Pointer type.
typedef SharedPtr<Stopwatch> StopwatchPtr;

/// Allows time measurement.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Stopwatch : public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Diagnostics::Stopwatch, ::System::BaseTypesInfo<System::Object>)

public:
    /// Constructs Stopwatch object.
    ASPOSECPP_SHARED_API Stopwatch();
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~Stopwatch();

    /// Starts time measurement.
    ASPOSECPP_SHARED_API void Start();
    /// Stops time measurement.
    ASPOSECPP_SHARED_API void Stop();
    /// Stops time measurement, sets measured interval to zero.
    ASPOSECPP_SHARED_API void Reset();
    /// Sets measured interval to zero, then starts time measurement.
    ASPOSECPP_SHARED_API void Restart();
    /// Checks if stopwatch is running.
    /// @return True if we're measuring time now, false otherwise.
    bool get_IsRunning() const { return m_is_running; }
    /// Gets elapsed interval.
    /// @return Interval between last reset and stop operations.
    const TimeSpan& get_Elapsed() const { return m_elapsed; }
    /// Gets elapsed interval in milliseconds.
    /// @return Interval between last reset and stop operations in milliseconds.
    int64_t get_ElapsedMilliseconds() const { return static_cast<int64_t>(m_elapsed.get_TotalMilliseconds()); }
    /// Gets the total elapsed time measured by the current instance, in timer ticks.
    /// @return Total number of timer ticks measured by the current instance.
    int64_t get_ElapsedTicks() const { return get_ElapsedMilliseconds() * TimeSpan::s_ticks_per_millisecond; }

    /// Creates new Stopwatch object and starts measurement.
    /// @return Pointer to newly created Stopwatch object.
    ASPOSECPP_SHARED_API static SharedPtr<Stopwatch> StartNew();

private:
    /// Defines whether stopwatch is running.
    bool m_is_running;
    /// Last start point.
    Detail::TimePointHolder m_start;
    /// Elapsed interval.
    TimeSpan m_elapsed;
};

} } // namespace System::Diagnostics
#endif // _stopwatch_h
