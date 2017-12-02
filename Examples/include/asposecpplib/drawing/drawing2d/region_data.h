#ifndef _aspose_drawing_drawing2d_region_data_h_
#define _aspose_drawing_drawing2d_region_data_h_

#include "fwd.h"
#include "system/object.h"
#include "system/array.h"

namespace System { namespace Drawing { namespace Drawing2D {

class RegionData FINAL : public System::Object
{
    RTTI_INFO(System::Drawing::Drawing2D::RegionData, ::System::BaseTypesInfo<System::Object>)

public:

    RegionData(ArrayPtr<uint8_t> data);
    
    ArrayPtr<uint8_t> get_Data();

    void set_Data(ArrayPtr<uint8_t> value);

private:
   
    ArrayPtr<uint8_t> m_data;

};

}}}

#endif 

