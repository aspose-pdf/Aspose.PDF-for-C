/// @file system/threading/timer_queue.h
#ifndef _aspose_system_threading_timer_queue_h
#define _aspose_system_threading_timer_queue_h

#include <system/threading/timer.h>
#include <system/threading/thread_pool.h>
#include <functional>
#include <algorithm>
#include <unordered_map>
#include <chrono>
#include <thread>
#include <mutex>
#include <condition_variable>

namespace System { namespace Threading {

/// Queue that handles Timer objects.
/// This is just an implementation. Timer objects register there by themselves, you don't have to do so to use them - use Timer class API instead.
/// This is a singleton type with memory management done by access function(s).
/// You should never create instances of it directly.
class ASPOSECPP_SHARED_CLASS TimerQueue
{
public:
    /// Implementation singleton.
    static ASPOSECPP_SHARED_API TimerQueue& GetInstance();

    /// No copying.
    TimerQueue(const TimerQueue&) = delete;
    /// No copying.
    void operator = (const TimerQueue&) = delete;

    /// Registers timer in queue.
    /// @param timer Timer to register.
    /// @return Always returns true.
    bool Add(Timer* timer)
    {
        std::lock_guard<std::mutex> __lock(m_mutex);
        m_timer_queue[timer] = true;

        m_cv.notify_one();
        return true;
    }
    /// Deletes timer from queue.
    /// @param timer Timer to delete.
    /// @return Always returns true.
    bool Delete(Timer* timer)
    {
        std::lock_guard<std::mutex> __lock(m_mutex);
        m_timer_queue.erase(timer);

        m_cv.notify_one();
        return true;
    }
    /// Joins worker thread. Waits infinitely if required.
    static ASPOSECPP_SHARED_API void JoinWorkerThread();

private:
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4355)
#endif
    /// Constructor.
    TimerQueue() : is_worker_terminates(false), m_worker_thread(std::bind(&TimerQueue::Worker, this)) {}
#ifdef _MSC_VER
#pragma warning(pop)
#endif
    /// Destructor.
    ~TimerQueue();
    /// Checks if queue is initialized.
    /// @return Reference to variable which is true if initialization is done and false otherwise.
    static bool& GetInitialized();
    /// Joins timer thread.
    void Join();

    /// Queued timer record. First element of pair is a timer pointer, second one is true if timer is at first waiting interval (not ever executed yet) and false if it is in re-executing state.
    typedef std::unordered_map<Timer*, bool> Queue;
    /// Queue of timers to handle.
    Queue m_timer_queue;
    /// Whether worker thread termination was requested.
    bool is_worker_terminates;
    /// Mutex to protect timer queue.
    std::mutex m_mutex;
    /// Condition variable to keep worker thread waiting.
    std::condition_variable m_cv;
    /// Worker thread.
    std::thread m_worker_thread;
    
    /// Executes specified timer.
    /// @param t Timer to execute.
    void Fire(const Timer* t)
    {
        ThreadPool::QueueUserWorkItem(t->m_callback, t->m_state);
    };

    /// Worker thread function which loops until timers exist in queue.
    void Worker()
    {
        using namespace std::chrono;

        system_clock::time_point time_point;
        std::unique_lock<std::mutex> m_lock(m_mutex);
        Queue::iterator min;
        milliseconds fire_interval, duration;
        for (;;)
        {
            while (m_timer_queue.empty()) //Stuck here until something appears in queue
            {
                if (is_worker_terminates)
                {
                    return;
                }
                m_cv.wait(m_lock);
            }

            min = std::min_element(m_timer_queue.begin(), m_timer_queue.end(),
                [](const Queue::value_type &t1, const Queue::value_type &t2) {
                    return std::get<0>(t1)->m_dueTime < std::get<0>(t2)->m_dueTime;
                }
            );

            if (m_timer_queue.size() == 1) // The first added timer starts waiting loop and should not be handled as "just added"
            {
                min->second = false;
            }

            fire_interval = milliseconds(min->first->m_dueTime);
            time_point = system_clock::now() + fire_interval;

            m_cv.wait_until(m_lock, time_point);

            duration = duration_cast<milliseconds>(system_clock::now() - time_point) +  fire_interval;

            for (auto i = m_timer_queue.begin(); i != m_timer_queue.end(); )
            {
                if ((i->first->m_dueTime <= duration.count() && !i->second) ||  // Fire expired timers and reset their timeout
                    i->first->m_dueTime == 0)                                   // Also fire timers with immediate start
                {
                    Fire(i->first);

                    if(i->first->m_period > 0)
                    {
                        i->first->m_dueTime = i->first->m_period;
                        i->second = false;
                        ++i;
                    }
                    else // One shot timer
                    {
                        i = m_timer_queue.erase(i);
                    }

                }
                else // Update timeout for the rest
                {
                    if (i->second) // Just added, no need to update
                    {
                        i->second = false;
                    }
                    else
                    {
                        i->first->m_dueTime -= duration.count();
                    }

                    ++i;
                }

            }
        }
    }
};

}} // System::Threading
#endif
