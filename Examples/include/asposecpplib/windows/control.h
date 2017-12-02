#ifndef _SYSTEM_WINDOWS_FORMS_CONTROL_H_
#define _SYSTEM_WINDOWS_FORMS_CONTROL_H_

#include <system/object.h>
#include <system/reflection.h>
#include <system/shared_ptr.h>

namespace System
{
namespace Drawing
{
class Graphics;
}
namespace Windows
{
namespace Forms
{

class Control : public System::Object
{
    RTTI_INFO(System::Windows::Forms::Control, System::BaseTypesInfo<System::Object>)

public:
    System::SharedPtr<System::Drawing::Graphics> CreateGraphics();
};

}
}
}

#endif
