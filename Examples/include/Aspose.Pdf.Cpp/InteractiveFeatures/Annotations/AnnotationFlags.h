#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationFlags_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationFlags_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>
#include <system/enum_helpers.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// A set of flags specifying various characteristics of the annotation.
/// </summary>
enum class AnnotationFlags
{
    Default = 0,
    Invisible = 1,
    Hidden = 2,
    Print = 4,
    NoZoom = 8,
    NoRotate = 16,
    NoView = 32,
    ReadOnly = 64,
    Locked = 128,
    ToggleNoView = 256,
    LockedContents = 512
};

class ASPOSE_PDF_SHARED_API AnnotationFlagsConverter : public System::Object
{
    typedef AnnotationFlagsConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(AnnotationFlags value);
    static System::String ToXfdfString(AnnotationFlags value);
    static AnnotationFlags ToEnum(System::String value);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "AnnotationFlagsConverter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

DECLARE_ENUM_OPERATORS(Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationFlags);


#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationFlags_h_

