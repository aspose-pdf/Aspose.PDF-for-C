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
/// Tiff Resolution Unit Enum
/// </summary>
enum class TiffResolutionUnits : uint16_t
{
    /// <summary>
    /// No meaningful units.
    /// </summary>
    None = 1,
    /// <summary>
    /// English system.
    /// </summary>
    Inch = 2,
    /// <summary>
    /// Metric system.
    /// </summary>
    Centimeter = 3
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
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffResolutionUnits>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffResolutionUnits, const char_t*>, 3>& values();
};



