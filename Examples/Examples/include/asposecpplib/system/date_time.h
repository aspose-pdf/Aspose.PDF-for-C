/// @file system/date_time.h
/// Contains declarations of System::DateTime class.
#ifndef _aspose_system_date_time_h_
#define _aspose_system_date_time_h_

#include <system/globalization/date_time_styles.h>
#include <system/timespan.h>
#include <system/boxable_traits.h>

#include <array>
#include <memory>
#include <system/enum.h>


#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/date_time/posix_time/posix_time.hpp>
#endif


namespace boost { namespace posix_time {
    /// Forward declaration of ptime class.
    ASPOSECPP_3RD_PARTY_CLASS(ptime);
    /// Forward declaration of time_duration class.
    ASPOSECPP_3RD_PARTY_CLASS(time_duration);
} }


namespace System { namespace Globalization { class Calendar; } }

namespace System
{
    namespace Detail {
        /// Declaration of a type used to represent date and time value.
        ASPOSECPP_3RD_PARTY_TYPE_HOLDER(boost::posix_time::ptime, ptime, sizeof(std::int64_t), std::int64_t, PosixTimeHolder);
    }

    /// Enumeration values of which represent the kinds of date and time.
    enum class DateTimeKind
    {
        /// Unspecified kind
        Unspecified,
        /// UTC time
        Utc,
        /// Local time
        Local
    };

    /// Enumeration that represents a day of week.
    enum class DayOfWeek : int
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    /// Calculates the number of days between two days of week.
    /// @param a The minuend
    /// @param b The subtrahend
    /// @returns The number of days between weekdays @p a and @p b; the return value is a negative number if @a goes after @b
    inline int operator-(DayOfWeek a, DayOfWeek b)
    {
        return static_cast<std::underlying_type<DayOfWeek>::type>(a) - static_cast<std::underlying_type<DayOfWeek>::type>(b);
    }

    /// Namespace name alias.
    namespace bpt = boost::posix_time;

    /// Represents a specific date and time value on the time continuum.
    /// This type should be allocated on stack and passed to functions by value or by reference.
    /// Never use System::SmartPtr class to manage objects of this type.
    class ASPOSECPP_SHARED_CLASS DateTime
    {
    public:

        /// Constructs an instance that represents the smallest possible date and time value equal to MinValue.
        ASPOSECPP_SHARED_API DateTime();

        /// Constructs an instance that represents a date and time value specified as a particular year, month and day.
        /// @param year The year to be represenetd by the instance being constructed
        /// @param month The month of the @p year to be represented by the instance being constructed
        /// @param day The day of the @p month to be represented by the instance being constructed
        /// @param kind The value that indicates if @p year, @p month and @p day parameters specify a local time, UTC time or neither.
        ASPOSECPP_SHARED_API DateTime(int year, int month, int day, DateTimeKind kind = DateTimeKind::Unspecified);

        /// Constructs an instance that represents a date and time value specified as a particular year, month, day, hour, minute and second.
        /// @param year The year to be represenetd by the instance being constructed
        /// @param month The month of the @p year to be represented by the instance being constructed
        /// @param day The day of the @p month to be represented by the instance being constructed
        /// @param hour The hour of the @p day to be represented by the instance being constructed
        /// @param minute The minute of the @p hour to be represented by the instance being constructed
        /// @param second The second of the @p minute te be represented by the instance being constructed
        /// @param kind The value that indicates if the provided date and time parameters specify a local time, UTC time or neither.
        ASPOSECPP_SHARED_API DateTime(int year, int month, int day, int hour, int minute, int second, DateTimeKind kind = DateTimeKind::Unspecified);

        /// Constructs an instance that represents a date and time value specified as a particular year, month, day, hour, minute and second in the specified calendar.
        /// @param year The year to be represenetd by the instance being constructed
        /// @param month The month of the @p year to be represented by the instance being constructed
        /// @param day The day of the @p month to be represented by the instance being constructed
        /// @param hour The hour of the @p day to be represented by the instance being constructed
        /// @param minute The minute of the @p hour to be represented by the instance being constructed
        /// @param second The second of the @p minute te be represented by the instance being constructed
        /// @param calendar The calendar used to interpret the specified @p year, @p month and @p day.
        ASPOSECPP_SHARED_API DateTime(int year, int month, int day, int hour, int minute, int second, const SharedPtr<Globalization::Calendar>& calendar);

        /// Constructs an instance that represents a date and time value specified as a particular year, month, day, hour, minute, second and millisecond.
        /// @param year The year to be represenetd by the instance being constructed
        /// @param month The month of the @p year to be represented by the instance being constructed
        /// @param day The day of the @p month to be represented by the instance being constructed
        /// @param hour The hour of the @p day to be represented by the instance being constructed
        /// @param minute The minute of the @p hour to be represented by the instance being constructed
        /// @param second The second of the @p minute te be represented by the instance being constructed
        /// @param millisecond The millisecond of the @p second to be represented by the instance being constructed
        /// @param kind The value that indicates if the provided date and time parameters specify a local time, UTC time or neither.
        ASPOSECPP_SHARED_API DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, DateTimeKind kind = DateTimeKind::Unspecified);

        // dotnetTicks - .NET ticks as 100ns since 0001.01.01-00:00:00
        /// Construct an instance that represents a date and time value specified as a number of ticks.
        /// @param dotNetTicks The number of 100-ns intervals that have passed since January the 1st, 0001 00:00:00.000 in Georgian calendar
        /// @param kind The value that indicates if @p dotnetTicks parameter specifies a local time, UTC time or neither.
        ASPOSECPP_SHARED_API DateTime(int64_t dotNetTicks, DateTimeKind kind = DateTimeKind::Unspecified);

        /// Copy-constructs an instance.
        /// @param dt An instance of DateTime class to copy the represented date and time value from
        ASPOSECPP_SHARED_API DateTime(const DateTime &dt);

        /// Destructor.
        ASPOSECPP_SHARED_API ~DateTime();

        /// Assigns the value represented by the specified DateTime instance to the current object.
        /// @param dt An instance of DateTime class to copy the represented date and time value from
        /// @returns A reference to the self
        ASPOSECPP_SHARED_API DateTime& operator = (const DateTime &dt);

        // fields
        /// An instance of DateTime class that represents the minimal possible date and time value.
        static const DateTime ASPOSECPP_SHARED_API MinValue;

        /// An instance of DateTime class that represents the maximal possible date and time value.
        static const DateTime ASPOSECPP_SHARED_API MaxValue;

        // properties
        /// Returns a new instance of DateTime class that represents the date portion of the date and time represented by the current object with each component of the time portion set to 0.
        ASPOSECPP_SHARED_API DateTime get_Date() const;

        /// Returns a value representing a day of week that is represented by the current object.
        ASPOSECPP_SHARED_API DayOfWeek get_DayOfWeek() const;

        /// Returns the value representing if the date and time represented by the current object is a local or UTC date and time or neither.
        ASPOSECPP_SHARED_API DateTimeKind get_Kind() const;

        /// Returns the value that represents the time interval from the beginning of the day represented by the current object till the date and time value represented by the current object.
        ASPOSECPP_SHARED_API TimeSpan get_TimeOfDay() const;

        /// Returns the ordinal number of the day in the year represented by the current object.
        ASPOSECPP_SHARED_API int get_DayOfYear() const;

        /// Returns the year represented by the current object.
        ASPOSECPP_SHARED_API int get_Year() const;
        
        /// Returns the ordinal number of the month in the year represented by the current object.
        ASPOSECPP_SHARED_API int get_Month() const;

        /// Returns the ordinal number of the day in the month represented by the current object.
        ASPOSECPP_SHARED_API int get_Day() const;

        /// Returns the hour component of the date and time value represented by the current object.
        ASPOSECPP_SHARED_API int get_Hour() const;
        
        /// Returns the minute component of the date and time value represented by the current object.
        ASPOSECPP_SHARED_API int get_Minute() const;

        /// Returns the second component of the date and time value represented by the current object.
        ASPOSECPP_SHARED_API int get_Second() const;

        /// Returns the millisecond component of the date and time value represented by the current object.
        ASPOSECPP_SHARED_API int get_Millisecond() const;

        /// Returns a number of 100-nanosecond intervals passed since 0:00:00 UTC, January 1, 0001, in the Gregorian calendar until the date and time represented by the current object.
        ASPOSECPP_SHARED_API int64_t get_Ticks() const;

        /// Returns an instance of DateTime class that represents the current time as local time.
        static ASPOSECPP_SHARED_API DateTime get_Now();

        /// Returns an instance of DateTime class that represents the current time as UTC.
        static ASPOSECPP_SHARED_API DateTime get_UtcNow();

        /// Returns an instance of DateTime class that represents the current date with each component of time portion of the value represented by the object set to 0.
        static ASPOSECPP_SHARED_API DateTime get_Today();

        // methods
        /// Returns a new instance of DateTime class that represents a date and time value that results from addition of the specified time span to the date and time value represented by the current object.
        /// @param tm The time interval to add
        /// @returns A new instance of DateTime class that represents a date and time value that results from addition of @p tm time span to the date and time value represented by the current object
        ASPOSECPP_SHARED_API DateTime Add(TimeSpan tm) const;

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
        ASPOSECPP_SHARED_API DateTime AddTicks(uint64_t value) const;

        /// Returns a new instance of the DateTime class representing the date and time value which is the result of subtraction of the specified time span from the value represented by the current object.
        /// @param duration A time interval to subtract
        /// @returns A new instance of the DateTime class representing the date and time value which is the result of subtraction of @p duration from the value represented by the current object.
        ASPOSECPP_SHARED_API DateTime Subtract(TimeSpan duration) const;

        /// Returns an instance of TimeSpan class representing the time interval between the date and time values represented by the current and the specified objects.
        /// @param value An instance of DateTime class that marks one end of the interval to be calculated
        /// @returns An instance of TimeSpan class representing the time interval between the date and time values represented by the current object and @p value.
        ASPOSECPP_SHARED_API TimeSpan Subtract(DateTime value) const;

        /// Returns a new instance of DateTime class that represents the date and time value represented by the current object as local time.
        ASPOSECPP_SHARED_API DateTime ToLocalTime() const;

        /// Returns a new instance of DateTime class that represents the date and time value represented by the current object as UTC.
        ASPOSECPP_SHARED_API DateTime ToUniversalTime() const;

        /// Returns a value that represents the date and time value represented by the current object as Unix time.
        ASPOSECPP_SHARED_API time_t ToUnixTime() const;

        /// Returns a value that represents the date and time value represented by the current object as File time.
        ASPOSECPP_SHARED_API int64_t ToFileTime() const;

        /// Compares two values represented by the specified instances of DateTime class and returns the value indicating values' relative positions on the time line.
        /// @param t1 The first comparand
        /// @param t2 The second comparand
        /// @returns A value that is less than 0 if @p t1 is earlier than @p t2; 0 if @p t1 is the same as @p t2; a value that is greater than 0 if @p t1 is later than @p t2 
        static ASPOSECPP_SHARED_API int Compare(DateTime t1, DateTime t2);

        /// Compares two date and time values represented by the current object and the specified instance of DateTime class and returns the value indicating values' relative positions on the time line.
        /// @param value An instance of DateTime class to compare the current object with
        /// @returns A value that is less than 0 if the current object represents a value that is earlier than that represented by @p value; 0 if values reprsented by both objects are the same; a value that is greater than 0 if the value represented by the current object is later than that represented by @p value
        ASPOSECPP_SHARED_API int CompareTo(DateTime value) const;

        /// Determines if the specified instances of DateTime class represent the same date and time value
        /// @param t1 The first comparand
        /// @param t2 The second comparand
        /// @returns True if both @p t1 and @p t2 represent the same value, otherwise - false
        static ASPOSECPP_SHARED_API bool Equals(DateTime t1, DateTime t2);

        /// Determines if the specified instances of DateTime class represent the same date and time value
        /// @param t1 The first comparand
        /// @param t2 The second comparand
        /// @returns True if both @p t1 and @p t2 represent the same value, otherwise - false
        static ASPOSECPP_SHARED_API bool Equals(const DateTime& t1, const DateTime& t2);

        /// Determines if the specified instance of DateTime class represent the same date and time value as the current object
        /// @param t1 The instance of DateTime class to compare current object with
        /// @returns True if both @p t1 and current object represent the same value, otherwise - false
        ASPOSECPP_SHARED_API bool Equals(DateTime t1);

        /// Determines if the specified instance of DateTime class represent the same date and time value as the current object
        /// @param t1 The instance of DateTime class to compare current object with
        /// @returns True if both @p t1 and current object represent the same value, otherwise - false
        ASPOSECPP_SHARED_API bool Equals(const DateTime& t1) const;

        /// Returns a hash code for the current object.
        ASPOSECPP_SHARED_API int GetHashCode() const;

        /// Serializes the current object.
        /// @returns An unsigned 64-bit integer value representing the current object
        ASPOSECPP_SHARED_API uint64_t ToBinary() const;

        /// Converts the date and time value represented by the current object to File time UTC.
        /// @returns The File time value equivalent to the date and time value represented by the current object 
        ASPOSECPP_SHARED_API uint64_t ToFileTimeUtc() const;

        /// Deserializes the date time value from the specified unsigned 64-bit integer and sets the new instance of DateTime class to that value.
        /// @param value The 64-bit intger to deserialize the date and time value from
        /// @returns A new instance of DateTime class representing the date and time value deserialized from the specifed unsigned 64-bit integer value
        static ASPOSECPP_SHARED_API DateTime FromBinary(uint64_t value);

        /// Converts the specified File time to an instance of DateTime class representing the same date and time value as UTC time.
        /// @param fileTime File time to convert
        /// @returns A new instance of DateTime class representing the same date and time as @p fileTime
        static ASPOSECPP_SHARED_API DateTime FromFileTimeUtc(uint64_t fileTime);

        /// Returns an instance of DateTime class representing the date and time value equivalent to the specified OLE Automation Date.
        /// @param date OLE Automation Date to convert to DateTime object
        /// @returns A new instance of DateTime class representing the same date and time as @p date
        static ASPOSECPP_SHARED_API DateTime FromOADate(double date);

        /// Returns the date and time value represented by the current object as OLE Automation Date.
        ASPOSECPP_SHARED_API double ToOADate() const;

        /// Returns the string representation of the date and time value represented by the current object using the formatting conventions defnied by the current culture.
        /// @returns The string representation of the value represented by the current object
        ASPOSECPP_SHARED_API String ToString() const;

        /// Returns a string representation of the date and time value represented by the current object using the specified format and formatting conventions defined by the current culture.
        /// @param format A format string
        /// @returns The string representation of the value represented by the current object formatted according to format defined by @p format and the current culture.
        ASPOSECPP_SHARED_API String ToString(const String& format) const;

        /// Returns a string representation of the date and time value represented by the current object using the specified format information.
        /// @param formatProvider An object representing the format information
        /// @returns The string representation of the value represented by the current object formatted according to format information provided by @p formatProvider.
        ASPOSECPP_SHARED_API String ToString(const SharedPtr<IFormatProvider>& formatProvider) const;

        /// Returns a string representation of the date and time value represented by the current object using the specified format information.
        /// @param format A format string
        /// @param formatProvider An object representing the format information
        /// @returns The string representation of the value represented by the current object formatted according to format information provided by @p formatProvider and format string @p format.
        ASPOSECPP_SHARED_API String ToString(const String& format, const SharedPtr<IFormatProvider>& formatProvider) const;

        /// Returns a string that contains the short date string representation of the current object.
        ASPOSECPP_SHARED_API String ToShortDateString() const;

        /// Returns a string that contains the long date string representation of the current object.
        ASPOSECPP_SHARED_API String ToLongDateString() const;

        /// Returns a string that contains the short time string representation of the current object.
        ASPOSECPP_SHARED_API String ToShortTimeString() const;

        /// Returns a string that contains the long time string representation of the current object.
        ASPOSECPP_SHARED_API String ToLongTimeString() const;

        /// NOT IMPLEMENTED
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API System::ArrayPtr<System::String> GetDateTimeFormats();
        /// NOT IMPLEMENTED
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API System::ArrayPtr<System::String> GetDateTimeFormats(char_t format);
        /// NOT IMPLEMENTED
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API System::ArrayPtr<System::String> GetDateTimeFormats(const SharedPtr<IFormatProvider>& formatProvider);

        /// Converts the specified string representation of a date and time value to the equivalent DateTime object using the specified 
        /// format and culture-specific format information. The format of the string representation must match the specified 
        /// format exactly. Throws an exception if the conversion fails.
        /// @param strTime The string representation of a date and time value to convert
        /// @param format The string format
        /// @param formatProvider The IFormatProvider object that provides culture-specific format information
        /// @returns A new instance of DateTime class that represents the date and time value equivalent to that represented by the specified string
        static ASPOSECPP_SHARED_API DateTime ParseExact(const String& strTime, const String& format, const SharedPtr<IFormatProvider>& formatProvider);
        /// Converts the specified string representation of a date and time value to the equivalent DateTime object using the specified 
        /// format, culture-specific format information and style. The format of the string representation must match the specified 
        /// format exactly. Throws an exception if the conversion fails.
        /// @param s The string representation of a date and time value to convert
        /// @param format The string format
        /// @param provider The IFormatProvider object that provides culture-specific format information
        /// @param style A bitwise combination of the enumeration values that provides additional information about @p s, about style elements that may be present in @p s, or about the conversion from @p s to a DateTime object
        /// @returns A new instance of DateTime class that represents the date and time value equivalent to that represented by the specified string
        static ASPOSECPP_SHARED_API DateTime ParseExact(const String& s, const String& format, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles style);
        /// Converts the specified string representation of a date and time value to the equivalent DateTime object using the specified 
        /// formats, culture-specific format information and style. The format of the string representation must match one or more
        /// of the specified formats exactly. Throws an exception if the conversion fails.
        /// @param s The string representation of a date and time value to convert
        /// @param formats The array of string formats
        /// @param provider The IFormatProvider object that provides culture-specific format information
        /// @param style A bitwise combination of the enumeration values that provides additional information about @p s, about style elements that may be present in @p s, or about the conversion from @p s to a DateTime object
        /// @returns A new instance of DateTime class that represents the date and time value equivalent to that represented by the specified string
        static ASPOSECPP_SHARED_API DateTime ParseExact(const String& s, const System::ArrayPtr<System::String>& formats, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles style);

        /// Converts the specified string representation of a date and time value to the equivalent DateTime object.
        /// @param strTime The string representation of a date and time value to convert
        /// @param out The output argument that, if the conversion succeeds, contains the result of conversion
        /// @returns True if conversion succeeds, otherwise - false
        static ASPOSECPP_SHARED_API bool TryParse(const String& strTime, DateTime& out);
        /// Converts the specified string representation of a date and time value to the equivalent DateTime object using the specified 
        /// culture-specific format information and style.
        /// @param strTime The string representation of a date and time value to convert
        /// @param fp The IFormatProvider object that provides culture-specific format information
        /// @param style A bitwise combination of the enumeration values that provides additional information about @p strTime, about style elements that may be present in @p strTime, or about the conversion from @p strTime to a DateTime object
        /// @param out The output argument that, if the conversion succeeds, contains the result of conversion
        /// @returns True if conversion succeeds, otherwise - false
        static ASPOSECPP_SHARED_API bool TryParse(const String& strTime, const SharedPtr<IFormatProvider>& fp, Globalization::DateTimeStyles style, DateTime& out);

        /// Converts the specified string representation of a date and time value to the equivalent DateTime object using the specified 
        /// format, culture-specific format information and style. The format of the string representation must match the specified 
        /// format exactly.
        /// @param strTime The string representation of a date and time value to convert
        /// @param format The string format
        /// @param provider The IFormatProvider object that provides culture-specific format information
        /// @param style A bitwise combination of the enumeration values that provides additional information about @p strTime, about style elements that may be present in @p strTime, or about the conversion from @p strTime to a DateTime object
        /// @param out The output argument that, if the conversion succeeds, contains the result of conversion
        /// @returns True if conversion succeeds, otherwise - false
        static ASPOSECPP_SHARED_API bool TryParseExact(const String& strTime, const String& format, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles style, DateTime& out);
        /// Converts the specified string representation of a date and time value to the equivalent DateTime object using the specified 
        /// formats, culture-specific format information and style. The format of the string representation must match one or more of the specified 
        /// formats exactly.
        /// @param s The string representation of a date and time value to convert
        /// @param formats The array of string formats
        /// @param provider The IFormatProvider object that provides culture-specific format information
        /// @param style A bitwise combination of the enumeration values that provides additional information about @p s, about style elements that may be present in @p s, or about the conversion from @p s to a DateTime object
        /// @param result The output argument that, if the conversion succeeds, contains the result of conversion
        /// @returns True if conversion succeeds, otherwise - false
        static ASPOSECPP_SHARED_API bool TryParseExact(const String& s, const System::ArrayPtr<System::String>& formats, const SharedPtr<IFormatProvider>& provider, Globalization::DateTimeStyles style, DateTime& result);

        /// Converts the specified string representation of a date and time value to the equivalent DateTime object
        /// @param strTime The string representation of a date and time value to convert
        /// @returns A new instance of DateTime class that represents the date and time value equivalent to that represented by the specified string
        static ASPOSECPP_SHARED_API DateTime Parse(const String& strTime);
        /// Converts the specified string representation of a date and time value to the equivalent DateTime object using culture-specific format information
        /// @param strTime The string representation of a date and time value to convert
        /// @param formatProvider The IFormatProvider object that provides culture-specific format information
        /// @returns A new instance of DateTime class that represents the date and time value equivalent to that represented by the specified string
        static ASPOSECPP_SHARED_API DateTime Parse(const String& strTime, const SharedPtr<IFormatProvider>& formatProvider);
        /// Converts the specified string representation of a date and time value to the equivalent DateTime object using culture-specific format information
        /// @param strTime The string representation of a date and time value to convert
        /// @param formatProvider The IFormatProvider object that provides culture-specific format information
        /// @param styles A bitwise combination of the enumeration values that provides additional information about @p strTime, about style elements that may be present in @p strTime, or about the conversion from @p strTime to a DateTime object
        /// @returns A new instance of DateTime class that represents the date and time value equivalent to that represented by the specified string
        static ASPOSECPP_SHARED_API DateTime Parse(const String& strTime, const SharedPtr<IFormatProvider>& formatProvider, System::Globalization::DateTimeStyles styles);
        /// Converts the specified string representation of a date and time value to the equivalent DateTime object using culture-specific format information
        /// @param strTime The string representation of a date and time value to convert
        /// @param styles A bitwise combination of the enumeration values that provides additional information about @p strTime, about style elements that may be present in @p strTime, or about the conversion from @p strTime to a DateTime object
        /// @returns A new instance of DateTime class that represents the date and time value equivalent to that represented by the specified string
        static ASPOSECPP_SHARED_API DateTime Parse(const String& strTime, System::Globalization::DateTimeStyles styles);

        /// Converts the specified Unix time value to an instance of DateTime class.
        /// @param value Unix time value to convert
        /// @returns A new instance of DateTime class representing the same date and time as @p value
        static ASPOSECPP_SHARED_API DateTime FromUnixTime(time_t value);

        /// Converts the specified File time to an instance of DateTime class representing the same date and time value as local time.
        /// @param value File time to convert
        /// @returns A new instance of DateTime class representing the same date and time as @p fileTime
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
        bool ASPOSECPP_SHARED_API IsDaylightSavingTime();

        /// Constructs a new DateTime object that represents the same number of ticks as the specified DateTime object
        /// and represents local time, UTC time or neither as specified by the argument @p kind.
        /// @param value The DateTime object to copy the number of ticks from
        /// @param kind Specifies if the new object should represent local time, UTC time or neither.
        /// @returns A new DateTime object that represents the same number of ticks as @p value and DateTimeKind value specified by @p kind.
        static ASPOSECPP_SHARED_API DateTime SpecifyKind(DateTime value, DateTimeKind kind);

        // operators
        /// Determines if the current object and the specified DateTime object represent the same date and time value.
        /// @param other The DateTime object to compare the current object with
        /// @returns True if the current object and the specified object represent the same date and time value, otherwise - false
        ASPOSECPP_SHARED_API bool operator==(const DateTime& other) const;
        
        /// Determines if the current object and the specified DateTime object represent distinct date and time values.
        /// @param other The DateTime object to compare the current object with
        /// @returns True if the current object and the specified object represent distinct date and time values, otherwise - false
        ASPOSECPP_SHARED_API bool operator!=(const DateTime& other) const;
        
        /// Determines if the current object represents the date and time value that is earlier than the value represented by the specified DateTime object.
        /// @param other The DateTime object to compare the current object with
        /// @returns True if the date and time value represented by the current object is earlier than the value represented by @p other, otherwise - false
        ASPOSECPP_SHARED_API bool operator<(const DateTime& other) const;
        
        /// Determines if the current object represents the date and time value that is earlier than or the same as the value represented by the specified DateTime object.
        /// @param other The DateTime object to compare the current object with
        /// @returns True if the date and time value represented by the current object is earlier than or the same as the value represented by @p other, otherwise - false
        ASPOSECPP_SHARED_API bool operator<=(const DateTime& other) const;
        
        /// Determines if the current object represents the date and time value that is later than the value represented by the specified DateTime object.
        /// @param other The DateTime object to compare the current object with
        /// @returns True if the date and time value represented by the current object is later than the value represented by @p other, otherwise - false
        ASPOSECPP_SHARED_API bool operator>(const DateTime& other) const;

        /// Determines if the current object represents the date and time value that is later than or the same as the value represented by the specified DateTime object.
        /// @param other The DateTime object to compare the current object with
        /// @returns True if the date and time value represented by the current object is later than or the same as the value represented by @p other, otherwise - false
        ASPOSECPP_SHARED_API bool operator>=(const DateTime& other) const;

        /// Returns a new instance of DateTime class that represents the date and time value that is the sum of the value represented by the current object and the specified time span.
        /// @param value The time span to add to the value represented by the current object
        /// @returns A new instance of DateTime class that represents the date and time value that is the sum of the value represented by the current object and @p value.
        ASPOSECPP_SHARED_API DateTime operator+(const TimeSpan& value) const;
        
        /// Returns a new instance of the DateTime class representing the date and time value which is the result of subtraction of the specified time span from the value represented by the current object.
        /// @param value A time interval to subtract
        /// @returns A new instance of the DateTime class representing the date and time value which is the result of subtraction of @p value from the value represented by the current object.
        ASPOSECPP_SHARED_API DateTime operator-(const TimeSpan& value) const;
        
        /// Sets the current object to the date and time value that is the sum of the value represented by the current object and the specified time span.
        /// @param value The time span to add
        /// @returns A reference to the self
        ASPOSECPP_SHARED_API DateTime& operator+=(const TimeSpan& value);
        
        /// Sets the current object to the date and time value that is the result of subtraction of the specified time span from the date and time value represented by the current object.
        /// @param value The time span to subtract
        /// @returns A reference to the self        
        ASPOSECPP_SHARED_API DateTime& operator-=(const TimeSpan& value);

        /// Returns an instance of TimeSpan class that represents the time interval between the date and time values represented by the current and the specified objects.
        /// @param value An instance of DateTime class that marks one end of the interval to be calculated
        /// @returns An instance of TimeSpan class representing the time interval between the date and time values represented by the current object and @p value.
        ASPOSECPP_SHARED_API TimeSpan operator-(const DateTime& value) const;

        // !!!IMPORTANT!!! DateTime::native is not actual any longer as DateTime can now refer to dates not supported by boost::posix_time (year < 1400).
        // Do not uncomment unless you know exactly what you do and no normal workaround is possible.
        // boost::posix_time::ptime native() const { return m_ptime; }

        /// Always returns false.
        bool IsNull() const { return false; }

        /// Returns a TypeInfo object that contains information about this class.
        static const TypeInfo& Type()
        {
            return *static_holder<ThisTypeInfo>::GetValue();
        }

        /// Always returns false.
        ASPOSECPP_SHARED_API bool operator==(std::nullptr_t) const;
        /// Always returns true.
        ASPOSECPP_SHARED_API bool operator!=(std::nullptr_t) const;
        /// Always returns false.
        ASPOSECPP_SHARED_API bool operator<(std::nullptr_t) const;
        /// Always returns false.
        ASPOSECPP_SHARED_API bool operator<=(std::nullptr_t) const;
        /// Always returns false.
        ASPOSECPP_SHARED_API bool operator>(std::nullptr_t) const;
        /// Always returns false.
        ASPOSECPP_SHARED_API bool operator>=(std::nullptr_t) const;
    private:
        /// Represents a pointer to TypeInfo object that contains information about this class.
        struct ThisTypeInfo : TypeInfoPtr
        {
            /// Constructs an instance of ThisTypeInfo class.
            ThisTypeInfo()
            {
                ptr = std::make_unique<TypeInfo>(u"System::DateTime");
            }
        };

        /// Offset between boost time units zero and filetime units zero for conversion purposes.
        /// Is equal to days_to_1601 * hr * min * sec * millisec * ticks_per_millisec.
        const static uint64_t m_file_time_offset = 584388LL * 24 * 60 * 60 * 1000 * 10000;

        /// An array n-th element of which represents the number of days from the beginning of the year till the last day of the n-th month in a non-leap year. 
        const static int DaysToMonth365[];
        /// An array n-th element of which represents the number of days from the beginning of the year till the last day of the n-th month in a leap year.
        const static int DaysToMonth366[];


        // Number of 100ns ticks per time unit
        /// The number of ticks in a millisecond.
        const static uint64_t TicksPerMillisecond = 10000;
        /// The number of ticks in a second.
        const static uint64_t TicksPerSecond = TicksPerMillisecond * 1000;
        /// The number of ticks in a minute.
        const static uint64_t TicksPerMinute = TicksPerSecond * 60;
        /// The number of ticks in a hour.
        const static uint64_t TicksPerHour = TicksPerMinute * 60;
        /// The number of ticks in a day.
        const static uint64_t TicksPerDay = TicksPerHour * 24;

        // Number of milliseconds per time unit
        /// The number of milliseconds in a second.
        const static int MillisPerSecond = 1000;
        /// The number of milliseconds in a minute.
        const static int MillisPerMinute = MillisPerSecond * 60;
        /// The number of milliseconds in a hour.
        const static int MillisPerHour = MillisPerMinute * 60;
        /// The number of milliseconds in a day.
        const static int MillisPerDay = MillisPerHour * 24;

        /// The number of days in a non-leap year.
        const static int DaysPerYear = 365;
        /// The number of days in 4 years.
        const static int DaysPer4Years = DaysPerYear * 4 + 1;       // 1461
        /// The umber of days in 100 years
        const static int DaysPer100Years = DaysPer4Years * 25 - 1;  // 36524
        /// The number of days in 400 years
        const static int DaysPer400Years = DaysPer100Years * 4 + 1; // 146097

        /// The number of days from 1/1/0001 to 12/31/1600
        const static int DaysTo1601 = DaysPer400Years * 4;          // 584388
        /// The number of days from 1/1/0001 to 12/30/1899
        const static int DaysTo1899 = DaysPer400Years * 4 + DaysPer100Years * 3 - 367;
        /// The number of days from 1/1/0001 to 12/31/1969
        const static int DaysTo1970 = DaysPer400Years * 4 + DaysPer100Years * 3 + DaysPer4Years * 17 + DaysPerYear; // 719,162
        /// The number of days from 1/1/0001 to 12/31/9999
        const static int DaysTo10000 = DaysPer400Years * 25 - 366;  // 3652059

        /// The minimal number of ticks that an instance of DateTime class can represent.
        const static uint64_t MinTicks = 0;
        /// The number of 100-nanosecond in the time interval between the minimal possible and maximal possibel DateTime value. 
        const static uint64_t MaxTicks = DaysTo10000 * TicksPerDay - 1;
        /// The number of milliseconds in the time interval between the minimal possible and maximal possibel DateTime value. 
        const static uint64_t MaxMillis = (uint64_t)DaysTo10000 * MillisPerDay;

        /// Offset between boost time units zero and filetime units zero for conversion purposes.
        const static uint64_t FileTimeOffset = DaysTo1601 * TicksPerDay;
        /// Offset between boost time units zero and double datetime units zero for conversion purposes.
        const static uint64_t DoubleDateOffset = DaysTo1899 * TicksPerDay;

        /// The minimal number of ticks that can be represented with OLE Automation Date format.
        const static uint64_t OADateMinAsTicks = (DaysPer100Years - DaysPerYear) * TicksPerDay;
        // All OA dates must be greater than (not >=) OADateMinAsDouble
        /// The minimal date and time value that can be represented with OLE Automation Date format as double-precision floating point value.
        const static double OADateMinAsDouble;
        // All OA dates must be less than (not <=) OADateMaxAsDouble
        /// The maximun date and time value that can be represented with OLE Automation Date format as double-precision floating point value.
        const static double OADateMaxAsDouble;

        /// Storage for the date and time value represented by the current object.
        Detail::PosixTimeHolder m_ptime;
        /// Indicates whether the date and time value represented by the current object is a local time, UTC time or neither.
        DateTimeKind m_kind;

        /// Whether the current DateTime object represents timepoint between years 1 a. d. and 1399 a. d.
        /// Boost doesn't support this range directly, so we map years 2001 to 3399 to this range using this flag.
        bool m_1_to_1399;

        /// Constructs an instance that represents a date and time value specified as a particular year, month, day, and time duration.
        /// @param year The year to be represenetd by the instance being constructed
        /// @param month The month of the @p year to be represented by the instance being constructed
        /// @param day The day of the @p month to be represented by the instance being constructed
        /// @param time_duration Time of the @p day to be represented by the instance being constructed
        /// @param kind The value that indicates if the provided date and time parameters specify a local time, UTC time or neither.
        DateTime(int year, int month, int day, boost::posix_time::time_duration time_duration, DateTimeKind kind = DateTimeKind::Unspecified);

        /// Internal constructor that initializes actual data fields.
        /// @param ptime Boost time value.
        /// @param is_1_to_1399 Whether current DateTime object should map its boost time to years 1 to 1399 instead of using years directly to extend year range available in Boost.
        /// @param kind Local time, global time, etc.
        DateTime(boost::posix_time::ptime ptime, bool is_1_to_1399, DateTimeKind kind);

        /// Represents the date and time value that marks the beginning of Unix epoch.
        static const boost::posix_time::ptime s_epoch;
        /// If we're between years 1 and 1399 and we reach this time value, we should quit m_1_to_1399 mapping mode as Boost directly supports the range we are entering.
        static const boost::posix_time::ptime s_1399_upper_bound;
        /// If we're after year 1400 and we reach this time value, we should enter m_1_to_1399 mapping mode as Boost does not directly support the range we are entering.
        static const boost::posix_time::ptime s_1400_lower_bound;
        /// Number of datetime units we should shift our Boost representation by when switching between 1..1399 and 1400+ year ranges.
        static const boost::posix_time::time_duration s_lowerRangeShift;
        /// Year 1400
        static const int s_year_1400;
        /// Number of years we should shift our representation by when switching between 1..1399 and 1400+ year ranges.
        static const int s_year_1400_shift_years;
        /// Number of ticks we should shift our representation by when switching between 1..1399 and 1400+ year ranges.
        static const int64_t s_year_1400_shift_ticks;
        /// Converts the date and time value represented as a double-precision floating 
        /// point value to the number of 100-nanoseconds intervals passed since January the 1st, 0001 00:00:00.000
        static uint64_t DoubleDateToTicks(double value);
        /// Converts the number of 100-nanoseconds intervals passed since January the 1st, 0001 00:00:00.000 to 
        /// OLE Automation Date value.
        static double TicksToOADate(uint64_t value);

        /// Ensures setting correct value to m_1_to_1399 when initializing DateTime object.
        /// @param year Year used to construct DateTime object.
        void CheckInBounds(int &year);
        /// Flips m_1_to_1399 flag if neccessary when DateTime object is being initialized or altered.
        void CheckInBounds();
    };
    
    /// Always returns true.
    ASPOSECPP_SHARED_API bool operator!=(std::nullptr_t, DateTime &);
    /// Always returns false.
    ASPOSECPP_SHARED_API bool operator<(std::nullptr_t, DateTime &);
    /// Always returns false.
    ASPOSECPP_SHARED_API bool operator<=(std::nullptr_t, DateTime &);
    /// Always returns false.
    ASPOSECPP_SHARED_API bool operator>(std::nullptr_t, DateTime &);
    /// Always returns false.
    ASPOSECPP_SHARED_API bool operator>=(std::nullptr_t, DateTime &);

    /// IsBoxable<T> specialization for DateTime.
    template<> struct IsBoxable<DateTime> : std::true_type {};

} // namespace System

/// Specialization for System::DayOfWeek enum.
template<>
struct EnumMetaInfo<System::DayOfWeek>
{
    /// Returns an array of pairs that map System::DayOfWeek enum values to corresponding string names.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::DayOfWeek, const char_t*>, 7>& values();
};


namespace std
{
    /// Specialization for System::DateTime.
    template <>
    class hash<System::DateTime>
    {
    public:
        /// Alias for the type parameter of this specialization.
        typedef System::DateTime argument_type;
        /// Alias for a type of the hash value.
        typedef std::size_t result_type;
        /// Generates hash for the specified value.
        /// @param dateTime An object for which to generate a hash
        /// @returns A hash for @p dateTime
        result_type operator () (const argument_type &dateTime) const
        {
            return (result_type)dateTime.GetHashCode();
        }
    };
}

#endif // _DateTime_h_
