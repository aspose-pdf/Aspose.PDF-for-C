/// @file system/globalization/calendar.h
#pragma once

#include <memory>
#include <mutex>
#include <system/object.h>
#include <system/array.h>
#include <system/date_time.h>
#include <system/icloneable.h>
#include <system/globalization/calendar_algorithm_type.h>
#include <system/globalization/calendar_week_rule.h>
#include <system/globalization/details/calendar_id.h>
#include <system/details/icu_namespace.h>
#include <system/details/lock_context.h>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <unicode/calendar.h>
#endif

/// Begins an ICU namspace scope.
ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START {
    /// Forward declaration of ICU Calendar class.
    ASPOSECPP_3RD_PARTY_CLASS(Calendar);
}

namespace System { namespace Globalization {

class Calendar;
/// Calendar pointer type.
typedef SharedPtr<Calendar> CalendarPtr;

/// Calendar which defines how the dates are handled, calculated, formatted, etc.
/// Setter operations are only enabled on non-read-only objects.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Calendar : public ICloneable
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::Calendar, ::System::BaseTypesInfo<System::Object>)

public:
    Calendar(const Calendar&) = delete;
    Calendar& operator=(const Calendar &) = delete;

    /// Gets algorithm type.
    /// @return Value indicating how the calendar is built.
    virtual ASPOSECPP_SHARED_API CalendarAlgorithmType get_AlgorithmType() const = 0;
    /// Gets list of eras existing in calendar.
    /// @return Array of numbers defining eras numbers.
    virtual ASPOSECPP_SHARED_API ArrayPtr<int> get_Eras() const = 0;
    /// Maximal point in time that is supported by the calendar.
    virtual ASPOSECPP_SHARED_API DateTime get_MaxSupportedDateTime() const = 0;
    /// Minimal point in time that is supported by the calendar.
    virtual ASPOSECPP_SHARED_API DateTime get_MinSupportedDateTime() const = 0;

    /// Adds days to time point.
    /// @param time Original time point value.
    /// @param days Number of days to add.
    /// @return Time point after calculation is done.
    virtual ASPOSECPP_SHARED_API DateTime AddDays(const DateTime &time, int days) const;
    /// Adds hours to time point.
    /// @param time Original time point value.
    /// @param hours Number of hours to add.
    /// @return Time point after calculation is done.
    virtual ASPOSECPP_SHARED_API DateTime AddHours(const DateTime &time, int hours) const;
    /// Adds milliseconds to time point.
    /// @param time Original time point value.
    /// @param milliseconds Number of milliseconds to add.
    /// @return Time point after calculation is done.
    virtual ASPOSECPP_SHARED_API DateTime AddMilliseconds(const DateTime &time, double milliseconds) const;
    /// Adds minutes to time point.
    /// @param time Original time point value.
    /// @param minutes Number of minutes to add.
    /// @return Time point after calculation is done.
    virtual ASPOSECPP_SHARED_API DateTime AddMinutes(const DateTime &time, int minutes) const;
    /// Adds months to time point.
    /// @param time Original time point value.
    /// @param months Number of months to add.
    /// @return Time point after calculation is done.
    virtual ASPOSECPP_SHARED_API DateTime AddMonths(const DateTime &time, int months) const;
    /// Adds seconds to time point.
    /// @param time Original time point value.
    /// @param seconds Number of seconds to add.
    /// @return Time point after calculation is done.
    virtual ASPOSECPP_SHARED_API DateTime AddSeconds(const DateTime &time, int seconds) const;
    /// Adds weeks to time point.
    /// @param time Original time point value.
    /// @param weeks Number of weeks to add.
    /// @return Time point after calculation is done.
    virtual ASPOSECPP_SHARED_API DateTime AddWeeks(const DateTime &time, int weeks) const;
    /// Adds years to time point.
    /// @param time Original time point value.
    /// @param years Number of years to add.
    /// @return Time point after calculation is done.
    virtual ASPOSECPP_SHARED_API DateTime AddYears(const DateTime &time, int years) const;

    /// Gets day of month for the specified time point.
    /// @param time Time and date to extract data from.
    /// @return Day of month in the time point passed.
    virtual ASPOSECPP_SHARED_API int GetDayOfMonth(const DateTime &time) const;
    /// Gets day of week for the specified time point.
    /// @param time Time and date to extract data from.
    /// @return Day of week in the time point passed.
    virtual ASPOSECPP_SHARED_API DayOfWeek GetDayOfWeek(const DateTime &time) const;
    /// Gets day of year for the specified time point.
    /// @param time Time and date to extract data from.
    /// @return Day of year in the time point passed.
    virtual ASPOSECPP_SHARED_API int GetDayOfYear(const DateTime &time) const;
    /// Gets number of days in specific month.
    /// @param year Year.
    /// @param month Month to get number of days in.
    /// @return Number of days in specified month of specified year.
    virtual ASPOSECPP_SHARED_API int GetDaysInMonth(int year, int month) const;
    /// Gets number of days in specific month.
    /// @param year Year.
    /// @param month Month to get number of days in.
    /// @param era Era.
    /// @return Number of days in specified month of specified year of specified era.
    virtual ASPOSECPP_SHARED_API int GetDaysInMonth(int year, int month, int era) const;
    /// Gets number of days in specific year.
    /// @param year Year to get number of days in.
    /// @return Number of days in specified year.
    virtual ASPOSECPP_SHARED_API int GetDaysInYear(int year) const;
    /// Gets number of days in specific year.
    /// @param year Year to get number of days in.
    /// @param era Era.
    /// @return Number of days in specified year of specified era.
    virtual ASPOSECPP_SHARED_API int GetDaysInYear(int year, int era) const;
    /// Gets era for the specified time point.
    /// @param time Time and date to extract data from.
    /// @return Era of the time point passed.
    virtual ASPOSECPP_SHARED_API int GetEra(const DateTime &time) const;
    /// Gets hours for the specified time point.
    /// @param time Time and date to extract data from.
    /// @return Hours in the time point passed.
    virtual ASPOSECPP_SHARED_API int GetHour(const DateTime &time) const;
    /// Gets the leap month for the specified year.
    /// @param year Year to get leap month in.
    /// @return Leap month of the speicified year or zero if the year has no leap month.
    virtual ASPOSECPP_SHARED_API int GetLeapMonth(int year) const;
    /// Gets the leap month for the specified year.
    /// @param year Year to get leap month in.
    /// @param era Era.
    /// @return Leap month of the speicified year of the specified era or zero if the year has no leap month.
    virtual ASPOSECPP_SHARED_API int GetLeapMonth(int year, int era) const = 0;
    /// Gets milliseconds for the specified time point.
    /// @param time Time and date to extract data from.
    /// @return Milliseconds in the time point passed.
    virtual ASPOSECPP_SHARED_API double GetMilliseconds(const DateTime &time) const;
    /// Gets minutes for the specified time point.
    /// @param time Time and date to extract data from.
    /// @return Minutes in the time point passed.
    virtual ASPOSECPP_SHARED_API int GetMinute(const DateTime &time) const;
    /// Gets month for the specified time point.
    /// @param time Time and date to extract data from.
    /// @return Month in the time point passed.
    virtual ASPOSECPP_SHARED_API int GetMonth(const DateTime &time) const;
    /// Gets number of months in the specified year.
    /// @param year Year to get number of months in.
    /// @return Number of months in the specified year.
    virtual ASPOSECPP_SHARED_API int GetMonthsInYear(int year) const;
    /// Gets number of months in the specified year.
    /// @param year Year to get number of months in.
    /// @param era Era.
    /// @return Number of months in the specified year of specified era.
    virtual ASPOSECPP_SHARED_API int GetMonthsInYear(int year, int era) const;
    /// Gets seconds for the specified time point.
    /// @param time Time and date to extract data from.
    /// @return Seconds in the time point passed.
    virtual ASPOSECPP_SHARED_API int GetSecond(const DateTime &time) const;
    /// Gets week of the year for the specified time point.
    /// @param time Time and date to extract data from.
    /// @param rule Determines how to determine the first week of the year.
    /// @param first_day_of_week Determines first day of week.
    /// @return Year week number in the time point passed.
    virtual ASPOSECPP_SHARED_API int GetWeekOfYear(const DateTime &time, CalendarWeekRule rule, DayOfWeek first_day_of_week) const;
    /// Gets year for the specified time point.
    /// @param time Time and date to extract data from.
    /// @return Year in the time point passed.
    virtual ASPOSECPP_SHARED_API int GetYear(const DateTime &time) const;

    /// Checks if the day is leap.
    /// @param year Year.
    /// @param month Month.
    /// @param day Day.
    /// @return True if specified date is leap, false otherwise.
    virtual ASPOSECPP_SHARED_API bool IsLeapDay(int year, int month, int day) const;
    /// Checks if the day is leap.
    /// @param year Year.
    /// @param month Month.
    /// @param day Day.
    /// @param era Era.
    /// @return True if specified date is leap, false otherwise.
    virtual ASPOSECPP_SHARED_API bool IsLeapDay(int year, int month, int day, int era) const = 0;
    /// Checks if the month is leap.
    /// @param year Year.
    /// @param month Month.
    /// @return True if specified month is leap, false otherwise.
    virtual ASPOSECPP_SHARED_API bool IsLeapMonth(int year, int month) const;
    /// Checks if the month is leap.
    /// @param year Year.
    /// @param month Month.
    /// @param era Era.
    /// @return True if specified month is leap, false otherwise.
    virtual ASPOSECPP_SHARED_API bool IsLeapMonth(int year, int month, int era) const;
    /// Checks if the year is leap.
    /// @param year Year.
    /// @return True if specified year is leap, false otherwise.
    virtual ASPOSECPP_SHARED_API bool IsLeapYear(int year) const;
    /// Checks if the year is leap.
    /// @param year Year.
    /// @param era Era.
    /// @return True if specified year is leap, false otherwise.
    virtual ASPOSECPP_SHARED_API bool IsLeapYear(int year, int era) const = 0;

    /// Constructs DateTime object from components.
    /// @param year Year.
    /// @param month Month.
    /// @param day Day.
    /// @param hour Hour.
    /// @param minute Minute.
    /// @param second Second.
    /// @param millisecond Millisecond.
    /// @return DateTime object that has specified components.
    virtual ASPOSECPP_SHARED_API DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond) const;
    /// Constructs DateTime object from components.
    /// @param year Year.
    /// @param month Month.
    /// @param day Day.
    /// @param hour Hour.
    /// @param minute Minute.
    /// @param second Second.
    /// @param millisecond Millisecond.
    /// @param era Era.
    /// @return DateTime object that has specified components.
    virtual ASPOSECPP_SHARED_API DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era) const;

    /// Gets calendar identifier.
    /// @return Identifier as defined by calendar.
    virtual Details::CalendarId get_ID() const; // aspose internals
    /// Checks if the calendar is read only.
    /// @return True if the calendar is read only, false otherwise.
    ASPOSECPP_SHARED_API bool get_IsReadOnly() const;
    /// Gets index of current era.
    /// @return Current era index.
    ASPOSECPP_SHARED_API int get_CurrentEra() const;
    /// Gets value of current era.
    /// @return Current era value.
    ASPOSECPP_SHARED_API int get_CurrentEraValue() const; // aspose extension
    /// Checks year, month, day and era values.
    /// @param year Year.
    /// @param month Month.
    /// @param day Day.
    /// @param era Era.
    /// @return True if values are valid.
    bool IsValidDay(int year, int month, int day, int era) const; // aspose extension

    /// Gets the last year that can be represented by a 2-digit.
    virtual ASPOSECPP_SHARED_API int get_TwoDigitYearMax() const;
    /// Sets the last year that can be represented by a 2-digit.
    /// @param value Last year of a 100-year range.
    virtual ASPOSECPP_SHARED_API void set_TwoDigitYearMax(int value);

    /// Converts the year to 4-digit year using TwoDigitYearMax property.
    /// @return Four-digit representation of year.
    virtual ASPOSECPP_SHARED_API int ToFourDigitYear(int year) const;

    /// Gets read only version of calendar.
    /// @param calendar Calendar to get read only version of.
    /// @return Same calendar if it is read only or a copy of it with read-only flag set.
    static ASPOSECPP_SHARED_API CalendarPtr ReadOnly(const CalendarPtr& calendar);

protected:
    /// Current era value.
    static constexpr int CurrentEra = 0;

    /// Default constructor.
    ASPOSECPP_SHARED_API Calendar();
    /// Constructor.
    /// @param calendar Implementation.
    Calendar(std::unique_ptr<icu::Calendar>&& calendar);

    /// Checks if the calendar is Gregorian-based.
    virtual bool IsGregorianBasedCalendar() const;

    /// Verify year and era values.
    /// @throws ArgumentException If year or era has invalid values.
    virtual void VerifyYear(int year, int era) const;
    /// Verify year, month and era values.
    /// @throws ArgumentException If year, month or era has invalid values.
    virtual void VerifyMonth(int year, int month, int era) const;
    /// Verify year, month, day and era values.
    /// @throws ArgumentException If year, month, day or era has invalid values.
    virtual void VerifyDate(int year, int month, int day, int era) const;
    /// Verify hour, minute, second and millisecond values.
    /// @throws ArgumentException If hour, minute, second or millisecond has invalid values.
    void VerifyTime(int hour, int minute, int second, int millisecond) const;
    /// Verify time value.
    /// @throws ArgumentOutOfRangeException If time is out of range.
    void VerifyDateTimeRange(const DateTime& time) const;
    /// Verify that calendar is not read-only.
    void VerifyWriteable() const;

    /// Convert Framework era value to ICU era format.
    /// @param era Framework era value.
    /// @return ICU era value.
    virtual int EraToIcuEra(int era) const;
    /// Convert ICU era value to Framework era format.
    /// @param icu_era ICU era value.
    /// @return Framework era value.
    virtual int IcuEraToEra(int icu_era) const;

    /// Use the UCAL_EXTENDED_YEAR field instead of the UCAL_YEAR field.
    /// Must be set for the ChineseLunisolar-based calendars.
    void UseExtendedYearField();
    /// Set year offset.
    /// result_year = icu_year + year_offset
    /// @param year_offset Year offset.
    void SetYearOffset(int year_offset);
    /// Sets the number of days to add or subtract from the calendar.
    /// @param date_adjustment Date adjustment.
    void SetDateAdjustment(int date_adjustment);

    /// Gets year (UCAL_YEAR) for the specified time point. 
    int GetYearInternal(const DateTime& time) const;
    /// Gets days in month (UCAL_DAY_OF_MONTH) for the specified year, month and era. 
    int GetDaysInMonthInternal(int year, int month, int era) const;
    /// Constructs DateTime object from components.
    DateTime ToDateTimeInternal(int year, int month, int day, int hour, int minute, int second, int millisecond, int era) const;
    /// Sets the last year that can be represented by a 2-digit. 
    void SetTwoDigitYearMaxInternal(int year);

private:
    /// Calendar implementation.
    const std::unique_ptr<icu::Calendar> m_calendar;

    /// Indicates whether calendar is read only.
    bool m_is_read_only = false;
    /// Use UCAL_EXTENDED_YEAR field instead of UCAL_YEAR field.
    bool m_use_extended_year = false;
    /// Year offset.
    int m_year_offset = 0;
    /// Last year that can be represented by a 2-digit.
    int m_two_digit_year_max = 0;
    /// Date adjustment.
    int m_date_adjustment = 0;

    /// Unpacked DateTime.
    struct DateTimeFields;

    /// Gets calendar implementation.
    icu::Calendar& GetCalendar(const LockContext&) const;

    /// Gets lockable object.
    Object* GetLockable() const;

    /// Extracts date and time from current calendar.
    /// @param kind Style of date and time to extract.
    /// @return Extracted time point.
    DateTime GetDateTime(DateTimeKind kind, const LockContext&) const;

    /// Sets date held by calendar.
    /// @param time Time point to assign to the calendar.
    void SetDateTime(const DateTime& time, const LockContext&) const;
    /// Sets date held by calendar.
    /// @param time Time point to assign to the calendar.
    void SetDateTime(const DateTimeFields& time, const LockContext&) const;

    /// Verify DateTime field (UCalendarDateFields).
    void VerifyField(int field, int value, const char16_t* field_name, const LockContext&) const;

    /// Gets value of the specified time-point field.
    /// @param time Original time-point value.
    /// @param field Time-point filed.
    /// @param field_name Name of the field.
    /// @return Value of the time-point field.
    int GetDateTimeField(const DateTime& time, int field, const char16_t* field_name) const;

    /// Gets maximum value of the specified time-point field.
    /// @param time Original time-point value.
    /// @param field Time-point filed.
    /// @param field_name Name of the field.
    /// @return Maximum value of the time-point field.
    int GetMaximumForDateTimeField(const DateTimeFields& time, int field, const char16_t* field_name) const;

    /// Adds value to the specified time-point field.
    /// @param time Original time-point value.
    /// @param field Time-point filed.
    /// @param days Value to add.
    /// @param field_name Name of the field.
    /// @return Time-point after calculation is done.
    DateTime AddValueToDateTimeField(const DateTime& time, int field, int value, const char16_t* field_name) const;

    /// Throws ArgumentOutOfRangeException.
    [[noreturn]] void ResultOutOfRange() const;
};

}} //namespace System::Globalization
