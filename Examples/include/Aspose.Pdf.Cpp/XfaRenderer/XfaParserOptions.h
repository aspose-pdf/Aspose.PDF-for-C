#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/uri.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/size_f.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Foundation { namespace UriResolver { class UriResolver; } } }

namespace Aspose {

namespace Pdf {

namespace XfaConverter {

/// <summary>
/// class to handle related data incapsulation
/// </summary>
class ASPOSE_PDF_SHARED_API XfaParserOptions : public System::Object
{
    typedef XfaParserOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets the URI resolver.
    /// </summary>
    /// <value>
    /// The URI resolver.
    /// </value>
    System::SharedPtr<Aspose::Foundation::UriResolver::UriResolver> get_UriResolver();
    /// <summary>
    /// Gets or sets the URI resolver.
    /// </summary>
    /// <value>
    /// The URI resolver.
    /// </value>
    void set_UriResolver(System::SharedPtr<Aspose::Foundation::UriResolver::UriResolver> value);
    /// <summary>
    /// Gets or sets the size of the page.
    /// </summary>
    /// <value>
    /// The size of the page.
    /// </value>
    System::Drawing::SizeF get_PageSize();
    /// <summary>
    /// Gets or sets the size of the page.
    /// </summary>
    /// <value>
    /// The size of the page.
    /// </value>
    void set_PageSize(System::Drawing::SizeF value);
    /// <summary>
    /// If this property is true then document will be converted with using of xfa form stream (if it exists).
    /// If it is false then xfa form stream will be ignored.
    /// This property was inrtoduced because it's not clear how to calculate check sum that used for checking sygnature.
    /// </summary>
    bool get_Signed();
    /// <summary>
    /// If this property is true then document will be converted with using of xfa form stream (if it exists).
    /// If it is false then xfa form stream will be ignored.
    /// This property was inrtoduced because it's not clear how to calculate check sum that used for checking sygnature.
    /// </summary>
    void set_Signed(bool value);
    /// <summary>
    /// If this property is true then additional red rectangles will be drawn for required Xfa "excluded groups"
    /// This property was introduced because absences of analogues of excluded groups during conversion Xfa representation of forms 
    /// to standard.
    /// It is false by default.
    /// </summary>
    bool get_EmulateRequierdGroups();
    /// <summary>
    /// If this property is true then additional red rectangles will be drawn for required Xfa "excluded groups"
    /// This property was introduced because absences of analogues of excluded groups during conversion Xfa representation of forms 
    /// to standard.
    /// It is false by default.
    /// </summary>
    void set_EmulateRequierdGroups(bool value);
    /// <summary>
    /// Gets or sets the base path.
    /// </summary>
    /// <value>
    /// The base path.
    /// </value>
    System::SharedPtr<System::Uri> get_BasePath();
    /// <summary>
    /// Gets or sets the base path.
    /// </summary>
    /// <value>
    /// The base path.
    /// </value>
    void set_BasePath(System::SharedPtr<System::Uri> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="XfaParserOptions"/> class.
    /// </summary>
    /// <param name="pageSize">Size of the page.</param>
    XfaParserOptions(System::Drawing::SizeF pageSize);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Foundation::UriResolver::UriResolver> uriResolver;
    System::SharedPtr<System::Uri> basePath;
    System::Drawing::SizeF _pageSize;
    bool _signed;
    bool pr_EmulateRequierdGroups;
    
};

} // namespace XfaConverter
} // namespace Pdf
} // namespace Aspose


