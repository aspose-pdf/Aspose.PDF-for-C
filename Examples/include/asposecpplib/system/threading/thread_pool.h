#ifndef _aspose_system_threading_thread_pool_h_
#define _aspose_system_threading_thread_pool_h_

#include <functional>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <system/object.h>
#include <system/shared_ptr.h>

namespace System { namespace Threading {

typedef std::function<void(System::SharedPtr<System::Object>)> WaitCallback;

class ThreadPool;

class ThreadPoolImpl
{

public:

    bool QueueUserWorkItem(WaitCallback callback, System::SharedPtr<System::Object> state);

    void GetAvailableThreads(int &wt, int &cpt);
    void GetMaxThreads(int &wt, int &cpt);
    void GetMinThreads(int &wt, int &cpt);

    bool SetMaxThreads(int wt, int cpt);
    bool SetMinThreads(int wt, int cpt);

    ThreadPoolImpl();
    ~ThreadPoolImpl();

    static bool& GetInitialized();
    void JoinAll();

protected:

    std::uint32_t m_max_threads, m_min_threads;

    std::mutex m_mutex;
    std::condition_variable m_cv;

    typedef std::pair<WaitCallback, System::SharedPtr<System::Object>> Job;
    std::queue<Job> m_queue;

    void Worker();
    void AddWorkers(uint32_t amount);
    void DelWorkers(uint32_t amount);
};

class ThreadPool: public System::Object
{
    RTTI_INFO(System::Threading::ThreadPool, ::System::BaseTypesInfo<System::Object>);
public:
    static ThreadPoolImpl& GetInstance();

    ThreadPool(const ThreadPool&) = delete;
    void operator = (const ThreadPool&) = delete;
    //-------------------------------------------

    static bool QueueUserWorkItem(WaitCallback callback);
    static bool QueueUserWorkItem(WaitCallback callback, System::SharedPtr<System::Object> state);

    static void GetAvailableThreads(int &wt, int &cpt);
    static void GetMaxThreads(int &wt, int &cpt);
    static void GetMinThreads(int &wt, int &cpt);

    static bool SetMaxThreads(int wt, int cpt);
    static bool SetMinThreads(int wt, int cpt);

    static void JoinAllThreads();
};

}} // System::Threading

#endif
