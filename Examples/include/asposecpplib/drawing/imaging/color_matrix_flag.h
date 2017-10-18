#ifndef _color_matrix_flag_h_
#define _color_matrix_flag_h_

namespace System {  namespace Drawing { namespace Imaging {

    enum class ColorMatrixFlag {
        ///    Both colors and grayscale are color-adjusted.
        Default = 0,
        ///    Grascale values are not color-adjusted.
        SkipGrays = 1,
        ///    Only grascale values are color-adjusted.
        AltGrays = 2
    };
}}}

#endif