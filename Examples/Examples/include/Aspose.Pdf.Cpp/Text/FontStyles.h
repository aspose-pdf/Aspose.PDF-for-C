#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Specifies style information applied to text.
/// </summary> 
/// <remarks>
/// This enumeration has a <see cref="FlagsAttribute"/> attribute that allows a combination of its member values. 
/// </remarks>
enum class FontStyles
{
    /// <summary>
    /// Regular text.
    /// </summary>
    Regular = 0x0,
    /// <summary>
    /// Bold text.
    /// </summary>
    Bold = 0x1,
    /// <summary>
    /// Italic text.
    /// </summary>
    Italic = 0x2
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Text::FontStyles);
DECLARE_USING_GLOBAL_OPERATORS

} // namespace Text
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Text);
template<>
struct EnumMetaInfo<Aspose::Pdf::Text::FontStyles>
{
    typedef void Flags;
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Text::FontStyles, const char_t*>, 3>& values();
};



