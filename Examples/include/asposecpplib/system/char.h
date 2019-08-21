/// @file system/char.h
/// Contains declaration of System::Char class.
#ifndef __Char_h__
#define __Char_h__

//std
#include <assert.h>

#include "fwd.h"
#include "system/globalization/unicode_category.h"
#include "system/primitive_types.h"
#include "system/globalization/culture_info.h"
#include <cctype>

namespace System {

/// Provides methods for manipulation of characters represented as UTF-16 code units.
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
class Char
{
public:

    /// Returns a value that represents a Unicode category of specified character.
    /// @param ch The character to classify
    /// @returns One of the values of UnicodeCategory enum representing the Unicode category to which the specified character belongs.
    static Globalization::UnicodeCategory GetUnicodeCategory(char_t ch)
    {
        return (Globalization::UnicodeCategory)s_category_table[(uint32_t)ch];
    }

    /// Determines if the specified character is a UTF-16 surrogate code unit.
    /// @param c A character
    /// @returns True if the specified character is a UTF-16 surrocage code unit, otherwise - false
    static bool IsSurrogate(char_t c)
    {
        return (s_category_table[c] == (uint8_t)Globalization::UnicodeCategory::Surrogate);
    }

    /// Determines whether the character at the specified index in the specified string is UTF-16 surrogate code unit.
    /// @param s A string
    /// @param index The index of the character in the specified strting
    /// @returns True if the character at the specified index is a UTF-16 surrocage code unit, otherwise - false
    static ASPOSECPP_SHARED_API bool IsSurrogate(const String& s, int index);

    /// Determines whether the two specified characters for a UTF-16 surrogate pair.
    /// @param highSurrogate A character that is tested for being a high surrogate
    /// @param lowSurrogate A character that is tested for being a low surrogate
    /// @returns True if the specified characters form a surrogate pair, otherwise - false
    static bool IsSurrogatePair(char_t highSurrogate, char_t lowSurrogate)
    {
        return 0xD800 <= (uint32_t)highSurrogate && (uint32_t)highSurrogate <= 0xDBFF &&
               0xDC00 <= (uint32_t)lowSurrogate && (uint32_t)lowSurrogate <= 0xDFFF;
    }

    /// Determines whether two consequent characetrs in the specified character buffer are a surrogate pair.
    /// @param str A string
    /// @param index A zero based index in the specified buffer at which the characetr sequence to test begins 
    /// @returns True if the specified characters are a surrogate pair, otherwise - false
    static ASPOSECPP_SHARED_API bool IsSurrogatePair(const String& str, int index);

    /// Determines whether the character at the specified index in the specified string is UTF-16 high surrogate code unit.
    /// @param s A string
    /// @param index The index in the specified strting of the character to test
    /// @returns True if the character at the specified index is a UTF-16 high surrocage code unit, otherwise - false
    static ASPOSECPP_SHARED_API bool IsHighSurrogate(const String& s, int index);

    /// Determines whether the character at the specified index in the specified character buffer is a high surrogate.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx  A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is a high surrogate, otherwise - false
    static bool IsHighSurrogate(const char_t* str, int idx) { return IsHighSurrogate(*(str+idx)); }

    /// Determines whether the specified character is a high surrogate.
    /// @param c The character to test
    /// @returns True if the specified character is a high surrogate, otherwise - false
    static bool IsHighSurrogate(char_t c)
    {
        return (uint32_t)c >= 0xD800 && (uint32_t)c <= 0xDBFF;
    }

    /// Determines whether the character at the specified index in the specified character buffer is a low surrogate.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is a low surrogate, otherwise - false
    static bool IsLowSurrogate(const char_t* str, int idx) { return IsLowSurrogate(*(str+idx)); }

    /// Determines whether the specified character is a low surrogate.
    /// @param c The character to test
    /// @returns True if the specified character is a low surrogate, otherwise - false
    static bool IsLowSurrogate(char_t c)
    {
        return (uint32_t)c >= 0xDC00 && (uint32_t)c <= 0xDFFF;
    }

    /// Determines whether the character at the specified index in the specified character buffer is classified as Unicode control character.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is a Unicode control character, otherwise - false
    static bool IsControl(const char_t* str, int idx) { return IsControl(*(str + idx)); }

    /// Determines whether the specified character is classified as Unicode control character.
    /// @param c The characetr to test
    /// @returns True if the specified character is a Unicode control character, otherwise - false
    static bool IsControl(char_t c)
    {
        return s_category_table[c] == (uint8_t)Globalization::UnicodeCategory::Control;
    }

    /// Determines whether the character at the specified index in the specified character buffer is classified as a decimal digit.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is a decimal digit, otherwise - false
    static bool IsDigit(const char_t* str, int idx) { return IsDigit(*(str + idx)); }

    /// Determines whether the character at the specified index in the specified string is classified as a decimal digit.
    /// @param str A string
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is a decimal digit, otherwise - false
    static bool IsDigit(const String& str, const int32_t idx) { return IsDigit(str[idx]); }

    /// Determines whether the specified character is classified as a decimal digit.
    /// @param c The characetr to test
    /// @returns True if the specified character is a decimal digit, otherwise - false
    static bool IsDigit(char_t c)
    {
        return s_category_table[c] == (uint8_t)Globalization::UnicodeCategory::DecimalDigitNumber;
    }

    /// Determines whether the character at the specified index in the specified character buffer is classified as Unicode letter.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is Unicode letter, otherwise - false
    static bool IsLetter(const char_t* str, int idx) { return IsLetter(*(str + idx)); }

    /// Determines whether the specified character is classified as Unicode letter.
    /// @param c The characetr to test
    /// @returns True if the specified character is Unicode letter, otherwise - false
    static bool IsLetter(char_t c)
    {
        return s_category_table[c] <= (uint8_t)Globalization::UnicodeCategory::OtherLetter;
    }

    /// Determines whether the character at the specified index in the specified character buffer is classified as Unicode letter or a decimal digit.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is Unicode letter or a decimal digit, otherwise - false
    static bool IsLetterOrDigit(const char_t* str, int idx) { return IsLetterOrDigit(*(str + idx)); }

    /// Determines whether the specified character is classified as Unicode letter or a decimal digit.
    /// @param c The characetr to test
    /// @returns True if the specified character is Unicode letter or a decimal digit, otherwise - false
    static bool IsLetterOrDigit(char_t c)
    {
        int category = s_category_table[c];
        return (category <= ((int)Globalization::UnicodeCategory::OtherLetter) ||
                category == ((int)Globalization::UnicodeCategory::DecimalDigitNumber));
    }

    /// Determines whether the character at the specified index in the specified character buffer is classified as a number.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is a number, otherwise - false
    static bool IsNumber(const char_t* str, int idx) { return IsNumber(*(str + idx)); }

    /// Determines whether the specified character is classified as a number.
    /// @param c The characetr to test
    /// @returns True if the specified character is a number, otherwise - false
    static bool IsNumber(char_t c)
    {
        uint8_t category = s_category_table[c];
        return category >= (uint8_t)Globalization::UnicodeCategory::DecimalDigitNumber &&
               category <= (uint8_t)Globalization::UnicodeCategory::OtherNumber;
    }

    /// Determines whether the character at the specified index in the specified character buffer is classified as a separator character.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is a separator character, otherwise - false
    static bool IsSeparator(const char_t* str, int idx) { return IsSeparator(*(str + idx)); }

    /// Determines whether the specified character is classified as a separator character.
    /// @param c The characetr to test
    /// @returns True if the specified character is a separator character, otherwise - false
    static bool IsSeparator(char_t c)
    {
        uint8_t category = s_category_table[c];
        return category >= (uint8_t)Globalization::UnicodeCategory::SpaceSeparator &&
               category <= (uint8_t)Globalization::UnicodeCategory::ParagraphSeparator;
    }

    /// Determines whether the character at the specified index in the specified character buffer is classified as a symbol character.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is a symbol character, otherwise - false
    static bool IsSymbol(const char_t* str, int idx) { return IsSymbol(*(str + idx)); }

    /// Determines whether the specified character is classified as a symbol character.
    /// @param c The characetr to test
    /// @returns True if the specified character is a symbol character, otherwise - false
    static bool IsSymbol(char_t c)
    {
        uint8_t category = s_category_table[c];
        return category >= (uint8_t)Globalization::UnicodeCategory::MathSymbol &&
               category <= (uint8_t)Globalization::UnicodeCategory::OtherSymbol;
    }

    /// Determines whether the character at the specified index in the specified character buffer is classified as a white space character.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is a white space character, otherwise - false
    static bool IsWhiteSpace(const char_t* str, int idx) { return IsWhiteSpace(*(str + idx)); }

    /// Determines whether the specified character is classified as a white space character.
    /// @param c The characetr to test
    /// @returns True if the specified character is a white space character, otherwise - false
    static bool IsWhiteSpace(char_t c)
    {
        if (c < 0x1680)
            return c == 0x20 || (c >= 0x09 && c <= 0x0d) || c == 0x85 || c == 0xA0;

        uint8_t category = s_category_table[c];
        return category > (uint8_t)Globalization::UnicodeCategory::OtherNumber &&
               category <= (uint8_t)Globalization::UnicodeCategory::ParagraphSeparator;
    }

    /// Determines whether the specified character is classified as a ASCII white space character.
    /// @param c The characetr to test
    /// @returns True if the specified character is a ASCII white space character, otherwise - false
    static constexpr bool IsAsciiWhiteSpace(char_t c)
    {
        return c == 0x20 || (c >= 0x09 && c <= 0x0d);
    }

    /// Determines whether the character at the specified index in the specified character buffer is classified as an upper case letter.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is an upper case letter, otherwise - false
    static bool IsUpper(const char_t* str, int idx) { return IsUpper(*(str + idx)); }

    /// Determines whether the specified character is classified as an upper case letter.
    /// @param c The characetr to test
    /// @returns True if the specified character is an upper case letter, otherwise - false
    static bool IsUpper(char_t c)
    {
        return s_category_table[c] == (uint8_t)Globalization::UnicodeCategory::UppercaseLetter;
    }

    /// Determines whether the character at the specified index in the specified character buffer is classified as a lower case letter.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is a lower case letter, otherwise - false
    static bool IsLower(const char_t* str, int idx) { return IsLower(*(str + idx)); }

    /// Determines whether the specified character is classified as a lower case letter.
    /// @param c The characetr to test
    /// @returns True if the specified character is a lower case letter, otherwise - false
    static bool IsLower(char_t c)
    {
        return s_category_table[c] == (uint8_t)Globalization::UnicodeCategory::LowercaseLetter;
    }

    /// Determines whether the character at the specified index in the specified string is classified as a lower case letter.
    /// @param str A string
    /// @param idx A zero-based index in the specified string to test
    /// @returns True if the character at the specified index is a lower case letter, otherwise - false
    static bool IsLower(const String& str, int idx)
    {
        return IsLower(str[idx]);
    }

    /// Determines whether the character at the specified index in the specified character buffer is classified as a punctuation character.
    /// @param str Pointer to the beginning of the character buffer
    /// @param idx A zero-based index in the specified buffer of the character to test
    /// @returns True if the character at the specified index is a punctuation character, otherwise - false
    static bool IsPunctuation(const char_t* str, int idx) { return IsPunctuation(*(str + idx)); }

    /// Determines whether the specified character is classified as a punctuation character.
    /// @param c The characetr to test
    /// @returns True if the specified character is a punctuation character, otherwise - false
    static bool IsPunctuation(char_t c)
    {
        uint8_t category = s_category_table[c];
        return category >= (uint8_t)Globalization::UnicodeCategory::ConnectorPunctuation &&
               category <= (uint8_t)Globalization::UnicodeCategory::OtherPunctuation;
    }

    /// Cenverts the specified character to upper case.
    /// @param c Character to convert
    /// @returns The specified character in upper case if the specified character is a lower case letter, otherwise - the specified character
    static char_t ToUpper(char_t c)
    {
        return static_cast<char_t>(towupper(static_cast<wchar_t>(c)));
    }

    /// Cenverts the specified character to lower case.
    /// @param c Character to convert
    /// @returns The specified character in lowr case if the specified character is an upper case letter, otherwise - the specified character
    static char_t ToLower(char_t c)
    {
        return static_cast<char_t>(towlower(static_cast<wchar_t>(c)));
    }

    /// Cenverts the specified character to upper case.
    /// @param c Character to convert
    /// @param ci IGNORED
    /// @returns The specified character in upper case if the specified character is a lower case letter, otherwise - the specified character
    static char_t ToUpper(char_t c, const SharedPtr<Globalization::CultureInfo>& ci)
    {
        return ToUpper(c);  //TODO: cultureinfo support is needed
    }

    /// Cenverts the specified character to lower case.
    /// @param c Character to convert
    /// @param ci IGNORED
    /// @returns The specified character in lowr case if the specified character is an upper case letter, otherwise - the specified character
    static char_t ToLower(char_t c, const SharedPtr<Globalization::CultureInfo>& ci)
    {
        return ToLower(c); //TODO: cultureinfo support is needed
    }

    /// Cenverts the specified character to upper case.
    /// @param c Character to convert
    /// @returns The specified character in upper case if the specified character is a lower case letter, otherwise - the specified character
    static char_t ToUpperInvariant(char_t c)
    {
        return ToUpper(c);  //TODO: cultureinfo support is needed
    }

    /// Cenverts the specified character to lower case.
    /// @param c Character to convert
    /// @returns The specified character in lowr case if the specified character is an upper case letter, otherwise - the specified character
    static char_t ToLowerInvariant(char_t c)
    {
        return ToLower(c); //TODO: cultureinfo support is needed
    }

    /// Converts UTF-32 code unit into an instance of System::String class.
    /// @param utf32 A UTF-32 code unit to convert
    /// @returns An instance of System::String class representing the specified UTF-32 code unit.
    static String ConvertFromUtf32(uint32_t utf32)
    {
        if (((utf32 > 0x0010FFFF)) || ((utf32 >= 0xD800) && (utf32 <= 0xDFFF)))
        {
            throw ArgumentOutOfRangeException(u"ArgumentOutOfRange_InvalidUTF32");
        }

        return String::FromUtf32(&utf32, 1);
    }

    /// Converts the specified UTF-16 surrogate pair into UTF-32 code unit.
    /// @param highSurrogate The high surrogate of the UTF-16 surrogate pair to convert
    /// @param lowSurrogate The low surrogate of the UTF-16 surrogate pair to convert
    /// @returns A UTF-32 code unit resulting from conversion
    static int ConvertToUtf32(char_t highSurrogate, char_t lowSurrogate)
    {
        if (!Char::IsHighSurrogate(highSurrogate))
        {
            throw ArgumentOutOfRangeException(u"ArgumentOutOfRange_InvalidHighSurrogate");
        }

        if (!Char::IsLowSurrogate(lowSurrogate))
        {
            throw ArgumentOutOfRangeException(u"ArgumentOutOfRange_InvalidLowSurrogate");
        }

        return (int)(((highSurrogate -0xD800) * 0x0400) + (lowSurrogate - 0xDC00)) + 0x010000;
    }

    /// Tries to convert a strting consisting of a single character into UTF-16 character. The function succeeds only when input string is not null and has length of exactly one character. 
    /// @param s String to convert
    /// @param result The output variable that will contain the result of conversion if conversion succeeds
    /// @returns True if conversion succeeded, otherwise - false
    static bool TryParse(const System::String &s, char_t &result)
    {
        if (s.get_Length() != 1)
            return false;

        result = s[0];
        return true;
    }

    /// Convernts the specified UTF-16 character into double-precision floating-point numerical value.
    /// @param c UTF-16 character to convert
    /// @returns Numerical representation of the specified character.
    static ASPOSECPP_SHARED_API double GetNumericValue(char_t c);

    /// Converts the first and the only character of the specified string to a char_t value.
    /// @param value The string to convert.
    /// @returns The first and the only character of the specified string if it is exactly 1 characetr long.
    static ASPOSECPP_SHARED_API char_t Parse(const String& value);

protected:

#ifdef DISABLE_ASTRAL
    /// Table that maps Unicode characters to the Unicode categories.
    static const uint8_t s_category_table[0xFFFF];
#else
    /// Table that maps Unicode characters to the Unicode categories.
    static const uint8_t ASPOSECPP_SHARED_API s_category_table[71680];
    /// Table that maps Unicode characters to the Unicode astral plane indexes.
    static const uint32_t ASPOSECPP_SHARED_API s_category_table_astral_index[4096];
#endif
};

}

#endif
