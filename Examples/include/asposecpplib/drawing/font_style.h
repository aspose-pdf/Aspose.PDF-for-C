/// @file drawing/font_style.h
#ifndef _aspose_drawing_font_style_h_
#define _aspose_drawing_font_style_h_

#include <system/enum_helpers.h>
#include <system/enum.h>

namespace System { namespace Drawing {
    /// Represents a font style.
    enum class FontStyle {
        /// Normal.
        Regular = 0,
        /// Bold.
        Bold = 1,
        /// Italic.
        Italic = 2,
        /// Underline.
        Underline = 4,
        /// Strikeout.
        Strikeout = 8,
    };
/// Declaration of template arithmetic operators for values of FontStyle enum type.
DECLARE_ENUM_OPERATORS(System::Drawing::FontStyle);

}}
/// Inserts using declaratios for arithmetic operators declared in namespace System::Drawing.
DECLARE_USING_ENUM_OPERATORS(System::Drawing); 

/// Specialization for System::Drawing::FontStyle; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::FontStyle>
{
    /// This typedef marks this enum as flags one using SFINAE.
    typedef void Flags;
    /// Returns a array of pairs that associate System::Drawing::FontStyle enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::FontStyle, const char_t*>, 5>& values();
};

#endif
