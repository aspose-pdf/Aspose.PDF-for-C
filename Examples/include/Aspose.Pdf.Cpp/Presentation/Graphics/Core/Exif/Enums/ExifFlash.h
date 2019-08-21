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
///     Flash mode.
/// </summary>
enum class ExifFlash
{
    /// <summary>
    ///     No flash fired.
    /// </summary>
    Noflash = 0x00,
    /// <summary>
    ///     Flash fired.
    /// </summary>
    Fired = 0x01,
    /// <summary>
    ///     Flash fired, return light not detected.
    /// </summary>
    FiredReturnLightNotDetected = 0x05,
    /// <summary>
    ///     Flash fired, return light detected.
    /// </summary>
    FiredReturnLightDetected = 0x07,
    /// <summary>
    ///     Flash fired, compulsory flash mode.
    /// </summary>
    YesCompulsory = 0x09,
    /// <summary>
    ///     Flash fired, compulsory mode, return light not detected.
    /// </summary>
    YesCompulsoryReturnLightNotDetected = 0x0d,
    /// <summary>
    ///     Flash fired, compulsory mode, return light detected.
    /// </summary>
    YesCompulsoryReturnLightDetected = 0x0f,
    /// <summary>
    ///     Flash did not fire, compulsory flash mode.
    /// </summary>
    NoCompulsory = 0x10,
    /// <summary>
    ///     Flash did not fire, return light not detected.
    /// </summary>
    NoDidNotFireReturnLightNotDetected = 0x14,
    /// <summary>
    ///     Flash did not fire, auto mode.
    /// </summary>
    NoAuto = 0x18,
    /// <summary>
    ///     Flash firedm auto mode.
    /// </summary>
    YesAuto = 0x19,
    /// <summary>
    ///     Flash fired, auto mode, return light not detected.
    /// </summary>
    YesAutoReturnLightNotDetected = 0x1d,
    /// <summary>
    ///     Flash fired, auto mode, return light detected.
    /// </summary>
    YesAutoReturnLightDetected = 0x1f,
    /// <summary>
    ///     No flash function.
    /// </summary>
    NoFlashFunction = 0x20
};

} // namespace Enums
} // namespace Exif
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


