/// @file system/globalization/calendar_algorithm_type.h
#pragma once

#include <system/details/enum_meta_info.h>

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

template<>
struct EnumMetaInfo<System::Globalization::CalendarAlgorithmType>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Globalization::CalendarAlgorithmType, const char16_t*>, 4>& values();
};
