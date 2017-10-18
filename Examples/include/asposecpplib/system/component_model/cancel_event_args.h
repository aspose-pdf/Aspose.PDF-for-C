#ifndef _System_ComponentModel_CancelEventArgs_h_
#define _System_ComponentModel_CancelEventArgs_h_

#include <system/eventargs.h>

namespace System {

namespace ComponentModel {

class CancelEventArgs : public System::EventArgs
{
    typedef CancelEventArgs ThisType;
    typedef System::EventArgs BaseType;

    RTTI_INFO(System::ComponentModel::CancelEventArgs, ::System::BaseTypesInfo<System::EventArgs>);

public:
    CancelEventArgs(bool cancel) : System::EventArgs(), _cancel(cancel){}
    CancelEventArgs() : CancelEventArgs(false){}

    bool get_Cancel() { return _cancel; }
    void set_Cancel(bool cancel) { _cancel=cancel; }

private:
    bool _cancel;

};

} // namespace ComponentModel
} // namespace System

#endif // _System_ComponentModel_PropertyChangedEventArgs_h_
