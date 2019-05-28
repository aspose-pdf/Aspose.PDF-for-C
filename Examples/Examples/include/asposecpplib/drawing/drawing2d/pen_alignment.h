/// @file drawing/drawing2d/pen_alignment.h
#ifndef _pen_alignment_h_
#define _pen_alignment_h_

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies the alignment of a Pen object relative to an abstract reference 0-width line.
    enum class PenAlignment {
        /// The Pen is positioned at the center of the reference line.
        Center = 0,
        /// The Pen is positioned on the inside of the reference line.
        Inset = 1,
        /// The Pen is positioned on the outside of the reference line.
        Outset = 2,
        /// The Pen is positioned to the left of the reference line.
        Left = 3,
        /// The Pen is positioned to the right of the reference line.
        Right = 4
    };
}}}

#endif
