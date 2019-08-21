/// @file system/component_model/cancel_event_args.h
#ifndef _System_ComponentModel_CancelEventArgs_h_
#define _System_ComponentModel_CancelEventArgs_h_

#include <system/eventargs.h>

namespace System {
namespace ComponentModel {

/// Arguments of cancellable event.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS CancelEventArgs : public System::EventArgs
{
    /// This type.
    typedef CancelEventArgs ThisType;
    /// Parent type.
    typedef System::EventArgs BaseType;
    /// RTTI information.
    RTTI_INFO(System::ComponentModel::CancelEventArgs, ::System::BaseTypesInfo<System::EventArgs>);

public:
    /// Constructor.
    /// @param cancel Cancel property value.
    CancelEventArgs(bool cancel) : System::EventArgs(), _cancel(cancel){}
    /// Constructor; sets Cancel property to false.
    CancelEventArgs() : CancelEventArgs(false){}

    /// Gets value indicating whether the event should be cancelled.
    /// @return True if event should be cancelled, false otherwise.
    bool get_Cancel() { return _cancel; }
    /// Sets value indicating whether the event should be cancelled.
    /// @param cancel If true, the event should be cancelled, if false, it should not.
    void set_Cancel(bool cancel) { _cancel=cancel; }

private:
    /// Cancel property value.
    bool _cancel;

};

} // namespace ComponentModel
} // namespace System

#endif // _System_ComponentModel_PropertyChangedEventArgs_h_
