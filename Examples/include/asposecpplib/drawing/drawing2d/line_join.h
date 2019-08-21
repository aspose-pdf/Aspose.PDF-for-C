/// @file drawing/drawing2d/line_join.h
#ifndef _aspose_drawing_drawing2d_line_join_h_
#define _aspose_drawing_drawing2d_line_join_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies how consequent lines or curves are joined.
    enum class LineJoin {
        /// Mitered join which produces a sharp or clipped corner depending on whether the length of the miter
        /// exceeds the miter limit.
        Miter = 0,
        /// Bevel join which produces a diagonal corner.
        Bevel = 1,
        /// Round join which produces a smooth circular arc between the lines.
        Round = 2,
        /// Mitered join which produces a sharp or beveled corner depending on whether the length of the miter
        /// exceeds the miter limit.
        MiterClipped = 3
    };
}}}

/// Specialization for System::Drawing::Drawing2D::LineJoin; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::LineJoin>
{
    /// Returns a array of pairs that associate System::Drawing::Drawing2D::LineJoin enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::Drawing2D::LineJoin, const char_t*>, 4>& values();
};

#endif
