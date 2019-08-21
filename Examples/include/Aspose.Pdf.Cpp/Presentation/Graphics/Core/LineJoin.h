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
/// Specifies how to join consecutive line or curve segments in a figure (subpath) contained in a <see cref="GraphicsPath"/> object.
/// </summary>
enum class LineJoin
{
    /// <summary>
    /// Specifies a mitered join. This produces a sharp corner or a clipped corner, depending on whether the length of the miter exceeds the miter limit.
    /// </summary>
    Miter,
    /// <summary>
    /// Specifies a beveled join. This produces a diagonal corner.
    /// </summary>
    Bevel,
    /// <summary>
    /// Specifies a circular join. This produces a smooth, circular arc between the lines.
    /// </summary>
    Round,
    /// <summary>
    /// Specifies a mitered join. This produces a sharp corner or a beveled corner, depending on whether the length of the miter exceeds the miter limit.
    /// </summary>
    MiterClipped
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::LineJoin>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::LineJoin, const char_t*>, 4>& values();
};



