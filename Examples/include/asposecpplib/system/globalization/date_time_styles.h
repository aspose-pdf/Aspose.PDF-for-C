#ifndef _date_time_styles_h_
#define _date_time_styles_h_

#include <system/enum_helpers.h>

namespace System { namespace Globalization {

    enum class DateTimeStyles
    {
        None = 0x00000000,
        AllowLeadingWhite = 0x00000001,
        AllowTrailingWhite = 0x00000002, //Bitflag indicating trailing whitespace is allowed.
        AllowInnerWhite = 0x00000004,
        AllowWhiteSpaces = AllowLeadingWhite | AllowInnerWhite | AllowTrailingWhite,
        // When parsing a date/time string, if all year/month/day are missing, set the default date to 0001/1/1, instead of the current year/month/day.
        NoCurrentDateDefault = 0x00000008,
        // When parsing a date/time string, if a timezone specifier ("GMT","Z","+xxxx", "-xxxx" exists), we will ajdust the parsed time based to GMT.
        AdjustToUniversal = 0x00000010,
        AssumeLocal = 0x00000020,
        AssumeUniversal = 0x00000040,
        // Attempt to preserve whether the input is unspecified, local or UTC
        RoundtripKind = 0x00000080
    };
}}

DECLARE_ENUM_OPERATORS(System::Globalization::DateTimeStyles);

#endif