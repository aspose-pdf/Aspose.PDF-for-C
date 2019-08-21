#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

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
/// The expected tiff file format.
/// </summary>
enum class TiffExpectedFormat
{
    /// <summary>
    /// The default tiff format is no compression with B/W 1 bit per pixel only format. You can also use this setting to get an empty options and initialize with your tags or other settings.
    /// </summary>
    Default,
    /// <summary>
    /// The tiff having LZW compression and B/W 1 bit per pixel only format.
    /// </summary>
    TiffLzwBw,
    /// <summary>
    /// The tiff having LZW compression and RGB color format.
    /// </summary>
    TiffLzwRgb,
    /// <summary>
    /// The tiff having LZW compression and RGBA with transparency color format.
    /// </summary>
    TiffLzwRgba,
    /// <summary>
    /// The tiff LZW cmyk
    /// </summary>
    TiffLzwCmyk,
    /// <summary>
    /// The tiff CCITT FAX3 encoding. B/W 1 bit per pixel only supported for that scheme.
    /// </summary>
    TiffCcittFax3,
    /// <summary>
    /// The tiff CCITT FAX4 encoding. B/W 1 bit per pixel only supported for that scheme.
    /// </summary>
    TiffCcittFax4,
    /// <summary>
    /// The tiff having deflate compression and B/W 1 bit per pixel only format.
    /// </summary>
    TiffDeflateBw,
    /// <summary>
    /// The tiff having deflate compression and RGB color format.
    /// </summary>
    TiffDeflateRgb,
    /// <summary>
    /// The tiff having deflate compression and RGBA color format.
    /// </summary>
    TiffDeflateRgba,
    /// <summary>
    /// The tiff CCITT RLE encoding. B/W 1 bit per pixel only supported for that scheme.
    /// </summary>
    TiffCcitRle,
    /// <summary>
    /// The tiff having Jpeg compression and RGB color format.
    /// </summary>
    TiffJpegRgb,
    /// <summary>
    /// The tiff having Jpeg compression and YCBCR color format.
    /// </summary>
    TiffJpegYCbCr,
    /// <summary>
    /// The uncompressed tiff and B/W 1 bit per pixel only format.
    /// </summary>
    TiffNoCompressionBw,
    /// <summary>
    /// The uncompressed tiff and RGB color format.
    /// </summary>
    TiffNoCompressionRgb,
    /// <summary>
    /// The uncompressed tiff and RGBA with transparency color format.
    /// </summary>
    TiffNoCompressionRgba
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
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffExpectedFormat>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffExpectedFormat, const char_t*>, 16>& values();
};



