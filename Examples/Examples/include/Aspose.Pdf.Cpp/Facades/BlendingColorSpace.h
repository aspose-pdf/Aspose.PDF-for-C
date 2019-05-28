#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class represents blending color space.
/// </summary>
enum class BlendingColorSpace
{
    /// <summary>
    /// The blending color space is not changed.
    /// </summary>
    DontChange,
    /// <summary>
    /// The blending color space is determined automatically.
    /// </summary>
    Auto,
    /// <summary>
    /// Blending color space is set to DeviceRGB.
    /// </summary>
    DeviceRGB,
    /// <summary>
    /// Blending color space is set to DeviceCMYK.
    /// </summary>
    DeviceCMYK
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


