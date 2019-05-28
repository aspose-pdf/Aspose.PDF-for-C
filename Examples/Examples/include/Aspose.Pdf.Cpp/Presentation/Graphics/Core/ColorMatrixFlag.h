#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !COMPACT 


namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Specifies the types of images and colors that will be affected by the color and grayscale adjustment settings of an <see cref="ImageAttributes"/>.
/// </summary>
enum class ColorMatrixFlag
{
    /// <summary>
    /// All color values, including gray shades, are adjusted by the same color-adjustment matrix.
    /// </summary>
    Default,
    /// <summary>
    /// All colors are adjusted, but gray shades are not adjusted. A gray shade is any color that has the same value for its red, green, and blue components.
    /// </summary>
    SkipGrays,
    /// <summary>
    /// Only gray shades are adjusted.
    /// </summary>
    AltGrays
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 



