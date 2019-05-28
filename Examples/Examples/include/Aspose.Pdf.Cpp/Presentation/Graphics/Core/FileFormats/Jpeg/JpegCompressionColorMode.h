#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace FileFormats {

namespace Jpeg {

/// <summary>
///     Сolor mode for jpeg images.
/// </summary>
enum class JpegCompressionColorMode
{
    /// <summary>
    ///     The Grayscale image.
    /// </summary>
    Grayscale,
    /// <summary>
    ///     YCbCr image, standard option for jpeg images.
    /// </summary>
    YCbCr,
    /// <summary>
    ///     4-component CMYK image.
    /// </summary>
    Cmyk,
    /// <summary>
    ///     The ycck color jpeg image. Needs icc profile for saving.
    /// </summary>
    Ycck,
    /// <summary>
    /// The RGB Color mode.
    /// </summary>
    Rgb
};

} // namespace Jpeg
} // namespace FileFormats
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


