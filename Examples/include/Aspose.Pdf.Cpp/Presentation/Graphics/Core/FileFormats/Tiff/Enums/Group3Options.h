#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
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
/// Options for CCITT Group 3/4 fax encoding.<br/>
/// Possible values for GROUP3OPTIONS / TiffTag.T4OPTIONS and
/// TiffTag.GROUP4OPTIONS / TiffTag.T6OPTIONS tags.
/// </summary>
enum class Group3Options : uint32_t
{
    /// <summary>
    /// 1-dimensional coding. (default)
    /// </summary>
    Encoding1D = 0x0,
    /// <summary>
    /// 2-dimensional coding.
    /// </summary>
    Encoding2D = 0x1,
    /// <summary>
    /// Data not compressed.
    /// </summary>
    Uncompressed = 0x2,
    /// <summary>
    /// Fill to byte boundary.
    /// </summary>
    FillBits = 0x4
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::Group3Options);
DECLARE_USING_GLOBAL_OPERATORS

} // namespace Enums
} // namespace Tiff
} // namespace FileFormats
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums);
template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::Group3Options>
{
    typedef void Flags;
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::Group3Options, const char_t*>, 4>& values();
};



