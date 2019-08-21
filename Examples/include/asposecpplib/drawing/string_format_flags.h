/// @file drawing/string_format_flags.h
#ifndef _string_format_flags_h_
#define _string_format_flags_h_

#include "system/enum_helpers.h"

namespace System { namespace Drawing {
    /// Specifies the display and layout information for the strings of text.
    enum class StringFormatFlags    {
        /// Right-to-left text direction.
        DirectionRightToLeft = 0x00000001,
        /// Text is vertically alligned.
        DirectionVertical = 0x00000002,
        /// Parts of characters can overhang the layout box.
        FitBlackBox = 0x00000004,
        /// Control characters are displayed.
        DisplayFormatControl = 0x00000020,
        /// Font fallback is disabled.
        NoFontFallback = 0x00000400,
        /// Inserts the trailing space at the end of each line.
        MeasureTrailingSpaces = 0x00000800,
        /// Text wrapping is disabled.
        NoWrap = 0x00001000,
        /// Entire lines are laid out in the formatting rectangle.
        LineLimit = 0x00002000,
        /// Overhanging parts of glyphs are allowed to show.
        NoClip = 0x00004000

    };

    /// Declaration of template arithmetic operators for values of StringFormatFlags enum type.
    DECLARE_ENUM_OPERATORS(System::Drawing::StringFormatFlags);
    /// Declaration for argument-dependent lookup to work
    DECLARE_USING_GLOBAL_OPERATORS
}}
/// Declaration for argument-dependent lookup to work
DECLARE_USING_ENUM_OPERATORS(System::Drawing);
#endif
