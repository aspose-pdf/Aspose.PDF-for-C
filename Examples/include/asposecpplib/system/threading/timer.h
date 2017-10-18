#ifndef _aspose_system_threading_timer_h_
#define _aspose_system_threading_timer_h_

#include <system/threading/timeout.h>
#include <functional>
#include <system/shared_ptr.h>
#include <system/timespan.h>


namespace System { namespace Threading {

typedef std::function<void(System::SharedPtr<System::Object>)> TimerCallback;

class Timer final : public System::Object
{
friend class TimerQueue;
public:
    Timer(TimerCallback callback);
    Timer(TimerCallback callback, System::SharedPtr<System::Object> state, int64_t dueTime, int64_t period);
    Timer(TimerCallback callback, System::SharedPtr<System::Object> state,
        System::TimeSpan dueTime, System::TimeSpan period);

    bool Change(int64_t dueTime, int64_t period);
    bool Change(System::TimeSpan dueTime, System::TimeSpan period);

    void Dispose();

private:
    TimerCallback m_callback;
    System::SharedPtr<System::Object> m_state;
    int64_t m_dueTime;
    int64_t m_period;

    int64_t CheckRange(int64_t value, const String & field);
    TimerCallback CheckCallback(TimerCallback callback);
};

}} // System::Threading
#endif