#pragma once

#include <system/string.h>
#include <system/iformatprovider.h>
#include <system/globalization/number_styles.h>

namespace System {

namespace Globalization {
    class CultureInfo;
    class NumberFormatInfo;
}

struct Boolean
{
    static ASPOSECPP_SHARED_API const String TrueString;
    static ASPOSECPP_SHARED_API const String FalseString;

    /// Converts the specified string to a value of bool type.
    /// @param value The string to convert.
    /// @returns The bool variable where the result of the conversion is put; the result is true if the specified string is equal to "True" and false if the specified string is equal to "False".
    static ASPOSECPP_SHARED_API bool Parse(const String& value);

    /// Converts the specified string to a value of bool type.
    /// @param value The string to convert.
    /// @param result The reference to a bool variable where the result of the conversion is put; the result is true if the specified string is equal to "True" and false if the specified string is equal to "False".
    /// @returns True if the specified string is equal either to "True" or "False", otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, bool& result);
};

} // namespace System
