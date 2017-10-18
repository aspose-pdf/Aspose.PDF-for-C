#ifndef _Aspose_Pdf_Devices_Margins__h_
#define _Aspose_Pdf_Devices_Margins__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// This class represents margins of an image.
/// </summary>
class ASPOSE_PDF_SHARED_API Margins FINAL : public System::Object
{
    typedef Margins ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    int32_t get_Left();
    void set_Left(int32_t value);
    int32_t get_Right();
    void set_Right(int32_t value);
    int32_t get_Top();
    void set_Top(int32_t value);
    int32_t get_Bottom();
    void set_Bottom(int32_t value);
    
    Margins(int32_t left, int32_t right, int32_t top, int32_t bottom);
    Margins();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Margins"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t left;
    int32_t right;
    int32_t top;
    int32_t bottom;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_Margins__h_

