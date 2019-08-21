#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <net/icredentials.h>

#include "LoadOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class HtmlFragment; } }
namespace Aspose { namespace Pdf { enum class HtmlMediaType; } }
namespace Aspose { namespace Pdf { class PageInfo; } }
namespace Aspose { namespace Html { namespace Drawing { class Size; } } }

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
    
    friend class Aspose::Pdf::HtmlFragment;
    
public:

    /// <summary>
    /// Gets rendering all document to single page
    /// </summary>
    bool get_IsRenderToSinglePage();
    /// <summary>
    /// Sets rendering all document to single page
    /// </summary>
    void set_IsRenderToSinglePage(bool value);
    /// <summary>
    /// Gets fonts embedding to result document
    /// </summary>
    bool get_IsEmbedFonts();
    /// <summary>
    /// Sets fonts embedding to result document
    /// </summary>
    void set_IsEmbedFonts(bool value);
    /// <summary>
    /// Gets possible media types used during rendering.
    /// </summary>
    Aspose::Pdf::HtmlMediaType get_HtmlMediaType();
    /// <summary>
    /// Sets possible media types used during rendering.
    /// </summary>
    void set_HtmlMediaType(Aspose::Pdf::HtmlMediaType value);
    /// <summary>
    /// Gets the attribute specifying the encoding used for this document at the time of the parsing. If this attribute is null the encoding will determine from document character set atribute.
    /// </summary>
    System::String get_InputEncoding();
    /// <summary>
    /// Sets the attribute specifying the encoding used for this document at the time of the parsing. If this attribute is null the encoding will determine from document character set atribute.
    /// </summary>
    void set_InputEncoding(System::String value);
    /// <summary>
    /// The base path/url for the html file.
    /// </summary>
    System::String get_BasePath();
    
    System::SharedPtr<System::Net::ICredentials> ExternalResourcesCredentials;
    LoadOptions::ResourceLoadingStrategy CustomLoaderOfExternalResources;
    
    /// <summary>
    /// Gets document page info
    /// </summary>
    System::SharedPtr<Aspose::Pdf::PageInfo> get_PageInfo();
    /// <summary>
    /// Sets document page info
    /// </summary>
    void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    /// <summary>
    /// Option for converting HTML to PDF with supporting tagged pdf
    /// </summary>
    bool get_isPdfUaConverting();
    /// <summary>
    /// Option for converting HTML to PDF with supporting tagged pdf
    /// </summary>
    void set_isPdfUaConverting(bool value);
    
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
    /// Gets the flag that controls visibility of fields borders (button, text, combobox).
    /// </summary>
    bool get_ShowFieldsBorders();
    /// <summary>
    /// Sets the flag that controls visibility of fields borders (button, text, combobox).
    /// </summary>
    void set_ShowFieldsBorders(bool value);
    System::SharedPtr<Aspose::Html::Drawing::Size> get_FirstSize();
    void set_FirstSize(System::SharedPtr<Aspose::Html::Drawing::Size> value);
    System::SharedPtr<Aspose::Html::Drawing::Size> get_AnySize();
    void set_AnySize(System::SharedPtr<Aspose::Html::Drawing::Size> value);
    System::SharedPtr<Aspose::Html::Drawing::Size> get_LastSize();
    void set_LastSize(System::SharedPtr<Aspose::Html::Drawing::Size> value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool pr_IsRenderToSinglePage;
    bool pr_IsEmbedFonts;
    Aspose::Pdf::HtmlMediaType pr_HtmlMediaType;
    System::String pr_InputEncoding;
    bool _showFieldsBorders;
    System::String pr_BasePath;
    System::SharedPtr<Aspose::Pdf::PageInfo> _pageInfo;
    bool pr_isPdfUaConverting;
    System::SharedPtr<Aspose::Html::Drawing::Size> pr_FirstSize;
    System::SharedPtr<Aspose::Html::Drawing::Size> pr_AnySize;
    System::SharedPtr<Aspose::Html::Drawing::Size> pr_LastSize;
    
};

} // namespace Pdf
} // namespace Aspose


