/// @file system/globalization/gregorian_calendar_types.h
#pragma once

#include <system/details/enum_meta_info.h>
#include <system/globalization/details/calendar_id.h>

namespace System { namespace Globalization {

/// Types of gregorian calendars.
enum class GregorianCalendarTypes : int32_t
{
    /// Locale-specific gregorian calendar.
    Localized = static_cast<int>(Details::CalendarId::GREGORIAN),
    /// US English gregorian calendar.
    USEnglish = static_cast<int>(Details::CalendarId::GREGORIAN_US),
    /// Middle East French gregorian calendar.
    MiddleEastFrench = static_cast<int>(Details::CalendarId::GREGORIAN_ME_FRENCH),
    /// Arabic gregorian calendar.
    Arabic = static_cast<int>(Details::CalendarId::GREGORIAN_ARABIC),
    /// Transliterated English gregorian calendar.
    TransliteratedEnglish = static_cast<int>(Details::CalendarId::GREGORIAN_XLIT_ENGLISH),
    /// Transliterated French gregorian calendar.
    TransliteratedFrench = static_cast<int>(Details::CalendarId::GREGORIAN_XLIT_FRENCH)
};

}} // namespace System::Globalization

template<>
struct EnumMetaInfo<System::Globalization::GregorianCalendarTypes>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Globalization::GregorianCalendarTypes, const char16_t*>, 6>& values();
};
