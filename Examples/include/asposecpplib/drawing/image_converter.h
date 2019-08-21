/// @file drawing/image_converter.h
#ifndef _system_drawing_image_converter_h_
#define _system_drawing_image_converter_h_

#include "system/component_model/type_converter.h"

namespace System {

namespace Drawing {
/// Converts Image objects from one data type to another.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ImageConverter : public System::ComponentModel::TypeConverter
{
    typedef ImageConverter ThisType;
    typedef System::ComponentModel::TypeConverter BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    using System::ComponentModel::TypeConverter::ConvertTo;
    /// Constructs a new instance of ImageConverter.
    ASPOSECPP_SHARED_API ImageConverter();
    /// Converts object to specific type.
    /// @param context Object conversion context information
    /// @param culture Culture to use when converting objects
    /// @param value An object to convert.
    /// @param destinationType A type to convert to.
    /// @return Converted object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertTo(const System::SharedPtr<System::ComponentModel::ITypeDescriptorContext>& context, const System::SharedPtr<System::Globalization::CultureInfo>& culture, const System::SharedPtr<System::Object>& value, const System::TypeInfo& destinationType) override;

};

} // namespace Drawing
} // namespace System

#endif // _system_drawing_image_converter_h_

