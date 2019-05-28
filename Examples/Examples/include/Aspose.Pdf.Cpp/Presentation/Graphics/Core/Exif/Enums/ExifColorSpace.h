#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace Exif {

namespace Enums {

/// <summary>
///     exif color space enum.
/// </summary>
enum class ExifColorSpace : int32_t
{
    /// <summary>
    ///     SRGB color space.
    /// </summary>
    SRgb = 1,
    /// <summary>
    ///     Adobe rgb color space.
    /// </summary>
    AdobeRgb = 2,
    /// <summary>
    ///     Uncalibrated color space.
    /// </summary>
    Uncalibrated = 0xFFFF
};

} // namespace Enums
} // namespace Exif
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


