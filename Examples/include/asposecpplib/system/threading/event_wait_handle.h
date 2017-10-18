#pragma once
#include "system/object.h"
#include "system/threading/wait_handle.h"


namespace System { namespace Threading {

    enum EventResetMode
    {
        AutoReset = 0,
        ManualReset = 1
    };

    class EventWaitHandle : public WaitHandle
    {
        RTTI_INFO(System::Threading::EventWaitHandle, ::System::BaseTypesInfo<System::Threading::WaitHandle>);

    public:

        EventWaitHandle(bool initialState, EventResetMode mode);
        ~EventWaitHandle();

        virtual bool Reset();
        virtual bool Set();
    };

}} // namespace System{ namespace Threading{


