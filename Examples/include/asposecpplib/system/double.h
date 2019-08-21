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

struct Double
{
    /// Smallest possible value.
    static ASPOSECPP_SHARED_API constexpr double MinValue = std::numeric_limits<double>::lowest();
    /// Largest possible value.
    static ASPOSECPP_SHARED_API constexpr double MaxValue = std::numeric_limits<double>::max();
    /// Smallest positive value that is greater than zero.
    static ASPOSECPP_SHARED_API constexpr double Epsilon = std::numeric_limits<double>::epsilon();
    /// Value that is not a number.
    static ASPOSECPP_SHARED_API constexpr double NaN = std::numeric_limits<double>::quiet_NaN();
    /// Negative infinity.
    static ASPOSECPP_SHARED_API constexpr double NegativeInfinity = -std::numeric_limits<double>::infinity();
    /// Positive infinity.
    static ASPOSECPP_SHARED_API constexpr double PositiveInfinity = std::numeric_limits<double>::infinity();

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value.
    /// @param value The string to convert.
    /// @returns The double-precision floating-point value equal to the number represented by the specified string.
    static ASPOSECPP_SHARED_API double Parse(const String& value);

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value using the provided formatting information.
    /// @param value The string to convert.
    /// @param provider A pointer to an object that contains the string format information.
    /// @returns The double-precision floating-point value equal to the number represented by the specified string.
    static ASPOSECPP_SHARED_API double Parse(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API double Parse(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API double Parse(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static double Parse(const String& value, std::nullptr_t) { return Parse(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value using the provided formatting information and number style.
    /// @param value The string to convert.
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number.
    /// @param provider A pointer to an object that contains the string format information.
    /// @returns The double-precision floating-point value equal to the number represented by the specified string.
    static ASPOSECPP_SHARED_API double Parse(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API double Parse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API double Parse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API double Parse(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value.
    /// @param value The string to convert.
    /// @param result The reference to a double-precision floating-point variable where the result of the conversion is put.
    /// @returns True if the conversion succeeded, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, double& result);

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value using the provided formatting information and number style.
    /// @param value The string to convert.
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number.
    /// @param provider A pointer to an object that contains the string format information.
    /// @param result The reference to a double-precision floating-point variable where the result of the conversion is put.
    /// @returns True if the conversion succeeded, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider, double& result);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture, double& result);
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi, double& result);
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, std::nullptr_t, double& result);
};

} // namespace System
