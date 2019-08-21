#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

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


// C# preprocessor directive: #if __cplusplus 


// C# preprocessor directive: #else 


// C# preprocessor directive: #endif 

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
} // namespace Pdf
} // namespace Aspose


