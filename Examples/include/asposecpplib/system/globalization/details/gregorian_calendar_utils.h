/// @file system/globalization/details/gregorian_calendar_utils.h
#pragma once

#include <memory>
#include <defines.h>
#include <system/details/icu_namespace.h>

/// Begins an ICU namspace scope.
ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START {
    /// Forward declaration of ICU Calendar class.
    ASPOSECPP_3RD_PARTY_CLASS(Calendar);
}

namespace System { namespace Globalization { namespace Details {

/// Gregorian calendar utility functions.
class GregorianCalendarUtils final
{
public:
    /// Min supported Gregorian year.
    static constexpr int MinYear = 1;
    /// Max supported Gregorian year.
    static constexpr int MaxYear = 9999;

    /// Gets number of days in specific year.
    /// @param year Year.
    /// @return Number of days in specified year.
    static int GetDaysInYear(int year);

    /// Gets number of days in specific month.
    /// @param year Year.
    /// @param month Month.
    /// @return Number of days in specified month of specified year.
    static int GetDaysInMonth(int year, int month);

    /// Checks if the year is leap.
    /// @param year Year.
    /// @return True if specified year is leap, false otherwise.
    static bool IsLeapYear(int year);

    /// Checks if the day is leap.
    /// @param year Year.
    /// @param month Month.
    /// @param day Day.
    /// @return True if specified date is leap, false otherwise.
    static bool IsLeapDay(int year, int month, int day);

    /// Create gregorian ICU calendar.
    /// @return ICU calendar.
    static std::unique_ptr<icu::Calendar> CreateCalendar();
};

}}} // namespace System::Globalization::Details
