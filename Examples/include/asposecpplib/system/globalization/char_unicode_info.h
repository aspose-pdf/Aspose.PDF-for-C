/// @file system/globalization/char_unicode_info.h
#pragma once

#include <system/string.h>
#include <system/globalization/unicode_category.h>

namespace System { namespace Globalization {

/// Gets information about unicode character.
class ASPOSECPP_SHARED_CLASS CharUnicodeInfo final
{
public:
    /// Gets decimal digit value of the specified character.
    /// @param ch Unicode character.
    /// @return The decimal digit value or -1 if the specified character is not a decimal digit.
    static ASPOSECPP_SHARED_API int GetDecimalDigitValue(char16_t ch);
    /// Gets decimal digit value of the character at the specified index of the string.
    /// @param str The string containing unicode character.
    /// @param index The index of the unicode character.
    /// @return The decimal digit value or -1 if the specified character is not a decimal digit.
    static ASPOSECPP_SHARED_API int GetDecimalDigitValue(const String& str, int index);
    /// Gets digit value of the specified character.
    /// @param ch Unicode character.
    /// @return The digit value or -1 if the specified character is not a digit.
    static ASPOSECPP_SHARED_API int GetDigitValue(char16_t ch);
    /// Gets digit value of the character at the specified index of the string.
    /// @param str The string containing unicode character.
    /// @param index The index of the unicode character.
    /// @return The digit value or -1 if the specified character is not a digit.
    static ASPOSECPP_SHARED_API int GetDigitValue(const String& str, int index);
    /// Gets numeric value associated with the specified character.
    /// @param ch Unicode character.
    /// @return The numeric value or -1 if the specified character is not a numeric character.
    static ASPOSECPP_SHARED_API double GetNumericValue(char16_t ch);
    /// Gets numeric value associated with the character at the specified index of the string.
    /// @param str The string containing unicode character.
    /// @param index The index of the unicode character.
    /// @return The numeric value or -1 if the specified character is not a numeric character.
    static ASPOSECPP_SHARED_API double GetNumericValue(const String& str, int index);
    /// Gets unicode category of the character.
    /// @param ch Unicode character.
    /// @return Unicode category.
    static ASPOSECPP_SHARED_API UnicodeCategory GetUnicodeCategory(char16_t ch);
    /// Gets unicode category of the character at the specified index of the string.
    /// @param str The string containing unicode character.
    /// @param index The index of the unicode character.
    /// @return Unicode category.
    static ASPOSECPP_SHARED_API UnicodeCategory GetUnicodeCategory(const String& str, int index);
};

}} //namespace System::Globalization
