#ifndef _thread_state_h_
#define _thread_state_h_

namespace System { namespace Threading {

enum ThreadState
{
    Running = 0,
    StopRequested = 1,
    SuspendRequested = 2,
    Background = 4,
    Unstarted = 8,
    Stopped = 16,
    WaitSleepJoin = 32,
    Suspended = 64,
    AbortRequested = 128,
    Aborted = 256
};

}} // System::Threading

#endif