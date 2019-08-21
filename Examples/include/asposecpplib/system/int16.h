#pragma once

#include <system/string.h>
#include <system/iformatprovider.h>
#include <system/globalization/number_styles.h>
#include <limits>

namespace System {

namespace Globalization {
    class CultureInfo;
    class NumberFormatInfo;
}

struct Int16
{
    /// Smallest possible value.
    static ASPOSECPP_SHARED_API constexpr int16_t MinValue = std::numeric_limits<int16_t>::min();
    /// Largest possible value.
    static ASPOSECPP_SHARED_API constexpr int16_t MaxValue = std::numeric_limits<int16_t>::max();

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit signed integer.
    /// @param value The string to convert.
    /// @returns The 16-bit signed integer equal to the number represented by the specified string.
    static ASPOSECPP_SHARED_API int16_t Parse(const String& value);

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit signed integer using the provided formatting information.
    /// @param value The string to convert.
    /// @param provider A pointer to an object that contains the string format information.
    /// @returns The 16-bit signed integer equal to the number represented by the specified string.
    static ASPOSECPP_SHARED_API int16_t Parse(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API int16_t Parse(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API int16_t Parse(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static int16_t Parse(const String& value, std::nullptr_t) { return Parse(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit signed integer using the provided formatting information and number style.
    /// @param value The string to convert.
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number.
    /// @param provider A pointer to an object that contains the string format information.
    /// @returns The 16-bit signed integer equal to the number represented by the specified string.
    static ASPOSECPP_SHARED_API int16_t Parse(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API int16_t Parse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API int16_t Parse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API int16_t Parse(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit signed integer.
    /// @param value The string to convert.
    /// @param result The reference to a 16-bit signed integer variable where the result of the conversion is put.
    /// @returns True if the conversion succeeded, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, int16_t& result);

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit signed integer using the provided formatting information and number style.
    /// @param value The string to convert.
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number.
    /// @param provider A pointer to an object that contains the string format information.
    /// @param result The reference to a 16-bit signed integer variable where the result of the conversion is put.
    /// @returns True if the conversion succeeded, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider, int16_t& result);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture, int16_t& result);
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi, int16_t& result);
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, std::nullptr_t, int16_t& result);
};

} // namespace System
