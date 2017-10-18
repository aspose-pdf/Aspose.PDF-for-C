#ifndef _aspose_system_threading_thread_h_
#define _aspose_system_threading_thread_h_

#include <functional>
#include <thread>

#include <system/globalization/culture_info.h>
#include <system/threading/thread_state.h>

namespace System { namespace Threading {

typedef std::function<void(System::SharedPtr<System::Object>)> ParameterizedThreadStart;
typedef std::function<void ()> ThreadStart;

class Thread final: public System::Object
{
friend class ThreadPoolImpl;
public:
    Thread(bool do_delete = false);
    Thread(ThreadStart thread_function);
    Thread(ParameterizedThreadStart thread_function);

    Thread & operator = (const Thread &t);
    Thread(Thread &t);
    ~Thread();

    //Properties
    SharedPtr<Globalization::CultureInfo> get_CurrentCulture();
    void set_CurrentCulture(SharedPtr<Globalization::CultureInfo> ci);

    static System::SharedPtr<Thread> get_CurrentThread();

    SharedPtr<Globalization::CultureInfo> get_CurrentUICulture();
    void set_CurrentUICulture(SharedPtr<Globalization::CultureInfo> ci);

    bool get_IsAlive();

    bool get_IsBackground();
    void set_IsBackground(bool is_background);

    bool get_IsThreadPoolThread();

    int get_ManagedThreadId();

    System::String get_Name();
    void set_Name(System::String name);

    ThreadState get_ThreadState();

    //Methods
    void Join();
    bool Join(int millisecondsTimeout);
    //bool Join(TimeSpan timeout);

    static void Sleep(int millisecondsTimeout);
    static void Sleep(TimeSpan timeout);

    static void SpinWait(int iterations);

    void Start();
    void Start(System::SharedPtr<System::Object> o);

    void Abort();

    static bool Yield();

    static int GetCurrentThreadId();

    struct TlsData
    {
        System::String name;
        ThreadState state = Unstarted;
        bool is_backgroung = false;
        bool is_thread_pool_thread = false;
    };

private:
    bool m_do_delete_tls_data = false;

    bool m_is_pts;
    ParameterizedThreadStart m_pts;
    ThreadStart m_ts;

    std::thread m_thread;

    static TlsData*& GetTlsData();
    std::shared_ptr<TlsData> m_data;

    void StartHelper(ThreadStart worker);
};

}} // namespace System::Threading

#endif // _aspose_system_threading_thread_h_
