#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// The pixel data format actual meaning.
/// </summary>
enum class PixelFormat
{
    /// <summary>
    /// The grayscale color space
    /// </summary>
    Grayscale,
    /// <summary>
    /// The BGR color space.
    /// </summary>
    Bgr,
    /// <summary>
    /// The RGB color space.
    /// </summary>
    Rgb,
    /// <summary>
    /// The YCbCr color space.
    /// </summary>
    YCbCr,
    /// <summary>
    /// The CMYK color space.
    /// </summary>
    Cmyk,
    /// <summary>
    /// The YCCK color space.
    /// </summary>
    Ycck
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::PixelFormat>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::PixelFormat, const char_t*>, 6>& values();
};



