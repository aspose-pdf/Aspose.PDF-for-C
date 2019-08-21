/// @file system/globalization/number_styles.h
#pragma once

#include <system/details/enum_meta_info.h>
#include <system/enum_helpers.h>

namespace System { namespace Globalization {

/// Number style allowed when parsing.
enum class NumberStyles : int32_t
{
    /// No non-digit symbols.
    None = 0,
    /// Allow leading whitespaces.
    AllowLeadingWhite = 1,
    /// Allow trailing whitespaces.
    AllowTrailingWhite = 2,
    /// Allow leading sign.
    AllowLeadingSign = 4,
    /// Default integer formatting.
    Integer = AllowLeadingWhite | AllowTrailingWhite | AllowLeadingSign, // = 7
    /// Allow trailing sign.
    AllowTrailingSign = 8,
    /// Allow parenthesis for negative values.
    AllowParentheses = 16,
    /// Allow decimal point.
    AllowDecimalPoint = 32,
    /// Allow group separators.
    AllowThousands = 64,
    /// Default composite number format.
    Number = Integer | AllowTrailingSign | AllowDecimalPoint | AllowThousands, // = 111
    /// Allow exponent sign.
    AllowExponent = 128,
    /// Default floating point number format.
    Float = Integer | AllowDecimalPoint | AllowExponent, // = 167
    /// Allow currency symbol.
    AllowCurrencySymbol = 256,
    /// Default currency format.
    Currency = Integer | AllowTrailingSign | AllowParentheses | AllowDecimalPoint | AllowThousands | AllowCurrencySymbol, // = 383
    /// Allow any format specifier.
    Any = Integer | AllowTrailingSign | AllowParentheses | AllowDecimalPoint | AllowThousands | AllowExponent | AllowCurrencySymbol, // = 511
    /// Allow hexadecimal numbers.
    AllowHexSpecifier = 512,
    /// Default hexadecimal number format.
    HexNumber = AllowLeadingWhite | AllowTrailingWhite | AllowHexSpecifier // = 515
};

}} // namespace System::Globalization

/// Declaration of template arithmetic operators for values of NumberStyles enum type.
DECLARE_ENUM_OPERATORS(System::Globalization::NumberStyles);

template<>
struct EnumMetaInfo<System::Globalization::NumberStyles>
{
    typedef void Flags;
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Globalization::NumberStyles, const char16_t*>, 17>& values();
};
