#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// A symbol to be associated with the caret.
/// </summary>
enum class CaretSymbol
{
    /// <summary>
    /// No symbol should be associated with the caret.
    /// </summary>
    None,
    /// <summary>
    /// A new paragraph symbol (�) should be associated with the caret.
    /// </summary>
    Paragraph
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_API CaretSymbolConverter : public System::Object
{
    typedef CaretSymbolConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(CaretSymbol value);
    static System::String ToXfdfString(CaretSymbol value);
    static CaretSymbol ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


