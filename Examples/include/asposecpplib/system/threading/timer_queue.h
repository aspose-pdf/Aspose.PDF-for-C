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
class TimerQueue
{
public:
    static TimerQueue& GetInstance();

    TimerQueue(const TimerQueue&) = delete;
    void operator = (const TimerQueue&) = delete;
    //-------------------------------------------

    bool Add(Timer* timer)
    {
        std::lock_guard<std::mutex> __lock(m_mutex);
        m_timer_queue[timer] = true;

        m_cv.notify_one();
        return true;
    }

    bool Delete(Timer* timer)
    {
        std::lock_guard<std::mutex> __lock(m_mutex);
        m_timer_queue.erase(timer);

        m_cv.notify_one();
        return true;
    }

    static void JoinWorkerThread();

private:
    TimerQueue():is_worker_terminates(false), m_worker_thread(std::bind(&TimerQueue::Worker, this)) {}
    ~TimerQueue();

    static bool& GetInitialized();
    void Join();

    typedef std::unordered_map<Timer*, bool> Queue;
    Queue m_timer_queue;

    bool is_worker_terminates;
    std::mutex m_mutex;
    std::condition_variable m_cv;
    std::thread m_worker_thread;
    
    void Fire(const Timer* t)
    {
        ThreadPool::QueueUserWorkItem(t->m_callback, t->m_state);
    };

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