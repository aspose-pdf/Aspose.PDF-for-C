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
/// Thresholding used on data.
/// </summary>
enum class TiffThresholds : uint16_t
{
    /// <summary>
    /// No dithering is performed.
    /// </summary>
    NoDithering = 1,
    /// <summary>
    /// Dithered scan.
    /// </summary>
    HalfTone = 2,
    /// <summary>
    /// Usually Floyd-Steinberg.
    /// </summary>
    ErrorDiffuse = 3
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
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffThresholds>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffThresholds, const char_t*>, 3>& values();
};



