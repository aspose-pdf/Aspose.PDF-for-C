/// @file system/iasyncresult.h
/// Contains the declaration of System::IAsyncResult class.
#ifndef _iasyncresult_h_
#define _iasyncresult_h_

#include "system/object.h"
#include "system/threading/wait_handle.h"

namespace System {
    /// Represents the status of asynchronous operation.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS IAsyncResult : virtual public System::Object
    {
        RTTI_INFO(System::IAsyncResult, ::System::BaseTypesInfo<System::Object>)

    public:
        /// Shared pointer to IAsyncResult.
        typedef SharedPtr<IAsyncResult> smart_ptr;

        /// Returns an object that contains the information about asyrchronous operation.
        virtual ASPOSECPP_SHARED_API SharedPtr<System::Object> get_AsyncState()=0;
        /// Returns a value that indicates whether the asynchronous operation completed synchronously.
        /// @returns True if the asynchronous operation completed synchronously, otherwise - false
        virtual ASPOSECPP_SHARED_API bool get_CompletedSynchronously()=0;
        /// Returns a value that indicates whether the asynchronous operation has completed.
        /// @returns True if the asynchronous operation has completed, otherwise - false
        virtual ASPOSECPP_SHARED_API bool get_IsCompleted()=0;
        /// Returns an instance of WaitHandle that can be used to wait for the completion of the asynchronous operation.
        /// @returns A pointer to an instance of WaitHandle class that can be used to wait for the completion of the asynchronous operation.
        virtual ASPOSECPP_SHARED_API SharedPtr<System::Threading::WaitHandle> get_AsyncWaitHandle()=0;

        /// Destructor.
        virtual ~IAsyncResult() {}
    };

    /// Shared pointer to IAsyncResult.
    typedef SharedPtr<IAsyncResult> IAsyncResultPtr;
}

#endif
