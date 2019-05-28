#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !COMPACT 


namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Specifies which objects use color adjustment information.
/// </summary>
enum class ColorAdjustType
{
    /// <summary>
    /// Color adjustment information that is used by all GDI+ objects that do not have their own color adjustment information.
    /// </summary>
    Default,
    /// <summary>
    /// Color adjustment information for Bitmap objects.
    /// </summary>
    Bitmap,
    /// <summary>
    /// Color adjustment information for Brush objects.
    /// </summary>
    Brush,
    /// <summary>
    /// Color adjustment information for Pen objects.
    /// </summary>
    Pen,
    /// <summary>
    /// Color adjustment information for text.
    /// </summary>
    Text,
    /// <summary>
    /// The number of types specified.
    /// </summary>
    Count,
    /// <summary>
    /// The number of types specified.
    /// </summary>
    Any
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 



