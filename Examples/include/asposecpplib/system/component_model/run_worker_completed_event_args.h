#ifndef __run_worker_completed_event_args_h__
#define __run_worker_completed_event_args_h__

#include <system/exceptions.h>
#include <system/component_model/async_completed_event_args.h>

namespace System { namespace ComponentModel {

    class ASPOSECPP_SHARED_CLASS RunWorkerCompletedEventArgs : public AsyncCompletedEventArgs
    {
        /// This type.
        typedef RunWorkerCompletedEventArgs ThisType;
        /// Parent type.
        typedef System::ComponentModel::AsyncCompletedEventArgs BaseType;
        /// RTTI information.
        RTTI_INFO(System::ComponentModel::RunWorkerCompletedEventArgs, ::System::BaseTypesInfo<System::ComponentModel::AsyncCompletedEventArgs>);
    
    public:
        /// Constructor
        /// @param result The result of an asynchronous operation.
        /// @param error Any error that occurred during the asynchronous operation.
        /// @param canceled A value indicating whether the asynchronous operation was canceled.
        ASPOSECPP_SHARED_API RunWorkerCompletedEventArgs(System::SharedPtr<System::Object> result, const System::Exception &error, bool canceled);

        /// Gets a value that represents the result of an asynchronous operation.
        /// @return An System.Object representing the result of an asynchronous operation. 
        ASPOSECPP_SHARED_API System::SharedPtr<System::Object> get_Result() const;

    private:
        System::SharedPtr<System::Object> m_result;
    };

}}

#endif
