#ifndef _aspose_system_timespan_h_
#define _aspose_system_timespan_h_

#ifdef USE_NANOSECONDS
    #define BOOST_DATE_TIME_POSIX_TIME_STD_CONFIG
#endif

#include "system/string.h"
#include "exceptions.h"
#include "fwd.h"

#include <limits>
#include <memory>


#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/date_time/posix_time/posix_time.hpp>
#endif


namespace boost { namespace posix_time { 
    ASPOSECPP_3RD_PARTY_CLASS(time_duration);
} }


namespace System {

namespace Detail {
    ASPOSECPP_3RD_PARTY_TYPE_HOLDER(boost::posix_time::time_duration, time_duration, sizeof(std::int64_t), std::int64_t, TimeDurationHolder);
}

enum class TimeSpanStyles {
    None = 0x00000000,
    AssumeNegative = 0x00000001
};

class TimeSpan
{
public:
    friend class DateTime;

    static const int ASPOSECPP_SHARED_API SEC_PER_DAY = 24 * 60 * 60;
    static const int ASPOSECPP_SHARED_API SEC_PER_H = 24 * 60;
    static const int ASPOSECPP_SHARED_API SEC_PER_M = 60;

    static const int64_t ASPOSECPP_SHARED_API s_ticks_per_millisecond = 10000;

    static const int ASPOSECPP_SHARED_API s_millis_per_second = 1000;
    static const int ASPOSECPP_SHARED_API s_millis_per_minute = s_millis_per_second * 60; //     60,000
    static const int ASPOSECPP_SHARED_API s_millis_per_hour = s_millis_per_minute * 60;   //  3,600,000
    static const int ASPOSECPP_SHARED_API s_millis_per_day = s_millis_per_hour * 24;      // 86,400,000

    //.NET offset till 1400.01.01 00:00:00
    const static int64_t ASPOSECPP_SHARED_API s_dotnetOffset = 441481536000000000ULL;


    static const TimeSpan ASPOSECPP_SHARED_API Zero;
    static const TimeSpan ASPOSECPP_SHARED_API MaxValue;
    static const TimeSpan ASPOSECPP_SHARED_API MinValue;


    // dotnetTicks - .NET ticks as 100ns since 0001.01.01-00:00:00
    TimeSpan(int64_t dotnetTicks);
    TimeSpan(int hours, int minutes, int seconds);
    TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds = 0);
    TimeSpan();
    TimeSpan(const TimeSpan &span);

    ~TimeSpan();

    TimeSpan& operator = (const TimeSpan &ts);

    static TimeSpan Interval(double value, int scale);
    static TimeSpan Parse(const String& str);

    static TimeSpan FromTicks(int64_t ticks)
    {
        return TimeSpan(ticks);
    }

    static TimeSpan FromMilliseconds(double value)
    {
        return Interval(value, 1);
    }

    static TimeSpan FromSeconds(double value)
    {
        return Interval(value, s_millis_per_second);
    }

    static TimeSpan FromMinutes(double value)
    {
        return Interval(value, s_millis_per_minute);
    }

    static TimeSpan FromHours(double value)
    {
        return Interval(value, s_millis_per_hour);
    }

    static TimeSpan FromDays(double value)
    {
        return Interval(value, s_millis_per_day);
    }

    static int Compare(const TimeSpan& t1, const TimeSpan& t2)
    {
        return t1.CompareTo(t2);
    }

    // properties

    int get_Days() const;
    int get_Hours() const;
    int get_Minutes() const;
    int get_Seconds() const;
    int get_Milliseconds() const;
    int64_t get_Ticks() const;

    double get_TotalDays() const
    {
        return get_TotalHours() / 24;
    }

    double get_TotalHours() const
    {
        return get_TotalMinutes() / 60;
    }

    double get_TotalMinutes() const
    {
        return get_TotalSeconds() / 60;
    }

    double get_TotalSeconds() const
    {
        return get_TotalMilliseconds() / 1000;
    }

    double get_TotalMilliseconds() const;

    // methods

    TimeSpan Add(TimeSpan value) const;
    TimeSpan Subtract(TimeSpan value) const;
    TimeSpan Negate();
    String ToString() const;
    double ToDouble() const;
    bool Equals(const TimeSpan& value) const;
    int CompareTo(const TimeSpan& value) const;
    int GetHashCode() const;

    // operators

    TimeSpan operator+(const TimeSpan& value) const
    {
        return Add(value);
    }
    TimeSpan& operator+=(const TimeSpan& value);

    TimeSpan operator-(const TimeSpan& value) const
    {
        return Subtract(value);
    }
    TimeSpan& operator-=(const TimeSpan& value);

    bool operator==(const TimeSpan& value) const;
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

    bool operator!=(const TimeSpan& value) const;
    bool operator<(const TimeSpan& value) const;
    bool operator<=(const TimeSpan& value) const;
    bool operator>(const TimeSpan& value) const;
    bool operator>=(const TimeSpan& value) const;
    TimeSpan operator-() const;

    static const TypeInfo& Type()
    {
        return *static_holder<ThisTypeInfo>::GetValue();
    }

    explicit TimeSpan(boost::posix_time::time_duration td);

private:
    Detail::TimeDurationHolder m_span;

    //static const TimeSpan ASPOSECPP_SHARED_API Null;

    struct ThisTypeInfo : TypeInfoPtr
    {
        ThisTypeInfo()
        {
            ptr = std::make_unique<TypeInfo>(L"System::TimeSpan");
        }
    };
}; // class TimeSpan

} // namespace System

#endif // _aspose_system_timespan_h_
