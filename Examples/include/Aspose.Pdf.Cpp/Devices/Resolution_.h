#ifndef _Aspose_Pdf_Devices_Resolution__h_
#define _Aspose_Pdf_Devices_Resolution__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents class for holding image resolution.
/// </summary>
class ASPOSE_PDF_SHARED_API Resolution FINAL : public System::Object
{
    typedef Resolution ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    int32_t get_X();
    void set_X(int32_t value);
    int32_t get_Y();
    void set_Y(int32_t value);
    
    Resolution(int32_t value);
    Resolution(int32_t valueX, int32_t valueY);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Resolution"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t x;
    int32_t y;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_Resolution__h_

