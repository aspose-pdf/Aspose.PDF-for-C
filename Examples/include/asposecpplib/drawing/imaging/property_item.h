#ifndef _aspose_system_drawing_property_item_h_
#define _aspose_system_drawing_property_item_h_

#include "fwd.h"
#include "system/array.h"

namespace System { namespace Drawing { namespace Imaging {

class PropertyItem : public Object
{
    RTTI_INFO(System::Drawing::Imaging::PropertyItem, ::System::BaseTypesInfo<System::Object>)

public:
    PropertyItem();

    int32_t get_Id() const;
    void set_Id(int32_t value);

    int32_t get_Len() const;
    void set_Len(int32_t value);

    int16_t get_Type() const;
    void set_Type(int16_t value);

    ArrayPtr<uint8_t> get_Value() const;
    void set_Value(System::ArrayPtr<uint8_t> value);

private:
    int32_t m_id;
    int32_t m_len;
    int16_t m_type;
    ArrayPtr<uint8_t> m_value;
};

}}} // System::Drawing::Imaging


#endif // _aspose_system_drawing_color_palette_h_
