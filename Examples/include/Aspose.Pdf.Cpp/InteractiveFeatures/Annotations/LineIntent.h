#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_LineIntent_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_LineIntent_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Enumerates the intents of the line annotation.
/// </summary>
enum class LineIntent
{
    /// <summary>
    /// Undefined state.
    /// </summary>
    Undefined,
    /// <summary>
    /// Means that the annotation is intended to function as an arrow.
    /// </summary>
    LineArrow,
    /// <summary>
    /// Means that the annotation is intended to function as a dimension line.
    /// </summary>
    LineDimension
};

class ASPOSE_PDF_SHARED_API LineIntentConverter : public System::Object
{
    typedef LineIntentConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(LineIntent value);
    static System::String ToXfdfString(LineIntent value);
    static LineIntent ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_LineIntent_h_

