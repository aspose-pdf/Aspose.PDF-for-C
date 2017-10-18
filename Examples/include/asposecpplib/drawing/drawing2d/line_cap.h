#ifndef _aspose_drawing_drawing2d_line_cap_h_
#define _aspose_drawing_drawing2d_line_cap_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {

    enum class LineCap {
        Flat             = 0,
        Square           = 1,
        Round            = 2,
        Triangle         = 3,
        NoAnchor         = 0x10, // corresponds to flat cap
        SquareAnchor     = 0x11, // corresponds to square cap
        RoundAnchor      = 0x12, // corresponds to round cap
        DiamondAnchor    = 0x13, // corresponds to triangle cap
        ArrowAnchor      = 0x14, // no correspondence
        AnchorMask       = 0xf0, // mask to check for anchor or not.
        Custom           = 0xff  // custom cap
    };
}}}

template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::LineCap>
{
    static const std::array<std::pair<System::Drawing::Drawing2D::LineCap, const char_t*>, 11>& values();
};

#endif