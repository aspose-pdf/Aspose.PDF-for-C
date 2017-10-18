#pragma once
#include "system/object.h"
#include "system/threading/wait_handle.h"

namespace System { namespace Threading {

class SemaphoreHandler;
class Semaphore : public WaitHandle
{
    RTTI_INFO(System::Threading::Semaphore, ::System::BaseTypesInfo<System::Threading::WaitHandle>);

public:

    Semaphore(int initialCount, int maximumCount);
    Semaphore(int initialCount, int maximumCount, String name);
    Semaphore(int initialCount, int maximumCount, String name, bool& createdNew);

    virtual bool Reset();
    virtual bool Set();

    virtual bool WaitOne();
    virtual bool WaitOne(int millisecondsTimeout);

    int Release();
    int Release(int releaseCount);
private:
    std::unique_ptr<SemaphoreHandler> m_semaphore_handler;

};


}} // namespace System{ namespace Threading{
