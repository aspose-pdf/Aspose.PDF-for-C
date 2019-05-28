/// @file drawing/text/text_rendering_hint.h
#ifndef _text_rendering_hint_h_
#define _text_rendering_hint_h_

#include "system/enum.h"

namespace System { namespace Drawing { namespace Text {
    /// Specifies the quality of text rendering.
    enum class TextRenderingHint {
        /// Glyph with system default rendering hint.
        SystemDefault = 0,        
        /// Glyph bitmap with hinting.
        SingleBitPerPixelGridFit, 
        /// Glyph bitmap without hinting.
        SingleBitPerPixel,        
        /// Anti-aliasing with hinting.
        AntiAliasGridFit,         
        /// Glyph anti-alias bitmap without hinting.
        AntiAlias,                
        /// Glyph CT bitmap with hinting.
        ClearTypeGridFit          
    };

}}}

/// Specialization for System::Drawing::Text::TextRenderingHint; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::Text::TextRenderingHint>
{
    /// Returns a array of pairs that associate System::Drawing::Text::TextRenderingHint enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::Text::TextRenderingHint, const char_t*>, 6>& values();
};



#endif
