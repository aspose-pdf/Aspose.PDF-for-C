#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "LoadOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing of .mht-file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API MhtLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef MhtLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates load options for converting html into pdf document with empty base path.
    /// </summary>
    MhtLoadOptions();
    
protected:

    /// <summary>
    /// Gets or sets the flag that controls visibility of fields borders (button, text, combobox).
    /// </summary>
    bool get_ShowFieldsBorders();
    /// <summary>
    /// Gets or sets the flag that controls visibility of fields borders (button, text, combobox).
    /// </summary>
    void set_ShowFieldsBorders(bool value);
    
    System::String TargetFolderIfAny;
    
private:

    bool _showFieldsBorders;
    
};

} // namespace Pdf
} // namespace Aspose


