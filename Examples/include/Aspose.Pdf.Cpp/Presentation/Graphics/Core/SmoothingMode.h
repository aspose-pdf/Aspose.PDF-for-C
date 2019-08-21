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
/// Specifies whether smoothing (antialiasing) is applied to lines and curves and the edges of filled areas.
/// </summary>
enum class SmoothingMode
{
    /// <summary>
    /// Specifies an invalid mode.
    /// </summary>
    Invalid = -1,
    /// <summary>
    /// Specifies no antialiasing.
    /// </summary>
    Default = 0,
    /// <summary>
    /// Specifies no antialiasing.
    /// </summary>
    HighSpeed = 1,
    /// <summary>
    /// Specifies antialiased rendering.
    /// </summary>
    HighQuality = 2,
    /// <summary>
    /// Specifies no antialiasing.
    /// </summary>
    None = 3,
    /// <summary>
    /// Specifies antialiased rendering.
    /// </summary>
    AntiAlias = 4
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::SmoothingMode>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::SmoothingMode, const char_t*>, 6>& values();
};



