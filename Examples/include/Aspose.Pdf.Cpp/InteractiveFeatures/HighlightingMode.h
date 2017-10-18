#ifndef _Aspose_Pdf_InteractiveFeatures_HighlightingMode_h_
#define _Aspose_Pdf_InteractiveFeatures_HighlightingMode_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Enumerates the annotation�s highlighting mode, the visual effect to be used when the mouse button is pressed or held down inside its active area.
/// </summary>
enum class HighlightingMode
{
    None,
    Invert,
    Outline,
    Push,
    Toggle
};

class ASPOSE_PDF_SHARED_API HighlightingModeConverter : public System::Object
{
    typedef HighlightingModeConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(HighlightingMode value);
    static HighlightingMode ToEnum(System::String value);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "HighlightingModeConverter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_HighlightingMode_h_

