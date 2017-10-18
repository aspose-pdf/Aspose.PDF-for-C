#ifndef _Aspose_Pdf_HorizontalAlignment_h_
#define _Aspose_Pdf_HorizontalAlignment_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Describes horizontal alignment.
/// </summary>
enum class HorizontalAlignment
{
    None,
    Left,
    Center,
    Right,
    Justify,
    FullJustify
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::HorizontalAlignment>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::HorizontalAlignment, const char_t*>, 6>& values();
};


#endif // _Aspose_Pdf_HorizontalAlignment_h_

