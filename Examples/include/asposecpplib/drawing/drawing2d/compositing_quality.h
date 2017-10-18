#ifndef _compositing_quality_h_
#define _compositing_quality_h_

#include "drawing/drawing2d/quality_mode.h"

namespace System { namespace Drawing { namespace Drawing2D {

    enum class CompositingQuality {
        ///    Invalid quality.
        Invalid = (int)QualityMode::Invalid,
        ///    Default quality.
        Default = (int)QualityMode::Default,
        ///    Low quality, high speed.
        HighSpeed = (int)QualityMode::Low,
        ///    High quality, low speed.
        HighQuality = (int)QualityMode::High,
        ///    Gamma correction is used.
        GammaCorrected,
        ///    Assume linear values.
        AssumeLinear
    };
}}}

#endif