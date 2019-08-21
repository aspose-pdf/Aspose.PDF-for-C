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
/// Specifies the available cap styles with which a <see cref="Pen"/> object can end a line.
/// </summary>
enum class LineCap
{
    /// <summary>
    /// Specifies a flat line cap.
    /// </summary>
    Flat = 0,
    /// <summary>
    /// Specifies a square line cap.
    /// </summary>
    Square = 1,
    /// <summary>
    /// Specifies a round line cap.
    /// </summary>
    Round = 2,
    /// <summary>
    /// Specifies a triangular line cap.
    /// </summary>
    Triangle = 3,
    /// <summary>
    /// Specifies no anchor.
    /// </summary>
    NoAnchor = 16,
    /// <summary>
    /// Specifies a square anchor line cap.
    /// </summary>        
    SquareAnchor = 17,
    /// <summary>
    /// Specifies a round anchor cap.
    /// </summary>
    RoundAnchor = 18,
    /// <summary>
    /// Specifies a diamond anchor cap.
    /// </summary>
    DiamondAnchor = 19,
    /// <summary>
    /// Specifies an arrow-shaped anchor cap.
    /// </summary>
    ArrowAnchor = 20,
    /// <summary>
    /// Specifies a custom line cap.
    /// </summary>
    AnchorMask = 240,
    /// <summary>
    /// Specifies a mask used to check whether a line cap is an anchor cap.
    /// </summary>
    Custom = 255
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::LineCap>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::LineCap, const char_t*>, 11>& values();
};



