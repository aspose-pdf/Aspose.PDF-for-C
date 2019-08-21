#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace FileFormats {

namespace Jpeg {

/// <summary>
/// Defines the interleave mode for multi-component (color) pixel data.
/// </summary>
enum class JpegLsInterleaveMode
{
    /// <summary>
    /// The data is encoded and stored as component for component: RRRGGGBBB.
    /// </summary>
    None = 0,
    /// <summary>
    /// The interleave mode is by line. A full line of each component is encoded before moving to the next line.
    /// </summary>
    Line = 1,
    /// <summary>
    /// The data is encoded and stored by sample. For color images this is the format like RGBRGBRGB.
    /// </summary>
    Sample = 2
};

} // namespace Jpeg
} // namespace FileFormats
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


