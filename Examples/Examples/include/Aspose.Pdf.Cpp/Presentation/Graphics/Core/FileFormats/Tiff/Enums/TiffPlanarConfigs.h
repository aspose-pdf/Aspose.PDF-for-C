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
/// Storage organization.<br/>
/// Possible values for PLANARCONFIG tag.
/// </summary>
enum class TiffPlanarConfigs : uint16_t
{
    /// <summary>
    /// Single image plane.
    /// </summary>
    Contiguous = 1,
    /// <summary>
    /// Separate planes of data.
    /// </summary>
    Separate = 2
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
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffPlanarConfigs>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffPlanarConfigs, const char_t*>, 2>& values();
};



