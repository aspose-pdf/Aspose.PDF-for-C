/// @file system/threading/thread_state.h
#ifndef _thread_state_h_
#define _thread_state_h_

namespace System { namespace Threading {

/// State of the thread.
enum ThreadState
{
    /// Thread is running.
    Running = 0,
    /// Thread stop is requested.
    StopRequested = 1,
    /// Thread suspension is requested.
    SuspendRequested = 2,
    /// Theread is being executed in background.
    Background = 4,
    /// Thread is not started.
    Unstarted = 8,
    /// Thread is stopped.
    Stopped = 16,
    /// Thread is bein waited to be joined.
    WaitSleepJoin = 32,
    /// Thread is suspended.
    Suspended = 64,
    /// Thread abortion is requested.
    AbortRequested = 128,
    /// Thread is aborted.
    Aborted = 256
};

}} // System::Threading

#endif
