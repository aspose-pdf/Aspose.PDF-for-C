#ifndef _aspose_system_calendar_h_
#define _aspose_system_calendar_h_

#include "system/object.h"
#include "system/array.h"
#include "system/date_time.h"
#include "system/details/icu_namespace.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include "unicode/calendar.h"
#endif


ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START {
    ASPOSECPP_3RD_PARTY_CLASS(Calendar);
}


namespace System { namespace Globalization {

enum CalendarId
{
    UNINITIALIZED_VALUE = 0,
    GREGORIAN = 1,     // Gregorian (localized) calendar
    GREGORIAN_US = 2,     // Gregorian (U.S.) calendar
    JAPAN = 3,     // Japanese Emperor Era calendar
                    /* SSS_WARNINGS_OFF */
    TAIWAN = 4,     // Taiwan Era calendar /* SSS_WARNINGS_ON */
    KOREA = 5,     // Korean Tangun Era calendar
    HIJRI = 6,     // Hijri (Arabic Lunar) calendar
    THAI = 7,     // Thai calendar
    HEBREW = 8,     // Hebrew (Lunar) calendar
    GREGORIAN_ME_FRENCH = 9,     // Gregorian Middle East French calendar
    GREGORIAN_ARABIC = 10,     // Gregorian Arabic calendar
    GREGORIAN_XLIT_ENGLISH = 11,     // Gregorian Transliterated English calendar
    GREGORIAN_XLIT_FRENCH = 12,
    // Note that all calendars after this point are MANAGED ONLY for now.
    JULIAN = 13,
    JAPANESELUNISOLAR = 14,
    CHINESELUNISOLAR = 15,
    SAKA = 16,     // reserved to match Office but not implemented in our code
    LUNAR_ETO_CHN = 17,     // reserved to match Office but not implemented in our code
    LUNAR_ETO_KOR = 18,     // reserved to match Office but not implemented in our code
    LUNAR_ETO_ROKUYOU = 19,     // reserved to match Office but not implemented in our code
    KOREANLUNISOLAR = 20,
    TAIWANLUNISOLAR = 21,
    PERSIAN = 22,
    UMALQURA = 23,
    LAST_CALENDAR = 23      // Last calendar ID
};

enum class CalendarAlgorithmType
{
    LunarCalendar,
    LunisolarCalendar,
    SolarCalendar,
    Unknown
};

enum class CalendarWeekRule
{
    FirstDay,
    FirstFullWeek,
    FirstFourDayWeek
};

class Calendar;
typedef SharedPtr<Calendar> CalendarPtr;

class Calendar : public Object
{
    RTTI_INFO(System::Globalization::Calendar, ::System::BaseTypesInfo<System::Object>)
    friend class CultureInfo;
    friend class DateTimeFormatInfo;
public:
    virtual SharedPtr<Object> Clone();
    virtual CalendarAlgorithmType get_AlgorithmType() const = 0;
    virtual ArrayPtr<int> get_Eras() const;
    virtual DateTime get_MaxSupportedDateTime() const;
    virtual DateTime get_MinSupportedDateTime() const;
    virtual DateTime AddDays(const DateTime &time, int days);
    virtual DateTime AddHours(const DateTime &time, int hours);
    virtual DateTime AddMilliseconds(const DateTime &time, double milliseconds);
    virtual DateTime AddMinutes(const DateTime &time, int minutes);
    virtual DateTime AddMonths(const DateTime &time, int months);
    virtual DateTime AddSeconds(const DateTime &time, int seconds);
    virtual DateTime AddWeeks(const DateTime &time, int weeks);
    virtual DateTime AddYears(const DateTime &time, int years);
    virtual int GetDayOfMonth(const DateTime &time) const;
    virtual DayOfWeek GetDayOfWeek(const DateTime &time) const;
    virtual int GetDayOfYear(const DateTime &time) const;
    virtual int GetDaysInMonth(int year, int month) const;
    virtual int GetDaysInMonth(int year, int month, int era) const;
    virtual int GetDaysInYear(int year) const;
    virtual int GetDaysInYear(int year, int era) const;
    virtual int GetEra(const DateTime &time) const;
    virtual int GetHour(const DateTime &time) const;
    virtual int GetLeapMonth(int year) const;
    virtual int GetLeapMonth(int year, int era) const;
    virtual double GetMilliseconds(const DateTime &time) const;
    virtual int GetMinute(const DateTime &time) const;
    virtual int GetMonth(const DateTime &time) const;
    virtual int GetMonthsInYear(int year) const;
    virtual int GetMonthsInYear(int year, int era) const;
    virtual int GetSecond(const DateTime &time) const;
    virtual int GetWeekOfYear(const DateTime &time, CalendarWeekRule rule,
        DayOfWeek firstDayOfWeek) const;
    virtual int GetYear(const DateTime &time) const;
    virtual bool IsLeapDay(int year, int month, int day) const;
    virtual bool IsLeapDay(int year, int month, int day, int era) const;
    virtual bool IsLeapMonth(int year, int month) const;
    virtual bool IsLeapMonth(int year, int month, int era) const;
    virtual bool IsLeapYear(int year) const = 0;
    virtual bool IsLeapYear(int year, int era) const = 0;
    virtual DateTime ToDateTime(int year, int month, int day, int hour, int minute,
        int second, int millisecond) const;
    virtual DateTime ToDateTime(int year, int month, int day, int hour, int minute,
        int second, int millisecond, int era) const;
    virtual ~Calendar();
    virtual int get_ID() const = 0;
    virtual bool get_IsReadOnly() const { return true;  };
    virtual int get_CurrentEra() const { return m_CurrentEra; }
    virtual int get_CurrentEraValue() const;


    static CalendarPtr ReadOnly(CalendarPtr calendar);
protected:
    Calendar(icu::Calendar *ptr);
    Calendar();

    static SharedPtr<Calendar> CreateInstance(icu::Calendar *ptr = nullptr);
    void SetDateTime(const DateTime &time) const;
    void SetDateTime(int year, int month=0, int day=0, int hour=0, int minute=0,
        int second=0, int millisecond = 0, int era=0) const;
    icu::Calendar *m_calendar;

    void SetReadOnlyState(bool readOnly)
    {
        m_isReadOnly = readOnly;
    }

    mutable int m_currentEraValue = -1;

private:
    Calendar(const Calendar&);
    Calendar& operator=(const Calendar &calendar);
    DateTime GetDateTime(DateTimeKind kind) const;
    int GetDaysInMonth() const;
    int GetDaysInYear() const;
    int GetMonthsInYear() const;
    int CheckLastWeekOfYear(int week) const;

    bool m_isReadOnly = false;
    int m_CurrentEra = 0;


};


}} //namespace System { namespace Globalization {


#endif //_calendar_h_
