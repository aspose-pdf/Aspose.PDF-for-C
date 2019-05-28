/// @file system/globalization/gregorian_calendar_types.h
#pragma once

#include <system/globalization/details/calendar_id.h>

namespace System { namespace Globalization {

/// Types of gregorian calendars.
enum class GregorianCalendarTypes
{
    /// Locale-specific gregorian calendar.
    Localized = Details::CalendarId::GREGORIAN,
    /// US English gregorian calendar.
    USEnglish = Details::CalendarId::GREGORIAN_US,
    /// Middle East French gregorian calendar.
    MiddleEastFrench = Details::CalendarId::GREGORIAN_ME_FRENCH,
    /// Arabic gregorian calendar.
    Arabic = Details::CalendarId::GREGORIAN_ARABIC,
    /// Transliterated English gregorian calendar.
    TransliteratedEnglish = Details::CalendarId::GREGORIAN_XLIT_ENGLISH,
    /// Transliterated French gregorian calendar.
    TransliteratedFrench = Details::CalendarId::GREGORIAN_XLIT_FRENCH
};

}} // namespace System::Globalization
