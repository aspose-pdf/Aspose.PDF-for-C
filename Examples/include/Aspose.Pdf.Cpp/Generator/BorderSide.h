#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enumerates the border sides.
/// </summary>
enum class BorderSide
{
    /// <summary>
    /// No border.
    /// </summary>
    None = 0,
    /// <summary>
    /// Left border.
    /// </summary>
    Left = 1,
    /// <summary>
    /// Top border.
    /// </summary>
    Top = 2,
    /// <summary>
    /// Right border.
    /// </summary>
    Right = 4,
    /// <summary>
    /// Bottom border.
    /// </summary>
    Bottom = 8,
    /// <summary>
    /// All sides borders.It has the same meaning when useing "Box" and will be replaced by "Box" one year later. So, please use "Box" if possible. 
    /// </summary>
    All = 15,
    /// <summary>
    /// Four sides borders.
    /// </summary>
    Box = 15
};

} // namespace Pdf
} // namespace Aspose


