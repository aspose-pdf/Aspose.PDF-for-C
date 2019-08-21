#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/size_f.h>

#include "LoadOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Tests { namespace CGM { class CgmImportTests; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Contains options for loading/importing CGM file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API CgmLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef CgmLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::CGM::CgmImportTests;
    
public:

    /// <summary>
    /// Gets or sets output page size for import.
    /// </summary>
    System::Drawing::SizeF get_PageSize();
    
    /// <summary>
    /// Creates default load options for converting CGM file into pdf document. 
    /// Default pdf page size - A4 300dpi 2480 X 3508.
    /// </summary>
    CgmLoadOptions();
    /// <summary>
    /// Creates load options with defined <see cref="pageSize"/>.
    /// </summary>
    /// <param name="pageSize">
    /// Defines pdf page width and height.
    /// </param>
    CgmLoadOptions(System::Drawing::SizeF pageSize);
    
protected:

    bool UseExternalPdfRenderer;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::Drawing::SizeF _pageSize;
    
};

} // namespace Pdf
} // namespace Aspose


