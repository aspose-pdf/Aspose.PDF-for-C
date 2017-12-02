#ifndef _Aspose_Pdf_Facades_DefaultMetadataProperties_h_
#define _Aspose_Pdf_Facades_DefaultMetadataProperties_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Enumeration of standard XMP properties.
/// </summary>
enum class DefaultMetadataProperties
{
    /// <summary>
    /// xmp:Advisory property.
    /// An unordered array specifying properties that were edited outside the authoring application. Each item should contain a single          /// namespace and XPath separated by one ASCII space 
    /// </summary>
    Advisory,
    /// <summary>
    /// xmp:BaseURL property.
    /// The base URL for relative URLs in the document content. If this document contains Internet links, and those links are relative,          /// they are relative to this base URL. This property provides a standard way for embedded relative URLs to be interpreted by tools.        /// Web authoring tools should set the value based on their notion of where URLs will be interpreted
    /// </summary>
    BaseURL,
    /// <summary>
    /// xmp:CreateDate property.
    /// The date and time the resource was originally created.
    /// </summary>
    CreateDate,
    /// <summary>
    /// xmp:CreatorTool property.
    /// The name of the first known tool used to create the resource.
    /// </summary>
    CreatorTool,
    /// <summary>
    /// xmp:Identifier property.
    /// An unordered array of text strings that unambiguously 
    /// identify the resource within a given context
    /// </summary>
    Identifier,
    /// <summary>
    /// xmp:MetadataDate property.
    /// The date and time that any metadata for this resource 
    /// was last changed
    /// </summary>
    MetadataDate,
    /// <summary>
    /// xmp:ModifyDate property.
    /// The date and time the resource was last modified. 
    /// </summary>
    ModifyDate,
    /// <summary>
    /// xmp:Nickname property.
    /// A short informal name for the resource.
    /// </summary>
    Nickname,
    /// <summary>
    /// xmp:Thumbnails property.
    /// An alternative array of thumbnail images for a file, 
    /// which can differ in characteristics such as size or image 
    /// encoding.
    /// </summary>
    Thumbnails
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Facades::DefaultMetadataProperties>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Facades::DefaultMetadataProperties, const char_t*>, 9>& values();
};


#endif // _Aspose_Pdf_Facades_DefaultMetadataProperties_h_

