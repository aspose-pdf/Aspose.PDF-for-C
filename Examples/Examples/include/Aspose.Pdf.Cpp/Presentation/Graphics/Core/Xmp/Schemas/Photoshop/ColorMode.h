#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace Xmp {

namespace Schemas {

namespace Photoshop {

/// <summary>
/// Represents color mode in <see cref="PhotoshopPackage"/>.
/// </summary>
enum class ColorMode : uint8_t
{
    /// <summary>
    /// Bitmap color mode.
    /// </summary>
    Bitmap = 0,
    /// <summary>
    /// Gray scale color mode.
    /// </summary>
    GrayScale = 1,
    /// <summary>
    /// The indexed color.
    /// </summary>
    IndexedColor = 2,
    /// <summary>
    /// RGB color.
    /// </summary>
    Rgb = 3,
    /// <summary>
    /// CMYK color mode.
    /// </summary>
    Cmyk = 4,
    /// <summary>
    /// Multi-channel color.
    /// </summary>
    MultiChannel = 7,
    /// <summary>
    /// Duo-tone color.
    /// </summary>
    Duotone = 8,
    /// <summary>
    /// LAB color.
    /// </summary>
    LabColor = 9
};

} // namespace Photoshop
} // namespace Schemas
} // namespace Xmp
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


