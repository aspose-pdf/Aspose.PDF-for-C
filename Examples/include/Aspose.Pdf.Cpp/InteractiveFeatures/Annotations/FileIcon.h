#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// An icon to be used in displaying the annotation.
/// </summary>
enum class FileIcon
{
    /// <summary>
    /// PushPin icon (default value).
    /// </summary>
    PushPin,
    /// <summary>
    /// Graph icon.
    /// </summary>
    Graph,
    /// <summary>
    /// Paperclip icon.
    /// </summary>
    Paperclip,
    /// <summary>
    /// This is tag icon.
    /// </summary>
    Tag
};


// C# preprocessor directive: #if __cplusplus 


// C# preprocessor directive: #else 


// C# preprocessor directive: #endif 

class ASPOSE_PDF_SHARED_API FileIconConverter : public System::Object
{
    typedef FileIconConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(FileIcon value);
    static FileIcon ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


