#ifndef _aspose_drawing_drawing2d_dash_style_h_
#define _aspose_drawing_drawing2d_dash_style_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {

    enum class DashStyle {
        Solid = 0,
        Dash = 1,
        Dot = 2,
        DashDot = 3,
        DashDotDot = 4,
        Custom = 5
    };
}}}

template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::DashStyle>
{
    static const std::array<std::pair<System::Drawing::Drawing2D::DashStyle, const char_t*>, 6>& values();
};

#endif