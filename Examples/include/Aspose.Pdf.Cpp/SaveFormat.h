#ifndef _Aspose_Pdf_SaveFormat_h_
#define _Aspose_Pdf_SaveFormat_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

///<summary>
/// Specifies format 
///</summary>
enum class SaveFormat
{
    Pdf = 0,
    None = 0,
    Doc = 1,
    Xps = 2,
    Xml = 4,
    DocX = 6,
    MobiXml = 8,
    Excel = 9,
    Epub = 10,
    Plugin = 11
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::SaveFormat>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::SaveFormat, const char_t*>, 10>& values();
};


#endif // _Aspose_Pdf_SaveFormat_h_

