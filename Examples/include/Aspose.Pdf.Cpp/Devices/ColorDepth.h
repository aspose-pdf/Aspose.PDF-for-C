#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Used to specify the parameter value passed to a Tiff image device.
/// </summary>
enum class ColorDepth
{
    /// <summary>
    /// Default color depth.
    /// 32 bit depth is used by default.
    /// </summary>
    Default,
    /// <summary>
    /// 8 bits per pixel. Equal <see cref="PixelFormat::Format8bppIndexed"/>
    /// </summary>
    Format8bpp,
    /// <summary>
    /// 4 bits per pixel. Equal <see cref="PixelFormat::Format4bppIndexed"/>
    /// </summary>
    Format4bpp,
    /// <summary>
    /// 1 bit per pixel. Equal <see cref="PixelFormat::Format32bppRgb"/>
    /// </summary>
    Format1bpp
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


