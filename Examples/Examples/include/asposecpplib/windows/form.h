/// @file windows/form.h
#ifndef _SYSTEM_WINDOWS_FORMS_FORM_H_
#define _SYSTEM_WINDOWS_FORMS_FORM_H_

#include <windows/control.h>
#include <system/reflection.h>

namespace System
{
namespace Windows
{
namespace Forms
{

/// Dummy class to make ported code that uses Form class compilable.
/// Methods are not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Form : public System::Windows::Forms::Control
{
    /// RTTI information.
    RTTI_INFO(System::Windows::Forms::Form, System::BaseTypesInfo<System::Windows::Forms::Control>)
};

}
}
}

#endif
