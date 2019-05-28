#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "SaveOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to Pdf format
/// </summary>
class ASPOSE_PDF_SHARED_API PdfSaveOptions : public Aspose::Pdf::SaveOptions
{
    typedef PdfSaveOptions ThisType;
    typedef Aspose::Pdf::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Font name used by default for fonts which are absent on computer.
    /// When the PDF document that is saved into PDF contains fonts, that are not available 
    /// in the document itself and on the device, API replaces this fonts with the 
    /// default font(if font with <see cref="DefaultFontName"/> is found on device)
    /// </summary>
    System::String get_DefaultFontName();
    /// <summary>
    /// Font name used by default for fonts which are absent on computer.
    /// When the PDF document that is saved into PDF contains fonts, that are not available 
    /// in the document itself and on the device, API replaces this fonts with the 
    /// default font(if font with <see cref="DefaultFontName"/> is found on device)
    /// </summary>
    void set_DefaultFontName(System::String value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    PdfSaveOptions();
    
private:

    System::String pr_DefaultFontName;
    
};

} // namespace Pdf
} // namespace Aspose


