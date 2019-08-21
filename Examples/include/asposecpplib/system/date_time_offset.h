/// @file system/date_time_offset.h
#pragma once

#include <system/date_time.h>
#include <system/timespan.h>
#include <system/boxable_traits.h>
#include <functional>

namespace System {

class ASPOSECPP_SHARED_CLASS DateTimeOffset final
{
public:
    /// Gets maximum offset in ticks.
    static constexpr int64_t MaxOffset = TimeSpan::TicksPerHour * 14;
    /// Gets minimum offset in ticks.
    static constexpr int64_t MinOffset = -MaxOffset;

    /// Gets earliest DateTimeOffset value.
    static ASPOSECPP_SHARED_API const DateTimeOffset MinValue;
    /// Gets greatest DateTimeOffset value.
    static ASPOSECPP_SHARED_API const DateTimeOffset MaxValue;
    /// Gets Unix epoch start.
    static ASPOSECPP_SHARED_API const DateTimeOffset UnixEpoch;

    /// Default constructor.
    constexpr DateTimeOffset() = default;
    /// Constructor.
    /// @param date_time Date and time.
    ASPOSECPP_SHARED_API DateTimeOffset(DateTime date_time);
    /// Constructor.
    /// @param ticks Number of ticks.
    /// @param offset Time offset from UTC.
    ASPOSECPP_SHARED_API DateTimeOffset(int64_t ticks, TimeSpan offset);
    /// Constructor.
    /// @param date_time Date and time.
    /// @param offset Time offset from UTC.
    ASPOSECPP_SHARED_API DateTimeOffset(DateTime date_time, TimeSpan offset);
    /// Constructor.
    /// @param year Year (1 through 9999).
    /// @param month Month (1 through 12).
    /// @param day Day (1 through the number of days in month).
    /// @param hour Hour (0 through 23).
    /// @param minute Minute (0 through 59).
    /// @param second Second (0 through 59).
    /// @param offset Time offset from UTC.
    ASPOSECPP_SHARED_API DateTimeOffset(int year, int month, int day, int hour, int minute, int second, TimeSpan offset);
    /// Constructor.
    /// @param year Year (1 through 9999).
    /// @param month Month (1 through 12).
    /// @param day Day (1 through the number of days in month).
    /// @param hour Hour (0 through 23).
    /// @param minute Minute (0 through 59).
    /// @param second Second (0 through 59).
    /// @param millisecond Millisecond (0 through 999).
    /// @param offset Time offset from UTC.
    ASPOSECPP_SHARED_API DateTimeOffset(int year, int month, int day, int hour, int minute, int second, int millisecond, TimeSpan offset);
    /// Constructor.
    /// @param year Year.
    /// @param month Month (1 through 12).
    /// @param day Day (1 through the number of days in month).
    /// @param hour Hour (0 through 23).
    /// @param minute Minute (0 through 59).
    /// @param second Second (0 through 59).
    /// @param millisecond Millisecond (0 through 999).
    /// @param calendar Calendar used to interpret year, month, and day.
    /// @param offset Time offset from UTC.
    ASPOSECPP_SHARED_API DateTimeOffset(int year, int month, int day, int hour, int minute, int second, int millisecond, const SharedPtr<Globalization::Calendar>& calendar, TimeSpan offset);
    
    /// Gets DateTimeOffset whose date and time are set to the current UTC-time and whose offset is TimeSpan::Zero.
    static ASPOSECPP_SHARED_API DateTimeOffset get_UtcNow();
    /// Gets DateTimeOffset whose date and time are set to the current local-time and whose offset is set to local time's offset.
    static ASPOSECPP_SHARED_API DateTimeOffset get_Now();

    /// Gets DateTime value.
    ASPOSECPP_SHARED_API DateTime get_DateTime() const;
    /// Gets DateTime value that represents the UTC date and time.
    ASPOSECPP_SHARED_API DateTime get_UtcDateTime() const;
    /// Gets DateTime value that represents the local date and time. 
    ASPOSECPP_SHARED_API DateTime get_LocalDateTime() const;
    /// Gets date component of the current object.
    ASPOSECPP_SHARED_API DateTime get_Date() const;
    /// Gets year component of the current object.
    ASPOSECPP_SHARED_API int get_Year() const;
    /// Gets month component of the current object.
    ASPOSECPP_SHARED_API int get_Month() const;
    /// Gets day of the month of the current object.
    ASPOSECPP_SHARED_API int get_Day() const;
    /// Gets day of the week of the current object.
    ASPOSECPP_SHARED_API DayOfWeek get_DayOfWeek() const;
    /// Gets day of year of the current object.
    ASPOSECPP_SHARED_API int get_DayOfYear() const;
    /// Gets hour component of the current object.
    ASPOSECPP_SHARED_API int get_Hour() const;
    /// Gets minute component of the current object.
    ASPOSECPP_SHARED_API int get_Minute() const;
    /// Gets second component of the current object.
    constexpr int get_Second() const { return m_date_time.get_Second(); }
    /// Gets millisecond component of the current object.
    constexpr int get_Millisecond() const { return m_date_time.get_Millisecond(); }
    /// Gets offset from UTC.
    constexpr TimeSpan get_Offset() const { return m_offset; }
    /// Gets number of ticks of the current object.
    ASPOSECPP_SHARED_API int64_t get_Ticks() const;
    /// Gets number of ticks of the current object in UTC time.
    ASPOSECPP_SHARED_API int64_t get_UtcTicks() const;
    /// Gets time of day of the current object.
    ASPOSECPP_SHARED_API TimeSpan get_TimeOfDay() const;

    /// Compares two DateTimeOffset objects.
    /// @param first First object to compare.
    /// @param second Second object to compare.
    /// @return -1 - if @p first is earlier than @p second, 1 - if @p first is later than @p second, 0 - if @p first is equal to @p second.
    static ASPOSECPP_SHARED_API int Compare(const DateTimeOffset& first, const DateTimeOffset& second);
    /// Checks if two DateTimeOffset objects represend the same time point.
    /// @param first First object to compare.
    /// @param second Second object to compare.
    /// @return true if @p first is equal to @p second, otherwise - false.
    static ASPOSECPP_SHARED_API bool Equals(const DateTimeOffset& first, const DateTimeOffset& second);
    /// Convert Windows file time to date and time with local time offset.
    /// @param file_time Windows file time.
    /// @return Date and time with local time offset.
    static ASPOSECPP_SHARED_API DateTimeOffset FromFileTime(int64_t file_time);
    /// Convert Unix-time to DateTimeOffset object.
    /// @param milliseconds Unix-time (number of milliseconds elapsed from 1970-01-01).
    /// @return Date and time with zero offset.
    static ASPOSECPP_SHARED_API DateTimeOffset FromUnixTimeMilliseconds(int64_t milliseconds);
    /// Convert Unix-time to DateTimeOffset object.
    /// @param seconds Unix-time (number of seconds elapsed from 1970-01-01).
    /// @return Date and time with zero offset.
    static ASPOSECPP_SHARED_API DateTimeOffset FromUnixTimeSeconds(int64_t seconds);
    /// Converts the specified string to DateTimeOffset equivalent.
    /// @param input String to convert.
    /// @return DateTimeOffset that is equivalent to the @p input. 
    static ASPOSECPP_SHARED_API DateTimeOffset Parse(const String& input);
    /// Converts the specified string to DateTimeOffset object using the specified format provider and formatting style.
    /// @param input String to convert.
    /// @param provider Format provider.
    /// @param styles Date and time formatting styles.
    /// @return DateTimeOffset that is equivalent to the @p input. 
    static ASPOSECPP_SHARED_API DateTimeOffset Parse(const String& input, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles = Globalization::DateTimeStyles::None);
    /// Converts the specified string to DateTimeOffset object using the specified format, format provider and formatting style.
    /// @param input String to convert.
    /// @param format Format string.
    /// @param provider Format provider.
    /// @param styles Date and time formatting styles.
    /// @return DateTimeOffset that is equivalent to the @p input. 
    static ASPOSECPP_SHARED_API DateTimeOffset ParseExact(const String& input, const String& format, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles = Globalization::DateTimeStyles::None);
    /// Converts the specified string to DateTimeOffset object using the specified formats, format provider and formatting style.
    /// @param input String to convert.
    /// @param formats Array of format strings.
    /// @param provider Format provider.
    /// @param styles Date and time formatting styles.
    /// @return DateTimeOffset that is equivalent to the @p input. 
    static ASPOSECPP_SHARED_API DateTimeOffset ParseExact(const String& input, const ArrayPtr<String>& formats, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles);
    /// Tries to converts the specified string to DateTimeOffset object.
    /// @param input String to convert.
    /// @param result DateTimeOffset that is equivalent to the @p input.
    /// @return true if the @p input converted successfully, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& input, DateTimeOffset& result);
    /// Tries to converts the specified string to DateTimeOffset object using the specified format provider and formatting style.
    /// @param input String to convert.
    /// @param provider Format provider.
    /// @param styles Date and time formatting styles.
    /// @param result DateTimeOffset that is equivalent to the @p input.
    /// @return true if the @p input converted successfully, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& input, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles, DateTimeOffset& result);
    /// Tries to converts the specified string to DateTimeOffset object using the specified formats, format provider and formatting style.
    /// @param input String to convert.
    /// @param formats Arrays of format strings.
    /// @param provider Format provider.
    /// @param styles Date and time formatting styles.
    /// @param result DateTimeOffset that is equivalent to the @p input.
    /// @return true if the @p input converted successfully, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const ArrayPtr<String>& formats, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles, DateTimeOffset& result);
    /// Tries to converts the specified string to DateTimeOffset object using the specified format, format provider and formatting style.
    /// @param input String to convert.
    /// @param format Format string.
    /// @param provider Format provider.
    /// @param styles Date and time formatting styles.
    /// @param result DateTimeOffset that is equivalent to the @p input.
    /// @return true if the @p input converted successfully, otherwise - false.
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const String& format, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles styles, DateTimeOffset& result);
    /// Adds a specified time interval to the DateTimeOffset object.
    /// @param value Positive or a negative time interval.
    /// @return Result of operation.
    ASPOSECPP_SHARED_API DateTimeOffset Add(TimeSpan value) const;
    /// Adds a specified number of years to the DateTimeOffset object.
    /// @param years Positive or negative number of years.
    /// @return Result of operation.
    ASPOSECPP_SHARED_API DateTimeOffset AddYears(int years) const;
    /// Adds a specified number of months to the DateTimeOffset object.
    /// @param months Positive or negative number of months.
    /// @return Result of operation.
    ASPOSECPP_SHARED_API DateTimeOffset AddMonths(int months) const;
    /// Adds a specified number of days to the DateTimeOffset object.
    /// @param days Positive or negative number of days.
    /// @return Result of operation.
    ASPOSECPP_SHARED_API DateTimeOffset AddDays(double days) const;
    /// Adds a specified number of hours to the DateTimeOffset object.
    /// @param hours Positive or negative number of hours.
    /// @return Result of operation.
    ASPOSECPP_SHARED_API DateTimeOffset AddHours(double hours) const;
    /// Adds a specified number of minutes to the DateTimeOffset object.
    /// @param minutes Positive or negative number of minutes.
    /// @return Result of operation.
    ASPOSECPP_SHARED_API DateTimeOffset AddMinutes(double minutes) const;
    /// Adds a specified number of seconds to the DateTimeOffset object.
    /// @param seconds Positive or negative number of seconds.
    /// @return Result of operation.
    ASPOSECPP_SHARED_API DateTimeOffset AddSeconds(double seconds) const;
    /// Adds a specified number of milliseconds to the DateTimeOffset object.
    /// @param milliseconds Positive or negative number of milliseconds.
    /// @return Result of operation.
    ASPOSECPP_SHARED_API DateTimeOffset AddMilliseconds(double milliseconds) const;
    /// Adds a specified number of ticks to the DateTimeOffset object.
    /// @param ticks Positive or negative number of ticks.
    /// @return Result of operation.
    ASPOSECPP_SHARED_API DateTimeOffset AddTicks(int64_t ticks) const;
    /// Compares two DateTimeOffset objects.
    /// @param other Object to compare.
    /// @return -1 - if current object is earlier than @p other, 1 - if current object is later than @p other, 0 - if current object is equal to @p other.
    ASPOSECPP_SHARED_API int CompareTo(const DateTimeOffset& other) const;
    /// Compares two DateTimeOffset objects.
    /// @param obj Object to compare.
    /// @return -1 - if current object is earlier than @p obj, 1 - if current object is later than @p obj, 0 - if current object is equal to @p obj.
    ASPOSECPP_SHARED_API int CompareTo(const SharedPtr<Object>& obj) const;
    /// Checks if two DateTimeOffset objects represents the same time point.
    /// @param other Object to compare.
    /// @return true if current object is equal to @p other, otherwise - false.
    ASPOSECPP_SHARED_API bool Equals(const DateTimeOffset& other) const;
    /// Checks if two DateTimeOffset objects represents the same time point.
    /// @param obj Object to compare.
    /// @return true if current object is equal to @p obj, otherwise - false.
    ASPOSECPP_SHARED_API bool Equals(const SharedPtr<Object>& obj) const;
    /// Checks if two DateTimeOffset objects represents the same time point and has the same offset.
    /// @param other Object to compare.
    /// @return true if current object is exact equal to @p other, otherwise - false.
    ASPOSECPP_SHARED_API bool EqualsExact(const DateTimeOffset& other) const;
    /// Checks if two DateTimeOffset objects represents the same time point and has the same offset.
    /// @param obj Object to compare.
    /// @return true if current object is exact equal to @p obj, otherwise - false.
    ASPOSECPP_SHARED_API bool EqualsExact(const SharedPtr<Object>& obj) const;
    /// Subtracts a specified time interval from the current object.
    /// @param value Value to subtract.
    /// @return Result of operation.
    ASPOSECPP_SHARED_API DateTimeOffset Subtract(TimeSpan value) const;
    /// Subtracts a specified DateTimeOffset value from the current object.
    /// @param value Value to subtract.
    /// @return Result of operation.
    ASPOSECPP_SHARED_API TimeSpan Subtract(const DateTimeOffset& value) const;
    /// Converts current object to the Windows file time.
    /// @return Current DateTimeOffset object expressed as windows file time.
    ASPOSECPP_SHARED_API int64_t ToFileTime() const;
    /// Converts current object to a object that represents the local time,
    /// @return Current DateTimeOffset object converted to local time.
    ASPOSECPP_SHARED_API DateTimeOffset ToLocalTime() const;
    /// Replace current object offset by the specified offset.
    /// @param offset UTC-offset.
    /// @return Current DateTimeOffset object converted to the date and time with specified offset.
    ASPOSECPP_SHARED_API DateTimeOffset ToOffset(TimeSpan offset) const;
    /// Converts current object to string using the specified format and format provider.
    /// @param format Format string.
    /// @param provider Format provider.
    /// @return String representation of the current DateTimeOffset object.
    ASPOSECPP_SHARED_API String ToString(const String& format, const SharedPtr<IFormatProvider>& provider) const;
    /// Converts current object to string using the specified format provider.
    /// @param provider Format provider.
    /// @return String representation of the current DateTimeOffset object.
    ASPOSECPP_SHARED_API String ToString(const SharedPtr<IFormatProvider>& provider) const;
    /// Converts current object to string using the specified format.
    /// @param format Format string.
    /// @return String representation of the current DateTimeOffset object.
    ASPOSECPP_SHARED_API String ToString(const String& format) const;
    /// Converts current object to a object that represents the UTC time,
    /// @return Current DateTimeOffset object converted to UTC-time.
    ASPOSECPP_SHARED_API DateTimeOffset ToUniversalTime() const;
    /// Gets milliseconds elapsed from Unix epoch start.
    /// @return Number of milliseconds elapsed since 1970-01-01.
    ASPOSECPP_SHARED_API int64_t ToUnixTimeMilliseconds() const;
    /// Gets seconds elapsed from Unix epoch start.
    /// @return Number of seconds elapsed since 1970-01-01.
    ASPOSECPP_SHARED_API int64_t ToUnixTimeSeconds() const;

    /// Gets hash code for the current DateTimeOffset object.
    /// @return A 32-bit signed integer hash code.
    ASPOSECPP_SHARED_API int GetHashCode() const;
    /// Converts current object to string.
    /// @return String representation of the current DateTimeOffset object.
    ASPOSECPP_SHARED_API String ToString() const;

    /// Returns a new instance of DateTimeOffset class that represents the date and time value that is the sum of the value represented by the current object and the specified time span.
    /// @param value The time span to add to the value represented by the current object
    /// @returns A new instance of DateTimeOffset class that represents the date and time value that is the sum of the value represented by the current object and @p value.
    ASPOSECPP_SHARED_API DateTimeOffset operator+(TimeSpan value) const;
    /// Returns a new instance of the DateTimeOffset class representing the date and time value which is the result of subtraction of the specified time span from the value represented by the current object.
    /// @param value A time interval to subtract
    /// @returns A new instance of the DateTimeOffset class representing the date and time value which is the result of subtraction of @p value from the value represented by the current object.
    ASPOSECPP_SHARED_API DateTimeOffset operator-(TimeSpan value) const;
    /// Returns an instance of TimeSpan class that represents the time interval between the date and time values represented by the current and the specified objects.
    /// @param other An instance of DateTime class that marks one end of the interval to be calculated
    /// @returns An instance of TimeSpan class representing the time interval between the date and time values represented by the current object and @p other.
    ASPOSECPP_SHARED_API TimeSpan operator-(const DateTimeOffset& other) const;
    /// Determines if the current object and the specified DateTimeOffset object represent the same date and time value.
    /// @param other The DateTimeOffset object to compare the current object with
    /// @returns True if the current object and the specified object represent the same date and time value, otherwise - false
    ASPOSECPP_SHARED_API bool operator==(const DateTimeOffset& other) const;
    /// Determines if the current object and the specified DateTimeOffset object represent distinct date and time values.
    /// @param other The DateTimeOffset object to compare the current object with
    /// @returns True if the current object and the specified object represent distinct date and time values, otherwise - false
    ASPOSECPP_SHARED_API bool operator!=(const DateTimeOffset& other) const;
    /// Determines if the current object represents the date and time value that is earlier than the value represented by the specified DateTimeOffset object.
    /// @param other The DateTimeOffset object to compare the current object with
    /// @returns True if the date and time value represented by the current object is earlier than the value represented by @p other, otherwise - false
    ASPOSECPP_SHARED_API bool operator<(const DateTimeOffset& other) const;
    /// Determines if the current object represents the date and time value that is later than the value represented by the specified DateTimeOffset object.
    /// @param other The DateTimeOffset object to compare the current object with
    /// @returns True if the date and time value represented by the current object is later than the value represented by @p other, otherwise - false
    ASPOSECPP_SHARED_API bool operator>(const DateTimeOffset& other) const;
    /// Determines if the current object represents the date and time value that is earlier than or the same as the value represented by the specified DateTimeOffset object.
    /// @param other The DateTimeOffset object to compare the current object with
    /// @returns True if the date and time value represented by the current object is earlier than or the same as the value represented by @p other, otherwise - false
    ASPOSECPP_SHARED_API bool operator<=(const DateTimeOffset& other) const;
    /// Determines if the current object represents the date and time value that is later than or the same as the value represented by the specified DateTimeOffset object.
    /// @param other The DateTimeOffset object to compare the current object with
    /// @returns True if the date and time value represented by the current object is later than or the same as the value represented by @p other, otherwise - false
    ASPOSECPP_SHARED_API bool operator>=(const DateTimeOffset& other) const;

    /// Returns a TypeInfo object that represent TimeSpan structure.
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
    /// Date and time.
    DateTime m_date_time;
    /// UTC-offset.
    TimeSpan m_offset;

    struct ThisTypeInfo : TypeInfoPtr
    {
        ThisTypeInfo()
        {
            ptr = std::make_unique<TypeInfo>(u"System::DateTimeOffset");
        }
    };
};

constexpr bool operator==(std::nullptr_t, const DateTimeOffset&) { return false; }
constexpr bool operator!=(std::nullptr_t, const DateTimeOffset&) { return true; }
constexpr bool operator<(std::nullptr_t, const DateTimeOffset&) { return false; }
constexpr bool operator<=(std::nullptr_t, const DateTimeOffset&) { return false; }
constexpr bool operator>(std::nullptr_t, const DateTimeOffset&) { return false; }
constexpr bool operator>=(std::nullptr_t, const DateTimeOffset&) { return false; }

/// IsBoxable<T> specialization for DateTimeOffset.
template<> struct IsBoxable<DateTimeOffset> : std::true_type {};

} // namespace System

namespace std {
    template <>
    class hash<System::DateTimeOffset>
    {
    public:
        using argument_type = System::DateTimeOffset;
        using result_type = std::size_t;

        result_type operator()(const argument_type& value) const
        {
            return static_cast<result_type>(value.GetHashCode());
        }
    };
}
