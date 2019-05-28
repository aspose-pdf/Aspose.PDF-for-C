﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Supported font types enumeration.
/// </summary> 
enum class FontTypes
{
    /// <summary>
    /// TTF font type
    /// </summary>
    TTF = 0x0,
    /// <summary>
    /// OTF font type
    /// </summary>
    OTF = 0x1
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Text::FontTypes>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Text::FontTypes, const char_t*>, 2>& values();
};



