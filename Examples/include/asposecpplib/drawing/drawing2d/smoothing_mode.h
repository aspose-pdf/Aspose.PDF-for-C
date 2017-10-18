#ifndef _smoothing_mode_h_
#define _smoothing_mode_h_

#include "drawing/drawing2d/quality_mode.h"

namespace System { namespace Drawing { namespace Drawing2D {

    enum class SmoothingMode {
        Invalid = (int)QualityMode::Invalid,
        Default = (int)QualityMode::Default,
        HighSpeed = (int)QualityMode::Low,
        HighQuality = (int)QualityMode::High,
        None,
        AntiAlias
    };
}}}

#endif