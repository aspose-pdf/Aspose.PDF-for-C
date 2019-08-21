/// @file drawing/string_digit_substitute.h
#ifndef _aspose_drawing_string_digit_substitute_h_
#define _aspose_drawing_string_digit_substitute_h_

namespace System { namespace Drawing {
/// Specifies how digits in a string are substituted according to the locale or language.
enum class StringDigitSubstitute {
    /// User-defined substitution.
    User = 0,
    /// Subtitution is disabled.
    None = 1,
    /// Substitute digits that correspond to the official national language of the user's locale.
    National = 2,
    /// Substitute digits that correspond to the user's native script or language, which may not be the same as the official national language of the user's locale.
    Traditional = 3
};

}}

#endif
