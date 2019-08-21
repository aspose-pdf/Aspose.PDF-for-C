/// @file drawing/drawing2d/interpolation_mode.h
#pragma once

#include <array>

#include <system/enum.h>

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

}}} // System::Drawing::Drawing2D

template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::InterpolationMode>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::Drawing2D::InterpolationMode, const char_t*>, 9>& values();
};
