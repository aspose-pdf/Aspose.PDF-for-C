/// @file system/globalization/calendar_week_rule.h
#pragma once

#include <system/details/enum_meta_info.h>

namespace System { namespace Globalization {

/// How to determine first week of the year.
enum class CalendarWeekRule : int32_t
{
    /// First day of the year starts first week of the year.
    FirstDay,
    /// First full week of the year is the first one.
    FirstFullWeek,
    /// First four days long week of the year is the first one.
    FirstFourDayWeek
};

}} // namespace System::Globalization

template<>
struct EnumMetaInfo<System::Globalization::CalendarWeekRule>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Globalization::CalendarWeekRule, const char16_t*>, 3>& values();
};
