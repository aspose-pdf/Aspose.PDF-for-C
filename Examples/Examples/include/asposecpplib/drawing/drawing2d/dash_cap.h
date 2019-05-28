/// @file drawing/drawing2d/dash_cap.h
#ifndef _aspose_drawing_drawing2d_dash_cap_h_
#define _aspose_drawing_drawing2d_dash_cap_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies the type of a cap used at the both ends of a dash in a dashed line.
    enum class DashCap {
        /// A square cap that squares off both ends of a dash.
        Flat = 0,
        /// A circular cap that rounds off both ends of a dash.
        Round = 2,
        /// A triangular cap that points both ends of a dash.
        Triangle = 3
    };

}}}

/// Specialization for System::Drawing::Drawing2D::DashCap; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::DashCap>
{
    /// Returns a array of pairs that associate System::Drawing::Drawing2D::DashCap enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::Drawing2D::DashCap, const char_t*>, 3>& values();
};

#endif
