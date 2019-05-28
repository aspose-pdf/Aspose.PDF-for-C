/// @file drawing/drawing2d/pixel_offset_mode.h
#ifndef _pixel_offset_mode_h_
#define _pixel_offset_mode_h_

#include "drawing/drawing2d/quality_mode.h"

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies how pixels are offset when being rendered.
    enum class PixelOffsetMode {
        /// Invalid value.
        Invalid = (int)QualityMode::Invalid,
        /// The default mode.
        Default = (int)QualityMode::Default,
        /// Low quality (high performance) mode.
        HighSpeed = (int)QualityMode::Low,
        /// High quality (lower performance) mode.
        HighQuality = (int)QualityMode::High,
        /// No pixel offset.
        None,
        /// Pixels are offset by -0.5 units both horizontally and vertically for high performance anti-aliasing.
        Half
    };
}}}

#endif
