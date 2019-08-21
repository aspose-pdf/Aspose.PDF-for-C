/// @file drawing/drawing2d/dash_style.h
#ifndef _aspose_drawing_drawing2d_dash_style_h_
#define _aspose_drawing_drawing2d_dash_style_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies the style of a dashed line.
    enum class DashStyle {
        /// Solid line.
        Solid = 0,
        /// Dashed line.
        Dash = 1,
        /// A line consisting of dots.
        Dot = 2,
        /// A dash-dot line.
        DashDot = 3,
        /// A dash-dot-dot line.
        DashDotDot = 4,
        /// Custom dash style.
        Custom = 5
    };
}}}

/// Specialization for System::Drawing::Drawing2D::DashStyle; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::DashStyle>
{
    /// Returns a array of pairs that associate System::Drawing::Drawing2D::DashStyle enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::Drawing2D::DashStyle, const char_t*>, 6>& values();
};

#endif
