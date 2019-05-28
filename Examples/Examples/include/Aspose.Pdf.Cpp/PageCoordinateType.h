#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

/// <summary>
/// Describes page coordinate type.
/// </summary>
enum class PageCoordinateType
{
    /// <summary>
    /// The MediaBox is used to specify the width and height of the page. 
    /// For the average user, this probably equals the actual page size. 
    /// The MediaBox is the largest page box in a PDF. The other page boxes can equal the 
    /// size of the MediaBox but they cannot be larger.
    /// </summary>
    MediaBox,
    /// <summary>
    /// The CropBox defines the region to which the page contents are to be clipped. 
    /// Acrobat uses this size for screen display and printing.
    /// </summary>
    CropBox
};

} // namespace Pdf
} // namespace Aspose


