#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationType_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationType_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>
#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Enumeration of annotation types.
/// </summary>
enum class AnnotationType
{
    Text,
    Circle,
    Polygon,
    PolyLine,
    Line,
    Square,
    FreeText,
    Highlight,
    Underline,
    Squiggly,
    StrikeOut,
    Caret,
    Ink,
    Link,
    Popup,
    FileAttachment,
    Sound,
    Movie,
    Screen,
    Widget,
    Watermark,
    TrapNet,
    PrinterMark,
    Redaction,
    Stamp,
    Unknown
};

class ASPOSE_PDF_SHARED_API AnnotationTypeConverter : public System::Object
{
    typedef AnnotationTypeConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(AnnotationType value);
    static AnnotationType ToEnum(System::String value);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "AnnotationTypeConverter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType, const char_t*>, 26>& values();
};


#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_AnnotationType_h_

