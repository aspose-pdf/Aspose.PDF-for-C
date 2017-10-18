#ifndef _iasyncresult_h_
#define _iasyncresult_h_

#include "system/object.h"
#include "system/threading/wait_handle.h"

namespace System {

    class IAsyncResult : virtual public System::Object
    {
        RTTI_INFO(System::IAsyncResult, ::System::BaseTypesInfo<System::Object>)

    public:
        typedef SharedPtr<IAsyncResult> shared_ptr;
        virtual SharedPtr<System::Object> get_AsyncState()=0;
        virtual bool get_CompletedSynchronously()=0;
        virtual bool get_IsCompleted()=0;
        virtual SharedPtr<System::Threading::WaitHandle> get_AsyncWaitHandle()=0;

        virtual ~IAsyncResult() {}
    };

    typedef SharedPtr<IAsyncResult> IAsyncResultPtr;
}

#endif
