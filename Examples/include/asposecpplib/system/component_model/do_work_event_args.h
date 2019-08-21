/// @file system/component_model/do_work_event_args.h
#ifndef _System_ComponentModel_DoWorkEventArgs_h_
#define _System_ComponentModel_DoWorkEventArgs_h_

#include <system/object.h>
#include <system/shared_ptr.h>
#include <system/component_model/cancel_event_args.h>

namespace System {

namespace ComponentModel {

/// DoWork event arguments.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DoWorkEventArgs : public CancelEventArgs
{
    /// This type.
    typedef DoWorkEventArgs ThisType;
    /// Parent type.
    typedef System::ComponentModel::CancelEventArgs BaseType;
    /// RTTI information.
    RTTI_INFO(System::ComponentModel::DoWorkEventArgs, ::System::BaseTypesInfo<BaseType>);

public:
    /// Constructs arguments instance.
    /// @param argument Argument property initializer.
    DoWorkEventArgs(const SharedPtr<System::Object>& argument) : CancelEventArgs(), m_argument(argument) {}

    /// Gets Argument property; not implemented.
    ASPOSECPP_SHARED_API SharedPtr<System::Object> get_Argument();
    /// Gets Result property; not implemented.
    ASPOSECPP_SHARED_API SharedPtr<System::Object> get_Result();
    /// Sets Result property; not implemented.
    ASPOSECPP_SHARED_API void set_Result(const SharedPtr<System::Object>&);

private:
    System::SharedPtr<System::Object> m_result;
    System::SharedPtr<System::Object> m_argument;
};

} // namespace ComponentModel
} // namespace System

#endif // _System_ComponentModel_DoWorkEventArgs_h_
