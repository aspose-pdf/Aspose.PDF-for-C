#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// The paper handling option to use when printing the file from the print dialog..
/// </summary>
enum class PrintDuplex
{
    /// <summary>
    /// Print single-sided.
    /// </summary>
    Simplex,
    /// <summary>
    /// Duplex and flip on the short edge of the sheet.
    /// </summary>
    DuplexFlipShortEdge,
    /// <summary>
    /// Duplex and flip on the long edge of the sheet.
    /// </summary>
    DuplexFlipLongEdge
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_API PrintDuplexConverter : public System::Object
{
    typedef PrintDuplexConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(PrintDuplex value);
    static PrintDuplex ToEnum(System::String value);
    
};

} // namespace Pdf
} // namespace Aspose


