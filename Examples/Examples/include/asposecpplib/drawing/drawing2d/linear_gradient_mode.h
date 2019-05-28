/// @file drawing/drawing2d/linear_gradient_mode.h
#ifndef _aspose_drawing_drawing2d_linear_gradient_mode_h_
#define _aspose_drawing_drawing2d_linear_gradient_mode_h_

namespace System {
    namespace Drawing {
        namespace Drawing2D {
            /// Represents a linear gradient direction.
            enum class LinearGradientMode
            {
                /// Left-to-right.
                Horizontal = 0,
                /// Bottom-to-top.
                Vertical = 1,
                /// From upper-left corner to bottom-right corner.
                ForwardDiagonal = 2,
                /// From upper-right corner to bottom-left corner.
                BackwardDiagonal = 3
            };
        }
    }
}

#endif
