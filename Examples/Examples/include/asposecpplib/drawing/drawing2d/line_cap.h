/// @file drawing/drawing2d/line_cap.h
#ifndef _aspose_drawing_drawing2d_line_cap_h_
#define _aspose_drawing_drawing2d_line_cap_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {
    /// Indicates the available cap styles with which a Pen object can end a line.
    enum class LineCap {
        /// Flat line cap.
        Flat             = 0,
        /// Square line cap.
        Square           = 1,
        /// Round line cap.
        Round            = 2,
        /// Triangular line cap.
        Triangle         = 3,
        /// No anchor.
        NoAnchor         = 0x10, // corresponds to flat cap
        /// Square anchor line cap.
        SquareAnchor     = 0x11, // corresponds to square cap
        /// Round anchor line cap.
        RoundAnchor      = 0x12, // corresponds to round cap
        /// Diamond anchor line cap.
        DiamondAnchor    = 0x13, // corresponds to triangle cap
        /// Arrow anchor line cap.
        ArrowAnchor      = 0x14, // no correspondence
        /// A mask used to check if a line cap is an anchor cap.
        AnchorMask       = 0xf0, // mask to check for anchor or not.
        /// Custom cap.
        Custom           = 0xff  // custom cap
    };
}}}

/// Specialization for System::Drawing::Drawing2D::LineCap; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::LineCap>
{
    /// Returns a array of pairs that associate System::Drawing::Drawing2D::LineCap enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::Drawing2D::LineCap, const char_t*>, 11>& values();
};

#endif
