/// @file system/globalization/unicode_category.h
#pragma once

#include <system/details/enum_meta_info.h>

namespace System { namespace Globalization {

/// Category of unicode character.
enum class UnicodeCategory
{
    /// Upper case letter.
    UppercaseLetter         =  0,
    /// Lower case letter.
    LowercaseLetter         =  1,
    /// Title case letter.
    TitlecaseLetter         =  2,
    /// Letter modifier.
    ModifierLetter          =  3,
    /// Other letter.
    OtherLetter             =  4,
    /// Mark character.
    NonSpacingMark          =  5,
    /// Spacing mark.
    SpacingCombiningMark    =  6,
    /// Enclosing mark.
    EnclosingMark           =  7,
    /// Decimal digit.
    DecimalDigitNumber      =  8,
    /// Letter number.
    LetterNumber            =  9,
    /// Other number.
    OtherNumber             = 10,
    /// Space.
    SpaceSeparator          = 11,
    /// Line separator.
    LineSeparator           = 12,
    /// Paragraph separator.
    ParagraphSeparator      = 13,
    /// Control character.
    Control                 = 14,
    /// Format character.
    Format                  = 15,
    /// Surrogate character.
    Surrogate               = 16,
    /// Character for private use.
    PrivateUse              = 17,
    /// Connector punctuation sign.
    ConnectorPunctuation    = 18,
    /// Dash punctuation sign.
    DashPunctuation         = 19,
    /// Opening punctuation sign.
    OpenPunctuation         = 20,
    /// Closing punctuation sign.
    ClosePunctuation        = 21,
    /// Initial quote punctuation sign.
    InitialQuotePunctuation = 22,
    /// Final quote punctuation sign.
    FinalQuotePunctuation   = 23,
    /// Other punctuation sign.
    OtherPunctuation        = 24,
    /// Math symbol.
    MathSymbol              = 25,
    /// Currency symbol.
    CurrencySymbol          = 26,
    /// Modifier symbol.
    ModifierSymbol          = 27,
    /// Other symbol.
    OtherSymbol             = 28,
    /// Not assigned or other.
    OtherNotAssigned        = 29
};

}} // namespace System::Globalization

template<>
struct EnumMetaInfo<System::Globalization::UnicodeCategory>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Globalization::UnicodeCategory, const char16_t*>, 30>& values();
};
