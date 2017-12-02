#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_CaptionPosition_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_CaptionPosition_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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
    /// <summary>
    /// The caption will be centered inside the line (default value).
    /// </summary>
    Inline,
    /// <summary>
    /// The caption will be on top of the line.
    /// </summary>
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
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_CaptionPosition_h_

