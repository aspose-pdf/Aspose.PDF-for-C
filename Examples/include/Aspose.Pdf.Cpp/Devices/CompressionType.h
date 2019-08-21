#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Used to specify the parameter value passed to a Tiff image device.
/// </summary>
enum class CompressionType
{
    /// <summary>
    /// Specifies the LZW compression scheme. Can be passed to the Tiff encoder as a parameter that belongs to the Compression category.
    /// </summary>
    LZW,
    /// <summary>
    /// Specifies the CCITT4 compression scheme. Can be passed to the CCITT4 encoder as a parameter that belongs to the Compression category.
    /// </summary>
    CCITT4,
    /// <summary>
    /// Specifies the CCITT3 compression scheme. Can be passed to the CCITT3 encoder as a parameter that belongs to the Compression category.
    /// </summary>
    CCITT3,
    /// <summary>
    /// Specifies the RLE compression scheme. Can be passed to the RLE encoder as a parameter that belongs to the Compression category.
    /// </summary>
    RLE,
    /// <summary>
    /// Specifies no compression. Can be passed to the Tiff encoder as a parameter that belongs to the compression category.
    /// </summary>
    None
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Devices::CompressionType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Devices::CompressionType, const char_t*>, 5>& values();
};



