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

class Char
{
public:

    static Globalization::UnicodeCategory GetUnicodeCategory(char_t ch)
    {
        return (Globalization::UnicodeCategory)s_category_table[(uint32_t)ch];
    }

    static bool IsSurrogate(char_t c)
    {
        return (s_category_table[c] == (uint8_t)Globalization::UnicodeCategory::Surrogate);
    }

    static bool IsSurrogatePair(char_t highSurrogate, char_t lowSurrogate)
    {
        return 0xD800 <= (uint32_t)highSurrogate && (uint32_t)highSurrogate <= 0xDBFF &&
               0xDC00 <= (uint32_t)lowSurrogate && (uint32_t)lowSurrogate <= 0xDFFF;
    }

    static bool IsSurrogatePair (const char_t* str, int index)
    {
        // TODO: check params
        return IsSurrogatePair (str[index], str[index + 1]);
    }

    static bool IsHighSurrogate(const char_t* str, int idx) { return IsHighSurrogate(*(str+idx)); }
    static bool IsHighSurrogate(char_t c)
    {
        return (uint32_t)c >= 0xD800 && (uint32_t)c <= 0xDBFF;
    }

    static bool IsLowSurrogate(const char_t* str, int idx) { return IsLowSurrogate(*(str+idx)); }
    static bool IsLowSurrogate(char_t c)
    {
        return (uint32_t)c >= 0xDC00 && (uint32_t)c <= 0xDFFF;
    }

    static bool IsControl(const char_t* str, int idx) { return IsControl(*(str + idx)); }
    static bool IsControl(char_t c)
    {
        return s_category_table[c] == (uint8_t)Globalization::UnicodeCategory::Control;
    }

    static bool IsDigit(const char_t* str, int idx) { return IsDigit(*(str + idx)); }
    static bool IsDigit(char_t c)
    {
        return s_category_table[c] == (uint8_t)Globalization::UnicodeCategory::DecimalDigitNumber;
    }

    static bool IsLetter(const char_t* str, int idx) { return IsLetter(*(str + idx)); }
    static bool IsLetter(char_t c)
    {
        return s_category_table[c] <= (uint8_t)Globalization::UnicodeCategory::OtherLetter;
    }

    static bool IsLetterOrDigit(const char_t* str, int idx) { return IsLetterOrDigit(*(str + idx)); }
    static bool IsLetterOrDigit(char_t c)
    {
        int category = s_category_table[c];
        return (category <= ((int)Globalization::UnicodeCategory::OtherLetter) ||
                category == ((int)Globalization::UnicodeCategory::DecimalDigitNumber));
    }

    static bool IsNumber(const char_t* str, int idx) { return IsNumber(*(str + idx)); }
    static bool IsNumber(char_t c)
    {
        uint8_t category = s_category_table[c];
        return category >= (uint8_t)Globalization::UnicodeCategory::DecimalDigitNumber &&
               category <= (uint8_t)Globalization::UnicodeCategory::OtherNumber;
    }

    static bool IsSeparator(const char_t* str, int idx) { return IsSeparator(*(str + idx)); }
    static bool IsSeparator(char_t c)
    {
        uint8_t category = s_category_table[c];
        return category >= (uint8_t)Globalization::UnicodeCategory::SpaceSeparator &&
               category <= (uint8_t)Globalization::UnicodeCategory::ParagraphSeparator;
    }

    static bool IsSymbol(const char_t* str, int idx) { return IsSymbol(*(str + idx)); }
    static bool IsSymbol(char_t c)
    {
        uint8_t category = s_category_table[c];
        return category >= (uint8_t)Globalization::UnicodeCategory::MathSymbol &&
               category <= (uint8_t)Globalization::UnicodeCategory::OtherSymbol;
    }

    static bool IsWhiteSpace(const char_t* str, int idx) { return IsWhiteSpace(*(str + idx)); }
    static bool IsWhiteSpace(char_t c)
    {
        if (c < 0x1680)
            return c == 0x20 || (c >= 0x09 && c <= 0x0d) || c == 0x85 || c == 0xA0;

        uint8_t category = s_category_table[c];
        return category > (uint8_t)Globalization::UnicodeCategory::OtherNumber &&
               category <= (uint8_t)Globalization::UnicodeCategory::ParagraphSeparator;
    }

    static bool IsUpper(const char_t* str, int idx) { return IsUpper(*(str + idx)); }
    static bool IsUpper(char_t c)
    {
        return s_category_table[c] == (uint8_t)Globalization::UnicodeCategory::UppercaseLetter;
    }

    static bool IsLower(const char_t* str, int idx) { return IsLower(*(str + idx)); }
    static bool IsLower(char_t c)
    {
        return s_category_table[c] == (uint8_t)Globalization::UnicodeCategory::LowercaseLetter;
    }
    static bool IsLower(const String& str, int idx)
    {
        return IsLower(str[idx]);
    }

    static bool IsPunctuation(const char_t* str, int idx) { return IsPunctuation(*(str + idx)); }
    static bool IsPunctuation(char_t c)
    {
        uint8_t category = s_category_table[c];
        return category >= (uint8_t)Globalization::UnicodeCategory::ConnectorPunctuation &&
               category <= (uint8_t)Globalization::UnicodeCategory::OtherPunctuation;
    }

    static char_t ToUpper(char_t c)
    {
        return towupper(c);
    }

    static char_t ToLower(char_t c)
    {
        return towlower(c);
    }

    static char_t ToUpper(char_t c, SharedPtr<Globalization::CultureInfo> ci)
    {
        return ToUpper(c);  //TODO: cultureinfo support is needed
    }
    static char_t ToLower(char_t c, SharedPtr<Globalization::CultureInfo> ci)
    {
        return ToLower(c); //TODO: cultureinfo support is needed
    }

    static char_t ToUpperInvariant(char_t c)
    {
        return ToUpper(c);  //TODO: cultureinfo support is needed
    }

    static char_t ToLowerInvariant(char_t c)
    {
        return ToLower(c); //TODO: cultureinfo support is needed
    }

    static String ConvertFromUtf32(uint32_t utf32)
    {
		if (((utf32 < 0) || (utf32 > 0x0010FFFF)) || ((utf32 >= 0xD800) && (utf32 <= 0xDFFF)))
		{
			throw ArgumentOutOfRangeException(L"ArgumentOutOfRange_InvalidUTF32");
		}

		return String::FromUtf32(&utf32, 1);
    }

	static int ConvertToUtf32(char_t highSurrogate, char_t lowSurrogate)
	{
		if (!Char::IsHighSurrogate(highSurrogate))
		{
			throw ArgumentOutOfRangeException(L"ArgumentOutOfRange_InvalidHighSurrogate");
		}

		if (!Char::IsLowSurrogate(lowSurrogate))
		{
			throw ArgumentOutOfRangeException(L"ArgumentOutOfRange_InvalidLowSurrogate");
		}

		return (int)(((highSurrogate -0xD800) * 0x0400) + (lowSurrogate - 0xDC00)) + 0x010000;
	}

    static bool TryParse(const System::String &s, char_t &result)
    {
        if (s.get_Length() != 1)
            return false;

        result = s[0];
        return true;
    }

    static double GetNumericValue(char_t c);

protected:

#ifdef DISABLE_ASTRAL
    static const uint8_t s_category_table[0xFFFF];
#else
    static const uint8_t ASPOSECPP_SHARED_API s_category_table[71680];
    static const uint32_t ASPOSECPP_SHARED_API s_category_table_astral_index[4096];
#endif
};

}

#endif
