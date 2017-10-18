#ifndef _aspose_drawing_drawing2d_dash_cap_h_
#define _aspose_drawing_drawing2d_dash_cap_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {

    enum class DashCap {
        Flat = 0,
        Round = 2,
        Triangle = 3
    };

}}}

template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::DashCap>
{
    static const std::array<std::pair<System::Drawing::Drawing2D::DashCap, const char_t*>, 3>& values();
};

#endif