﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enumeration of supported page numbering style for PageLabel class.
/// </summary>
enum class NumberingStyle
{
    /// <summary>
    /// Arabic decimal numbers.
    /// </summary>
    NumeralsArabic,
    /// <summary>
    /// Uppercase roman numbers (I, II, III...).
    /// </summary>
    NumeralsRomanUppercase,
    /// <summary>
    /// Lowercase roman numbers (i, ii, iii...).
    /// </summary>
    NumeralsRomanLowercase,
    /// <summary>
    /// Uppercase latin letters (A, B, C...).
    /// </summary>
    LettersUppercase,
    /// <summary>
    /// Lowercase latin letters (a, b, c...).
    /// </summary>
    LettersLowercase,
    /// <summary>
    /// No numbering.
    /// </summary>
    None
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::NumberingStyle>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::NumberingStyle, const char_t*>, 6>& values();
};



