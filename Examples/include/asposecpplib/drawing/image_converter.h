#ifndef _system_drawing_image_converter_h_
#define _system_drawing_image_converter_h_

#include "system/component_model/type_converter.h"

namespace System {

namespace Drawing {

class ImageConverter : public System::ComponentModel::TypeConverter
{
    typedef ImageConverter ThisType;
    typedef System::ComponentModel::TypeConverter BaseType;

    RTTI_INFO_DECL();

public:

    ImageConverter();
    System::SharedPtr<Object> ConvertTo(System::SharedPtr<Object> value, const TypeInfo& destinationType) override;

};

} // namespace Drawing
} // namespace System

#endif // _system_drawing_image_converter_h_

