#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace Exif {

namespace Enums {

/// <summary>
///     Exif image orientation.
/// </summary>
enum class ExifOrientation
{
    /// <summary>
    ///     Top left. Default orientation.
    /// </summary>
    TopLeft = 1,
    /// <summary>
    ///     Top right. Horizontally reversed.
    /// </summary>
    TopRight = 2,
    /// <summary>
    ///     Bottom right. Rotated by 180 degrees.
    /// </summary>
    BottomRight = 3,
    /// <summary>
    ///     Bottom left. Rotated by 180 degrees and then horizontally reversed.
    /// </summary>
    BottomLeft = 4,
    /// <summary>
    ///     Left top. Rotated by 90 degrees counterclockwise and then horizontally reversed.
    /// </summary>
    LeftTop = 5,
    /// <summary>
    ///     Right top. Rotated by 90 degrees clockwise.
    /// </summary>
    RightTop = 6,
    /// <summary>
    ///     Right bottom. Rotated by 90 degrees clockwise and then horizontally reversed.
    /// </summary>
    RightBottom = 7,
    /// <summary>
    ///     Left bottom. Rotated by 90 degrees counterclockwise.
    /// </summary>
    LeftBottom = 8
};

} // namespace Enums
} // namespace Exif
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


