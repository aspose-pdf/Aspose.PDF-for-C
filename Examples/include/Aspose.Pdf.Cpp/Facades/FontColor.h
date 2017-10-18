#ifndef _Aspose_Pdf_Facades_FontColor_h_
#define _Aspose_Pdf_Facades_FontColor_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class representing color of the text.
/// </summary>
class ASPOSE_PDF_SHARED_API FontColor FINAL : public System::Object
{
    typedef FontColor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    int32_t get_Green();
    void set_Green(int32_t value);
    int32_t get_Red();
    void set_Red(int32_t value);
    int32_t get_Blue();
    void set_Blue(int32_t value);
    
    FontColor(int32_t r, int32_t g, int32_t b);
    FontColor();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FontColor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t green;
    int32_t red;
    int32_t blue;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_FontColor_h_

