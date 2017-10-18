#ifndef _system_threading_wait_handle_h_
#define _system_threading_wait_handle_h_

#include "system/object.h"
#include "system/array.h"


namespace System{ namespace Threading{

typedef void * wait_handle_t;

class WaitHandle : public System::Object //public EventWaitHandle
{
    RTTI_INFO(System::Threading::WaitHandle, ::System::BaseTypesInfo<System::Object>);
public:

    static bool WaitAll(System::ArrayPtr<System::SharedPtr<WaitHandle>> waitHandles, int millisecondsTimeout);
    static int WaitAny(System::ArrayPtr<System::SharedPtr<WaitHandle>> waitHandles, int millisecondsTimeout);

    virtual bool WaitOne();
    virtual bool WaitOne(int millisecondsTimeout);
    virtual bool WaitOne(int millisecondsTimeout, bool exitContext);

    virtual ~WaitHandle();
    virtual void Close();

    wait_handle_t get_Handle();

    static const int WaitTimeout = 0x102;

protected:
    static int WaitMultiple(System::ArrayPtr<System::SharedPtr<WaitHandle>> waitHandles, int millisecondsTimeout, bool waitAll, int& index);

    WaitHandle(wait_handle_t handle);

private:
    wait_handle_t m_wait_handle = 0;

};

}} // namespace System{ namespace Threading{

#endif // _system_threading_wait_handle_h_