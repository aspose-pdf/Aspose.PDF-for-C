#ifndef _Aspose_Pdf_InteractiveFeatures_Justification_h_
#define _Aspose_Pdf_InteractiveFeatures_Justification_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Enumerates the forms of quadding (justification) to be used in displaying the annotation�s text.
/// </summary>
enum class Justification
{
    Left = 0,
    Center = 1,
    Right = 2
};

class ASPOSE_PDF_SHARED_API JustificationConverter : public System::Object
{
    typedef JustificationConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToXfdfString(Justification value);
    static Justification ToEnum(System::String value);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "JustificationConverter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Justification_h_

