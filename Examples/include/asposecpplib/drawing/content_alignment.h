/// @file drawing/content_alignment.h
#ifndef _content_alignment_h_
#define _content_alignment_h_

namespace System { namespace Drawing {
    /// Specifies the content alignment.
    enum class ContentAlignment {
        /// Aligned vertically at the top, and horizontally on the left.
        TopLeft = 0x001,
        /// Aligned vertically at the top, and horizontally at the center.
        TopCenter = 0x002,
        /// Aligned vertically at the top, and horizontally on the right.
        TopRight = 0x004,
        /// Aligned vertically in the middle, and horizontally on the left.
        MiddleLeft = 0x010,
        /// Aligned vertically in the middle, and horizontally at the center.
        MiddleCenter = 0x020,
        /// Aligned vertically in the middle, and horizontally on the right.
        MiddleRight = 0x040,
        /// Aligned vertically at the bottom, and horizontally on the left.
        BottomLeft = 0x100,
        /// Aligned vertically at the bottom, and horizontally at the center.
        BottomCenter = 0x200,
        /// Aligned vertically at the bottom, and horizontally on the right.
        BottomRight = 0x400,
    };
}}

#endif
