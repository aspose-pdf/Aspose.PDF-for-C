#ifndef _aspose_drawing_copy_pixel_operation_h_
#define _aspose_drawing_copy_pixel_operation_h_

#include <limits>

namespace System { namespace Drawing {

enum class CopyPixelOperation {
    //
    // Summary:
    //     The bitmap is not mirrored.
    NoMirrorBitmap = std::numeric_limits<int32_t>::min(),
    //
    // Summary:
    //     The destination area is filled by using the color associated with index 0 in
    //     the physical palette. (This color is black for the default physical palette.)
    Blackness = 66,
    //
    // Summary:
    //     The source and destination colors are combined using the Boolean OR operator,
    //     and then resultant color is then inverted.
    NotSourceErase = 1114278,
    //
    // Summary:
    //     The inverted source area is copied to the destination.
    NotSourceCopy = 3342344,
    //
    // Summary:
    //     The inverted colors of the destination area are combined with the colors of the
    //     source area using the Boolean AND operator.
    SourceErase = 4457256,
    //
    // Summary:
    //     The destination area is inverted.
    DestinationInvert = 5570569,
    //
    // Summary:
    //     The colors of the brush currently selected in the destination device context
    //     are combined with the colors of the destination are using the Boolean XOR operator.
    PatInvert = 5898313,
    //
    // Summary:
    //     The colors of the source and destination areas are combined using the Boolean
    //     XOR operator.
    SourceInvert = 6684742,
    //
    // Summary:
    //     The colors of the source and destination areas are combined using the Boolean
    //     AND operator.
    SourceAnd = 8913094,
    //
    // Summary:
    //     The colors of the inverted source area are merged with the colors of the destination
    //     area by using the Boolean OR operator.
    MergePaint = 12255782,
    //
    // Summary:
    //     The colors of the source area are merged with the colors of the selected brush
    //     of the destination device context using the Boolean AND operator.
    MergeCopy = 12583114,
    //
    // Summary:
    //     The source area is copied directly to the destination area.
    SourceCopy = 13369376,
    //
    // Summary:
    //     The colors of the source and destination areas are combined using the Boolean
    //     OR operator.
    SourcePaint = 15597702,
    //
    // Summary:
    //     The brush currently selected in the destination device context is copied to the
    //     destination bitmap.
    PatCopy = 15728673,
    //
    // Summary:
    //     The colors of the brush currently selected in the destination device context
    //     are combined with the colors of the inverted source area using the Boolean OR
    //     operator. The result of this operation is combined with the colors of the destination
    //     area using the Boolean OR operator.
    PatPaint = 16452105,
    //
    // Summary:
    //     The destination area is filled by using the color associated with index 1 in
    //     the physical palette. (This color is white for the default physical palette.)
    Whiteness = 16711778,
    //
    // Summary:
    //     Windows that are layered on top of your window are included in the resulting
    //     image. By default, the image contains only your window. Note that this generally
    //     cannot be used for printing device contexts.
    CaptureBlt = 1073741824
};
}}

#endif