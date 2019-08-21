/// @file system/timespan.h
/// Contains the declaration System::TimeSpan class.
#pragma once

#include <system/string.h>
#include <system/boxable_traits.h>
#include <system/iformatprovider.h>
#include <system/globalization/time_span_styles.h>
#include <functional>

namespace System {

namespace Globalization {
    class CultureInfo;
    class DateTimeFormatInfo;
}

/// Represents a time interval.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS TimeSpan final
{
public:
    /// The TimeSpan object that represents zero-interval.
    static ASPOSECPP_SHARED_API const TimeSpan Zero;
    /// The TimeSpan object that represents the longest possible interval.
    static ASPOSECPP_SHARED_API const TimeSpan MaxValue;
    /// /// The TimeSpan object that represents the shortest possible interval.
    static ASPOSECPP_SHARED_API const TimeSpan MinValue;

    /// The number of 100-nanoseconds intervals in a day (24-hour interval).
    static constexpr int64_t TicksPerDay = 864000000000ULL;
    /// The number of 100-nanoseconds intervals in a hour.
    static constexpr int64_t TicksPerHour = 36000000000ULL;
    /// The number of 100-nanoseconds intervals in a millisecond.
    static constexpr int64_t TicksPerMillisecond = 10000ULL;
    /// The number of 100-nanoseconds intervals in a minute.
    static constexpr int64_t TicksPerMinute = 600000000ULL;
    /// The number of 100-nanoseconds intervals in a second.
    static constexpr int64_t TicksPerSecond = 10000000ULL;

    /// Constructs a TimeSpan object that represents a zero time interval.
    constexpr TimeSpan() : m_ticks(0) {}

    // dotnetTicks - .NET ticks as 100ns since 0001.01.01-00:00:00
    /// Constructs an instance of TimeSpan class that represents the specified time interval.
    /// @param ticks The time interval to be represented by the instance being constructed expressed as the number of 100-nanoseconds intervals.
    explicit constexpr TimeSpan(int64_t ticks) : m_ticks(ticks) {}

    /// Constructs an instance of TimeSpan class that represents the time interval which is equal to the sum of the specified numebr of hours, minutes and seconds.
    /// @param hours The number of hours in the hours component of the time interval to be represented by the instance being constructed
    /// @param minutes The number of minutes in the minutes component of the time interval to be represented by the instance being constructed
    /// @param seconds The number of seconds in the seconds component of the time interval to be represented by the instance being constructed
    ASPOSECPP_SHARED_API TimeSpan(int hours, int minutes, int seconds);

    /// Constructs an instance of TimeSpan class that represents the time interval which is equal to the sum of the specified numebr of hours, minutes, seconds and milliseconds.
    /// @param days The number of days in the days component of the time interval to be represented by the instance being constructed
    /// @param hours The number of hours in the hours component of the time interval to be represented by the instance being constructed
    /// @param minutes The number of minutes in the minutes component of the time interval to be represented by the instance being constructed
    /// @param seconds The number of seconds in the seconds component of the time interval to be represented by the instance being constructed
    /// @param milliseconds The number of milliseconds in the milliseconds component of the time interval to be represented by the instance being constructed
    ASPOSECPP_SHARED_API TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds = 0);

    /// Constructs a TimeSpan object that represents the time interval equal to the time interval represented by the specified TimeSpan object.
    constexpr TimeSpan(const TimeSpan&) = default;

    /// Sets the time interval represented by the specified TimeSpan object to the current TimeSpan object.
    /// @returns A reference to the self
    constexpr TimeSpan& operator=(const TimeSpan&) = default;

    /// Returns a new TimeSpan object that represents the specified interval.
    /// @param ticks The time interval expressed as the number of 100-nanoseconds intervals.
    /// @returns A new TimeSpan object that represents the specified interval.
    static constexpr TimeSpan FromTicks(int64_t ticks)
    {
        return TimeSpan(ticks);
    }

    /// Returns a new TimeSpan object that represents the specified interval.
    /// @param value The time interval expressed as the number of milliseconds.
    /// @returns A new TimeSpan object that represents the specified interval.
    static TimeSpan FromMilliseconds(double value)
    {
        return Interval(value, 1);
    }

    /// Returns a new TimeSpan object that represents the specified interval.
    /// @param value The time interval expressed as the number of seconds.
    /// @returns A new TimeSpan object that represents the specified interval.
    static TimeSpan FromSeconds(double value)
    {
        constexpr int MilliseconsPerSecond = 1000;
        return Interval(value, 1000);
    }

    /// Returns a new TimeSpan object that represents the specified interval.
    /// @param value The time interval expressed as the number of minutes.
    /// @returns A new TimeSpan object that represents the specified interval.
    static TimeSpan FromMinutes(double value)
    {
        constexpr int MilliseconsPerMinute = 60 * 1000;
        return Interval(value, MilliseconsPerMinute);
    }

    /// Returns a new TimeSpan object that represents the specified interval.
    /// @param value The time interval expressed as the number of hours.
    /// @returns A new TimeSpan object that represents the specified interval.
    static TimeSpan FromHours(double value)
    {
        constexpr int MilliseconsPerHour = 60 * 60 * 1000;
        return Interval(value, MilliseconsPerHour);
    }

    /// Returns a new TimeSpan object that represents the specified interval.
    /// @param value The time interval expressed as the number of days.
    /// @returns A new TimeSpan object that represents the specified interval.
    static TimeSpan FromDays(double value)
    {
        constexpr int MilliseconsPerDay = 24 * 60 * 60 * 1000;
        return Interval(value, MilliseconsPerDay);
    }

    /// Compares two TimeSpan objects.
    /// @param t1 The first comparand
    /// @param t2 The second comparand
    /// @returns -1 if @p t1 is shorter than @p t2; 0 if @p t1 is equal to @p t2; 1 if @p t1 is longer than @p t2 
    static constexpr int Compare(TimeSpan t1, TimeSpan t2)
    {
        if (t1.m_ticks > t2.m_ticks) return 1;
        if (t1.m_ticks < t2.m_ticks) return -1;
        return 0;
    }

    /// Compares current and the specified objects.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns -1 if the current object represents the interval that is shorter than @p value; 0 if the current object represents the interval that is equal to @p value; 1 if the current object represents the interval that is longer than @p value 
    constexpr int CompareTo(TimeSpan value) const
    {
        return Compare(*this, value);
    }

    /// Compares current and the specified objects.
    /// @param obj The TimeSpan object to compare the current object with
    /// @returns -1 if the current object represents the interval that is shorter than @p value; 0 if the current object represents the interval that is equal to @p value; 1 if the current object represents the interval that is longer than @p value 
    ASPOSECPP_SHARED_API int CompareTo(const SharedPtr<Object>& obj) const;

    /// Determines if the time interval represented by the current object is equal to the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the current object and the specified object represent the same time interval, otherwise - false
    constexpr bool Equals(TimeSpan value) const
    {
        return m_ticks == value.m_ticks;
    }

    /// Determines if the time interval represented by the current object is equal to the time interval represented by the specified object.
    /// @param obj The TimeSpan object to compare the current object with
    /// @returns True if the current object and the specified object represent the same time interval, otherwise - false
    ASPOSECPP_SHARED_API bool Equals(const SharedPtr<Object>& obj) const;

    /// Returns true if the specified objects represent the same time interval, otherwise - false
    static constexpr bool Equals(TimeSpan a, TimeSpan b)
    {
        return a.m_ticks == b.m_ticks;
    }

    /// Returns a hash code for the current object.
    ASPOSECPP_SHARED_API int GetHashCode() const;

    /// Returns the days component of the time interval represented by the current TimeSpan object.
    constexpr int get_Days() const
    {
        return static_cast<int>(m_ticks / TicksPerDay);
    }

    /// Returns the hours component of the time interval represented by the current TimeSpan object.
    constexpr int get_Hours() const
    {
        return static_cast<int>((m_ticks / TicksPerHour) % 24);
    }

    /// Returns the minutes component of the time interval represented by the current TimeSpan object.
    constexpr int get_Minutes() const
    {
        return static_cast<int>((m_ticks / TicksPerMinute) % 60);
    }

    /// Returns the seconds component of the time interval represented by the current TimeSpan object.
    constexpr int get_Seconds() const
    {
        return static_cast<int>((m_ticks / TicksPerSecond) % 60);
    }

    /// Returns the milliseconds component of the time interval represented by the current TimeSpan object.
    constexpr int get_Milliseconds() const
    {
        return static_cast<int>((m_ticks / TicksPerMillisecond) % 1000);
    }

    /// Returns the number of 100-nanoseconds intervals that constitute the time interval represented by the current TimeSpan object.
    constexpr int64_t get_Ticks() const
    {
        return m_ticks;
    }

    /// Returns the value of the current TimeSpan object expressed in whole and fractional days.
    constexpr double get_TotalDays() const
    {
        return static_cast<double>(m_ticks) / TicksPerDay;
    }

    /// Returns the value of the current TimeSpan object expressed in whole and fractional hours.
    constexpr double get_TotalHours() const
    {
        return static_cast<double>(m_ticks) / TicksPerHour;
    }

    /// Returns the value of the current TimeSpan object expressed in whole and fractional minutes.
    constexpr double get_TotalMinutes() const
    {
        return static_cast<double>(m_ticks) / TicksPerMinute;
    }

    /// Returns the value of the current TimeSpan object expressed in whole and fractional seconds.
    constexpr double get_TotalSeconds() const
    {
        return static_cast<double>(m_ticks) / TicksPerSecond;
    }

    /// Returns the value of the current TimeSpan object expressed in whole and fractional milliseconds.
    ASPOSECPP_SHARED_API double get_TotalMilliseconds() const;

    /// Returns a new instance of TimeSpan class that represents a time interval which is the sum of the time intervals represented by the current and the specified objects.
    /// @param value The TimeSpan object that represents the time interval to add
    /// @returns A new instance of TimeSpan class that represents a time interval which is the sum of the time intervals represented by the current and the specified objects.
    ASPOSECPP_SHARED_API TimeSpan Add(TimeSpan value) const;

    /// Returns a new instance of TimeSpan class that represents a time interval which is the result of subtraction of the time interval represented by the specified object from the time interval represented by the current object.
    /// @param value The TimeSpan object that represents the time interval to subtract
    /// @returns A new instance of TimeSpan class that represents a time interval which is the result of subtraction of the time interval represented by the specified object from the time interval represented by the current object.
    ASPOSECPP_SHARED_API TimeSpan Subtract(TimeSpan value) const;

    /// Returns a new instance of TimeSpan object that represents negated value represented by the current TimeSpan object.
    ASPOSECPP_SHARED_API TimeSpan Negate() const;

    /// Returns a new instance of TimeSpan object whose value is the absolute value of the current object.
    ASPOSECPP_SHARED_API TimeSpan Duration() const;

    /// Returns the string representation of the time interval represented by the current object.
    ASPOSECPP_SHARED_API String ToString() const;

    /// Converts the value of the current object to equivalent string representation, using the specified format.
    ASPOSECPP_SHARED_API String ToString(const String& format) const;

    /// Converts the value of the current object to equivalent string representation, using the specified format and format provider.
    ASPOSECPP_SHARED_API String ToString(const String& format, const SharedPtr<IFormatProvider>& provider) const;
    // Optimized function overloads
    ASPOSECPP_SHARED_API String ToString(const String& format, const SharedPtr<Globalization::CultureInfo>& culture) const;
    ASPOSECPP_SHARED_API String ToString(const String& format, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi) const;
    String ToString(const String& format, std::nullptr_t) const { return ToString(format); }

    /// Converts string to equivalent TimeSpan object.
    /// @param input Input string.
    /// @return Time interval that corresponds to string.
    static ASPOSECPP_SHARED_API TimeSpan Parse(const String& input);

    /// Converts string to equivalent TimeSpan object using the specified format provider.
    /// @param input Input string.
    /// @param provider Format provider that supplies culture-specific formatting information.
    /// @return Time interval that corresponds to string.
    static ASPOSECPP_SHARED_API TimeSpan Parse(const String& input, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API TimeSpan Parse(const String& input, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API TimeSpan Parse(const String& input, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi);
    static TimeSpan Parse(const String& input, std::nullptr_t) { return Parse(input); }

    /// Converts string to equivalent TimeSpan object using the specified formats, format provider and styles.
    /// @param input Input string.
    /// @param formats Array of format strings.
    /// @param provider Format provider that supplies culture-specific formatting information.
    /// @param styles Defines elements that may be present in input string.
    /// @return Time interval that corresponds to string.
    static ASPOSECPP_SHARED_API TimeSpan ParseExact(const String& input, const ArrayPtr<String>& formats, const SharedPtr<IFormatProvider>& provider, Globalization::TimeSpanStyles styles = Globalization::TimeSpanStyles::None);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API TimeSpan ParseExact(const String& input, const ArrayPtr<String>& formats, const SharedPtr<Globalization::CultureInfo>& culture, Globalization::TimeSpanStyles styles = Globalization::TimeSpanStyles::None);
    static ASPOSECPP_SHARED_API TimeSpan ParseExact(const String& input, const ArrayPtr<String>& formats, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, Globalization::TimeSpanStyles styles = Globalization::TimeSpanStyles::None);
    static ASPOSECPP_SHARED_API TimeSpan ParseExact(const String& input, const ArrayPtr<String>& formats, std::nullptr_t, Globalization::TimeSpanStyles styles = Globalization::TimeSpanStyles::None);

    /// Converts string to equivalent TimeSpan object using the specified format, format provider and styles.
    /// @param input Input string.
    /// @param format Standart or custom format string.
    /// @param provider Format provider that supplies culture-specific formatting information.
    /// @param styles Defines elements that may be present in input string.
    /// @return Time interval that corresponds to string.
    static ASPOSECPP_SHARED_API TimeSpan ParseExact(const String& input, const String& format, const SharedPtr<IFormatProvider>& provider, Globalization::TimeSpanStyles styles = Globalization::TimeSpanStyles::None);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API TimeSpan ParseExact(const String& input, const String& format, const SharedPtr<Globalization::CultureInfo>& culture, Globalization::TimeSpanStyles styles = Globalization::TimeSpanStyles::None);
    static ASPOSECPP_SHARED_API TimeSpan ParseExact(const String& input, const String& format, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, Globalization::TimeSpanStyles styles = Globalization::TimeSpanStyles::None);
    static ASPOSECPP_SHARED_API TimeSpan ParseExact(const String& input, const String& format, std::nullptr_t, Globalization::TimeSpanStyles styles = Globalization::TimeSpanStyles::None);

    /// Converts string to equivalent TimeSpan object and returns result of conversion.
    /// @param input Input string.
    /// @param result Time interval that corresponds to string.
    /// @return True if string was converted successfully; otherwise, false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& input, TimeSpan& result);

    /// Converts string to equivalent TimeSpan object using the specified format provider and returns result of conversion.
    /// @param input Input string.
    /// @param provider Format provider that supplies culture-specific formatting information.
    /// @param result Time interval that corresponds to string.
    /// @return True if string was converted successfully; otherwise, false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& input, const SharedPtr<IFormatProvider>& provider, TimeSpan& result);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API bool TryParse(const String& input, const SharedPtr<Globalization::CultureInfo>& culture, TimeSpan& result);
    static ASPOSECPP_SHARED_API bool TryParse(const String& input, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, TimeSpan& result);
    static ASPOSECPP_SHARED_API bool TryParse(const String& input, std::nullptr_t, TimeSpan& result);

    /// Converts string to equivalent TimeSpan object using the specified formats and format provider, and returns result of conversion.
    /// @param input Input string.
    /// @param formats Array of format strings.
    /// @param provider Format provider that supplies culture-specific formatting information.
    /// @param result Time interval that corresponds to string.
    /// @return True if string was converted successfully; otherwise, false.
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const ArrayPtr<String>& formats, const SharedPtr<IFormatProvider>& provider, TimeSpan& result);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const ArrayPtr<String>& formats, const SharedPtr<Globalization::CultureInfo>& culture, TimeSpan& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const ArrayPtr<String>& formats, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, TimeSpan& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const ArrayPtr<String>& formats, std::nullptr_t, TimeSpan& result);

    /// Converts string to equivalent TimeSpan object using the specified format, format provider and styles, and returns result of conversion.
    /// @param input Input string.
    /// @param format Standart or custom format string.
    /// @param provider Format provider that supplies culture-specific formatting information.
    /// @param styles Defines elements that may be present in input string.
    /// @param result Time interval that corresponds to string.
    /// @return True if string was converted successfully; otherwise, false.
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const String& format, const SharedPtr<IFormatProvider>& provider, Globalization::TimeSpanStyles styles, TimeSpan& result);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const String& format, const SharedPtr<Globalization::CultureInfo>& culture, Globalization::TimeSpanStyles styles, TimeSpan& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const String& format, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, Globalization::TimeSpanStyles styles, TimeSpan& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const String& format, std::nullptr_t, Globalization::TimeSpanStyles styles, TimeSpan& result);

    /// Converts string to equivalent TimeSpan object using the specified formats, format provider and styles, and returns result of conversion.
    /// @param input Input string.
    /// @param formats Array of format strings.
    /// @param provider Format provider that supplies culture-specific formatting information.
    /// @param styles Defines elements that may be present in input string.
    /// @param result Time interval that corresponds to string.
    /// @return True if string was converted successfully; otherwise, false.
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const ArrayPtr<String>& formats, const SharedPtr<IFormatProvider>& provider, Globalization::TimeSpanStyles styles, TimeSpan& result);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const ArrayPtr<String>& formats, const SharedPtr<Globalization::CultureInfo>& culture, Globalization::TimeSpanStyles styles, TimeSpan& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const ArrayPtr<String>& formats, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, Globalization::TimeSpanStyles styles, TimeSpan& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const ArrayPtr<String>& formats, std::nullptr_t, Globalization::TimeSpanStyles styles, TimeSpan& result);

    /// Converts string to equivalent TimeSpan object using the specified format and format provider, and returns result of conversion.
    /// @param input Input string.
    /// @param format Standart or custom format string.
    /// @param provider Format provider that supplies culture-specific formatting information.
    /// @param result Time interval that corresponds to string.
    /// @return True if string was converted successfully; otherwise, false.
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const String& format, const SharedPtr<IFormatProvider>& provider, TimeSpan& result);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const String& format, const SharedPtr<Globalization::CultureInfo>& culture, TimeSpan& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const String& format, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi, TimeSpan& result);
    static ASPOSECPP_SHARED_API bool TryParseExact(const String& input, const String& format, std::nullptr_t, TimeSpan& result);

    /// Returns a new instance of TimeSpan class that represents a time interval which is the sum of the time intervals represented by the current and the specified objects.
    /// @param value The TimeSpan object that represents the time interval to add
    /// @returns A new instance of TimeSpan class that represents a time interval which is the sum of the time intervals represented by the current and the specified objects.
    TimeSpan operator+(TimeSpan value) const
    {
        return Add(value);
    }

    /// Assigns to the current object the time interval which is the sum of the time interval represented by the current and the specified objects.
    /// @param value The TimeSpan object that represents the time interval to add
    /// @returns A reference to the self
    TimeSpan& operator+=(TimeSpan value)
    {
        return *this = Add(value);
    }

    /// Returns a new instance of TimeSpan class that represents a time interval which is the result of subtraction of the time interval represented by the specified object from the time interval represented by the current object.
    /// @param value The TimeSpan object that represents the time interval to subtract
    /// @returns A new instance of TimeSpan class that represents a time interval which is the result of subtraction of the time interval represented by the specified object from the time interval represented by the current object.
    TimeSpan operator-(TimeSpan value) const
    {
        return Subtract(value);
    }

    /// Assigns to the current object the time interval which is the result of subtraction of the time interval represented by the specified object from the time interval represented by the current object.
    /// @param value The TimeSpan object that represents the time interval to subtract
    /// @returns A reference to the self
    TimeSpan& operator-=(TimeSpan value)
    {
        return *this = Subtract(value);
    }

    /// Returns a new instance of TimeSpan object that represents negated value represented by the current TimeSpan object.
    TimeSpan operator-() const
    {
        return Negate();
    }

    /// Returns self.
    TimeSpan operator+() const
    {
        return *this;
    }

    ASPOSECPP_SHARED_API TimeSpan operator/(double divisor) const;

    TimeSpan& operator/=(double divisor)
    {
        return *this = operator/(divisor);
    }

    constexpr double operator/(TimeSpan value) const
    {
        return m_ticks / static_cast<double>(value.m_ticks);
    }

    /// Determines if the time interval represented by the current object is equal to the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the current object and the specified object represent the same time interval, otherwise - false
    constexpr bool operator==(TimeSpan value) const
    {
        return m_ticks == value.m_ticks;
    }

    /// Determines if the time interval represented by the current object is not equal to the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the current object and the specified object represent different time intervals, otherwise - false
    constexpr bool operator!=(TimeSpan value) const
    {
        return m_ticks != value.m_ticks;
    }

    /// Determines if the time interval represented by the current object is shorter than the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the time interval represented by the current object is shorter than the time interval represented by @p value, otherwise - false
    constexpr bool operator<(TimeSpan value) const
    {
        return m_ticks < value.m_ticks;
    }

    /// Determines if the time interval represented by the current object is shorter than or equal to the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the time interval represented by the current object is shorter than or equal to the time interval represented by @p value, otherwise - false
    constexpr bool operator<=(TimeSpan value) const
    {
        return m_ticks <= value.m_ticks;
    }

    /// Determines if the time interval represented by the current object is longer than the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the time interval represented by the current object is longer than the time interval represented by @p value, otherwise - false
    constexpr bool operator>(TimeSpan value) const
    {
        return m_ticks > value.m_ticks;
    }
    
    /// Determines if the time interval represented by the current object is longer than or equal to the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the time interval represented by the current object is longer than or equal to the time interval represented by @p value, otherwise - false
    constexpr bool operator>=(TimeSpan value) const
    {
        return m_ticks >= value.m_ticks;
    }

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
    /// Ticks number.
    int64_t m_ticks;

    /// Represents a pointer to TypeInfo object that contains information about TimeSpan strucutre.
    struct ThisTypeInfo : TypeInfoPtr
    {
        /// Constructs an instance of ThisTypeInfo class.
        ThisTypeInfo()
        {
            ptr = std::make_unique<TypeInfo>(u"System::TimeSpan");
        }
    };

    /// Constructs TimeSpan value of @p value * @p scale milliseconds.
    /// @param value Floating point part.
    /// @param scale Integer part.
    /// @return Result of the multiplication.
    static ASPOSECPP_SHARED_API TimeSpan Interval(double value, int scale);

#if defined(_DEBUG) && defined(_MSC_VER)
    struct NatvisHelpers
    {
        struct Days { int64_t ticks; };
        struct HoursMinutes { int64_t ticks; };
        struct HoursMinutesSeconds { int64_t ticks; };
        struct Fraction { int64_t ticks; };
    };
#endif

}; // class TimeSpan

constexpr bool operator==(std::nullptr_t, TimeSpan) { return false; }
constexpr bool operator!=(std::nullptr_t, TimeSpan) { return true; }
constexpr bool operator<(std::nullptr_t, TimeSpan) { return false; }
constexpr bool operator<=(std::nullptr_t, TimeSpan) { return false; }
constexpr bool operator>(std::nullptr_t, TimeSpan) { return false; }
constexpr bool operator>=(std::nullptr_t, TimeSpan) { return false; }

/// IsBoxable<T> specialization for TimeSpan.
template<> struct IsBoxable<TimeSpan> : std::true_type {};

/// Prints value to ostream. Mostly used for debug.
inline void PrintTo(const System::TimeSpan& value, std::ostream* stream)
{
    PrintTo(value.ToString(), stream);
}

} // namespace System

namespace std {
    template <>
    class hash<System::TimeSpan>
    {
    public:
        using argument_type = System::TimeSpan;
        using result_type = std::size_t;

        result_type operator()(argument_type value) const
        {
            return static_cast<result_type>(value.GetHashCode());
        }
    };
}
