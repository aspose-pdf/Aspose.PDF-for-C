/// @file system/globalization/time_span_styles.h
#pragma once

#include <system/details/enum_meta_info.h>
#include <system/enum_helpers.h>

namespace System { namespace Globalization {

/// Specifies the formatting options that customize string parsing for methods that convert a string representation of a time interval into Timespan object.
enum class TimeSpanStyles : int32_t
{
    /// The time interval represented by the inptut string is interpreted as a negative time interval only if a negative sign is present.
    None = 0,
    /// The time interval represented by the inptut string is interpreted as a negative time interval always.
    AssumeNegative = 1
};

}} // namespace System::Globalization

/// Declaration of template arithmetic operators for values of TimeSpanStyles enum type.
DECLARE_ENUM_OPERATORS(System::Globalization::TimeSpanStyles);

template<>
struct EnumMetaInfo<System::Globalization::TimeSpanStyles>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Globalization::TimeSpanStyles, const char16_t*>, 2>& values();
};
