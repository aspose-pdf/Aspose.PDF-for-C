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
/// Specifies the style of dashed lines drawn with a <see cref="Pen"/> object.
/// </summary>
enum class DashStyle
{
    /// <summary>
    /// Specifies a solid line.
    /// </summary>
    Solid,
    /// <summary>
    /// Specifies a line consisting of dashes.
    /// </summary>
    Dash,
    /// <summary>
    /// Specifies a line consisting of dots.
    /// </summary>
    Dot,
    /// <summary>
    /// Specifies a line consisting of a repeating pattern of dash-dot.
    /// </summary>
    DashDot,
    /// <summary>
    /// Specifies a line consisting of a repeating pattern of dash-dot-dot.
    /// </summary>
    DashDotDot,
    /// <summary>
    /// Specifies a user-defined custom dash style.
    /// </summary>
    Custom
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::DashStyle>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::DashStyle, const char_t*>, 6>& values();
};



