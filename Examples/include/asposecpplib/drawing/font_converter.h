#ifndef _aspose_drawing_font_converter_h_
#define _aspose_drawing_font_converter_h_

#include "system/object.h"
#include "system/shared_ptr.h"
#include "system/string.h"
#include "system/exceptions.h"

namespace System { namespace Drawing {
class FontConverter : public System::Object
{
    RTTI_INFO(FontConverter, ::System::BaseTypesInfo<System::Object>)
public:
    System::String ConvertToString(System::SharedPtr<System::Object> value);
    System::SharedPtr<System::Object> ConvertFromString(const System::String& text);

};

}} // System::Drawing
#endif