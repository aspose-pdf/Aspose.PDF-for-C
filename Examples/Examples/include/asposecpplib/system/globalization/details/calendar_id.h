/// @file system/globalization/details/calendar_id.h
#pragma once

namespace System { namespace Globalization { namespace Details {

/// Identifiers of known calendars.
enum CalendarId
{
    /// No calendar.
    UNINITIALIZED_VALUE = 0,
    /// Localized gregorian calendar.
    GREGORIAN = 1,
    /// US gregorian calendar.
    GREGORIAN_US = 2,
    /// Japanese calendar.
    JAPAN = 3,
    /// Taiwanian calendar.
    TAIWAN = 4,
    /// Korean calendar.
    KOREA = 5,
    /// Arabic lunar calendar.
    HIJRI = 6,
    /// Thai calendar.
    THAI = 7,
    /// Hebrew calendar.
    HEBREW = 8,
    /// Gregorian Middle East French calendar.
    GREGORIAN_ME_FRENCH = 9,
    /// Gregorian Arabic calendar.
    GREGORIAN_ARABIC = 10,
    /// Gregorian transliterated English calendar.
    GREGORIAN_XLIT_ENGLISH = 11,
    /// Gregorian transliterated French calendar.
    GREGORIAN_XLIT_FRENCH = 12,
    /// Julian calendar.
    JULIAN = 13,
    /// Japanese lunar-solar calendar.
    JAPANESELUNISOLAR = 14,
    /// Chinese lunar-solar calendar.
    CHINESELUNISOLAR = 15,
    /// Reserved.
    SAKA = 16,
    /// Reserved.
    LUNAR_ETO_CHN = 17,
    /// Reserved.
    LUNAR_ETO_KOR = 18,
    /// Reserved.
    LUNAR_ETO_ROKUYOU = 19,
    /// Korean lunar-solar calendar.
    KOREANLUNISOLAR = 20,
    /// Taiwanian lunar-solar calendar.
    TAIWANLUNISOLAR = 21,
    /// Persian calendar.
    PERSIAN = 22,
    /// Umalqura calendar.
    UMALQURA = 23,
    /// Calendar ID limit.
    LAST_CALENDAR = 23
};

}}} // namespace System::Globalization::Details
