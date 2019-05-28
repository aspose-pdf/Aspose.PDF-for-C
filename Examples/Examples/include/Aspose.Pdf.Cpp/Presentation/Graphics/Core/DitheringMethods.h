#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// The dithering methods used to control color conversion.
/// </summary>
enum class DitheringMethods
{
    /// <summary>
    /// The palette is ignored
    /// </summary>
    PaletteIgnore,
    /// <summary>
    /// The palette is not ignored and wise color conversion should be applied.
    /// </summary>
    PaletteConversion,
    /// <summary>
    /// The custom converter.
    /// </summary>
    CustomConverter
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


