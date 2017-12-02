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

class Form : public System::Windows::Forms::Control
{
    RTTI_INFO(System::Windows::Forms::Form, System::BaseTypesInfo<System::Windows::Forms::Control>)
};

}
}
}

#endif
