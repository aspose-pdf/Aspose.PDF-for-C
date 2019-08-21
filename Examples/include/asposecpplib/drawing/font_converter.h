/// @file drawing/font_converter.h
#ifndef _aspose_drawing_font_converter_h_
#define _aspose_drawing_font_converter_h_

#include "system/object.h"
#include "system/shared_ptr.h"
#include "system/string.h"
#include "system/component_model/type_converter.h"

namespace System { namespace Drawing {

enum class GraphicsUnit;
enum class FontStyle;
/// Converts Font objects from one data type to another.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS FontConverter : public System::ComponentModel::TypeConverter
{
    RTTI_INFO(FontConverter, ::System::BaseTypesInfo<System::ComponentModel::TypeConverter>)
public:
    using System::ComponentModel::TypeConverter::ConvertFrom;
    using System::ComponentModel::TypeConverter::ConvertTo;

    /// Converts objects.
    /// @param context Object conversion context information.
    /// @param culture Culture to use when converting objects.
    /// @param value An object to convert.
    /// @return converted object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertFrom(const System::SharedPtr<ComponentModel::ITypeDescriptorContext>& context, const System::SharedPtr<System::Globalization::CultureInfo>& culture, const System::SharedPtr<System::Object>& value) override;
    /// Converts object to specific type.
    /// @param context Object conversion context information.
    /// @param culture Culture to use when converting objects.
    /// @param value An object to convert.
    /// @param destinationType Type to convert to.
    /// @return Converted object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> ConvertTo(const System::SharedPtr<ComponentModel::ITypeDescriptorContext>& context, const System::SharedPtr<System::Globalization::CultureInfo>& culture, const System::SharedPtr<System::Object>& value, const System::TypeInfo& destinationType) override;

private:
    /// String constant for "style=".
    static const System::String s_style_hdr;
    /// String constant for "world".
    const static System::String s_world;
    /// String constant for "display".
    const static System::String s_display;
    /// String constant for "pixel".
    const static System::String s_pixel;
    /// String constant for "point".
    const static System::String s_point;
    /// String constant for "inch".
    const static System::String s_inch;
    /// String constant for "document".
    const static System::String s_document;
    /// String constant for "millimeter".
    const static System::String s_millimeter;

    /// Returns a string representation of the specified measurement unit.
    /// @param unit A measurement unit to convert
    /// @returns A string representation of @p unit
    static const System::String& UnitToString(GraphicsUnit unit);

    /// Converts the string representation of an em size to a corresponding single-precision floating point value. 
    /// @param text An em size represented as a string
    /// @param culture A CultureInfo object used to interpret the format of @p text string
    /// @param size Output argumnet; Contains the result of conversion in the units of measurement specified by @p unit
    /// @param unit Output argumnet; Contains a value that specifies the measurement units in which the value in @p size is specified
    static void ParseSize(const System::String& text, const System::SharedPtr<System::Globalization::CultureInfo>& culture, float& size, GraphicsUnit& unit);
    /// Converts the specified name of a font style to the corresponding FontStyle value.
    /// @param text The name of a font style
    /// @prama unit Output argument; contains FontStyle value that represents a font style whose name is specified in @p text
    static void ParseStyle(const System::String& text, FontStyle& style);
    /// Converts the specified string representation of a measurement unit to the corresponding GraphicsUnit value.
    /// @param text The string representation of measurement unit
    /// @prama unit Output argument; contains GraphicsUnit value that corresponds to @p text
    static void ParseUnit(const System::String& text, GraphicsUnit& unit);

};

}} // System::Drawing
#endif
