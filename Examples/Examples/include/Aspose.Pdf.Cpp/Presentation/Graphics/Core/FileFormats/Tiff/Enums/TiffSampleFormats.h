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
/// Sample format enum
/// </summary>
enum class TiffSampleFormats
{
    /// <summary>
    /// Unsigned integer data
    /// </summary>
    Uint = 1,
    /// <summary>
    /// Signed integer data
    /// </summary>
    Int = 2,
    /// <summary>
    /// IEEE floating point data
    /// </summary>
    IeeeFp = 3,
    /// <summary>
    /// Untyped data
    /// </summary>
    Void = 4,
    /// <summary>
    /// Complex signed int
    /// </summary>
    ComplexInt = 5,
    /// <summary>
    /// Complex ieee floating
    /// </summary>
    ComplexIeeeFp = 6
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
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffSampleFormats>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffSampleFormats, const char_t*>, 6>& values();
};



