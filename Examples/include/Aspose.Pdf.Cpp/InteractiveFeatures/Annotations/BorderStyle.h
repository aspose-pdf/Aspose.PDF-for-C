#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_BorderStyle_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_BorderStyle_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Describes style of the annotation border.
/// </summary>
enum class BorderStyle
{
    Solid,
    Dashed,
    Beveled,
    Inset,
    Underline
};

class ASPOSE_PDF_SHARED_API BorderStyleConverter : public System::Object
{
    typedef BorderStyleConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(BorderStyle value);
    static System::String ToXfdfString(BorderStyle value);
    static BorderStyle ToEnum(System::String value);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BorderStyleConverter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_BorderStyle_h_

