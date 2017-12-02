#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_BorderEffect_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_BorderEffect_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Describes effect which should be applied to the border of the annotations.
/// </summary>
enum class BorderEffect
{
    /// <summary>
    /// No effect.
    /// </summary>
    None,
    /// <summary>
    /// The border will appear "cloudly".
    /// </summary>
    Cloudy
};

class ASPOSE_PDF_SHARED_API BorderEffectConverter : public System::Object
{
    typedef BorderEffectConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(BorderEffect value);
    static System::String ToXfdfString(BorderEffect value);
    static BorderEffect ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_BorderEffect_h_

