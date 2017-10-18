#ifndef _interpolation_mode_h_
#define _interpolation_mode_h_

#include "drawing/drawing2d/quality_mode.h"

namespace System { namespace Drawing { namespace Drawing2D {

    enum class InterpolationMode {
        ///       Equivalent to QualityMode.Invalid
        Invalid = (int)QualityMode::Invalid,
        ///    Specifies default mode.
        Default = (int)QualityMode::Default,
        ///    Specifies low quality.
        Low = (int)QualityMode::Low,
        ///    Specifies high quality.
        High = (int)QualityMode::High,
        ///    Specifies bilinear interpolation.
        Bilinear,
        ///    Specifies bicubic interpolation.
        Bicubic,
        ///    Specifies nearest neighbor interpolation.
        NearestNeighbor,
        ///    Specifies high qulaity bilenear interpolation.
        HighQualityBilinear,
        ///    Specifies high quality bicubicinterpolation.
        HighQualityBicubic
    };

}}}

#endif