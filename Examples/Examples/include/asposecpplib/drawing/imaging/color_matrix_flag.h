/// @file drawing/imaging/color_matrix_flag.h
#ifndef _color_matrix_flag_h_
#define _color_matrix_flag_h_

namespace System {  namespace Drawing { namespace Imaging {
    /// Specifies the types of images and colors that will be affected by the color and grayscale adjustment settings of an ImageAttributes object.
    enum class ColorMatrixFlag {
        /// Both colors and grayscale values are color-adjusted.
        Default = 0,
        /// Grayscale values are not color-adjusted.
        SkipGrays = 1,
        /// Only grayscale values are color-adjusted.
        AltGrays = 2
    };
}}}

#endif
