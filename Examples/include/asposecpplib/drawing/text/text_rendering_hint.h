#ifndef _text_rendering_hint_h_
#define _text_rendering_hint_h_

#include "system/enum.h"

namespace System { namespace Drawing { namespace Text {

    enum class TextRenderingHint {
        SystemDefault = 0,        // Glyph with system default rendering hint
        SingleBitPerPixelGridFit, // Glyph bitmap with hinting
        SingleBitPerPixel,        // Glyph bitmap without hinting
        AntiAliasGridFit,         //Anti-aliasing with hinting
        AntiAlias,                // Glyph anti-alias bitmap without hinting
        ClearTypeGridFit          // Glyph CT bitmap with hinting
    };

}}}

template<>
struct EnumMetaInfo<System::Drawing::Text::TextRenderingHint>
{
    static const std::array<std::pair<System::Drawing::Text::TextRenderingHint, const char_t*>, 6>& values();
};



#endif