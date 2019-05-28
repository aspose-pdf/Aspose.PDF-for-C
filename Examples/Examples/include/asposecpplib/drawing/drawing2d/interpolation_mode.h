/// @file drawing/drawing2d/interpolation_mode.h
#ifndef _interpolation_mode_h_
#define _interpolation_mode_h_

#include "drawing/drawing2d/quality_mode.h"

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies an algorithm to use when images are rotated or scaled.
    enum class InterpolationMode {
        /// Equivalent to QualityMode::Invalid.
        Invalid = (int)QualityMode::Invalid,
        /// Default mode.
        Default = (int)QualityMode::Default,
        /// Low quality.
        Low = (int)QualityMode::Low,
        /// High quality.
        High = (int)QualityMode::High,
        /// Bilinear interpolation.
        Bilinear,
        /// Bicubic interpolation.
        Bicubic,
        /// Nearest neighbor interpolation.
        NearestNeighbor,
        /// High qulaity bilenear interpolation.
        HighQualityBilinear,
        /// High quality bicubic interpolation.
        HighQualityBicubic
    };

}}}

#endif
