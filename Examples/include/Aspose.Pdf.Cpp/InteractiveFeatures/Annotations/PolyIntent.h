#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_PolyIntent_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_PolyIntent_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Enumerates the intents of the polygon or polyline annotation.
/// </summary>
enum class PolyIntent
{
    /// <summary>
    /// Undefined state.
    /// </summary>
    Undefined,
    /// <summary>
    /// Means that the annotation is intended to function as a cloud object.
    /// </summary>
    PolygonCloud,
    /// <summary>
    /// Indicates that the polyline annotation is intended to function as a dimension.
    /// </summary>
    PolyLineDimension,
    /// <summary>
    /// Indicates that the polygon annotation is intended to function as a dimension.
    /// </summary>
    PolygonDimension
};

class ASPOSE_PDF_SHARED_API PolyIntentConverter : public System::Object
{
    typedef PolyIntentConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(PolyIntent value);
    static System::String ToXfdfString(PolyIntent value);
    static PolyIntent ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_PolyIntent_h_

