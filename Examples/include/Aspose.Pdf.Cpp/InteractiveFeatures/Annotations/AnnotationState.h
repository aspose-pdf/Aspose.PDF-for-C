#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationState_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationState_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// The enumeration of states to which the original annotation can be set.
/// </summary>
enum class AnnotationState
{
    Undefined,
    Marked,
    Unmarked,
    Accepted,
    Rejected,
    Cancelled,
    Completed,
    None
};

class ASPOSE_PDF_SHARED_API AnnotationStateConverter : public System::Object
{
    typedef AnnotationStateConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(AnnotationState value);
    static AnnotationState ToEnum(System::String value);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "AnnotationStateConverter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationState_h_

