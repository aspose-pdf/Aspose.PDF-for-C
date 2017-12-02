#ifndef _aspose_drawing_drawing2d_flush_intention_h_
#define _aspose_drawing_drawing2d_flush_intention_h_

namespace System { namespace Drawing { namespace Drawing2D {

enum class FlushIntention
{
    //
    // Summary:
    //     Specifies that the stack of all graphics operations is flushed immediately.
    Flush = 0,
    //
    // Summary:
    //     Specifies that all graphics operations on the stack are executed as soon as possible.
    //     This synchronizes the graphics state.
    Sync = 1
};

}}}

#endif