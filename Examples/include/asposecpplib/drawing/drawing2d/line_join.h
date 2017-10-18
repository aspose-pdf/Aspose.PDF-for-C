#ifndef _aspose_drawing_drawing2d_line_join_h_
#define _aspose_drawing_drawing2d_line_join_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {

    enum class LineJoin {
        Miter = 0,
        Bevel = 1,
        Round = 2,
        MiterClipped = 3
    };
}}}

template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::LineJoin>
{
    static const std::array<std::pair<System::Drawing::Drawing2D::LineJoin, const char_t*>, 4>& values();
};

#endif