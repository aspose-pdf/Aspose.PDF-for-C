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
/// Specifies the alpha storage for tiff documents.
/// </summary>
enum class TiffAlphaStorage : uint16_t
{
    /// <summary>
    /// The alpha is not specified and stored in the tiff file.
    /// </summary>
    Unspecified,
    /// <summary>
    /// The alpha value is stored in premultiplied form. When alpha is restored there may be some rounding effects and restored value may be different from the original.
    /// </summary>
    Associated,
    /// <summary>
    /// The alpha value is stored in unassociated form. That means that alpha restored is exactly the same as it was stored to the tiff.
    /// </summary>
    Unassociated
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
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffAlphaStorage>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffAlphaStorage, const char_t*>, 3>& values();
};



