#ifndef _Aspose_Pdf_EpubLoadOptions_h_
#define _Aspose_Pdf_EpubLoadOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/size_f.h>

#include "LoadOptions.h"

namespace Aspose { namespace Pdf { class MarginInfo; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Contains options for loading/importing EPUB file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API EpubLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef EpubLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets output page size for import.
    /// </summary>
    System::Drawing::SizeF get_PageSize();
    /// <summary>
    /// Gets reference on object that represent marging info.
    /// </summary>
    System::SharedPtr<MarginInfo> get_Margin();
    
    /// <summary>
    /// Creates default load options for converting EPUB file into pdf document. 
    /// Default pdf page size - A4 300dpi 2480 X 3508.
    /// </summary>
    EpubLoadOptions();
    /// <summary>
    /// Creates load options with specified page size.
    /// </summary>
    /// <param name="pageSize">
    /// Defines pdf page width and height.
    /// </param>
    EpubLoadOptions(System::Drawing::SizeF pageSize);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::Drawing::SizeF _pageSize;
    System::SharedPtr<MarginInfo> _marginInfo;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_EpubLoadOptions_h_

