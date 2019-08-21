/// @file drawing/drawing2d/smoothing_mode.h
#ifndef _smoothing_mode_h_
#define _smoothing_mode_h_

#include "drawing/drawing2d/quality_mode.h"

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies what type of soothing (antialiasing) is applied to lines, curves and edges of filled areas.
    enum class SmoothingMode {
        /// Invalid value.
        Invalid = (int)QualityMode::Invalid,
        /// Default mode, not antialiasing.
        Default = (int)QualityMode::Default,
        /// No antialiasing, high speed.
        HighSpeed = (int)QualityMode::Low,
        /// Antialiased rendering, low speed.
        HighQuality = (int)QualityMode::High,
        /// No antialising.
        None,
        /// Antialiased rendering.
        AntiAlias
    };
}}}

#endif
