#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Text direction.
/// </summary>
enum class Direction
{
    /// <summary>
    /// Left to right direction.
    /// </summary>
    L2R,
    /// <summary>
    /// Right to left direction.
    /// </summary>
    R2L
};


// C# preprocessor directive: #if __cplusplus 


// C# preprocessor directive: #else 


// C# preprocessor directive: #endif 

class ASPOSE_PDF_SHARED_API DirectionConverter : public System::Object
{
    typedef DirectionConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(Direction value);
    static Direction ToEnum(System::String value);
    
};

} // namespace Pdf
} // namespace Aspose


