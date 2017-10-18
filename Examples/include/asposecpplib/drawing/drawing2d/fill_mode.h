#ifndef _aspose_drawing_drawing2d_fill_mode_h_
#define _aspose_drawing_drawing2d_fill_mode_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {

    enum class FillMode {
            Alternate
        ,   Winding
    };
}}}

template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::FillMode>
{
    static const std::array<std::pair<System::Drawing::Drawing2D::FillMode, const char_t*>, 2>& values();
};

#endif