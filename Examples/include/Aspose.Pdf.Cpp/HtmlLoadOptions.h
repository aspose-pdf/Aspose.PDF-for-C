#ifndef _Aspose_Pdf_HtmlLoadOptions_h_
#define _Aspose_Pdf_HtmlLoadOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
    
    System::String get_InputEncoding();
    void set_InputEncoding(System::String value);
    System::String get_BasePath();
    
    System::SharedPtr<System::Net::ICredentials> ExternalResourcesCredentials;
    LoadOptions::ResourceLoadingStrategy CustomLoaderOfExternalResources;
    
    System::SharedPtr<Aspose::Pdf::PageInfo> get_PageInfo();
    void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    
    HtmlLoadOptions();
    HtmlLoadOptions(System::String basePath);
    
protected:

    bool get_ShowFieldsBorders();
    void set_ShowFieldsBorders(bool value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "HtmlLoadOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _basePath;
    System::String _inputEncoding;
    bool _showFieldsBorders;
    System::SharedPtr<Aspose::Pdf::PageInfo> _pageInfo;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_HtmlLoadOptions_h_

