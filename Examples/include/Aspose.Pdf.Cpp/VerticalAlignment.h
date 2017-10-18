﻿#ifndef _Aspose_Pdf_VerticalAlignment_h_
#define _Aspose_Pdf_VerticalAlignment_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enumeration of possible vertical alignment values.
/// </summary>
enum class VerticalAlignment
{
    None,
    Top,
    Center,
    Bottom
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::VerticalAlignment>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::VerticalAlignment, const char_t*>, 4>& values();
};


#endif // _Aspose_Pdf_VerticalAlignment_h_

