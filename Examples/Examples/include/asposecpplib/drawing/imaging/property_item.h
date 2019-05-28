/// @file drawing/imaging/property_item.h
#ifndef _aspose_system_drawing_property_item_h_
#define _aspose_system_drawing_property_item_h_

#include "fwd.h"
#include "system/array.h"

namespace System { namespace Drawing { namespace Imaging {
/// Represents a metadata property to be included in an image file.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS PropertyItem : public Object
{
    RTTI_INFO(System::Drawing::Imaging::PropertyItem, ::System::BaseTypesInfo<System::Object>)

public:
    /// Constructs a new instance of PropertyItem class.
    ASPOSECPP_SHARED_API PropertyItem();

    /// Returns the ID of the property represented by the current object.
    ASPOSECPP_SHARED_API int32_t get_Id() const;
    /// Sets the ID of the property represented by the current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Id(int32_t value);

    /// Returns the length of the property represented by the current object in bytes.
    ASPOSECPP_SHARED_API int32_t get_Len() const;
    /// Sets the length of the property represented by the current object in bytes.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Len(int32_t value);

    /// Returns the type of the property represented by the current object in bytes.
    ASPOSECPP_SHARED_API int16_t get_Type() const;
    /// Sets the type of the property represented by the current object in bytes.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Type(int16_t value);

    /// Returns the value of the property represented by the current object in bytes.
    ASPOSECPP_SHARED_API ArrayPtr<uint8_t> get_Value() const;
    /// Sets the type of the property represented by the current object in bytes.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Value(const System::ArrayPtr<uint8_t>& value);

private:
    /// The ID of the property.
    int32_t m_id;
    /// The length of the property in bytes.
    int32_t m_len;
    /// The type of the property.
    int16_t m_type;
    /// The value of the property.
    ArrayPtr<uint8_t> m_value;
};

}}} // System::Drawing::Imaging


#endif // _aspose_system_drawing_color_palette_h_
