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
/// The tiff data type enum.
/// </summary>
enum class TiffDataTypes : uint16_t
{
    /// <summary>
    ///   8-bit unsigned integer.
    /// </summary>
    Byte = 1,
    /// <summary>
    ///   8-bit bytes with last byte <c>null</c>.
    /// </summary>
    Ascii = 2,
    /// <summary>
    ///   16-bit unsigned integer.
    /// </summary>
    Short = 3,
    /// <summary>
    ///   32-bit unsigned integer.
    /// </summary>
    Long = 4,
    /// <summary>
    ///   64-bit unsigned fraction.
    /// </summary>
    Rational = 5,
    /// <summary>
    ///   8-bit signed integer.
    /// </summary>
    Sbyte = 6,
    /// <summary>
    ///   8-bit untyped data.
    /// </summary>
    Undefined = 7,
    /// <summary>
    ///   16-bit signed integer.
    /// </summary>
    Sshort = 8,
    /// <summary>
    ///   32-bit signed integer.
    /// </summary>
    Slong = 9,
    /// <summary>
    ///   64-bit signed fraction.
    /// </summary>
    Srational = 10,
    /// <summary>
    ///   32-bit IEEE floating point.
    /// </summary>
    Float = 11,
    /// <summary>
    ///   64-bit IEEE floating point.
    /// </summary>
    Double = 12,
    /// <summary>
    /// Pointer to Exif image file directory (IFD).
    /// </summary>
    Ifd = 13
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
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffDataTypes>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffDataTypes, const char_t*>, 13>& values();
};



