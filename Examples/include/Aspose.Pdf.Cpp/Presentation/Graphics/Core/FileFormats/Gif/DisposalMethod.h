#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace FileFormats {

namespace Gif {

/// <summary>
/// Indicates the way in which the graphic is to be treated after being displayed.
/// </summary>
enum class DisposalMethod
{
    /// <summary>
    /// No disposal specified.
    /// </summary>
    None,
    /// <summary>
    /// Do not dispose. The graphic is to be left in place.
    /// </summary>
    Preserve,
    /// <summary>
    /// Restore to background color. The area used by the graphic must be restored to the background color.
    /// </summary>
    Restore,
    /// <summary>
    /// Restore to previous. The decoder is required to restore the area overwritten by the graphic with what was there prior to rendering the graphic.
    /// </summary>
    Previuos,
    /// <summary>
    /// Undefined value.
    /// </summary>
    Undefined
};

} // namespace Gif
} // namespace FileFormats
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


