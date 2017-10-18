#ifndef _string_format_flags_h_
#define _string_format_flags_h_

#include "system/enum_helpers.h"

namespace System { namespace Drawing {

    enum class StringFormatFlags    {
        DirectionRightToLeft = 0x00000001,
        DirectionVertical = 0x00000002,
        FitBlackBox = 0x00000004,
        DisplayFormatControl = 0x00000020,
        NoFontFallback = 0x00000400,
        MeasureTrailingSpaces = 0x00000800,
        NoWrap = 0x00001000,
        LineLimit = 0x00002000,
        NoClip = 0x00004000

    };
}}

DECLARE_ENUM_OPERATORS(System::Drawing::StringFormatFlags);
#endif