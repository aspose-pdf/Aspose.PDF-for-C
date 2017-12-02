#ifndef _aspose_drawing_font_style_h_
#define _aspose_drawing_font_style_h_

#include <system/enum_helpers.h>
#include <system/enum.h>

namespace System { namespace Drawing {

    enum class FontStyle {
        Regular = 0,
        Bold = 1,
        Italic = 2,
        Underline = 4,
        Strikeout = 8,
    };

DECLARE_ENUM_OPERATORS(System::Drawing::FontStyle);

}}

DECLARE_USING_ENUM_OPERATORS(System::Drawing); 


template<>
struct EnumMetaInfo<System::Drawing::FontStyle>
{
    static const std::array<std::pair<System::Drawing::FontStyle, const char_t*>, 5>& values();
};

#endif