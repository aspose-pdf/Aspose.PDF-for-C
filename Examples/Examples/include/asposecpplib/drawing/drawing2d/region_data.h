/// @file drawing/drawing2d/region_data.h
#ifndef _aspose_drawing_drawing2d_region_data_h_
#define _aspose_drawing_drawing2d_region_data_h_

#include "fwd.h"
#include "system/object.h"
#include "system/array.h"

namespace System { namespace Drawing { namespace Drawing2D {
/// Contains data that defines a region.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS RegionData FINAL : public System::Object
{
    RTTI_INFO(System::Drawing::Drawing2D::RegionData, ::System::BaseTypesInfo<System::Object>)

public:
    /// Constructs a new instance of RegionData class and initializes it with the specified data.
    /// @param data A byte array containing data that defines a region
    ASPOSECPP_SHARED_API RegionData(const ArrayPtr<uint8_t>& data);
    
    /// Returns a byte array containing data thet defines a region.
    ASPOSECPP_SHARED_API ArrayPtr<uint8_t> get_Data();

    /// Sets a region data for the current object.
    /// @param value The data to set
    ASPOSECPP_SHARED_API void set_Data(const ArrayPtr<uint8_t>& value);

private:
    /// Data that defines a region.
    ArrayPtr<uint8_t> m_data;

};

}}}

#endif 

