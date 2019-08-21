#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !COMPACT 


#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Specifies how to trim characters from a string that does not completely fit into a layout shape.
/// </summary>
enum class StringTrimming
{
    /// <summary>
    /// Specifies no trimming.
    /// </summary>
    None,
    /// <summary>
    /// Specifies that the text is trimmed to the nearest character.
    /// </summary>
    Character,
    /// <summary>
    /// Specifies that text is trimmed to the nearest word.
    /// </summary>
    Word,
    /// <summary>
    /// Specifies that the text is trimmed to the nearest character, and an ellipsis is inserted at the end of a trimmed line.
    /// </summary>
    EllipsisCharacter,
    /// <summary>
    /// Specifies that text is trimmed to the nearest word, and an ellipsis is inserted at the end of a trimmed line.
    /// </summary>
    EllipsisWord,
    /// <summary>
    /// The center is removed from trimmed lines and replaced by an ellipsis. The algorithm keeps as much of the last slash-delimited segment of the line as possible.
    /// </summary>
    EllipsisPath
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::StringTrimming>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::StringTrimming, const char_t*>, 6>& values();
};



