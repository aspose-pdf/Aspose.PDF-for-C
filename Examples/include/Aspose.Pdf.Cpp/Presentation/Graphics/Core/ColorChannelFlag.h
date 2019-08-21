#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !COMPACT


namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Specifies individual channels in the CMYK (cyan, magenta, yellow, black) color space. This enumeration is used by the SetOutputChannel methods.
/// </summary>
enum class ColorChannelFlag
{
    /// <summary>
    /// The cyan color channel.
    /// </summary>
    ColorChannelC,
    /// <summary>
    /// The magenta color channel.
    /// </summary>
    ColorChannelM,
    /// <summary>
    /// The yellow color channel.
    /// </summary>
    ColorChannelY,
    /// <summary>
    /// The black color channel.
    /// </summary>
    ColorChannelK,
    /// <summary>
    /// The last selected channel should be used.
    /// </summary>
    ColorChannelLast
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif



