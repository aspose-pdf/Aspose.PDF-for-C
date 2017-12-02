#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_LineEnding_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_LineEnding_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Enumerates the line ending styles to be used in drawing the line.
/// </summary>
enum class LineEnding
{
    /// <summary>
    /// No line ending.
    /// </summary>
    None,
    /// <summary>
    /// A square filled with the annotation�s interior color, if any.
    /// </summary>
    Square,
    /// <summary>
    /// A circle filled with the annotation�s interior color, if any.
    /// </summary>
    Circle,
    /// <summary>
    /// A diamond shape filled with the annotation�s interior color, if any.
    /// </summary>
    Diamond,
    /// <summary>
    /// Two short lines meeting in an acute angle to form an open arrowhead.
    /// </summary>
    OpenArrow,
    /// <summary>
    /// Two short lines meeting in an acute angle as in the OpenArrow style and connected by a third line to form a triangular closed arrowhead filled with the annotation�s interior color, if any.
    /// </summary>
    ClosedArrow,
    /// <summary>
    /// A short line at the endpoint perpendicular to the line itself.
    /// </summary>
    Butt,
    /// <summary>
    /// Two short lines in the reverse direction from OpenArrow.
    /// </summary>
    ROpenArrow,
    /// <summary>
    /// A triangular closed arrowhead in the reverse direction from ClosedArrow.
    /// </summary>
    RClosedArrow,
    /// <summary>
    /// A short line at the endpoint approximately 30 degrees clockwise from perpendicular to the line itself.
    /// </summary>
    Slash
};

class ASPOSE_PDF_SHARED_API LineEndingConverter : public System::Object
{
    typedef LineEndingConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(LineEnding value);
    static LineEnding ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_LineEnding_h_

