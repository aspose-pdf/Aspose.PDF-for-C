#ifndef _aspose_drawing_drawing2d_wrap_mode_h_
#define _aspose_drawing_drawing2d_wrap_mode_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {

    enum class WrapMode {
        ///    Tiles the gradient or texture.
        Tile = 0,
        ///    Reverses the texture or gradient horizontally and then tiles the texture or gradient.
        TileFlipX = 1,
        ///    Reverses the texture or gradient vertically and then tiles the texture or gradient.
        TileFlipY = 2,
        ///    Reverses the texture or gradient horizontally and vertically and then tiles the texture or gradient.
        TileFlipXY = 3,
        ///    Clamps the texture or gradient to the object boundary.
        Clamp = 4
    };
}}}

template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::WrapMode>
{
    static const std::array<std::pair<System::Drawing::Drawing2D::WrapMode, const char_t*>, 5>& values();
};

#endif