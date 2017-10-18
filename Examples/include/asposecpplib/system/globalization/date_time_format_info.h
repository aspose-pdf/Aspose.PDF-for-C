#ifndef date_time_format_info_h
#define date_time_format_info_h

#include <vector>
#include "system/iformatprovider.h"
#include "system/exceptions.h"
#include "system/details/culture_data_ptr.h"
#include "system/globalization/calendar.h"

namespace System{ namespace Globalization{

    class DateTimeFormatInfo;
    typedef SharedPtr<DateTimeFormatInfo> DateTimeFormatInfoPtr;

    class DateTimeFormatInfo final : virtual public Object, public IFormatProvider
    {
        FRIEND_FUNCTION_System_MakeObject;
        RTTI_INFO(DateTimeFormatInfo, ::System::BaseTypesInfo<System::Object>)

    public:
        DateTimeFormatInfo();

        SharedPtr<DateTimeFormatInfo> Clone();

        String get_CultureName();

        String get_ShortDatePattern();
        void set_ShortDatePattern(const String& pattern);

        String get_ShortTimePattern();
        void set_ShortTimePattern(const String& pattern);

        String get_LongDatePattern();
        void set_LongDatePattern(const String& pattern);

        String get_LongTimePattern();
        void set_LongTimePattern(const String& pattern);

        String get_DateSeparator();

        String get_TimeSeparator();
        void set_TimeSeparator(const String& value);

        String get_PMDesignator();
        void set_PMDesignator(const String& designator);

        String get_AMDesignator();
        void set_AMDesignator(const String& designator);

        ArrayPtr<String> get_AbbreviatedDayNames();
        void set_AbbreviatedDayNames(ArrayPtr<String> names);

        ArrayPtr<String> get_AbbreviatedMonthGenitiveNames();
        void set_AbbreviatedMonthGenitiveNames(ArrayPtr<String> names);

        ArrayPtr<String> get_AbbreviatedMonthNames();
        void set_AbbreviatedMonthNames(ArrayPtr<String> names);

        SharedPtr<Calendar> get_Calendar();
        void set_Calendar(SharedPtr<Calendar> calendar);

        CalendarWeekRule get_CalendarWeekRule();
        void set_CalendarWeekRule(CalendarWeekRule rule);

        ArrayPtr<String> get_DayNames();
        void set_DayNames(ArrayPtr<String> names);

        DayOfWeek get_FirstDayOfWeek();
        void set_FirstDayOfWeek(DayOfWeek day);

        String get_FullDateTimePattern();
        void set_FullDateTimePattern(const String& pattern);

        bool get_IsReadOnly();
        void set_IsReadOnly(bool readOnly);

        String get_MonthDayPattern();
        void set_MonthDayPattern(const String& pattern);

        ArrayPtr<String> get_MonthGenitiveNames();
        void set_MonthGenitiveNames(ArrayPtr<String> names);

        ArrayPtr<String> get_MonthNames();
        void set_MonthNames(ArrayPtr<String> names);

        String get_RFC1123Pattern();

        ArrayPtr<String> get_ShortestDayNames();
        void set_ShortestDayNames(ArrayPtr<String> names);

        ArrayPtr<String> get_EraNames();

        String get_SortableDateTimePattern();
        String get_UniversalSortableDateTimePattern();

        String get_YearMonthPattern();
        void set_YearMonthPattern(const String& pattern);

        String get_GeneralShortTimePattern();
        String get_GeneralLongTimePattern();
        String get_DateTimeOffsetPattern();

        String GetAbbreviatedDayName(DayOfWeek dayofweek);
        String GetAbbreviatedEraName(int era);
        String GetAbbreviatedMonthName(int month);
        String GetDayName(DayOfWeek dayofweek);
        int GetEra(const String& eraName);
        String GetEraName(int era);
        String GetMonthName(int month);

        ArrayPtr<String>  AbbreviatedEnglishEraNames();

        SharedPtr<Object> GetFormat(const TypeInfo &formatType);

        static DateTimeFormatInfoPtr get_InvariantInfo();
        static DateTimeFormatInfoPtr get_CurrentInfo();
        static DateTimeFormatInfoPtr GetInstance(IFormatProviderPtr provider);
        static DateTimeFormatInfoPtr ReadOnly(SharedPtr<DateTimeFormatInfo> dtfi);

    private:
        friend class CultureInfo;
        friend class DateTimeParse;

        String get_ISO8601DateTimePattern();

        DateTimeFormatInfo(Details::CultureDataPtr cultureData, SharedPtr<Calendar> calendar);

        ArrayPtr<String> AbbreviatedEraNames();
        ArrayPtr<String> get_ShortDatePatterns();
        ArrayPtr<String> get_ShortTimePatterns();
        ArrayPtr<String> get_LongDatePatterns();
        ArrayPtr<String> get_LongTimePatterns();
        ArrayPtr<String> get_YearMonthPatterns();

        Details::CultureDataPtr m_cultureData;
        String m_name; // culture name

        SharedPtr<Calendar> m_calendar;

        String m_amDesignator;
        String m_pmDesignator;

        String m_dateSeparator;            // derived from short date (whidbey expects, arrowhead doesn't)
        String m_generalShortTimePattern;     // short date + short time (whidbey expects, arrowhead doesn't)
        String m_generalLongTimePattern;     // short date + long time (whidbey expects, arrowhead doesn't)
        String m_timeSeparator;            // derived from long time (whidbey expects, arrowhead doesn't)
        String m_monthDayPattern;
        String m_fullDateTimePattern;
        String m_longDatePattern;
        String m_longTimePattern;
        String m_shortDatePattern;
        String m_shortTimePattern;
        String m_yearMonthPattern;
        String m_dateTimeOffsetPattern;

        bool m_isReadOnly = false;

        static SharedPtr<DateTimeFormatInfo> m_invariantInfo;
        ArrayPtr<String> m_abbreviatedDayNames;
        ArrayPtr<String> m_genitiveAbbreviatedMonthNames;
        ArrayPtr<String> m_abbreviatedMonthNames;
        ArrayPtr<String> m_dayNames;
        ArrayPtr<String> m_genitiveMonthNames;
        ArrayPtr<String> m_monthNames;
        ArrayPtr<String> m_abbrevEraNames;
        ArrayPtr<String> m_abbrevEnglishEraNames;
        ArrayPtr<String> m_eraNames;
        ArrayPtr<String> m_shortDatePatterns;
        ArrayPtr<String> m_shortTimePatterns;
        ArrayPtr<String> m_longDatePatterns;
        ArrayPtr<String> m_longTimePatterns;
        ArrayPtr<String> m_superShortDayNames;
        ArrayPtr<String> m_yearMonthPatterns;

        int m_calendarWeekRule = -1;
        int m_firstDayOfWeek = -1;

        static const String m_rfc1123Pattern;
        static const String m_sortableDateTimePattern;
        static const String m_universalSortableDateTimePattern;
        static const String m_iso8601DateTimePattern;
    };
}}

#endif // date_time_format_info_h
