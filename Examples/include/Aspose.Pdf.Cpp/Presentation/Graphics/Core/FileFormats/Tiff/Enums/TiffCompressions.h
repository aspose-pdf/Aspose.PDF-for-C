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
/// Holds compression types
/// </summary>
enum class TiffCompressions : uint16_t
{
    /// <summary>
    ///   Dump mode.
    /// </summary>
    None = 1,
    /// <summary>
    ///   CCITT modified Huffman RLE.
    /// </summary>
    CcittRle = 2,
    /// <summary>
    ///   CCITT Group 3 fax encoding.
    /// </summary>
    CcittFax3 = 3,
    /// <summary>
    ///   CCITT Group 4 fax encoding.
    /// </summary>
    CcittFax4 = 4,
    /// <summary>
    ///   Lempel-Ziv &amp; Welch.
    /// </summary>
    Lzw = 5,
    /// <summary>
    ///   Original JPEG / Old-style JPEG (6.0).
    /// </summary>
    Ojpeg = 6,
    /// <summary>
    ///   JPEG DCT compression. Introduced post TIFF rev 6.0.
    /// </summary>
    Jpeg = 7,
    /// <summary>
    ///   NeXT 2-bit RLE.
    /// </summary>
    Next = 32766,
    /// <summary>
    ///   CCITT RLE.
    /// </summary>
    CcittRleW = 32771,
    /// <summary>
    ///   Macintosh RLE.
    /// </summary>
    Packbits = 32773,
    /// <summary>
    ///   ThunderScan RLE.
    /// </summary>
    Thunderscan = 32809,
    /// <summary>
    ///   IT8 CT w/padding. Reserved for ANSI IT8 TIFF/IT.
    /// </summary>
    It8Ctpad = 32895,
    /// <summary>
    ///   IT8 Linework RLE. Reserved for ANSI IT8 TIFF/IT.
    /// </summary>
    It8Lw = 32896,
    /// <summary>
    ///   IT8 Monochrome picture. Reserved for ANSI IT8 TIFF/IT.
    /// </summary>
    It8Mp = 32897,
    /// <summary>
    ///   IT8 Binary line art. Reserved for ANSI IT8 TIFF/IT.
    /// </summary>
    It8Bl = 32898,
    /// <summary>
    ///   Pixar companded 10bit LZW. Reserved for Pixar.
    /// </summary>
    PixarFilm = 32908,
    /// <summary>
    ///   Pixar companded 11bit ZIP. Reserved for Pixar.
    /// </summary>
    PixarLog = 32909,
    /// <summary>
    ///   Deflate compression.
    /// </summary>
    Deflate = 32946,
    /// <summary>
    ///   Deflate compression, as recognized by Adobe.
    /// </summary>
    AdobeDeflate = 8,
    /// <summary>
    ///   Kodak DCS encoding.
    ///   Reserved for Oceana Matrix 
    /// </summary>
    Dcs = 32947,
    /// <summary>
    ///  ISO Jpeg big.
    /// </summary>
    Jbig = 34661,
    /// <summary>
    ///   SGI Log Luminance RLE.
    /// </summary>
    Sgilog = 34676,
    /// <summary>
    ///   SGI Log 24-bit packed.
    /// </summary>
    Sgilog24 = 34677,
    /// <summary>
    ///   Leadtools JPEG2000.
    /// </summary>
    Jp2000 = 34712
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
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffCompressions>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffCompressions, const char_t*>, 24>& values();
};



