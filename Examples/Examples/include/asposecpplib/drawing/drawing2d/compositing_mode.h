/// @file drawing/drawing2d/compositing_mode.h
#ifndef _CompositingMode_h_
#define _CompositingMode_h_

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies how source colors and background colors are combined.
    enum class CompositingMode {
            /// The color being rendered overwrites the background color.
            SourceOver
            /// The color being rendered is blended with the background color according to
            /// the alpha component of the rendered color.
        ,   SourceCopy
    };

}}}

#endif
