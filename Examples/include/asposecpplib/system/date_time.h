/// @file system/date_time.h
/// Contains declarations of System::DateTime class.
#pragma once

#include <system/date_time_kind.h>
#include <system/day_of_week.h>
#include <system/timespan.h>
#include <system/boxable_traits.h>
#include <system/globalization/date_time_styles.h>
#include <functional>
#include <memory>

namespace System {

namespace Globalization { 
    class Calendar;
    class CultureInfo;
    class DateTimeFormatInfo;
}

/// Represents a specific date and time value on the time continuum.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS DateTime final
{
public:
    // Number of 100ns ticks per time unit
    /// The number of ticks in a microsecond.
    static constexpr int64_t TicksPerMicrosecond = 10;
    /// The number of ticks in a millisecond.
    static constexpr int64_t TicksPerMillisecond = 10000;
    /// The number of ticks in a second.
    static constexpr int64_t TicksPerSecond = TicksPerMillisecond * 1000;
    /// The number of ticks in a minute.
    static constexpr int64_t TicksPerMinute = TicksPerSecond * 60;
    /// The number of ticks in a hour.
    static constexpr int64_t TicksPerHour = TicksPerMinute * 60;
    /// The number of ticks in a day.
    static constexpr int64_t TicksPerDay = TicksPerHour * 24;

    /// The minimal number of ticks that an instance of DateTime class can represent.
    static constexpr int64_t MinTicks = 0;
    /// The number of 100-nanosecond in the time interval between the minimal possible and maximal possibel DateTime value. 
    static constexpr int64_t MaxTicks = 3652059 * TicksPerDay - 1;

    /// An instance of DateTime class that represents the minimal possible date and time value.
    static ASPOSECPP_SHARED_API const DateTime MinValue;

    /// An instance of DateTime class that represents the maximal possible date and time value.
    static ASPOSECPP_SHARED_API const DateTime MaxValue;

    /// An instance of DateTime class that represents the Unix epoch start (1970.01.01 00:00:00).
    static ASPOSECPP_SHARED_API const DateTime UnixEpoch;

    /// Constructs an instance that represents the smallest possible date and time value equal to MinValue.
    constexpr DateTime() : m_data(0) {}

    /// Constructs an instance that represents a date and time value specified as a particular year, month and day.
    /// @param year The year to be represenetd by the instance being constructed.
    /// @param month The month of the @p year to be represented by the instance being constructed.
    /// @param day The day of the @p month to be represented by the instance being constructed.
    ASPOSECPP_SHARED_API DateTime(int year, int month, int day);

    /// Constructs an instance that represents a date and time value specified as a particular year, month and day in the specified calendar.
    /// @param year The year to be represenetd by the instance being constructed.
    /// @param month The month of the @p year to be represented by the instance being constructed.
    /// @param day The day of the @p month to be represented by the instance being constructed.
    /// @param calendar The calendar used to interpret the specified @p year, @p month and @p day.
    ASPOSECPP_SHARED_API DateTime(int year, int month, int day, const SharedPtr<Globalization::Calendar>& calendar);

    /// Constructs an instance that represents a date and time value specified as a particular year, month, day, hour, minute and second.
    /// @param year The year to be represenetd by the instance being constructed.
    /// @param month The month of the @p year to be represented by the instance being constructed.
    /// @param day The day of the @p month to be represented by the instance being constructed.
    /// @param hour The hour of the @p day to be represented by the instance being constructed.
    /// @param minute The minute of the @p hour to be represented by the instance being constructed.
    /// @param second The second of the @p minute te be represented by the instance being constructed.
    ASPOSECPP_SHARED_API DateTime(int year, int month, int day, int hour, int minute, int second);

    /// Constructs an instance that represents a date and time value specified as a particular year, month, day, hour, minute and second.
    /// @param year The year to be represenetd by the instance being constructed.
    /// @param month The month of the @p year to be represented by the instance being constructed.
    /// @param day The day of the @p month to be represented by the instance being constructed.
    /// @param hour The hour of the @p day to be represented by the instance being constructed.
    /// @param minute The minute of the @p hour to be represented by the instance being constructed.
    /// @param second The second of the @p minute te be represented by the instance being constructed.
    /// @param kind The value that indicates if the provided date and time parameters specify a local time, UTC time or neither.
    ASPOSECPP_SHARED_API DateTime(int year, int month, int day, int hour, int minute, int second, DateTimeKind kind);

    /// Constructs an instance that represents a date and time value specified as a particular year, month, day, hour, minute and second in the specified calendar.
    /// @param year The year to be represenetd by the instance being constructed.
    /// @param month The month of the @p year to be represented by the instance being constructed.
    /// @param day The day of the @p month to be represented by the instance being constructed.
    /// @param hour The hour of the @p day to be represented by the instance being constructed.
    /// @param minute The minute of the @p hour to be represented by the instance being constructed.
    /// @param second The second of the @p minute te be represented by the instance being constructed.
    /// @param calendar The calendar used to interpret the specified @p year, @p month and @p day.
    ASPOSECPP_SHARED_API DateTime(int year, int month, int day, int hour, int minute, int second, const SharedPtr<Globalization::Calendar>& calendar);

    /// Constructs an instance that represents a date and time value specified as a particular year, month, day, hour, minute, second and millisecond.
    /// @param year The year to be represenetd by the instance being constructed.
    /// @param month The month of the @p year to be represented by the instance being constructed.
    /// @param day The day of the @p month to be represented by the instance being constructed.
    /// @param hour The hour of the @p day to be represented by the instance being constructed.
    /// @param minute The minute of the @p hour to be represented by the instance being constructed.
    /// @param second The second of the @p minute te be represented by the instance being constructed.
    /// @param millisecond The millisecond of the @p second to be represented by the instance being constructed.
    /// @param kind The value that indicates if the provided date and time parameters specify a local time, UTC time or neither.
    ASPOSECPP_SHARED_API DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, DateTimeKind kind = DateTimeKind::Unspecified);

    /// Constructs an instance that represents a date and time value specified as a particular year, month, day, hour, minute, second and millisecond in the specified calendar.
    /// @param year The year to be represenetd by the instance being constructed.
    /// @param month The month of the @p year to be represented by the instance being constructed.
    /// @param day The day of the @p month to be represented by the instance being constructed.
    /// @param hour The hour of the @p day to be represented by the instance being constructed.
    /// @param minute The minute of the @p hour to be represented by the instance being constructed.
    /// @param second The second of the @p minute te be represented by the instance being constructed.
    /// @param millisecond The millisecond of the @p second to be represented by the instance being constructed.
    /// @param kind The value that indicates if the provided date and time parameters specify a local time, UTC time or neither.
    /// @param calendar The calendar used to interpret the specified @p year, @p month and @p day.
    ASPOSECPP_SHARED_API DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, const SharedPtr<Globalization::Calendar>& calendar, DateTimeKind kind = DateTimeKind::Unspecified);

    /// Construct an instance that represents a date and time value specified as a number of ticks.
    /// @param ticks The number of 100-ns intervals that have passed since January the 1st, 0001 00:00:00.000 in Georgian calendar.
    /// @param kind The value that indicates if @p ticks parameter specifies a local time, UTC time or neither.
    ASPOSECPP_SHARED_API DateTime(int64_t ticks, DateTimeKind kind = DateTimeKind::Unspecified);

    /// Construct an instance that represents a date and time value specified as a number of ticks. FOR INTERNAL USE.
    /// @param ticks The number of 100-ns intervals that have passed since January the 1st, 0001 00:00:00.000 in Georgian calendar.
    /// @param kind The value that indicates if @p ticks parameter specifies a local time, UTC time or neither.
    /// @param is_ambiguous_local_dst True if specified date and time is ambiguous and can be mapped to many UTC times.
    DateTime(int64_t ticks, DateTimeKind kind, bool is_ambiguous_local_dst);

    /// Copy-constructs an instance.
    /// @param dt An instance of DateTime class to copy the represented date and time value from
    DateTime(const DateTime& dt) = default;

    /// Assigns the value represented by the specified DateTime instance to the current object.
    /// @param dt An instance of DateTime class to copy the represented date and time value from
    /// @returns A reference to the self
    DateTime& operator=(const DateTime& dt) = default;

    /// Returns a new instance of DateTime class that represents the date portion of the date and time represented by the current object with each component of the time portion set to 0.
    constexpr DateTime get_Date() const
    {
        const int64_t ticks = get_Ticks();
        return DateTime(static_cast<uint64_t>(ticks - (ticks % TicksPerDay)) | Flags(), InternalConstructor);
    }

    /// Returns a value representing a day of week that is represented by the current object.
    constexpr DayOfWeek get_DayOfWeek() const
    {
        return static_cast<DayOfWeek>((get_Ticks() / TicksPerDay + 1) % 7);
    }

    /// Returns the value representing if the date and time represented by the current object is a local or UTC date and time or neither.
    constexpr DateTimeKind get_Kind() const
    {
        return static_cast<DateTimeKind>(std::min(2, static_cast<int>(m_data >> 62)));
    }

    /// Returns the value that represents the time interval from the beginning of the day represented by the current object till the date and time value represented by the current object.
    constexpr TimeSpan get_TimeOfDay() const
    {
        return TimeSpan(get_Ticks() % TicksPerDay);
    }

    /// Returns the ordinal number of the day in the year represented by the current object.
    ASPOSECPP_SHARED_API int get_DayOfYear() const;

    /// Returns the year represented by the current object.
    ASPOSECPP_SHARED_API int get_Year() const;
        
    /// Returns the ordinal number of the month in the year represented by the current object.
    ASPOSECPP_SHARED_API int get_Month() const;

    /// Returns the ordinal number of the day in the month represented by the current object.
    ASPOSECPP_SHARED_API int get_Day() const;

    /// Gets date parts. FOR INTERNAL USE.
    void GetDateComponents(int& year, int& month, int& day) const;

    /// Returns the hour component of the date and time value represented by the current object.
    constexpr int get_Hour() const
    {
        return static_cast<int>((get_Ticks() / TicksPerHour) % 24);
    }
        
    /// Returns the minute component of the date and time value represented by the current object.
    constexpr int get_Minute() const
    {
        return static_cast<int>((get_Ticks() / TicksPerMinute) % 60);
    }

    /// Returns the second component of the date and time value represented by the current object.
    constexpr int get_Second() const
    {
        return static_cast<int>((get_Ticks() / TicksPerSecond) % 60);
    }

    /// Returns the millisecond component of the date and time value represented by the current object.
    constexpr int get_Millisecond() const
    {
        return static_cast<int>((get_Ticks() / TicksPerMillisecond) % 1000);
    }

    /// Returns a number of 100-nanosecond intervals passed since 0:00:00 UTC, January 1, 0001, in the Gregorian calendar until the date and time represented by the current object.
    constexpr int64_t get_Ticks() const
    {
        return static_cast<int64_t>(m_data & TicksMask);
    }

    /// Returns an instance of DateTime class that represents the current time as local time.
    static ASPOSECPP_SHARED_API DateTime get_Now();

    /// Returns an instance of DateTime class that represents the current time as UTC.
    static ASPOSECPP_SHARED_API DateTime get_UtcNow();

    /// Returns an instance of DateTime class that represents the current date with each component of time portion of the value represented by the object set to 0.
    static ASPOSECPP_SHARED_API DateTime get_Today();

    /// Returns a new instance of DateTime class that represents a date and time value that results from addition of the specified time span to the date and time value represented by the current object.
    /// @param value The time interval to add
    /// @returns A new instance of DateTime class that represents a date and time value that results from addition of @p tm time span to the date and time value represented by the current object
    ASPOSECPP_SHARED_API DateTime Add(TimeSpan value) const;

    /// Returns a new instance of the DateTime class representing the date and time value equal to that represented by the current object with the year component increased by the specified numeber.
    /// @param value The number of years to add; the value can be positive or negative
    /// @returns A new instance of the DateTime class representing the date and time value equal to that represented by the current object with the year component increased by @p value
    ASPOSECPP_SHARED_API DateTime AddYears(int value) const;

    /// Returns a new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and the specified number of months.
    /// @param value The number of months to add; the value can be positive or negative
    /// @returns A new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and @p value months
    ASPOSECPP_SHARED_API DateTime AddMonths(int value) const;

    /// Returns a new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and the specified number of days.
    /// @param value The number of days to add; the value can be positive or negative
    /// @returns A new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and @p value days
    ASPOSECPP_SHARED_API DateTime AddDays(double value) const;

    /// Returns a new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and the specified number of hours.
    /// @param value The number of hours to add; the value can be positive or negative
    /// @returns A new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and @p value hours
    ASPOSECPP_SHARED_API DateTime AddHours(double value) const;

    /// Returns a new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and the specified number of minutes.
    /// @param value The number of minutes to add; the value can be positive or negative
    /// @returns A new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and @p value minutes
    ASPOSECPP_SHARED_API DateTime AddMinutes(double value) const;

    /// Returns a new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and the specified number of seconds.
    /// @param value The number of seconds to add; the value can be positive or negative
    /// @returns A new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and @p value seconds
    ASPOSECPP_SHARED_API DateTime AddSeconds(double value) const;

    /// Returns a new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and the specified number of milliseconds.
    /// @param value The number of milliseconds to add; the value can be positive or negative
    /// @returns A new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and @p value milliseconds
    ASPOSECPP_SHARED_API DateTime AddMilliseconds(double value) const;

    /// Returns a new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and the specified number of 100-nonosecond intervals.
    /// @param value The number of 100-nonosecond intervals to add; the value can be positive or negative
    /// @returns A new instance of the DateTime class representing the date and time value which is the sum of the value represented by the current object and @p value of 100-nonosecond intervals
    ASPOSECPP_SHARED_API DateTime AddTicks(int64_t value) const;

    /// Returns a new instance of the DateTime class representing the date and time value which is the result of subtraction of the specified time span from the value represented by the current object.
    /// @param duration A time interval to subtract
    /// @returns A new instance of the DateTime class representing the date and time value which is the result of subtraction of @p duration from the value represented by the current object.
    ASPOSECPP_SHARED_API DateTime Subtract(TimeSpan duration) const;

    /// Returns an instance of TimeSpan class representing the time interval between the date and time values represented by the current and the specified objects.
    /// @param value An instance of DateTime class that marks one end of the interval to be calculated
    /// @returns An instance of TimeSpan class representing the time interval between the date and time values represented by the current object and @p value.
    constexpr TimeSpan Subtract(DateTime value) const
    {
        return TimeSpan(get_Ticks() - value.get_Ticks());
    }

    /// Returns a new instance of DateTime class that represents the date and time value represented by the current object as local time.
    ASPOSECPP_SHARED_API DateTime ToLocalTime() const;

    /// Returns a new instance of DateTime class that represents the date and time value represented by the current object as UTC.
    ASPOSECPP_SHARED_API DateTime ToUniversalTime() const;

    /// Returns a value that represents the date and time value represented by the current object as Unix time. FOR INTERNAL USE.
    time_t ToUnixTime() const;

    /// Returns a value that represents the date and time value represented by the current object as File time.
    ASPOSECPP_SHARED_API int64_t ToFileTime() const;

    /// Converts the date and time value represented by the current object to File time UTC.
    /// @returns The File time value equivalent to the date and time value represented by the current object 
    ASPOSECPP_SHARED_API int64_t ToFileTimeUtc() const;

    /// Serializes the current object.
    /// @returns An unsigned 64-bit integer value representing the current object
    ASPOSECPP_SHARED_API int64_t ToBinary() const;

    /// Returns the date and time value represented by the current object as OLE Automation Date.
    ASPOSECPP_SHARED_API double ToOADate() const;

    /// Deserializes the date time value from the specified unsigned 64-bit integer and sets the new instance of DateTime class to that value.
    /// @param value The 64-bit intger to deserialize the date and time value from
    /// @returns A new instance of DateTime class representing the date and time value deserialized from the specifed unsigned 64-bit integer value
    static ASPOSECPP_SHARED_API DateTime FromBinary(int64_t value);

    /// Converts the specified File time to an instance of DateTime class representing the same date and time value as UTC time.
    /// @param file_time File time to convert
    /// @returns A new instance of DateTime class representing the same date and time as @p file_time
    static ASPOSECPP_SHARED_API DateTime FromFileTimeUtc(int64_t file_time);

    /// Returns an instance of DateTime class representing the date and time value equivalent to the specified OLE Automation Date.
    /// @param date OLE Automation Date to convert to DateTime object
    /// @returns A new instance of DateTime class representing the same date and time as @p date
    static ASPOSECPP_SHARED_API DateTime FromOADate(double date);

    /// Converts the specified Unix time value to an instance of DateTime class. FOR INTERNAL USE.
    /// @param value Unix time value to convert
    /// @returns A new instance of DateTime class representing the same date and time as @p value
    static DateTime FromUnixTime(time_t value);

    /// Converts the specified File time to an instance of DateTime class representing the same date and time value as local time.
    /// @param value File time to convert
    /// @returns A new instance of DateTime class representing the same date and time as @p file_time
    static ASPOSECPP_SHARED_API DateTime FromFileTime(int64_t value);

    /// Returns the number of days in the specified month of the specified year.
    /// @param year The year
    /// @param month The ordinal number of the month
    /// @returns The number of days is the specified month of the specified year
    static ASPOSECPP_SHARED_API int DaysInMonth(int year, int month);

    /// Determines of the specified year is a leap year.
    /// @param year The year to check
    /// @returns True if the specified year is a leap year, otherwise - false
    static ASPOSECPP_SHARED_API bool IsLeapYear(int year);

    /// Determines if the date and time value represented by the current object falls in the range of daylight saving time for the current time zone.
    /// @returns True if the date and time value specified by the current object falls in the range of daylight saving time, otherwise - false
    ASPOSECPP_SHARED_API bool IsDaylightSavingTime() const;

    /// Constructs a new DateTime object that represents the same number of ticks as the specified DateTime object
    /// and represents local time, UTC time or neither as specified by the argument @p kind.
    /// @param value The DateTime object to copy the number of ticks from
    /// @param kind Specifies if the new object should represent local time, UTC time or neither.
    /// @returns A new DateTime object that represents the same number of ticks as @p value and DateTimeKind value specified by @p kind.
    static DateTime SpecifyKind(DateTime value, DateTimeKind kind)
    {
        return DateTime(value.get_Ticks(), kind);
    }

    /// Compares two values represented by the specified instances of DateTime class and returns the value indicating values' relative positions on the time line.
    /// @param t1 The first comparand
    /// @param t2 The second comparand
    /// @returns A value that is less than 0 if @p t1 is earlier than @p t2; 0 if @p t1 is the same as @p t2; a value that is greater than 0 if @p t1 is later than @p t2 
    static constexpr int Compare(DateTime t1, DateTime t2)
    {
        return (t1 < t2 ? -1 : (t2 < t1 ? 1 : 0));
    }

    /// Compares two date and time values represented by the current object and the specified instance of DateTime class and returns the value indicating values' relative positions on the time line.
    /// @param value An instance of DateTime class to compare the current object with
    /// @returns A value that is less than 0 if the current object represents a value that is earlier than that represented by @p value; 0 if values reprsented by both objects are the same; a value that is greater than 0 if the value represented by the current object is later than that represented by @p value
    constexpr int CompareTo(DateTime value) const
    {
        return Compare(*this, value);
    }

    /// Determines if the specified instances of DateTime class represent the same date and time value
    /// @param t1 The first comparand
    /// @param t2 The second comparand
    /// @returns True if both @p t1 and @p t2 represent the same value, otherwise - false
    static constexpr bool Equals(DateTime t1, DateTime t2)
    {
        return t1.get_Ticks() == t2.get_Ticks();
    }

    /// Determines if the specified instance of DateTime class represent the same date and time value as the current object
    /// @param other The instance of DateTime class to compare current object with
    /// @returns True if both @p other and current object represent the same value, otherwise - false
    constexpr bool Equals(DateTime other) const
    {
        return get_Ticks() == other.get_Ticks();
    }

    /// Returns a hash code for the current object.
    ASPOSECPP_SHARED_API int GetHashCode() const;

    /// Returns the string representation of the date and time value represented by the current object using the formatting conventions defnied by the current culture.
    /// @returns The string representation of the value represented by the current object
    ASPOSECPP_SHARED_API String ToString() const;

    /// Returns a string representation of the date and time value represented by the current object using the specified format and formatting conventions defined by the current culture.
    /// @param format A format string
    /// @returns The string representation of the value represented by the current object formatted according to format defined by @p format and the current culture.
    ASPOSECPP_SHARED_API String ToString(const String& format) const;

    /// Returns a string representation of the date and time value represented by the current object using the specified format information.
    /// @param provider An object representing the format information
    /// @returns The string representation of the value represented by the current object formatted according to format information provided by @p formatProvider.
    ASPOSECPP_SHARED_API String ToString(const SharedPtr<IFormatProvider>& provider) const;
    // Optimized function overloads
    ASPOSECPP_SHARED_API String ToString(const SharedPtr<Globalization::CultureInfo>& culture) const;
    ASPOSECPP_SHARED_API String ToString(const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi) const;
    String ToString(std::nullptr_t) const { return ToString(); }

    /// Returns a string representation of the date and time value represented by the current object using the specified format information.
    /// @param format A format string
    /// @param provider An object representing the format information
    /// @returns The string representation of the value represented by the current object formatted according to format information provided by @p provider and format string @p format.
    ASPOSECPP_SHARED_API String ToString(const String& format, const SharedPtr<IFormatProvider>& provider) const;
    // Optimized function overloads
    ASPOSECPP_SHARED_API String ToString(const String& format, const SharedPtr<Globalization::CultureInfo>& culture) const;
    ASPOSECPP_SHARED_API String ToString(const String& format, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi) const;
    String ToString(const String& format, std::nullptr_t) const { return ToString(format); }

    /// Returns a string that contains the short date string representation of the current object.
    ASPOSECPP_SHARED_API String ToShortDateString() const;

    /// Returns a string that contains the long date string representation of the current object.
    ASPOSECPP_SHARED_API String ToLongDateString() const;

    /// Returns a string that contains the short time string representation of the current object.
    ASPOSECPP_SHARED_API String ToShortTimeString() const;

    /// Returns a string that contains the long time string representation of the current object.
    ASPOSECPP_SHARED_API String ToLongTimeString() const;

    /// Returns array of strings where each element is the string representation of the current object
    /// formatted with one of the standard date and time format specifiers.
    ASPOSECPP_SHARED_API ArrayPtr<String> GetDateTimeFormats() const;
    /// Returns array of strings where each element is the string representation of the current object
    /// formatted with the specified standard date and time format specifier.
    /// @param format Standart date and time format specifier.
    ASPOSECPP_SHARED_API ArrayPtr<String> GetDateTimeFormats(char_t format) const;
    /// Returns array of strings where each element is the string representation of the current object
    /// formatted with one of the standard date and time format specifiers and the specified format provider.
    /// @param provider Format provider.
    ASPOSECPP_SHARED_API ArrayPtr<String> GetDateTimeFormats(const SharedPtr<IFormatProvider>& provider) const;
    /// Returns array of strings where each element is the string representation of the current object
    /// formatted with the specified standard date and time format specifier and format provider.
    /// @param format Standart date and time format specifier.
    /// @param provider Format provider.
    ASPOSECPP_SHARED_API ArrayPtr<String> GetDateTimeFormats(char_t format, const SharedPtr<IFormatProvider>& provider) const;

    /// Converts the specified string representation of a date and time value to the equivalent DateTime object.
    /// @param s The string representation of a date and time value to convert.
    /// @returns A new instance of DateTime class that represents the date and time value equivalent to that represented by the specified string.
    static ASPOSECPP_SHARED_API DateTime Parse(const String& s);

    /// Converts the specified string representation of a date and time value to the equivalent DateTime object using culture-specific format information.
    /// @param s The string representation of a date and time value to convert.
    /// @param provider The IFormatProvider object that provides culture-specific format information.
    /// @param styles A bitwise combination of the enumeration values that provides additional information about @p s, about style elements that may be present in @p s, or about the conversion from @p s to a DateTime object.
    /// @returns A new instance of DateTime class that represents the date and time value equivalent to that represented by the specified string.
    static ASPOSECPP_SHARED_API DateTime Parse(const String& s, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles = Globalization::DateTimeStyles::None);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API DateTime Parse(const String& s, const SharedPtr<Globalization::CultureInfo>& culture, Globalization::DateTimeStyles styles = Globalization::DateTimeStyles::None);
    static ASPOSECPP_SHARED_API DateTime Parse(const String& s, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, Globalization::DateTimeStyles styles = Globalization::DateTimeStyles::None);
    static ASPOSECPP_SHARED_API DateTime Parse(const String& s, std::nullptr_t, Globalization::DateTimeStyles styles = Globalization::DateTimeStyles::None);

    /// Converts the specified string representation of a date and time value to the equivalent DateTime object using the specified 
    /// format and culture-specific format information. The format of the string representation must match the specified 
    /// format exactly. Throws an exception if the conversion fails.
    /// @param s The string representation of a date and time value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object that provides culture-specific format information.
    /// @param styles A bitwise combination of the enumeration values that provides additional information about @p s, about style elements that may be present in @p s, or about the conversion from @p s to a DateTime object.
    /// @returns A new instance of DateTime class that represents the date and time value equivalent to that represented by the specified string.
    static ASPOSECPP_SHARED_API DateTime ParseExact(const String& s, const String& format, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles = Globalization::DateTimeStyles::None);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API DateTime ParseExact(const String& s, const String& format, const SharedPtr<Globalization::CultureInfo>& culture, Globalization::DateTimeStyles styles = Globalization::DateTimeStyles::None);
    static ASPOSECPP_SHARED_API DateTime ParseExact(const String& s, const String& format, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, Globalization::DateTimeStyles styles = Globalization::DateTimeStyles::None);
    static ASPOSECPP_SHARED_API DateTime ParseExact(const String& s, const String& format, std::nullptr_t, Globalization::DateTimeStyles styles = Globalization::DateTimeStyles::None);

    /// Converts the specified string representation of a date and time value to the equivalent DateTime object using the specified 
    /// formats, culture-specific format information and style. The format of the string representation must match one or more
    /// of the specified formats exactly. Throws an exception if the conversion fails.
    /// @param s The string representation of a date and time value to convert.
    /// @param formats The array of string formats.
    /// @param provider The IFormatProvider object that provides culture-specific format information.
    /// @param styles A bitwise combination of the enumeration values that provides additional information about @p s, about style elements that may be present in @p s, or about the conversion from @p s to a DateTime object.
    /// @returns A new instance of DateTime class that represents the date and time value equivalent to that represented by the specified string.
    static ASPOSECPP_SHARED_API DateTime ParseExact(const String& s, const ArrayPtr<String>& formats, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API DateTime ParseExact(const String& s, const ArrayPtr<String>& formats, const SharedPtr<Globalization::CultureInfo>& culture, Globalization::DateTimeStyles styles);
    static ASPOSECPP_SHARED_API DateTime ParseExact(const String& s, const ArrayPtr<String>& formats, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, Globalization::DateTimeStyles styles);
    static ASPOSECPP_SHARED_API DateTime ParseExact(const String& s, const ArrayPtr<String>& formats, std::nullptr_t, Globalization::DateTimeStyles styles);

    /// Converts the specified string representation of a date and time value to the equivalent DateTime object.
    /// @param s The string representation of a date and time value to convert.
    /// @param result The output argument that, if the conversion succeeds, contains the result of conversion.
    /// @returns True if conversion succeeds, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& s, DateTime& result);

    /// Converts the specified string representation of a date and time value to the equivalent DateTime object using the specified 
    /// culture-specific format information and style.
    /// @param s The string representation of a date and time value to convert.
    /// @param provider The IFormatProvider object that provides culture-specific format information.
    /// @param styles A bitwise combination of the enumeration values that provides additional information about @p s, about style elements that may be present in @p s, or about the conversion from @p s to a DateTime object.
    /// @param result The output argument that, if the conversion succeeds, contains the result of conversion.
    /// @returns True if conversion succeeds, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& s, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles, DateTime& result);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API bool TryParse(const String& s, const SharedPtr<Globalization::CultureInfo>& culture, Globalization::DateTimeStyles styles, DateTime& result);
    static ASPOSECPP_SHARED_API bool TryParse(const String& s, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, Globalization::DateTimeStyles styles, DateTime& result);
    static ASPOSECPP_SHARED_API bool TryParse(const String& s, std::nullptr_t, Globalization::DateTimeStyles styles, DateTime& result);

    /// Converts the specified string representation of a date and time value to the equivalent DateTime object using the specified 
    /// format, culture-specific format information and style. The format of the string representation must match the specified 
    /// format exactly.
    /// @param s The string representation of a date and time value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object that provides culture-specific format information.
    /// @param styles A bitwise combination of the enumeration values that provides additional information about @p s, about style elements that may be present in @p s, or about the conversion from @p s to a DateTime object.
    /// @param result The output argument that, if the conversion succeeds, contains the result of conversion.
    /// @returns True if conversion succeeds, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& s, const String& format, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles, DateTime& result);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& s, const String& format, const SharedPtr<Globalization::CultureInfo>& culture, Globalization::DateTimeStyles styles, DateTime& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& s, const String& format, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, Globalization::DateTimeStyles styles, DateTime& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& s, const String& format, std::nullptr_t, Globalization::DateTimeStyles styles, DateTime& result);

    /// Converts the specified string representation of a date and time value to the equivalent DateTime object using the specified 
    /// formats, culture-specific format information and style. The format of the string representation must match one or more of the specified 
    /// formats exactly.
    /// @param s The string representation of a date and time value to convert.
    /// @param formats The array of string formats.
    /// @param provider The IFormatProvider object that provides culture-specific format information.
    /// @param styles A bitwise combination of the enumeration values that provides additional information about @p s, about style elements that may be present in @p s, or about the conversion from @p s to a DateTime object.
    /// @param result The output argument that, if the conversion succeeds, contains the result of conversion.
    /// @returns True if conversion succeeds, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& s, const ArrayPtr<String>& formats, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles, DateTime& result);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& s, const ArrayPtr<String>& formats, const SharedPtr<Globalization::CultureInfo>& culture, Globalization::DateTimeStyles styles, DateTime& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& s, const ArrayPtr<String>& formats, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, Globalization::DateTimeStyles styles, DateTime& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& s, const ArrayPtr<String>& formats, std::nullptr_t, Globalization::DateTimeStyles styles, DateTime& result);

    /// Determines if the current object and the specified DateTime object represent the same date and time value.
    /// @param other The DateTime object to compare the current object with
    /// @returns True if the current object and the specified object represent the same date and time value, otherwise - false
    constexpr bool operator==(DateTime other) const
    {
        return get_Ticks() == other.get_Ticks();
    }
        
    /// Determines if the current object and the specified DateTime object represent distinct date and time values.
    /// @param other The DateTime object to compare the current object with
    /// @returns True if the current object and the specified object represent distinct date and time values, otherwise - false
    constexpr bool operator!=(DateTime other) const
    {
        return get_Ticks() != other.get_Ticks();
    }
        
    /// Determines if the current object represents the date and time value that is earlier than the value represented by the specified DateTime object.
    /// @param other The DateTime object to compare the current object with
    /// @returns True if the date and time value represented by the current object is earlier than the value represented by @p other, otherwise - false
    constexpr bool operator<(DateTime other) const
    {
        return get_Ticks() < other.get_Ticks();
    }
        
    /// Determines if the current object represents the date and time value that is earlier than or the same as the value represented by the specified DateTime object.
    /// @param other The DateTime object to compare the current object with
    /// @returns True if the date and time value represented by the current object is earlier than or the same as the value represented by @p other, otherwise - false
    constexpr bool operator<=(DateTime other) const
    {
        return get_Ticks() <= other.get_Ticks();
    }
        
    /// Determines if the current object represents the date and time value that is later than the value represented by the specified DateTime object.
    /// @param other The DateTime object to compare the current object with
    /// @returns True if the date and time value represented by the current object is later than the value represented by @p other, otherwise - false
    constexpr bool operator>(DateTime other) const
    {
        return get_Ticks() > other.get_Ticks();
    }

    /// Determines if the current object represents the date and time value that is later than or the same as the value represented by the specified DateTime object.
    /// @param other The DateTime object to compare the current object with
    /// @returns True if the date and time value represented by the current object is later than or the same as the value represented by @p other, otherwise - false
    constexpr bool operator>=(DateTime other) const
    {
        return get_Ticks() >= other.get_Ticks();
    }

    /// Returns a new instance of DateTime class that represents the date and time value that is the sum of the value represented by the current object and the specified time span.
    /// @param value The time span to add to the value represented by the current object
    /// @returns A new instance of DateTime class that represents the date and time value that is the sum of the value represented by the current object and @p value.
    DateTime operator+(TimeSpan value) const
    {
        return Add(value);
    }
        
    /// Returns a new instance of the DateTime class representing the date and time value which is the result of subtraction of the specified time span from the value represented by the current object.
    /// @param value A time interval to subtract
    /// @returns A new instance of the DateTime class representing the date and time value which is the result of subtraction of @p value from the value represented by the current object.
    DateTime operator-(TimeSpan value) const
    {
        return Subtract(value);
    }
        
    /// Sets the current object to the date and time value that is the sum of the value represented by the current object and the specified time span.
    /// @param value The time span to add
    /// @returns A reference to the self
    DateTime& operator+=(TimeSpan value)
    {
        return *this = Add(value);
    }
        
    /// Sets the current object to the date and time value that is the result of subtraction of the specified time span from the date and time value represented by the current object.
    /// @param value The time span to subtract
    /// @returns A reference to the self        
    DateTime& operator-=(TimeSpan value)
    {
        return *this = Subtract(value);
    }

    /// Returns an instance of TimeSpan class that represents the time interval between the date and time values represented by the current and the specified objects.
    /// @param value An instance of DateTime class that marks one end of the interval to be calculated
    /// @returns An instance of TimeSpan class representing the time interval between the date and time values represented by the current object and @p value.
    constexpr TimeSpan operator-(DateTime value) const
    {
        return Subtract(value);
    }

    /// Returns a TypeInfo object that contains information about this class.
    static const TypeInfo& Type()
    {
        return *static_holder<ThisTypeInfo>::GetValue();
    }

    constexpr bool IsNull() const { return false; }
    constexpr bool operator==(std::nullptr_t) const { return false; }
    constexpr bool operator!=(std::nullptr_t) const { return true; }
    constexpr bool operator<(std::nullptr_t) const { return false; }
    constexpr bool operator<=(std::nullptr_t) const { return false; }
    constexpr bool operator>(std::nullptr_t) const { return false; }
    constexpr bool operator>=(std::nullptr_t) const { return false; }

private:
    /// DateTime data
    ///   Bits 01-62: Value of 100-nanosecond ticks from 0001.01.01 00:00:00
    ///   Bits 63-64: DateTimeKind value
    uint64_t m_data;

    static constexpr uint64_t TicksMask = 0x3FFFFFFFFFFFFFFF;
    static constexpr uint64_t FlagsMask = 0xC000000000000000;

    /// Gets flags.
    constexpr uint64_t Flags() const { return m_data & FlagsMask; }
    /// Internal constructor tag.
    struct InternalConstructorTag {};
    static constexpr InternalConstructorTag InternalConstructor{};
    /// Internal constructor.
    constexpr DateTime(uint64_t data, InternalConstructorTag) : m_data(data) {}

    /// Represents a pointer to TypeInfo object that contains information about this class.
    struct ThisTypeInfo : TypeInfoPtr
    {
        /// Constructs an instance of ThisTypeInfo class.
        ThisTypeInfo()
        {
            ptr = std::make_unique<TypeInfo>(u"System::DateTime");
        }
    };

#if defined(_DEBUG) && defined(_MSC_VER)
    struct NatvisHelpers
    {
        static constexpr unsigned DaysTo1901 = 693960;
        static constexpr unsigned DaysTo2100 = 766644;
        static constexpr unsigned DaysTo10000 = 3652058;
        static constexpr unsigned DaysPer4Years = 1461;
        
        static ASPOSECPP_SHARED_API const uint16_t DayOfYearToMonth[365];
        static ASPOSECPP_SHARED_API const uint16_t DayOfLeapYearToMonth[366];
        static ASPOSECPP_SHARED_API const uint16_t DayOfYearToDayOfMonth[365];
        static ASPOSECPP_SHARED_API const uint16_t DayOfLeapYearToDayOfMonth[366];

        struct Date { uint64_t ticks : 62; };
        struct Days { uint64_t ticks:62; };
        struct HoursMinutesSeconds { uint64_t ticks:62; };
        struct Fraction { uint64_t ticks:62; };
        struct TimeOfDay { uint64_t data; };
    };
#endif
};

constexpr bool operator==(std::nullptr_t, DateTime) { return false; }
constexpr bool operator!=(std::nullptr_t, DateTime) { return true; }
constexpr bool operator<(std::nullptr_t, DateTime) { return false; }
constexpr bool operator<=(std::nullptr_t, DateTime) { return false; }
constexpr bool operator>(std::nullptr_t, DateTime) { return false; }
constexpr bool operator>=(std::nullptr_t, DateTime) { return false; }

/// IsBoxable<T> specialization for DateTime.
template<> struct IsBoxable<DateTime> : std::true_type {};

/// Prints value to ostream. Mostly used for debug.
inline void PrintTo(const System::DateTime& value, std::ostream* stream)
{
    PrintTo(value.ToString(), stream);
}

} // namespace System

namespace std {
    /// Specialization for System::DateTime.
    template <>
    class hash<System::DateTime>
    {
    public:
        /// Alias for the type parameter of this specialization.
        using argument_type = System::DateTime;
        /// Alias for a type of the hash value.
        using result_type = std::size_t;
        /// Generates hash for the specified value.
        /// @param value An object for which to generate a hash
        /// @returns A hash for @p value
        result_type operator()(const argument_type& value) const
        {
            return static_cast<result_type>(value.GetHashCode());
        }
    };
}
