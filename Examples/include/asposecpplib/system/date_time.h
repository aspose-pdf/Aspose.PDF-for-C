#ifndef _aspose_system_date_time_h_
#define _aspose_system_date_time_h_

#include <system/globalization/date_time_styles.h>
#include <system/timespan.h>

#include <array>
#include <memory>
#include <system/enum.h>


#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/date_time/posix_time/posix_time.hpp>
#endif


namespace boost { namespace posix_time {
    ASPOSECPP_3RD_PARTY_CLASS(ptime);
    ASPOSECPP_3RD_PARTY_CLASS(time_duration);
} }


namespace System { namespace Globalization { class Calendar; } }

namespace System
{
    namespace Detail {
        ASPOSECPP_3RD_PARTY_TYPE_HOLDER(boost::posix_time::ptime, ptime, sizeof(std::int64_t), std::int64_t, PosixTimeHolder);
    }


    enum class DateTimeKind
    {
        Unspecified,
        Utc,
        Local
    };

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
    inline int operator-(DayOfWeek a, DayOfWeek b)
    {
        return static_cast<std::underlying_type<DayOfWeek>::type>(a) - static_cast<std::underlying_type<DayOfWeek>::type>(b);
    }


    namespace bpt = boost::posix_time;

    class DateTime
    {
    public:

        DateTime();
        DateTime(const DateTime &dt);
        ~DateTime();

        DateTime& operator = (const DateTime &dt);

        // dotnetTicks - .NET ticks as 100ns since 0001.01.01-00:00:00
        DateTime(int64_t dotnetTicks, DateTimeKind kind = DateTimeKind::Unspecified);
        DateTime(int year, int month, int day, DateTimeKind kind = DateTimeKind::Unspecified);

        DateTime(int year, int month, int day, int hour, int minute, int second, DateTimeKind kind = DateTimeKind::Unspecified);
        DateTime(int year, int month, int day, int hour, int minute, int second, SharedPtr<Globalization::Calendar> calendar);

        DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, DateTimeKind kind = DateTimeKind::Unspecified);

        // fields
        static const DateTime ASPOSECPP_SHARED_API MinValue;
        static const DateTime ASPOSECPP_SHARED_API MaxValue;

        // properties

        DateTime get_Date() const;
        DayOfWeek get_DayOfWeek() const;
        DateTimeKind get_Kind() const;
        TimeSpan get_TimeOfDay() const;
        int get_DayOfYear() const;
        int get_Year() const;
        int get_Month() const;
        int get_Day() const;
        int get_Hour() const;
        int get_Minute() const;
        int get_Second() const;
        int get_Millisecond() const;

        // return a number of 100-nanosecond ticks
        uint64_t get_Ticks() const;

        static DateTime get_Now();
        static DateTime get_UtcNow();
        static DateTime get_Today();

        // methods

        DateTime Add(TimeSpan tm) const;
        DateTime AddYears(int value) const;
        DateTime AddMonths(int value) const;
        DateTime AddDays(double value) const;
        DateTime AddHours(double value) const;
        DateTime AddMinutes(double value) const;
        DateTime AddSeconds(double value) const;
        DateTime AddMilliseconds(double value) const;

        // value - a number of 100-nanosecond ticks
        DateTime AddTicks(uint64_t value) const;

        DateTime Subtract(TimeSpan duration) const;
        TimeSpan Subtract(DateTime value) const;
        DateTime ToLocalTime() const;
        DateTime ToUniversalTime() const;
        time_t ToUnixTime() const;
        int64_t ToFileTime() const;

        // Return <0 if t1 is earlier than t2.
        // Return >0 if t1 is later than t2.
        static int Compare(DateTime t1, DateTime t2);

        // Return <0 if this instance is earlier than value.
        // Return >0 if this instance is later then value.
        int CompareTo(DateTime value) const;

        static bool Equals(DateTime t1, DateTime t2);
        static bool Equals(const DateTime& t1, const DateTime& t2);

        bool Equals(DateTime t1);
        bool Equals(const DateTime& t1) const;

        int GetHashCode() const;

        uint64_t ToBinary() const;
        uint64_t ToFileTimeUtc() const;

        static DateTime FromBinary(uint64_t value);
        static DateTime FromFileTimeUtc(uint64_t fileTime);
        static DateTime FromOADate(double date);

        double ToOADate() const;


        String ToString() const;
        String ToString(const String& format) const;
        String ToString(SharedPtr<IFormatProvider> formatProvider) const;
        String ToString(const String& format, SharedPtr<IFormatProvider> formatProvider) const;

        String ToShortDateString() const;
        String ToLongDateString() const;
        String ToShortTimeString() const;
        String ToLongTimeString() const;

        System::ArrayPtr<System::String> GetDateTimeFormats();
        System::ArrayPtr<System::String> GetDateTimeFormats(char_t format);
        System::ArrayPtr<System::String> GetDateTimeFormats(SharedPtr<IFormatProvider> formatProvider);


        static DateTime ParseExact(const String& strTime, const String& format, SharedPtr<IFormatProvider> formatProvider);
        static DateTime ParseExact(const String& s, const String& format, SharedPtr<IFormatProvider> provider, Globalization::DateTimeStyles style);
        static DateTime ParseExact(const String& s, System::ArrayPtr<System::String> formats, SharedPtr<IFormatProvider> provider, Globalization::DateTimeStyles style);

        static bool TryParse(const String& strTime, DateTime& out);
        static bool TryParse(const String& strTime, SharedPtr<IFormatProvider> fp, Globalization::DateTimeStyles style, DateTime& out);

        static bool TryParseExact(const String& strTime, const String& format, SharedPtr<IFormatProvider> provider, Globalization::DateTimeStyles style, DateTime& out);
        static bool TryParseExact(const String& s, System::ArrayPtr<System::String> formats, SharedPtr<IFormatProvider> provider, Globalization::DateTimeStyles style, DateTime& result);


        static DateTime Parse(const String& strTime);
        static DateTime Parse(const String& strTime, SharedPtr<IFormatProvider> formatProvider);
        static DateTime Parse(const String& strTime, SharedPtr<IFormatProvider> formatProvider, System::Globalization::DateTimeStyles styles);

        static DateTime FromUnixTime(time_t value);
        static DateTime FromFileTime(int64_t value);

        static int DaysInMonth(int year, int month);
        static bool IsLeapYear(int year);
        bool IsDaylightSavingTime();
        static DateTime SpecifyKind(DateTime value, DateTimeKind kind);

        // operators

        bool operator==(const DateTime& other) const;
        bool operator!=(const DateTime& other) const;
        bool operator<(const DateTime& other) const;
        bool operator<=(const DateTime& other) const;
        bool operator>(const DateTime& other) const;
        bool operator>=(const DateTime& other) const;

        DateTime operator+(const TimeSpan& value) const;
        DateTime operator-(const TimeSpan& value) const;
        DateTime& operator+=(const TimeSpan& value);
        DateTime& operator-=(const TimeSpan& value);
        TimeSpan operator-(const DateTime& value) const;

        // !!!IMPORTANT!!! DateTime::native is not actual any longer as DateTime can now refer to dates not supported by boost::posix_time (year < 1400).
        // Do not uncomment unless you know exactly what you do and no normal workaround is possible.
        // boost::posix_time::ptime native() const { return m_ptime; }

        bool IsNull() const { return false; }

        static const TypeInfo& Type()
        {
            return *static_holder<ThisTypeInfo>::GetValue();
        }

        bool operator==(std::nullptr_t) const;
        bool operator!=(std::nullptr_t) const;
        bool operator<(std::nullptr_t) const;
        bool operator<=(std::nullptr_t) const;
        bool operator>(std::nullptr_t) const;
        bool operator>=(std::nullptr_t) const;
    private:
        struct ThisTypeInfo : TypeInfoPtr
        {
            ThisTypeInfo()
            {
                ptr = std::make_unique<TypeInfo>(L"System::DateTime");
            }
        };

        //days_to_1601 * hr * min * sec * millisec * ticks_per_millisec
        const static uint64_t m_file_time_offset = 584388LL * 24 * 60 * 60 * 1000 * 10000;

        const static int DaysToMonth365[];
        const static int DaysToMonth366[];


        // Number of 100ns ticks per time unit
        const static uint64_t TicksPerMillisecond = 10000;
        const static uint64_t TicksPerSecond = TicksPerMillisecond * 1000;
        const static uint64_t TicksPerMinute = TicksPerSecond * 60;
        const static uint64_t TicksPerHour = TicksPerMinute * 60;
        const static uint64_t TicksPerDay = TicksPerHour * 24;

        // Number of milliseconds per time unit
        const static int MillisPerSecond = 1000;
        const static int MillisPerMinute = MillisPerSecond * 60;
        const static int MillisPerHour = MillisPerMinute * 60;
        const static int MillisPerDay = MillisPerHour * 24;

        // Number of days in a non-leap year
        const static int DaysPerYear = 365;
        // Number of days in 4 years
        const static int DaysPer4Years = DaysPerYear * 4 + 1;       // 1461
                                                             // Number of days in 100 years
        const static int DaysPer100Years = DaysPer4Years * 25 - 1;  // 36524
                                                             // Number of days in 400 years
        const static int DaysPer400Years = DaysPer100Years * 4 + 1; // 146097

        // Number of days from 1/1/0001 to 12/31/1600
        const static int DaysTo1601 = DaysPer400Years * 4;          // 584388
                                                                     // Number of days from 1/1/0001 to 12/30/1899
        const static int DaysTo1899 = DaysPer400Years * 4 + DaysPer100Years * 3 - 367;
        // Number of days from 1/1/0001 to 12/31/1969
        const static int DaysTo1970 = DaysPer400Years * 4 + DaysPer100Years * 3 + DaysPer4Years * 17 + DaysPerYear; // 719,162
                                                                                                                      // Number of days from 1/1/0001 to 12/31/9999
        const static int DaysTo10000 = DaysPer400Years * 25 - 366;  // 3652059

        const static uint64_t MinTicks = 0;
        const static uint64_t MaxTicks = DaysTo10000 * TicksPerDay - 1;
        const static uint64_t MaxMillis = (uint64_t)DaysTo10000 * MillisPerDay;


        const static uint64_t FileTimeOffset = DaysTo1601 * TicksPerDay;
        const static uint64_t DoubleDateOffset = DaysTo1899 * TicksPerDay;


        const static uint64_t OADateMinAsTicks = (DaysPer100Years - DaysPerYear) * TicksPerDay;
        // All OA dates must be greater than (not >=) OADateMinAsDouble
        const static double OADateMinAsDouble;
        // All OA dates must be less than (not <=) OADateMaxAsDouble
        const static double OADateMaxAsDouble;


        Detail::PosixTimeHolder m_ptime;

        DateTimeKind m_kind;

        bool m_1_to_1399; //Years 1 through 1399 are supported by mapping them onto years 2001 trough 3399

        DateTime(boost::posix_time::ptime bptime, bool is_1_to_1399, DateTimeKind kind);

        static const boost::posix_time::ptime s_epoch;
        static const boost::posix_time::ptime s_1399_upper_bound;
        static const boost::posix_time::ptime s_1400_lower_bound;
        static const boost::posix_time::time_duration s_lowerRangeShift;
        static const int s_year_1400;
        static const int s_year_1400_shift_years;
        static const int64_t s_year_1400_shift_ticks;

        static uint64_t DoubleDateToTicks(double value);
        static double TicksToOADate(uint64_t value);


        String ToString(std::locale loc) const;
        String ToString(const String& format, std::locale loc) const;

        static DateTime ParseInternal(const String& strTime, std::locale loc, System::Globalization::DateTimeStyles styles);
        static DateTime ParseExactInternal(const String& strTime, const String& format, std::locale loc);

        static bool TryParseExactInternal(const String& strTime, const String& format, DateTime& out, std::locale loc);

        void CheckInBounds(int &year);
        void CheckInBounds();
    };

    bool operator!=(std::nullptr_t, DateTime &);
    bool operator<(std::nullptr_t, DateTime &);
    bool operator<=(std::nullptr_t, DateTime &);
    bool operator>(std::nullptr_t, DateTime &);
    bool operator>=(std::nullptr_t, DateTime &);

} // namespace System

template<>
struct EnumMetaInfo<System::DayOfWeek>
{
    static const std::array<std::pair<System::DayOfWeek, const wchar_t*>, 7>& values();
};


namespace std
{
    template <>
    class hash<System::DateTime>
    {
    public:
        typedef System::DateTime argument_type;
        typedef std::size_t result_type;
        result_type operator () (const argument_type &dateTime) const
        {
            return (result_type)dateTime.GetHashCode();
        }
    };
}

#endif // _DateTime_h_
