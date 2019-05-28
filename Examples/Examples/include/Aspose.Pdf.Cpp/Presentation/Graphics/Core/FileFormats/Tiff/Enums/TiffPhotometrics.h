#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace FileFormats {

namespace Tiff {

namespace Enums {

/// <summary>
/// Photometric interpolation enum 
/// </summary>
enum class TiffPhotometrics : uint16_t
{
    /// <summary>
    /// Min value is white.
    /// </summary>
    MinIsWhite = 0,
    /// <summary>
    /// Min value is black.
    /// </summary>
    MinIsBlack = 1,
    /// <summary>
    /// RGB color model.
    /// </summary>
    Rgb = 2,
    /// <summary>
    /// Color map indexed.
    /// </summary>
    Palette = 3,
    /// <summary>
    /// [obsoleted by TIFF rev. 6.0] Holdout mask.
    /// </summary>
    Mask = 4,
    /// <summary>
    /// Color separations.
    /// </summary>
    Separated = 5,
    /// <summary>
    /// The CCIR 601.
    /// </summary>
    Ycbcr = 6,
    /// <summary>
    /// 1976 CIE L*a*b*.
    /// </summary>
    Cielab = 8,
    /// <summary>
    /// ICC L*a*b*. Introduced post TIFF rev 6.0 by Adobe TIFF Technote 4.
    /// </summary>
    Icclab = 9,
    /// <summary>
    /// ITU L*a*b*.
    /// </summary>
    Itulab = 10,
    /// <summary>
    /// CIE Log2(L).
    /// </summary>
    Logl = 32844,
    /// <summary>
    /// CIE Log2(L) (u',v').
    /// </summary>
    Logluv = 32845
};

} // namespace Enums
} // namespace Tiff
} // namespace FileFormats
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffPhotometrics>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffPhotometrics, const char_t*>, 12>& values();
};



