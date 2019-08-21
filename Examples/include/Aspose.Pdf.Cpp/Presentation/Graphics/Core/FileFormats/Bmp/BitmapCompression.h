#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace FileFormats {

namespace Bmp {

/// <summary>
/// Specifies different bitmap compression methods.
/// </summary>
enum class BitmapCompression : uint32_t
{
    /// <summary>
    /// No compression.
    /// </summary>
    Rgb,
    /// <summary>
    /// RLE 8-bit/pixel compression. Can be used only with 8-bit/pixel bitmaps.
    /// </summary>
    Rle8,
    /// <summary>
    /// RLE 4-bit/pixel compression. Can be used only with 4-bit/pixel bitmaps.
    /// </summary>
    Rle4,
    /// <summary>
    /// RGB bit fields. Can be used only with 16 and 32-bit/pixel bitmaps.
    /// </summary>
    Bitfields,
    /// <summary>
    /// JPEG compression. The bitmap contains a JPEG image.
    /// </summary>
    Jpeg,
    /// <summary>
    /// PNG compression. The bitmap contains a PNG image.
    /// </summary>
    Png,
    /// <summary>
    /// RGBA bit fields. Can be used only with 16 and 32-bit/pixel bitmaps.
    /// </summary>
    AlphaBitfields
};

} // namespace Bmp
} // namespace FileFormats
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


