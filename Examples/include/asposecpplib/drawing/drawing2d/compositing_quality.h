/// @file drawing/drawing2d/compositing_quality.h
#ifndef _compositing_quality_h_
#define _compositing_quality_h_

#include "drawing/drawing2d/quality_mode.h"

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies the quality level to be used during compositing.
    enum class CompositingQuality {
        /// Invalid value.
        Invalid = (int)QualityMode::Invalid,
        /// Default value.
        Default = (int)QualityMode::Default,
        /// Low quality, high speed.
        HighSpeed = (int)QualityMode::Low,
        /// High quality, low speed.
        HighQuality = (int)QualityMode::High,
        /// Gamma correction is used.
        GammaCorrected,
        /// Assume linear values.
        AssumeLinear
    };
}}}

#endif
