#ifndef __async_completed_event_args_h__
#define __async_completed_event_args_h__

#include <system/eventargs.h>

namespace System { namespace ComponentModel {

    class ASPOSECPP_SHARED_CLASS AsyncCompletedEventArgs : public EventArgs
    {
        /// This type.
        typedef AsyncCompletedEventArgs ThisType;
        /// Parent type.
        typedef System::EventArgs BaseType;
        /// RTTI information.
        RTTI_INFO(System::ComponentModel::AsyncCompletedEventArgs, ::System::BaseTypesInfo<System::EventArgs>);

    public:
        /// Constructor
        AsyncCompletedEventArgs()
            : m_canceled(false)
            , m_userState(false)
        {}

        /// Initializes a new instance of the System.ComponentModel.AsyncCompletedEventArgs class.
        /// @param error Any error that occurred during the asynchronous operation.
        /// @param canceled A value indicating whether the asynchronous operation was canceled.
        /// @param userState The optional user-supplied state object passed to the System.ComponentModel.BackgroundWorker.RunWorkerAsync(System.Object) method.
        AsyncCompletedEventArgs(const System::Exception &error, bool canceled, System::SharedPtr<System::Object> userState)
            : m_error(error)
            , m_canceled(canceled)
            , m_userState(userState)
        {}

        /// Gets a value indicating which error occurred during an asynchronous operation.
        /// @return An System.Exception instance, if an error occurred during an asynchronous operation otherwise null.
        inline const System::Exception & get_Error() const { return m_error; }
        /// Gets a value indicating whether an asynchronous operation has been canceled.
        /// true if the background operation has been canceled; otherwise false. The default is false.
        inline bool get_Canceled() const { return m_canceled; }
        /// Gets the unique identifier for the asynchronous task.
        /// An object reference that uniquely identifies the asynchronous task; otherwise, null if no value has been set.
        inline bool get_UserState() const { return m_userState; }

    private:
        const System::Exception m_error;
        bool m_canceled;
        bool m_userState;
    };

}}

#endif
