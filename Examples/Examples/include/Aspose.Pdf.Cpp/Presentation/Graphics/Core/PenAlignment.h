#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !COMPACT 


namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Specifies the alignment of a <see cref="Pen"/> object in relation to the theoretical, zero-width line.
/// </summary>
enum class PenAlignment
{
    /// <summary>
    /// Specifies that the <see cref="Pen"/> object is centered over the theoretical line.
    /// </summary>        
    Center,
    /// <summary>
    /// Specifies that the <see cref="Pen"/> is positioned on the inside of the theoretical line.
    /// </summary>
    Inset,
    /// <summary>
    /// Specifies the <see cref="Pen"/> is positioned on the outside of the theoretical line.
    /// </summary>        
    Outset,
    /// <summary>
    /// Specifies the <see cref="Pen"/> is positioned to the left of the theoretical line.
    /// </summary>
    Left,
    /// <summary>
    /// Specifies the <see cref="Pen"/> is positioned to the right of the theoretical line.
    /// </summary>
    Right
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 



