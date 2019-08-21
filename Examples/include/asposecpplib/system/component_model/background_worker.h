/// @file system/component_model/background_worker.h
#if !defined(_background_worker_h_)
#define _background_worker_h_

#include <system/component_model/component.h>
#include <system/smart_ptr.h>
#include <system/multicast_delegate.h>
#include <system/threading/thread.h>

#include <system/component_model/do_work_event_args.h>
#include <system/component_model/run_worker_completed_event_args.h>
#include <system/component_model/progress_changed_event_args.h>

namespace System { namespace ComponentModel {

/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS BackgroundWorker : public Component
{
    /// Information on base types.
    typedef System::BaseTypesInfo<Component> ThisBaseTypesInfo;
    /// RTTI information.
    RTTI_INFO(BackgroundWorker, ThisBaseTypesInfo)
public:
    /// Constructor.
    ASPOSECPP_SHARED_API BackgroundWorker();
    /// Destructor
    ASPOSECPP_SHARED_API ~BackgroundWorker();

public:
    /// Occurs when System::ComponentModel::BackgroundWorker::RunWorkerAsync is called.
    System::MulticastDelegate<void(System::SharedPtr<System::Object>, System::SharedPtr<System::ComponentModel::DoWorkEventArgs>) > DoWork;
    /// Occurs when the background operation has completed, has been canceled, or has raised an exception.
    System::MulticastDelegate<void(System::SharedPtr<System::Object>, System::SharedPtr<System::ComponentModel::RunWorkerCompletedEventArgs>)> RunWorkerCompleted;
    /// Occurs when System::ComponentModel::BackgroundWorker::ReportProgress(int)  is called.
    System::MulticastDelegate<void(System::SharedPtr<System::Object>, System::SharedPtr<System::ComponentModel::ProgressChangedEventArgs>)> ProgressChanged;

public:
    /// Starts execution of a background operation.
    ASPOSECPP_SHARED_API void RunWorkerAsync();
    /// Starts execution of a background operation.
    /// @param argument A parameter for use by the background operation to be executed in the System::ComponentModel::BackgroundWorker::DoWork event handler.
    ASPOSECPP_SHARED_API void RunWorkerAsync(System::SharedPtr<System::Object> argument);
    /// Raises the System::ComponentModel::BackgroundWorker::ProgressChanged event.
    /// @param percentProgress The percentage, from 0 to 100, of the background operation that is complete.
    ASPOSECPP_SHARED_API void ReportProgress(int percentProgress);
    /// Raises the System::ComponentModel::BackgroundWorker::ProgressChanged event with userState object.
    /// @param percentProgress The percentage, from 0 to 100, of the background operation that is complete.
    /// @param userState The state object passed to System::ComponentModel::BackgroundWorker::RunWorkerAsync(System::Object).
    ASPOSECPP_SHARED_API void ReportProgress(int percentProgress, System::SharedPtr<System::Object> userState);

public:
    /// Gets a value indicating whether the System::ComponentModel::BackgroundWorker can report progress updates.
    /// @return true if the System::ComponentModel::BackgroundWorker supports progress updates otherwise false. The default is false.
    inline bool get_WorkerReportsProgress() const { return m_WorkerReportsProgress; }
    /// Sets a value indicating whether the System::ComponentModel::BackgroundWorker can report progress updates.
    /// @param value The true or false.
    inline void set_WorkerReportsProgress(bool value) { m_WorkerReportsProgress = value; }

private:
    bool m_WorkerReportsProgress;
    bool m_IsBusy;
    System::Threading::Thread m_thread;
};

}}

#endif
