/// @file drawing/drawing2d/fill_mode.h
#ifndef _aspose_drawing_drawing2d_fill_mode_h_
#define _aspose_drawing_drawing2d_fill_mode_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies how to fill the interior of a closed path.
    enum class FillMode {
            /// Alternate fill mode.
            Alternate
            /// Winding fill mode.
        ,   Winding
    };
}}}

/// Specialization for System::Drawing::FillMode; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::FillMode>
{
    /// Returns a array of pairs that associate System::Drawing::FillMode enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::Drawing2D::FillMode, const char_t*>, 2>& values();
};

#endif
