﻿#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_CaptionPosition_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_CaptionPosition_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Enumeration of the annotation�s caption positioning.
/// </summary>
enum class CaptionPosition
{
    Inline,
    Top
};

class ASPOSE_PDF_SHARED_API CaptionPositionConverter : public System::Object
{
    typedef CaptionPositionConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(CaptionPosition value);
    static CaptionPosition ToEnum(System::String value);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CaptionPositionConverter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_CaptionPosition_h_

