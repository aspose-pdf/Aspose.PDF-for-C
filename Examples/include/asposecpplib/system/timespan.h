/// @file system/timespan.h
/// Contains the declaration System::TimeSpan class.
#ifndef _aspose_system_timespan_h_
#define _aspose_system_timespan_h_

#ifdef USE_NANOSECONDS
    #define BOOST_DATE_TIME_POSIX_TIME_STD_CONFIG
#endif

#include "fwd.h"
#include <system/string.h>
#include <system/exceptions.h>
#include <system/boxable_traits.h>

#include <limits>
#include <memory>


#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/date_time/posix_time/posix_time.hpp>
#endif


namespace boost { namespace posix_time { 
    /// The data type used to store the time interval value.
    ASPOSECPP_3RD_PARTY_CLASS(time_duration);
} }


namespace System {

namespace Detail {
    /// The wrapper for the data type used to store the time interval.
    ASPOSECPP_3RD_PARTY_TYPE_HOLDER(boost::posix_time::time_duration, time_duration, sizeof(std::int64_t), std::int64_t, TimeDurationHolder);
}

/// Specifies the formatting options that customize string parsing for methods that convert a string representation of a time interval into Timespan object.
enum class TimeSpanStyles {
    /// The time interval represented by the inptut string is interpreted as a negative time interval only if a negative sign is present
    None = 0x00000000,
    /// The time interval represented by the inptut string is interpreted as a negative time interval always
    AssumeNegative = 0x00000001
};

/// Represents a time interval.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS TimeSpan
{
public:
    friend class DateTime;

    /// The number of seconds in a day (24-hour interval).
    static const int ASPOSECPP_SHARED_API SEC_PER_DAY = 24 * 60 * 60;
    /// The number of seconds in a hour.
    static const int ASPOSECPP_SHARED_API SEC_PER_H = 24 * 60;
    /// The number of seconds in a minute.
    static const int ASPOSECPP_SHARED_API SEC_PER_M = 60;
    /// The number of 100-nanoseconds intervals in a millisecond.
    static const int64_t ASPOSECPP_SHARED_API s_ticks_per_millisecond = 10000;
    /// The number of milliseconds in a second.
    static const int ASPOSECPP_SHARED_API s_millis_per_second = 1000;
    /// The number of milliseconds in a minute.
    static const int ASPOSECPP_SHARED_API s_millis_per_minute = s_millis_per_second * 60; //     60,000
    /// The number of milliseconds in a hour.
    static const int ASPOSECPP_SHARED_API s_millis_per_hour = s_millis_per_minute * 60;   //  3,600,000
    /// The number of milliseconds in a day (24-hour inteval).
    static const int ASPOSECPP_SHARED_API s_millis_per_day = s_millis_per_hour * 24;      // 86,400,000

    //.NET offset till 1400.01.01 00:00:00
    /// Number of boost ticks between .NET era beginning (00:00:00 1/1/1) and boost era beginning (00:00:00 1400/1/1).
    const static int64_t ASPOSECPP_SHARED_API s_dotnetOffset = 441481536000000000ULL;

    /// The TimeSpan object that represents zero-interval.
    static const TimeSpan ASPOSECPP_SHARED_API Zero;
    /// The TimeSpan object that represents the longest possible interval.
    static const TimeSpan ASPOSECPP_SHARED_API MaxValue;
    /// /// The TimeSpan object that represents the shortest possible interval.
    static const TimeSpan ASPOSECPP_SHARED_API MinValue;

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

    // dotnetTicks - .NET ticks as 100ns since 0001.01.01-00:00:00
    /// Constructs an instance of TimeSpan class that represents the specified time interval.
    /// @param dotnetTicks The time interval to be represented by the instance being constructed expressed as the number of 100-nanoseconds intervals.
    ASPOSECPP_SHARED_API TimeSpan(int64_t dotnetTicks);

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

    /// Constructs a TimeSpan object that represents a zero time interval.
    ASPOSECPP_SHARED_API TimeSpan();

    /// Constructs a TimeSpan object that represents the time interval equal to the time interval represented by the specified TimeSpan object.
    /// @param span The TimeSpan object to copy the time interval from
    ASPOSECPP_SHARED_API TimeSpan(const TimeSpan &span);

    /// Destructor.
    ASPOSECPP_SHARED_API ~TimeSpan();

    /// Sets the time interval represented by the specified TimeSpan object to the current TimeSpan object.
    /// @param ts The TimeSpan object to copy the time interval from
    /// @returns A reference to the self
    ASPOSECPP_SHARED_API TimeSpan& operator = (const TimeSpan &ts);

    /// Constructs TimeSpan value of @p value * @p scale milliseconds.
    /// @param value Floating point part.
    /// @param scale Integer part.
    static ASPOSECPP_SHARED_API TimeSpan Interval(double value, int scale);
    /// Converts the string representation of a time interval to equivalent TimeSpan object.
    /// @param str The string representation of a time interval
    /// @returns A TimeSpan object representing a time interval equivalent to that represented by @p str
    static ASPOSECPP_SHARED_API TimeSpan Parse(const String& str);

    /// Returns a new TimeSpan object that represents the specified interval.
    /// @param ticks The time interval expressed as the number of 100-nanoseconds intervals.
    /// @returns A new TimeSpan object that represents the specified interval.
    static TimeSpan FromTicks(int64_t ticks)
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
        return Interval(value, s_millis_per_second);
    }

    /// Returns a new TimeSpan object that represents the specified interval.
    /// @param value The time interval expressed as the number of minutes.
    /// @returns A new TimeSpan object that represents the specified interval.
    static TimeSpan FromMinutes(double value)
    {
        return Interval(value, s_millis_per_minute);
    }

    /// Returns a new TimeSpan object that represents the specified interval.
    /// @param value The time interval expressed as the number of hours.
    /// @returns A new TimeSpan object that represents the specified interval.
    static TimeSpan FromHours(double value)
    {
        return Interval(value, s_millis_per_hour);
    }

    /// Returns a new TimeSpan object that represents the specified interval.
    /// @param value The time interval expressed as the number of days.
    /// @returns A new TimeSpan object that represents the specified interval.
    static TimeSpan FromDays(double value)
    {
        return Interval(value, s_millis_per_day);
    }

    /// Compares two TimeSpan objects.
    /// @param t1 The first comparand
    /// @param t2 The second comparand
    /// @returns -1 if @p t1 is shorter than @p t2; 0 if @p t1 is equal to @p t2; 1 if @p t1 is longer than @p t2 
    static int Compare(const TimeSpan& t1, const TimeSpan& t2)
    {
        return t1.CompareTo(t2);
    }

    // properties
    /// Returns the days component of the time interval represented by the current TimeSpan object.
    ASPOSECPP_SHARED_API int get_Days() const;
    /// Returns the hours component of the time interval represented by the current TimeSpan object.
    ASPOSECPP_SHARED_API int get_Hours() const;
    /// Returns the minutes component of the time interval represented by the current TimeSpan object.
    ASPOSECPP_SHARED_API int get_Minutes() const;
    /// Returns the seconds component of the time interval represented by the current TimeSpan object.
    ASPOSECPP_SHARED_API int get_Seconds() const;
    /// Returns the milliseconds component of the time interval represented by the current TimeSpan object.
    ASPOSECPP_SHARED_API int get_Milliseconds() const;
    /// Returns the number of 100-nanoseconds intervals that constitute the time interval represented by the current TimeSpan object.
    ASPOSECPP_SHARED_API int64_t get_Ticks() const;
    /// Returns the value of the current TimeSpan object expressed in whole and fractional days.
    double get_TotalDays() const
    {
        return get_TotalHours() / 24;
    }
    /// Returns the value of the current TimeSpan object expressed in whole and fractional hours.
    double get_TotalHours() const
    {
        return get_TotalMinutes() / 60;
    }
    /// Returns the value of the current TimeSpan object expressed in whole and fractional minutes.
    double get_TotalMinutes() const
    {
        return get_TotalSeconds() / 60;
    }
    /// Returns the value of the current TimeSpan object expressed in whole and fractional seconds.
    double get_TotalSeconds() const
    {
        return get_TotalMilliseconds() / 1000;
    }
    /// Returns the value of the current TimeSpan object expressed in whole and fractional milliseconds.
    ASPOSECPP_SHARED_API double get_TotalMilliseconds() const;

    // methods
    /// Returns a new instance of TimeSpan class that represents a time interval which is the sum of the time intervals represented by the current and the specified objects.
    /// @param value The TimeSpan object that represents the time interval to add
    /// @returns A new instance of TimeSpan class that represents a time interval which is the sum of the time intervals represented by the current and the specified objects.
    ASPOSECPP_SHARED_API TimeSpan Add(TimeSpan value) const;

    /// Returns a new instance of TimeSpan class that represents a time interval which is the result of subtraction of the time interval represented by the specified object from the time interval represented by the current object.
    /// @param value The TimeSpan object that represents the time interval to subtract
    /// @returns A new instance of TimeSpan class that represents a time interval which is the result of subtraction of the time interval represented by the specified object from the time interval represented by the current object.
    ASPOSECPP_SHARED_API TimeSpan Subtract(TimeSpan value) const;

    /// Returns a new instance of TimeSpan object that represents negated value represented by the current TimeSpan object.
    ASPOSECPP_SHARED_API TimeSpan Negate();

    /// Returns the string representation of the time interval represented by the current object.
    ASPOSECPP_SHARED_API String ToString() const;

    /// Returns the number of 100-nanoseconds intervals that constitute the time interval value represented by the current object as a double-precision floating point number.
    ASPOSECPP_SHARED_API double ToDouble() const;

    /// Determines if the time interval represented by the current object is equal to the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the current object and the specified object represent the same time interval, otherwise - false
    ASPOSECPP_SHARED_API bool Equals(const TimeSpan& value) const;

    /// Compares current and the specified objects.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns -1 if the current object represents the interval that is than @p value; 0 if the current object represents the interval that is equal to @p value; 1 if the current object represents the interval that is longer than @p value 
    ASPOSECPP_SHARED_API int CompareTo(const TimeSpan& value) const;
    
    /// Returns a hash code for the current object.
    ASPOSECPP_SHARED_API int GetHashCode() const;

    // operators
    /// Returns a new instance of TimeSpan class that represents a time interval which is the sum of the time intervals represented by the current and the specified objects.
    /// @param value The TimeSpan object that represents the time interval to add
    /// @returns A new instance of TimeSpan class that represents a time interval which is the sum of the time intervals represented by the current and the specified objects.
    TimeSpan operator+(const TimeSpan& value) const
    {
        return Add(value);
    }

    /// Assigns to the current object the time interval which is the sum of the time interval represented by the current and the specified objects.
    /// @param value The TimeSpan object that represents the time interval to add
    /// @returns A reference to the self
    ASPOSECPP_SHARED_API TimeSpan& operator+=(const TimeSpan& value);

    /// Returns a new instance of TimeSpan class that represents a time interval which is the result of subtraction of the time interval represented by the specified object from the time interval represented by the current object.
    /// @param value The TimeSpan object that represents the time interval to subtract
    /// @returns A new instance of TimeSpan class that represents a time interval which is the result of subtraction of the time interval represented by the specified object from the time interval represented by the current object.
    TimeSpan operator-(const TimeSpan& value) const
    {
        return Subtract(value);
    }

    /// Assigns to the current object the time interval which is the result of subtraction of the time interval represented by the specified object from the time interval represented by the current object.
    /// @param value The TimeSpan object that represents the time interval to subtract
    /// @returns A reference to the self
    ASPOSECPP_SHARED_API TimeSpan& operator-=(const TimeSpan& value);

    /// Determines if the time interval represented by the current object is equal to the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the current object and the specified object represent the same time interval, otherwise - false
    ASPOSECPP_SHARED_API bool operator==(const TimeSpan& value) const;
/*
    bool operator==(std::nullptr_t null_ptr) const
    {
        return *this == Null;
    }

    bool operator!=(std::nullptr_t null_ptr) const
    {
        return *this != Null;
    }
    */

    /// Determines if the time interval represented by the current object is not equal to the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the current object and the specified object represent different time intervals, otherwise - false
    ASPOSECPP_SHARED_API bool operator!=(const TimeSpan& value) const;

    /// Determines if the time interval represented by the current object is shorter than the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the time interval represented by the current object is shorter than the time interval represented by @p value, otherwise - false
    ASPOSECPP_SHARED_API bool operator<(const TimeSpan& value) const;

    /// Determines if the time interval represented by the current object is shorter than or equal to the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the time interval represented by the current object is shorter than or equal to the time interval represented by @p value, otherwise - false
    ASPOSECPP_SHARED_API bool operator<=(const TimeSpan& value) const;

    /// Determines if the time interval represented by the current object is longer than the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the time interval represented by the current object is longer than the time interval represented by @p value, otherwise - false
    ASPOSECPP_SHARED_API bool operator>(const TimeSpan& value) const;
    
    /// Determines if the time interval represented by the current object is longer than or equal to the time interval represented by the specified object.
    /// @param value The TimeSpan object to compare the current object with
    /// @returns True if the time interval represented by the current object is longer than or equal to the time interval represented by @p value, otherwise - false
    ASPOSECPP_SHARED_API bool operator>=(const TimeSpan& value) const;

    /// Returns a new instance of TimeSpan object that represents negated value represented by the current TimeSpan object.
    ASPOSECPP_SHARED_API TimeSpan operator-() const;

    /// Returns a TypeInfo object that represent TimeSpan structure.
    static const TypeInfo& Type()
    {
        return *static_holder<ThisTypeInfo>::GetValue();
    }

    /// Construct an instance of TimeSpan class that represents the specified time interval.
    /// @param td The time interval to be represented by the instance being constructed
    ASPOSECPP_SHARED_API explicit TimeSpan(boost::posix_time::time_duration td);

private:
    /// The storage for the time interval value represented by the current TimeSpan object.
    Detail::TimeDurationHolder m_span;

    //static const TimeSpan ASPOSECPP_SHARED_API Null;

    /// Represents a pointer to TypeInfo object that contains information about TimeSpan strucutre.
    struct ThisTypeInfo : TypeInfoPtr
    {
        /// Constructs an instance of ThisTypeInfo class.
        ThisTypeInfo()
        {
            ptr = std::make_unique<TypeInfo>(u"System::TimeSpan");
        }
    };
}; // class TimeSpan


/// IsBoxable<T> specialization for TimeSpan.
template<> struct IsBoxable<TimeSpan> : std::true_type {};

} // namespace System

#endif // _aspose_system_timespan_h_
