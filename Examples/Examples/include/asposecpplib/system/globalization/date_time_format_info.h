/// @file system/globalization/date_time_format_info.h
#ifndef date_time_format_info_h
#define date_time_format_info_h

#include <vector>
#include <atomic>
#include "system/iformatprovider.h"
#include "system/exceptions.h"
#include "system/details/culture_data_ptr.h"
#include "system/globalization/calendar.h"

namespace System{ namespace Globalization{

class DateTimeFormatInfo;
/// Date and time format info pointer.
typedef SharedPtr<DateTimeFormatInfo> DateTimeFormatInfoPtr;

/// Set of date and time formatting parameters.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DateTimeFormatInfo final : virtual public Object, public IFormatProvider
{
    /// Enables construction through MakeObject.
    FRIEND_FUNCTION_System_MakeObject;
    /// RTTI information.
    RTTI_INFO(DateTimeFormatInfo, ::System::BaseTypesInfo<System::Object>)

public:
    /// Constructs invariant format info.
    ASPOSECPP_SHARED_API DateTimeFormatInfo();

    ASPOSECPP_SHARED_API DateTimeFormatInfo(const DateTimeFormatInfo &copy);

    /// Clones format info.
    /// @return Newly created copy of format info object.
    ASPOSECPP_SHARED_API SharedPtr<DateTimeFormatInfo> Clone();
    /// Gets culture name.
    /// @return Name of culture associated with formatter.
    ASPOSECPP_SHARED_API String get_CultureName();

    /// Gets short date pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_ShortDatePattern();
    /// Sets short date pattern.
    /// @param pattern Format string.
    ASPOSECPP_SHARED_API void set_ShortDatePattern(const String& pattern);
    /// Gets short time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_ShortTimePattern();
    /// Sets short time pattern.
    /// @param pattern Format string.
    ASPOSECPP_SHARED_API void set_ShortTimePattern(const String& pattern);
    /// Gets long date pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_LongDatePattern();
    /// Sets long date pattern.
    /// @param pattern Format string.
    ASPOSECPP_SHARED_API void set_LongDatePattern(const String& pattern);
    /// Gets long time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_LongTimePattern();
    /// Sets long time pattern.
    /// @param pattern Format string.
    ASPOSECPP_SHARED_API void set_LongTimePattern(const String& pattern);

    /// Gets date separator.
    /// @return Date components separator character.
    ASPOSECPP_SHARED_API String get_DateSeparator();
    /// Gets time separator.
    /// @return Time components separator character.
    ASPOSECPP_SHARED_API String get_TimeSeparator();
    /// Sets time separator.
    /// @return Time components separator character.
    ASPOSECPP_SHARED_API void set_TimeSeparator(const String& value);

    /// Gets PM designator.
    /// @return PM designator string.
    ASPOSECPP_SHARED_API String get_PMDesignator();
    /// Sets PM designator.
    /// @param designator PM designator string.
    ASPOSECPP_SHARED_API void set_PMDesignator(const String& designator);
    /// Gets AM designator.
    /// @return AM designator string.
    ASPOSECPP_SHARED_API String get_AMDesignator();
    /// Sets AM designator.
    /// @param designator AM designator string.
    ASPOSECPP_SHARED_API void set_AMDesignator(const String& designator);

    /// Gets abbreviated day names.
    /// @return Array of abbreviated day names, starting with Sunday.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_AbbreviatedDayNames();
    /// Sets abbreviated day names.
    /// @param names Array of abbreviated day names, starting with Sunday.
    ASPOSECPP_SHARED_API void set_AbbreviatedDayNames(const ArrayPtr<String>& names);
    /// Gets abbreviated month names in genitive form.
    /// @return Array of abbreviated month names, starting with January.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_AbbreviatedMonthGenitiveNames();
    /// Sets abbreviated month names in genitive form.
    /// @param names Array of abbreviated month names, starting with January.
    ASPOSECPP_SHARED_API void set_AbbreviatedMonthGenitiveNames(const ArrayPtr<String>& names);
    /// Gets abbreviated month names.
    /// @return Array of abbreviated month names, starting with January.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_AbbreviatedMonthNames();
    /// Sets abbreviated month names.
    /// @param names Array of abbreviated month names, starting with January.
    ASPOSECPP_SHARED_API void set_AbbreviatedMonthNames(const ArrayPtr<String>& names);

    /// Gets calendar associated with formatter.
    /// @return Calendar objects.
    ASPOSECPP_SHARED_API SharedPtr<Calendar> get_Calendar();
    /// Sets calendar associated with formatter.
    /// @param calendar Calendar objects.
    ASPOSECPP_SHARED_API void set_Calendar(const SharedPtr<Calendar>& calendar);
    /// Gets calendar week rule associated with formatter.
    /// @return Week rule.
    ASPOSECPP_SHARED_API CalendarWeekRule get_CalendarWeekRule();
    /// Sets calendar week rule associated with formatter.
    /// @param rule Week rule.
    ASPOSECPP_SHARED_API void set_CalendarWeekRule(CalendarWeekRule rule);
    /// Gets day names.
    /// @return Array of day names, starting with Sunday.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_DayNames();
    /// Sets day names.
    /// @param names Array of day names, starting with Sunday.
    ASPOSECPP_SHARED_API void set_DayNames(const ArrayPtr<String>& names);

    /// Gets first day of week.
    /// @return Wek day.
    ASPOSECPP_SHARED_API DayOfWeek get_FirstDayOfWeek();
    /// Sets first day of week.
    /// @param day Week day.
    ASPOSECPP_SHARED_API void set_FirstDayOfWeek(DayOfWeek day);

    /// Gets full date and time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_FullDateTimePattern();
    /// Sets full date and time pattern.
    /// @param pattern Format string.
    ASPOSECPP_SHARED_API void set_FullDateTimePattern(const String& pattern);

    /// Checks whether formatter is read-only.
    /// @return True if formatter is read-only, false otherwise.
    ASPOSECPP_SHARED_API bool get_IsReadOnly();
    /// Defines whether formatter is read-only.
    /// @param readOnly True to make formatter is read-only, false otherwise.
    ASPOSECPP_SHARED_API void set_IsReadOnly(bool readOnly);

    /// Gets month day pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_MonthDayPattern();
    /// Sets month day pattern.
    /// @param pattern Format string.
    ASPOSECPP_SHARED_API void set_MonthDayPattern(const String& pattern);

    /// Gets month names in genitive form.
    /// @return Array of month names, starting with January.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_MonthGenitiveNames();
    /// Sets month names in genitive form.
    /// @param names Array of month names, starting with January.
    ASPOSECPP_SHARED_API void set_MonthGenitiveNames(const ArrayPtr<String>& names);
    /// Gets month names.
    /// @return Array of month names, starting with January.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_MonthNames();
    /// Sets month names.
    /// @param names Array of month names, starting with January.
    ASPOSECPP_SHARED_API void set_MonthNames(const ArrayPtr<String>& names);

    /// Gets RFC1123 pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_RFC1123Pattern();

    /// Gets shortest day names possible.
    /// @return Array of shortest day names possible, starting with Sunday.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_ShortestDayNames();
    /// Sets shortest day names possible.
    /// @param names Array of shortest day names possible, starting with Sunday.
    ASPOSECPP_SHARED_API void set_ShortestDayNames(const ArrayPtr<String>& names);

    /// Gets names of eras.
    /// @return Era names array.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_EraNames();

    /// Gets sortable date and time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_SortableDateTimePattern();
    /// Gets universal sortable date and time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_UniversalSortableDateTimePattern();
    /// Gets year and month pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_YearMonthPattern();
    /// Sets year and month pattern.
    /// @param pattern Format string.
    ASPOSECPP_SHARED_API void set_YearMonthPattern(const String& pattern);

    /// Gets general short time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_GeneralShortTimePattern();
    /// Gets general long time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_GeneralLongTimePattern();
    /// Gets date and time offset pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_DateTimeOffsetPattern();

    /// Gets abbreviated week day name.
    /// @param dayofweek Day to get name of.
    /// @return Week day name.
    ASPOSECPP_SHARED_API String GetAbbreviatedDayName(DayOfWeek dayofweek);
    /// Gets abbreviated era name.
    /// @param era Era to get name of.
    /// @return Era name.
    ASPOSECPP_SHARED_API String GetAbbreviatedEraName(int era);
    /// Gets abbreviated month name.
    /// @param month Month to get name of.
    /// @return Month name.
    ASPOSECPP_SHARED_API String GetAbbreviatedMonthName(int month);
    /// Gets week day name.
    /// @param dayofweek Day to get name of.
    /// @return Week day name.
    ASPOSECPP_SHARED_API String GetDayName(DayOfWeek dayofweek);
    /// Gets era by name.
    /// @param eraName Era name.
    /// @return Era index.
    ASPOSECPP_SHARED_API int GetEra(const String& eraName);
    /// Gets era name.
    /// @param era Era to get name of.
    /// @return Era name.
    ASPOSECPP_SHARED_API String GetEraName(int era);
    /// Gets month name.
    /// @param month Month to get name of.
    /// @return Month name.
    ASPOSECPP_SHARED_API String GetMonthName(int month);

    /// Gets array of abbrevisted English era names.
    /// @return Array of era names.
    ASPOSECPP_SHARED_API ArrayPtr<String> AbbreviatedEnglishEraNames();
    /// Gets formatter of specific type.
    /// @param formatType Type of formatter to get; only DateTimeFormatInfo type is supported.
    /// @return Formatter or null if not availsable.
    ASPOSECPP_SHARED_API SharedPtr<Object> GetFormat(const TypeInfo &formatType) override;

    /// Gets invariant date and time formatter.
    /// @return Format info object.
    static ASPOSECPP_SHARED_API DateTimeFormatInfoPtr get_InvariantInfo();
    /// Gets current thread's date and time formatter.
    /// @return Format info object.
    static ASPOSECPP_SHARED_API DateTimeFormatInfoPtr get_CurrentInfo();
    /// Gets formatter associated with format provider.
    /// @param provider Provider to get format for.
    /// @return Formatter associated with format provider or current thread's format if unavailable.
    static ASPOSECPP_SHARED_API DateTimeFormatInfoPtr GetInstance(const IFormatProviderPtr& provider);
    /// Gets read-only version of formatter.
    /// @param dtfi Formatter to get read-only version of.
    /// @return if @p dtfi is read-only, returns it, otherwise creates a copy of it and marks it as read-only.
    static ASPOSECPP_SHARED_API DateTimeFormatInfoPtr ReadOnly(const SharedPtr<DateTimeFormatInfo>& dtfi);

private:
    /// Friendship for implementation optimization.
    friend class CultureInfo;
    /// Friendship for implementation optimization.
    friend class DateTimeParse;

    /// Gets ISO8601 date and time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_ISO8601DateTimePattern();

    /// Constructor.
    /// @param cultureData Culture to get information from.
    /// @param calendar Calendar to use.
    ASPOSECPP_SHARED_API DateTimeFormatInfo(const Details::CultureDataPtr& cultureData, const SharedPtr<Calendar>& calendar);

    /// Gets abbreviated era names; creates them if they don't exist yet.
    /// @return Name array.
    ASPOSECPP_SHARED_API ArrayPtr<String> AbbreviatedEraNames();
    /// Gets short date patterns; creates them if they don't exist yet.
    /// @return Pattern array.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_ShortDatePatterns();
    /// Gets short time patterns; creates them if they don't exist yet.
    /// @return Pattern array.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_ShortTimePatterns();
    /// Gets long date patterns; creates them if they don't exist yet.
    /// @return Pattern array.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_LongDatePatterns();
    /// Gets long time patterns; creates them if they don't exist yet.
    /// @return Pattern array.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_LongTimePatterns();
    /// Gets year month patterns; creates them if they don't exist yet.
    /// @return Pattern array.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_YearMonthPatterns();

    /// Culture data to use.
    const Details::CultureDataPtr m_cultureData;
    /// Culture name.
    String m_name;
    /// Calendar to use.
    SharedPtr<Calendar> m_calendar;
    /// AM designator.
    String m_amDesignator;
    /// PM designator.
    String m_pmDesignator;
    /// Date separator.
    String m_dateSeparator;            // derived from short date (whidbey expects, arrowhead doesn't)
    /// General short time pattern.
    String m_generalShortTimePattern;     // short date + short time (whidbey expects, arrowhead doesn't)
    /// General long time pattern.
    String m_generalLongTimePattern;     // short date + long time (whidbey expects, arrowhead doesn't)
    /// Time separator.
    String m_timeSeparator;            // derived from long time (whidbey expects, arrowhead doesn't)
    /// Month day pattern.
    String m_monthDayPattern;
    /// Full date and time pattern.
    String m_fullDateTimePattern;
    /// Long date pattern.
    String m_longDatePattern;
    /// Long time pattern.
    String m_longTimePattern;
    /// Short date pattern.
    String m_shortDatePattern;
    /// Short time pattern.
    String m_shortTimePattern;
    /// Year and month pattern.
    String m_yearMonthPattern;
    /// Date and time offset pattern.
    String m_dateTimeOffsetPattern;
    /// Read-only flag.
    bool m_isReadOnly = false;
    /// Invariant format info.
    static SharedPtr<DateTimeFormatInfo> m_invariantInfo;
    /// Abbreviated week day names.
    ArrayPtr<String> m_abbreviatedDayNames;
    /// Abbreviated week day names in genitive form.
    ArrayPtr<String> m_genitiveAbbreviatedMonthNames;
    /// Abbreviated month names.
    ArrayPtr<String> m_abbreviatedMonthNames;
    /// Week day names.
    ArrayPtr<String> m_dayNames;
    /// Month names in genitive form.
    ArrayPtr<String> m_genitiveMonthNames;
    /// Month names.
    ArrayPtr<String> m_monthNames;
    /// Abbreviated era names.
    ArrayPtr<String> m_abbrevEraNames;
    /// Abbreviated English era names.
    ArrayPtr<String> m_abbrevEnglishEraNames;
    /// Era names.
    ArrayPtr<String> m_eraNames;
    /// Short date patterns.
    ArrayPtr<String> m_shortDatePatterns;
    /// Short time patterns.
    ArrayPtr<String> m_shortTimePatterns;
    /// Long date patterns.
    ArrayPtr<String> m_longDatePatterns;
    /// Long time patterns.
    ArrayPtr<String> m_longTimePatterns;
    /// Shortest day names possible.
    ArrayPtr<String> m_superShortDayNames;
    /// Year and month patterns.
    ArrayPtr<String> m_yearMonthPatterns;
    /// Week rule to use.
    std::atomic<int> m_calendarWeekRule;
    /// First day of week.
    std::atomic<int> m_firstDayOfWeek;
    /// RFC-1123 pattern.
    static const String m_rfc1123Pattern;
    /// Sortable date and time pattern.
    static const String m_sortableDateTimePattern;
    /// Universal sortable date and time pattern.
    static const String m_universalSortableDateTimePattern;
    /// ISO-8601s date and time pattern.
    static const String m_iso8601DateTimePattern;
};

}}

#endif // date_time_format_info_h
