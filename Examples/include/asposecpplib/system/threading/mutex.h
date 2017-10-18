#pragma once
#include "system/object.h"
#include "system/threading/wait_handle.h"

namespace System { namespace Threading {
class MutexHandler;

class Mutex : public WaitHandle
{
    RTTI_INFO(System::Threading::Mutex, ::System::BaseTypesInfo<System::Threading::WaitHandle>);

public:

    Mutex();
    Mutex(bool initiallyOwned);
    void ReleaseMutex();

    virtual bool Reset();
    virtual bool Set();

    virtual bool WaitOne();
    virtual bool WaitOne(int millisecondsTimeout);

private:
    std::unique_ptr<MutexHandler> m_mutex_handler;
};

}} // namespace System{ namespace Threading{

