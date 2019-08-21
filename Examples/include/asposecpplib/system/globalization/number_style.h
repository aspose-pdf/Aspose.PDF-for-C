/// @file system/globalization/number_style.h
#ifndef _aspose_system_number_style_h_
#define _aspose_system_number_style_h_

#include <system/enum_helpers.h>

namespace System
{
namespace Globalization
{

/// Number style allowed when parsing.
enum class NumberStyles
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
    Integer = 7,
    /// Allow trailing sign.
    AllowTrailingSign = 8,
    /// Allow parenthesis for negative values.
    AllowParentheses = 16,
    /// Allow decimal point.
    AllowDecimalPoint = 32,
    /// Allow group separators.
    AllowThousands = 64,
    /// Default composite number format.
    Number = 111,
    /// Allow exponent sign.
    AllowExponent = 128,
    /// Default floating point number format.
    Float = 167,
    /// Allow currency symbol.
    AllowCurrencySymbol = 256,
    /// Default currency format.
    Currency = 383,
    /// Allow any format specifier.
    Any = 511,
    /// Allow hexadecimal numbers.
    AllowHexSpecifier = 512,
    /// Default hexadecimal number format.
    HexNumber = 515
};

} // namespace Globalization
} // namespace System

  /// Declaration of template arithmetic operators for values of NumberStyles enum type.
DECLARE_ENUM_OPERATORS(System::Globalization::NumberStyles);

#endif // _aspose_system_number_style_h_
