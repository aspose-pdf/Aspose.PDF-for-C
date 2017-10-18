#ifndef _Aspose_Pdf_Facades_DefaultMetadataProperties_h_
#define _Aspose_Pdf_Facades_DefaultMetadataProperties_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
    Advisory,
    BaseURL,
    CreateDate,
    CreatorTool,
    Identifier,
    MetadataDate,
    ModifyDate,
    Nickname,
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

