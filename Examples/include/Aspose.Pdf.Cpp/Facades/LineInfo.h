#ifndef _Aspose_Pdf_Facades_LineInfo_h_
#define _Aspose_Pdf_Facades_LineInfo_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents the information of line. 
/// </summary>
class ASPOSE_PDF_SHARED_API LineInfo FINAL : public System::Object
{
    typedef LineInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::ArrayPtr<float> get_VerticeCoordinate();
    void set_VerticeCoordinate(System::ArrayPtr<float> value);
    System::Drawing::Color get_LineColor();
    void set_LineColor(System::Drawing::Color value);
    int32_t get_LineWidth();
    void set_LineWidth(int32_t value);
    bool get_Visibility();
    void set_Visibility(bool value);
    System::ArrayPtr<int32_t> get_LineDashPattern();
    void set_LineDashPattern(System::ArrayPtr<int32_t> value);
    int32_t get_BorderStyle();
    void set_BorderStyle(int32_t value);
    
    LineInfo();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "LineInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::ArrayPtr<float> verticeCoordinate;
    System::Drawing::Color lineColor;
    int32_t lineWidth;
    bool visibility;
    System::ArrayPtr<int32_t> lineDashPattern;
    int32_t borderStyle;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_LineInfo_h_

