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
/// The tiff new sub file type enum.
/// </summary>
enum class TiffNewSubFileTypes : uint32_t
{
    /// <summary>
    /// The default filetype.
    /// </summary>
    FileTypeDefault = 0,
    /// <summary>
    /// The reduced image filetype.
    /// </summary>
    FileTypeReducedImage = 1,
    /// <summary>
    /// The page filetype.
    /// </summary>
    FileTypePage = 2,
    /// <summary>
    /// The mask filetype.
    /// </summary>
    FileTypeMask = 4,
    /// <summary>
    /// The last filetype.
    /// </summary>
    FileTypeLast
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
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffNewSubFileTypes>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffNewSubFileTypes, const char_t*>, 5>& values();
};



