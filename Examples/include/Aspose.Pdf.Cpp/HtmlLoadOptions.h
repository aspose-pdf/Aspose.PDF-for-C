#ifndef _Aspose_Pdf_HtmlLoadOptions_h_
#define _Aspose_Pdf_HtmlLoadOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/dummy_classes.h>

#include "LoadOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageInfo; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing html file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API HtmlLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef HtmlLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    bool UseNewConversionEngine;
    
    /// <summary>
    /// Gets or sets the attribute specifying the encoding used for this document at the time of the parsing. If this attribute is null the encoding will determine from document character set atribute.
    /// </summary>
    System::String get_InputEncoding();
    /// <summary>
    /// Gets or sets the attribute specifying the encoding used for this document at the time of the parsing. If this attribute is null the encoding will determine from document character set atribute.
    /// </summary>
    void set_InputEncoding(System::String value);
    /// <summary>
    /// The base path/url for the html file.
    /// </summary>
    System::String get_BasePath();
    
    System::SharedPtr<System::Net::ICredentials> ExternalResourcesCredentials;
    LoadOptions::ResourceLoadingStrategy CustomLoaderOfExternalResources;
    
    /// <summary>
    /// Gets or sets document page info
    /// </summary>
    System::SharedPtr<Aspose::Pdf::PageInfo> get_PageInfo();
    /// <summary>
    /// Gets or sets document page info
    /// </summary>
    void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    
    /// <summary>
    /// Creates load options for converting html into pdf document with empty base path.
    /// </summary>
    HtmlLoadOptions();
    /// <summary>
    /// Creates load options for converting html into pdf document with defined base path.
    /// </summary>
    /// <param name="basePath">
    /// The base path/url for the html file.
    /// </param>
    HtmlLoadOptions(System::String basePath);
    
protected:

    /// <summary>
    /// Gets or sets the flag that controls visibility of fields borders (button, text, combobox).
    /// </summary>
    bool get_ShowFieldsBorders();
    /// <summary>
    /// Gets or sets the flag that controls visibility of fields borders (button, text, combobox).
    /// </summary>
    void set_ShowFieldsBorders(bool value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _basePath;
    System::String _inputEncoding;
    bool _showFieldsBorders;
    System::SharedPtr<Aspose::Pdf::PageInfo> _pageInfo;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_HtmlLoadOptions_h_

