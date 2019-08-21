/// @file system/globalization/calendar_week_rule.h
#pragma once

namespace System { namespace Globalization {

/// How to determine first week of the year.
enum class CalendarWeekRule
{
    /// First day of the year starts first week of the year.
    FirstDay,
    /// First full week of the year is the first one.
    FirstFullWeek,
    /// First four days long week of the year is the first one.
    FirstFourDayWeek
};

}} // namespace System::Globalization
