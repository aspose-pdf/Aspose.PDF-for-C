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
///     exif file source enum.
/// </summary>
enum class ExifFileSource : uint8_t
{
    /// <summary>
    /// The others.
    /// </summary>
    Others = 0,
    /// <summary>
    ///     Film scanner.
    /// </summary>
    FilmScanner = 1,
    /// <summary>
    ///     Reflexion print scanner.
    /// </summary>
    ReflexionPrintScanner = 2,
    /// <summary>
    ///     Digital still camera.
    /// </summary>
    DigitalStillCamera = 3
};

} // namespace Enums
} // namespace Exif
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


