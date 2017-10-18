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
        ASPOSECPP_3RD_PARTY_TYPE_HOLDER_HIDDEN_TYPE(boost::chrono::high_resolution_clock::time_point, time_point, sizeof(long long), long long, TimePointHolder);
    }

    
class Stopwatch;
typedef SharedPtr<Stopwatch> StopwatchPtr;

// Implemented only requied methods!
class Stopwatch : public System::Object
{
    RTTI_INFO(System::Diagnostics::Stopwatch, ::System::BaseTypesInfo<System::Object>)

public:
    Stopwatch();
    virtual ~Stopwatch();

    void Start();
    void Stop();
    void Reset();
    void Restart();

    bool get_IsRunning() const { return m_is_running; }
    const TimeSpan& get_Elapsed() const { return m_elapsed; }
    int64_t get_ElapsedMilliseconds() const { return static_cast<int64_t>(m_elapsed.get_TotalMilliseconds()); }

    static SharedPtr<Stopwatch> StartNew();

private:
    bool m_is_running;
    Detail::TimePointHolder m_start;
    TimeSpan m_elapsed;
};

} } // namespace System::Diagnostics
#endif // _stopwatch_h