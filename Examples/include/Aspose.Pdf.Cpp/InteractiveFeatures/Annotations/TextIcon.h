﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enumerates the icons to be used in displaying the annotation.
/// </summary>
enum class TextIcon
{
    /// <summary>
    /// Note icon.
    /// </summary>
    Note,
    /// <summary>
    /// Comment icon.
    /// </summary>
    Comment,
    /// <summary>
    /// Key    icon.
    /// </summary>
    Key,
    /// <summary>
    /// Help icon.
    /// </summary>
    Help,
    /// <summary>
    /// NewParagraph icon.
    /// </summary>
    NewParagraph,
    /// <summary>
    /// Paragraph icon.
    /// </summary>
    Paragraph,
    /// <summary>
    /// Insert icon.
    /// </summary>
    Insert,
    /// <summary>
    /// Check icon.
    /// </summary>
    Check,
    /// <summary>
    /// Cross icon.
    /// </summary>
    Cross,
    /// <summary>
    /// Circle icon.
    /// </summary>
    Circle,
    /// <summary>
    /// Star icon.
    /// </summary>
    Star
};


// C# preprocessor directive: #if __cplusplus 


// C# preprocessor directive: #else 


// C# preprocessor directive: #endif 

class ASPOSE_PDF_SHARED_API TextIconConverter : public System::Object
{
    typedef TextIconConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(TextIcon value);
    static TextIcon ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


