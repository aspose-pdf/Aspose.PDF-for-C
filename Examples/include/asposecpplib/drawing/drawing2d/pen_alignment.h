#ifndef _pen_alignment_h_
#define _pen_alignment_h_

namespace System { namespace Drawing { namespace Drawing2D {

    enum class PenAlignment {
        ///       Specifies that the Pen is positioned at the center of  the line being drawn.
        Center = 0,
        ///       Specifies that the Pen is positioned on the insede of the line being drawn.
        Inset = 1,
        ///       Specifies that the Pen is positioned on the outside of the line being drawn.
        Outset = 2,
        ///       Specifies that the Pen is positioned to the left of the line being drawn.
        Left = 3,
        ///       Specifies that the Pen is positioned to the right of the line being drawn.
        Right = 4
    };
}}}

#endif