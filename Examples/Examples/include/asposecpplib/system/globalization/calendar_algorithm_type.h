/// @file system/globalization/calendar_algorithm_type.h
#pragma once

namespace System { namespace Globalization {

/// Calendar type.
enum class CalendarAlgorithmType
{
    /// Lunar-based calendar.
    LunarCalendar,
    /// Lunar and solar-based calendar.
    LunisolarCalendar,
    /// Solar calendar.
    SolarCalendar,
    /// Unknown calendar.
    Unknown
};

}} // namespace System::Globalization
