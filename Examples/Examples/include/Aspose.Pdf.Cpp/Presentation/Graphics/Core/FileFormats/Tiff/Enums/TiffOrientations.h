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
/// Image orientation.<br/>
/// Possible values for ORIENTATION tag.
/// </summary>
enum class TiffOrientations : uint16_t
{
    /// <summary>
    /// Row 0 top, Column 0 lhs.
    /// </summary>
    TopLeft = 1,
    /// <summary>
    /// Row 0 top, Column 0 rhs.
    /// </summary>
    TopRight = 2,
    /// <summary>
    /// Row 0 bottom, Column 0 rhs.
    /// </summary>
    BottomRight = 3,
    /// <summary>
    /// Row 0 bottom, Column 0 lhs.
    /// </summary>
    BottomLeft = 4,
    /// <summary>
    /// Row 0 lhs, Column 0 top.
    /// </summary>
    LeftTop = 5,
    /// <summary>
    /// Row 0 rhs, Column 0 top.
    /// </summary>
    RightTop = 6,
    /// <summary>
    /// Row 0 rhs, Column 0 bottom.
    /// </summary>
    RightBottom = 7,
    /// <summary>
    /// Row 0 lhs, Column 0 bottom.
    /// </summary>
    LeftBottom = 8
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
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffOrientations>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FileFormats::Tiff::Enums::TiffOrientations, const char_t*>, 8>& values();
};



