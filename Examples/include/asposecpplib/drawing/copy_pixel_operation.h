/// @file drawing/copy_pixel_operation.h
#ifndef _aspose_drawing_copy_pixel_operation_h_
#define _aspose_drawing_copy_pixel_operation_h_

#include <limits>

namespace System { namespace Drawing {

/// Specifies how the source color in a pixel copying operation is combined with the destination color to result in a final color.
enum class CopyPixelOperation {
    /// The bitmap is not mirrored.
    NoMirrorBitmap = std::numeric_limits<int32_t>::min(),

    /// The destination region is filled by using the color with index 0 in the physical palette.
    Blackness = 66,

    /// The source and destination colors are ORed and the color that results is then inverted.
    NotSourceErase = 1114278,

    /// The source region is inverted and then copied to the destination.
    NotSourceCopy = 3342344,

    /// The inverted colors of the destination region are ANDed with the colors of the source region.
    SourceErase = 4457256,

    /// The destination region is inverted.
    DestinationInvert = 5570569,

    /// The colors of the brush currently selected in the destination device context are XORed with the colors of the destination.
    PatInvert = 5898313,

    /// The colors of the source and destination regions are XORed.
    SourceInvert = 6684742,

    /// The colors of the source and destination regions are ANDed.
    SourceAnd = 8913094,

    /// The colors of the inverted source region are ORed with the colors of the destination region.
    MergePaint = 12255782,

    /// The colors of the source region are ANDed with the colors of the selected brush
    /// of the destination device context.
    MergeCopy = 12583114,

    /// The source region is copied directly to the destination region.
    SourceCopy = 13369376,

    /// The colors of the source and destination regions are ORed.
    SourcePaint = 15597702,

    /// The brush currently selected in the destination device context is copied to the destination bitmap.
    PatCopy = 15728673,

    /// The colors of the brush currently selected in the destination device context
    /// are ORed with the colors of the inverted source region. The result of this operation is ORed with 
    /// the colors of the destination region.
    PatPaint = 16452105,

    /// The destination region is filled by using the color with index 1 in the physical palette. 
    Whiteness = 16711778,

    /// Windows that are layered on top of application's window are included in the resulting image.
    CaptureBlt = 1073741824
};
}}

#endif
