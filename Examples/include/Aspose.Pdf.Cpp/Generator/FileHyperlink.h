#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Generator/Hyperlink.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents file hyperlink object.
/// </summary>
class ASPOSE_PDF_SHARED_API FileHyperlink FINAL : public Aspose::Pdf::Hyperlink
{
    typedef FileHyperlink ThisType;
    typedef Aspose::Pdf::Hyperlink BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the path to file.
    /// </summary>
    System::String get_Path();
    /// <summary>
    /// Sets the path to file.
    /// </summary>
    void set_Path(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="FileHyperlink"/> class.
    /// </summary>
    FileHyperlink();
    /// <summary>
    /// Initializes a new instance of the <see cref="FileHyperlink"/> class.
    /// </summary>
    /// <param name="path">Path to file.</param>
    FileHyperlink(System::String path);
    
private:

    System::String path;
    
};

} // namespace Pdf
} // namespace Aspose


