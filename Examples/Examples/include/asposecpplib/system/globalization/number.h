/// @file system/globalization/number.h
#ifndef _aspose_system_number_h_
#define _aspose_system_number_h_

#include "fwd.h"
#include "system/string.h"
#include "system/globalization/number_format_info.h"
#include "system/globalization/number_style.h"
#include "system/decimal.h"

namespace System { namespace Globalization {

/// Number-related algorithms.
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
class Number
{
public:
    /// Parses format specifier into ICU-friendly format. Not implemented.
    /// @param str String to parse format specifier from.
    /// @param digits Reference to variable to store number of digits in.
    static ASPOSECPP_SHARED_API char_t ParseFormatSpecifier(const String &str, int& digits);

    /// Parses long integer value.
    /// @param value Value to parse.
    /// @param style Number parsing style.
    /// @param numberFormatInfo Information on number format to use.
    /// @return Parsed value.
    static ASPOSECPP_SHARED_API int64_t ParseInt64(const String& value, NumberStyles style, NumberFormatInfoPtr numberFormatInfo);
    /// Parses long integer value.
    /// @param value Value to parse.
    /// @param style Number parsing style.
    /// @param numberFormatInfo Information on number format to use.
    /// @param result Variable to store parsed value.
    /// @return True if parsing succeeded, false otherwise.
    static ASPOSECPP_SHARED_API bool TryParseInt64(const String& value, NumberStyles style, NumberFormatInfoPtr numberFormatInfo, int64_t& result);

    /// Parses floating point value.
    /// @param value Value to parse.
    /// @param style Number parsing style.
    /// @param numberFormatInfo Information on number format to use.
    /// @return Parsed value.
    static ASPOSECPP_SHARED_API double ParseDouble(const String& value, NumberStyles style, NumberFormatInfoPtr numberFormatInfo);
    /// Parses floating point value.
    /// @param value Value to parse.
    /// @param style Number parsing style.
    /// @param numberFormatInfo Information on number format to use.
    /// @param result Variable to store parsed value.
    /// @return True if parsing succeeded, false otherwise.
    static ASPOSECPP_SHARED_API bool TryParseDouble(const String& value, NumberStyles style, NumberFormatInfoPtr numberFormatInfo, double& result);

    /// Checks if integer style value is acceptable.
    /// @param style Style to check.
    /// @throw ArgumentException If style is inacceptable.
    static ASPOSECPP_SHARED_API void ValidateParseStyleInteger(NumberStyles style);
    /// Checks if floating point style value is acceptable.
    /// @param style Style to check.
    /// @throw ArgumentException If style is inacceptable.
    static ASPOSECPP_SHARED_API void ValidateParseStyleFloatingPoint(NumberStyles style);

private:
    /// Checks if character is a white space.
    /// @param ch Character to check.
    /// @return True if character is a whitespace, false otherwise.
    static bool IsWhite(char ch) { return (((ch) == 0x20) || ((ch) >= 0x09 && (ch) <= 0x0D)); }
    /// Parses hex integer.
    /// @param value String to parse.
    /// @param style Style to use.
    /// @return Parsed value.
    static ASPOSECPP_SHARED_API uint64_t ParseHexString(const String& value, Globalization::NumberStyles style);
};

}}
#endif
