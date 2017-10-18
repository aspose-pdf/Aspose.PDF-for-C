#ifndef _pixel_offset_mode_h_
#define _pixel_offset_mode_h_

#include "drawing/drawing2d/quality_mode.h"

namespace System { namespace Drawing { namespace Drawing2D {

    enum class PixelOffsetMode {
        ///    Specifies an invalid mode.
        Invalid = (int)QualityMode::Invalid,
        ///    Specifies the default mode.
        Default = (int)QualityMode::Default,
        ///    Specifies high low quality (high performance) mode.
        HighSpeed = (int)QualityMode::Low,
        ///    Specifies high quality (lower performance) mode.
        HighQuality = (int)QualityMode::High,
        ///    Specifies no pixel offset.
        None,
        ///    Specifies that pixels are offset by -0.5 units both horizontally and vertically for high performance anti-aliasing.
        Half
    };
}}}

#endif