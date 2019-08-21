/// @file system/globalization/date_time_styles.h
#pragma once

#include <system/details/enum_meta_info.h>
#include <system/enum_helpers.h>

namespace System { namespace Globalization {

/// Defines date and time formatting options. Bit flags.
enum class DateTimeStyles : int32_t
{
    /// Default.
    None = 0x00000000,
    /// Ignore leading white spaces.
    AllowLeadingWhite = 0x00000001,
    /// Ignore trailing white spaces.
    AllowTrailingWhite = 0x00000002,
    /// Ignore inner white spaces.
    AllowInnerWhite = 0x00000004,
    /// Ignore all white spaces.
    AllowWhiteSpaces = AllowLeadingWhite | AllowInnerWhite | AllowTrailingWhite, // = 7
    /// When parsing a date/time string, if all year/month/day are missing, set the default date to 0001/1/1, instead of the current year/month/day.
    NoCurrentDateDefault = 0x00000008,
    /// When parsing a date/time string, if a timezone specifier ("GMT","Z","+xxxx", "-xxxx" exists), we will ajdust the parsed time based to GMT.
    AdjustToUniversal = 0x00000010,
    /// If no timezone is given, use local timezone.
    AssumeLocal = 0x00000020,
    /// If no timezone is given, use UTC.
    AssumeUniversal = 0x00000040,
    /// Attempt to preserve whether the input is unspecified, local or UTC
    RoundtripKind = 0x00000080
};

}} // namespace System::Globalization

/// Declaration of template arithmetic operators for values of DateTimeStyles enum type.
DECLARE_ENUM_OPERATORS(System::Globalization::DateTimeStyles);

template<>
struct EnumMetaInfo<System::Globalization::DateTimeStyles>
{
    typedef void Flags;
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Globalization::DateTimeStyles, const char16_t*>, 10>& values();
};
