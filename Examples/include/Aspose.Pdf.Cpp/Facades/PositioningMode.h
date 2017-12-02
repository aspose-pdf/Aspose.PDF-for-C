#ifndef _Aspose_Pdf_Facades_PositioningMode_h_
#define _Aspose_Pdf_Facades_PositioningMode_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Defines positioning mode.
/// Possible values include Legacy (backward compatibility) and 
/// Current (updated text position calculation method)
/// </summary>
enum class PositioningMode
{
    /// <summary>
    /// Legacy text positioning
    /// </summary>
    Legacy,
    /// <summary>
    /// Updated line spacing, vertical position calculation is done by the old rules 
    /// (i.e. text is positioned relative to bottom-left corner of the specified rectangle)
    /// </summary>
    ModernLineSpacing,
    /// <summary>
    /// Updated line spacing and vertical position calculation is done based on left-top corner rather than left-bottom.
    /// </summary>
    Current
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PositioningMode_h_

