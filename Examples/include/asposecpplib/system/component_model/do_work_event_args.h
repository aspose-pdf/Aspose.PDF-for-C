#ifndef _System_ComponentModel_DoWorkEventArgs_h_
#define _System_ComponentModel_DoWorkEventArgs_h_

#include <system/object.h>
#include <system/shared_ptr.h>
#include <system/component_model/cancel_event_args.h>

namespace System {

namespace ComponentModel {

class DoWorkEventArgs : public CancelEventArgs
{
    typedef DoWorkEventArgs ThisType;
    typedef System::ComponentModel::CancelEventArgs BaseType;

    RTTI_INFO(System::ComponentModel::DoWorkEventArgs, ::System::BaseTypesInfo<BaseType>);

public:
    DoWorkEventArgs(SharedPtr<System::Object> argument) : CancelEventArgs() {}

    SharedPtr<System::Object> get_Argument();

    SharedPtr<System::Object> get_Result();
    void set_Result(SharedPtr<System::Object>);
};

} // namespace ComponentModel
} // namespace System

#endif // _System_ComponentModel_DoWorkEventArgs_h_
