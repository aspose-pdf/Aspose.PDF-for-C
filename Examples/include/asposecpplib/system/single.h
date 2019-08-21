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

struct Single
{
    /// Smallest possible value.
    static ASPOSECPP_SHARED_API constexpr float MinValue = std::numeric_limits<float>::lowest();
    /// Largest possible value.
    static ASPOSECPP_SHARED_API constexpr float MaxValue = std::numeric_limits<float>::max();
    /// Smallest positive value that is greater than zero.
    static ASPOSECPP_SHARED_API constexpr float Epsilon = std::numeric_limits<float>::epsilon();
    /// Value that is not a number.
    static ASPOSECPP_SHARED_API constexpr float NaN = std::numeric_limits<float>::quiet_NaN();
    /// Negative infinity.
    static ASPOSECPP_SHARED_API constexpr float NegativeInfinity = -std::numeric_limits<float>::infinity();
    /// Positive infinity.
    static ASPOSECPP_SHARED_API constexpr float PositiveInfinity = std::numeric_limits<float>::infinity();

    /// Converts the specified string containing the string representation of a number to the equivalent single-precision floating-point value.
    /// @param value The string to convert.
    /// @returns The single-precision floating-point value equal to the number represented by the specified string.
    static ASPOSECPP_SHARED_API float Parse(const String& value);

    /// Converts the specified string containing the string representation of a number to the equivalent single-precision floating-point value using the provided formatting information.
    /// @param value The string to convert.
    /// @param provider A pointer to an object that contains the string format information.
    /// @returns The single-precision floating-point value equal to the number represented by the specified string.
    static ASPOSECPP_SHARED_API float Parse(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API float Parse(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API float Parse(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static float Parse(const String& value, std::nullptr_t) { return Parse(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent single-precision floating-point value using the provided formatting information and number style.
    /// @param value The string to convert.
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number.
    /// @param provider A pointer to an object that contains the string format information.
    /// @returns The single-precision floating-point value equal to the number represented by the specified string.
    static ASPOSECPP_SHARED_API float Parse(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API float Parse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API float Parse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API float Parse(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    /// Converts the specified string containing the string representation of a number to the equivalent single-precision floating-point value.
    /// @param value The string to convert.
    /// @param result The reference to a single-precision floating-point variable where the result of the conversion is put.
    /// @returns True if the conversion succeeded, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, float& result);

    /// Converts the specified string containing the string representation of a number to the equivalent single-precision floating-point value using the provided formatting information and number style.
    /// @param value The string to convert.
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number.
    /// @param provider A pointer to an object that contains the string format information.
    /// @param result The reference to a single-precision floating-point variable where the result of the conversion is put.
    /// @returns True if the conversion succeeded, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider, float& result);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture, float& result);
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi, float& result);
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, std::nullptr_t, float& result);
};

} // namespace System
