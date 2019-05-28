/// @file drawing/drawing2d/flush_intention.h
#ifndef _aspose_drawing_drawing2d_flush_intention_h_
#define _aspose_drawing_drawing2d_flush_intention_h_

namespace System { namespace Drawing { namespace Drawing2D {
/// Specifies if commands in the graphics stack are terminated immediately or executed as soon as possible.
enum class FlushIntention
{
    /// Terminate immadiately.
    Flush = 0,
    /// Execute as soon as possible.
    Sync = 1
};

}}}

#endif
