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
/// Specifies the type of graphic shape to use on both ends of each dash in a dashed line.
/// </summary>
enum class DashCap
{
    /// <summary>
    /// Specifies a square cap that squares off both ends of each dash.
    /// </summary>
    Flat = 0,
    /// <summary>
    /// Specifies a circular cap that rounds off both ends of each dash.
    /// </summary>
    Round = 2,
    /// <summary>
    /// Specifies a triangular cap that points both ends of each dash.
    /// </summary>
    Triangle = 3
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::DashCap>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::DashCap, const char_t*>, 3>& values();
};



