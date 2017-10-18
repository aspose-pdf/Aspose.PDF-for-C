#ifndef _Aspose_Pdf_Facades_TextProperties_h_
#define _Aspose_Pdf_Facades_TextProperties_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <drawing/color.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents text properties such as: text size, color, style etc.
/// </summary>
class ASPOSE_PDF_SHARED_API TextProperties FINAL : public System::Object
{
    typedef TextProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::Drawing::Color get_Color();
    void set_Color(System::Drawing::Color value);
    bool get_IsColorSpecified();
    double get_TextSize();
    void set_TextSize(double value);
    bool get_IsTextSizeSpecified();
    
    TextProperties(double textSize);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextProperties"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::Drawing::Color color;
    double textSize;
    bool isColorSpecified;
    bool isTextSizeSpecified;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_TextProperties_h_

