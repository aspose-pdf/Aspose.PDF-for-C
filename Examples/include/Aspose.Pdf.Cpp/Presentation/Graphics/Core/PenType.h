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
/// Specifies the type of fill a <see cref="Pen"/> object uses to fill lines.
/// </summary>
enum class PenType
{
    /// <summary>
    /// Specifies a solid fill.
    /// </summary>
    SolidColor,
    /// <summary>
    /// Specifies a hatch fill.
    /// </summary>
    HatchFill,
    /// <summary>
    /// Specifies a bitmap texture fill.
    /// </summary>
    TextureFill,
    /// <summary>
    /// Specifies a path gradient fill.
    /// </summary>
    PathGradient,
    /// <summary>
    /// Specifies a linear gradient fill.
    /// </summary>
    LinearGradient
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::PenType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::PenType, const char_t*>, 5>& values();
};



