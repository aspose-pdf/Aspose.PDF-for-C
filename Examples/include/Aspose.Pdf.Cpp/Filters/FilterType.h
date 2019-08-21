#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Filters {

/// <summary>
/// 
/// </summary>
enum class FilterType
{
    /// <summary>
    /// 
    /// </summary>
    None,
    /// <summary>
    /// 
    /// </summary>
    LZWDecode,
    /// <summary>
    /// 
    /// </summary>
    FlateDecode,
    /// <summary>
    /// 
    /// </summary>
    ASCIIHexDecode,
    /// <summary>
    /// 
    /// </summary>
    ASCII85Decode,
    /// <summary>
    /// 
    /// </summary>
    CCITTFaxDecode,
    /// <summary>
    /// 
    /// </summary>
    RunLengthDecode,
    /// <summary>
    /// 
    /// </summary>
    JBIG2Decode,
    /// <summary>
    /// 
    /// </summary>
    DCTDecode,
    /// <summary>
    /// 
    /// </summary>
    JPXDecode,
    /// <summary>
    /// 
    /// </summary>
    Crypt,
    /// <summary>
    /// 
    /// </summary>
    Composite
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_API FilterTypeConverter : public System::Object
{
    typedef FilterTypeConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(FilterType value);
    static FilterType ToEnum(System::String value);
    
};

} // namespace Filters
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


