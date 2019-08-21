#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "UnifiedSaveOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to Xps format
/// </summary>
class ASPOSE_PDF_SHARED_API XpsSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef XpsSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Indicates whether to preserve transparent (OCR'ed) text.
    /// </summary>
    bool get_SaveTransparentTexts();
    /// <summary>
    /// Indicates whether to preserve transparent (OCR'ed) text.
    /// </summary>
    void set_SaveTransparentTexts(bool value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    XpsSaveOptions();
    
private:

    bool pr_SaveTransparentTexts;
    
};

} // namespace Pdf
} // namespace Aspose


