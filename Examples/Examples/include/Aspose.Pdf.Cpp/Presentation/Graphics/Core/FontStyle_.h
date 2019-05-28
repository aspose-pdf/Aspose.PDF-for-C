#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !COMPACT 


#include <system/enum_helpers.h>
#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Specifies style information applied to text.
/// </summary>
enum class FontStyle
{
    /// <summary>
    /// Normal text.
    /// </summary>
    Regular = 0,
    /// <summary>
    /// Bold text.
    /// </summary>
    Bold = 1,
    /// <summary>
    /// Italic text.
    /// </summary>
    Italic = 2,
    /// <summary>
    /// Underlined text.
    /// </summary>
    Underline = 4,
    /// <summary>
    /// Text with a line through the middle.
    /// </summary>
    Strikeout = 8
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Engine::Presentation::Graphics::FontStyle);
DECLARE_USING_GLOBAL_OPERATORS

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Engine::Presentation::Graphics);
template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FontStyle>
{
    typedef void Flags;
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FontStyle, const char_t*>, 5>& values();
};



