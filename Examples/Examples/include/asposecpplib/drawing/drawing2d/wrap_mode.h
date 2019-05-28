/// @file drawing/drawing2d/wrap_mode.h
#ifndef _aspose_drawing_drawing2d_wrap_mode_h_
#define _aspose_drawing_drawing2d_wrap_mode_h_

#include <system/enum.h>

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies how a texture or a gradient is tiled when it is smaller than the area being filled.
    enum class WrapMode {
        /// Tiles the gradient or texture.
        Tile = 0,
        /// Reverses the texture or gradient horizontally and then tiles the texture or gradient.
        TileFlipX = 1,
        /// Reverses the texture or gradient vertically and then tiles the texture or gradient.
        TileFlipY = 2,
        /// Reverses the texture or gradient horizontally and vertically and then tiles the texture or gradient.
        TileFlipXY = 3,
        /// Clamps the texture or gradient to the object boundary.
        Clamp = 4
    };
}}}

/// Specialization for System::Drawing::Drawing2D::WrapMode; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::Drawing2D::WrapMode>
{
    /// Returns a array of pairs that associate System::Drawing::Drawing2D::WrapMode enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::Drawing2D::WrapMode, const char_t*>, 5>& values();
};

#endif
