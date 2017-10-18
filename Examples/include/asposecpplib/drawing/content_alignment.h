#ifndef _content_alignment_h_
#define _content_alignment_h_

namespace System { namespace Drawing {

    enum class ContentAlignment {
        ///    Content is vertically aligned at the top, and horizontally aligned on the left.
        TopLeft = 0x001,
        ///       Content is vertically aligned at the top, and horizontally aligned at the center.
        TopCenter = 0x002,
        ///       Content is vertically aligned at the top, and horizontally aligned on the right.
        TopRight = 0x004,
        ///       Content is vertically aligned in the middle, and horizontally aligned on the left.
        MiddleLeft = 0x010,
        ///       Content is vertically aligned in the middle, and horizontally aligned at the center.
        MiddleCenter = 0x020,
        ///       Content is vertically aligned in the middle, and horizontally aligned on the right.
        MiddleRight = 0x040,
        ///       Content is vertically aligned at the bottom, and horizontally aligned on the left.
        BottomLeft = 0x100,
        ///       Content is vertically aligned at the bottom, and horizontally aligned at the center.
        BottomCenter = 0x200,
        ///       Content is vertically aligned at the bottom, and horizontally aligned on the right.
        BottomRight = 0x400,
    };
}}

#endif