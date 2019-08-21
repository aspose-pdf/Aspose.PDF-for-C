/// @file system/globalization/date_time_format_info.h
#pragma once

#include <mutex>
#include <system/globalization/calendar.h>
#include <system/iformatprovider.h>
#include <system/icloneable.h>
#include <system/nullable.h>
#include <system/globalization/details/date_time_format_data_ptr.h>
#include <system/globalization/details/date_time_format_flags.h>
#include <system/globalization/details/culture_data_ptr.h>
#include <system/details/spin_lock.h>
#include <system/details/lazy.h>

namespace System { namespace Globalization {

namespace Details { 
    class DateTimeFormatInfoReader; 
    namespace DateTimeTokenization { class Tokenizer; }
}

class DateTimeFormatInfo;
/// DateTimeFormatInfo info pointer.
typedef SharedPtr<DateTimeFormatInfo> DateTimeFormatInfoPtr;

/// Set of date and time formatting parameters.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DateTimeFormatInfo final
    : virtual public Object
    , public IFormatProvider
    , public ICloneable
{
    /// RTTI information.
    RTTI_INFO(DateTimeFormatInfo, ::System::BaseTypesInfo<System::Object>)

    /// Enables construction through MakeObject.
    FRIEND_FUNCTION_System_MakeObject;

    /// Default constructor, constructs invariant format info.
    ASPOSECPP_SHARED_API DateTimeFormatInfo();

public:
    // IFormatProvider methods

    /// Gets formatter of specific type.
    /// @param format_type Type of formatter to get; only DateTimeFormatInfo type is supported.
    /// @return Formatter or null if not availsable.
    ASPOSECPP_SHARED_API SharedPtr<Object> GetFormat(const TypeInfo& format_type) override;

    // ICloneable methods

    /// Clones format info.
    /// @return Newly created copy of format info object.
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

    // DateTimeFormatInfo methods

    /// Checks whether formatter is read-only.
    /// @return True if formatter is read-only, false otherwise.
    ASPOSECPP_SHARED_API bool get_IsReadOnly() const;

    /// Gets short date pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_ShortDatePattern() const;
    /// Sets short date pattern.
    /// @param value Format string.
    ASPOSECPP_SHARED_API void set_ShortDatePattern(const String& value);

    /// Gets short time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_ShortTimePattern() const;
    /// Sets short time pattern.
    /// @param value Format string.
    ASPOSECPP_SHARED_API void set_ShortTimePattern(const String& value);

    /// Gets long date pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_LongDatePattern() const;
    /// Sets long date pattern.
    /// @param value Format string.
    ASPOSECPP_SHARED_API void set_LongDatePattern(const String& value);

    /// Gets long time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_LongTimePattern() const;
    /// Sets long time pattern.
    /// @param value Format string.
    ASPOSECPP_SHARED_API void set_LongTimePattern(const String& value);

    /// Gets date separator.
    /// @return Date components separator character.
    ASPOSECPP_SHARED_API String get_DateSeparator() const;
    /// Sets date separator.
    /// @param value Date separator.
    ASPOSECPP_SHARED_API void set_DateSeparator(const String& value);

    /// Gets time separator.
    /// @return Time components separator character.
    ASPOSECPP_SHARED_API String get_TimeSeparator() const;
    /// Sets time separator.
    /// @return Time components separator character.
    ASPOSECPP_SHARED_API void set_TimeSeparator(const String& value);

    /// Gets PM designator.
    /// @return PM designator string.
    ASPOSECPP_SHARED_API String get_PMDesignator() const;
    /// Sets PM designator.
    /// @param value PM designator string.
    ASPOSECPP_SHARED_API void set_PMDesignator(const String& value);

    /// Gets AM designator.
    /// @return AM designator string.
    ASPOSECPP_SHARED_API String get_AMDesignator() const;
    /// Sets AM designator.
    /// @param value AM designator string.
    ASPOSECPP_SHARED_API void set_AMDesignator(const String& value);

    /// Gets abbreviated day names.
    /// @return Array of abbreviated day names, starting with Sunday.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_AbbreviatedDayNames() const;
    /// Sets abbreviated day names.
    /// @param value Array of abbreviated day names, starting with Sunday.
    ASPOSECPP_SHARED_API void set_AbbreviatedDayNames(const ArrayPtr<String>& value);

    /// Gets abbreviated month names in genitive form.
    /// @return Array of abbreviated month names, starting with January.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_AbbreviatedMonthGenitiveNames() const;
    /// Sets abbreviated month names in genitive form.
    /// @param value Array of abbreviated month names, starting with January.
    ASPOSECPP_SHARED_API void set_AbbreviatedMonthGenitiveNames(const ArrayPtr<String>& value);

    /// Gets abbreviated month names.
    /// @return Array of abbreviated month names, starting with January.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_AbbreviatedMonthNames() const;
    /// Sets abbreviated month names.
    /// @param value Array of abbreviated month names, starting with January.
    ASPOSECPP_SHARED_API void set_AbbreviatedMonthNames(const ArrayPtr<String>& value);

    /// Gets calendar associated with formatter.
    /// @return Calendar objects.
    ASPOSECPP_SHARED_API SharedPtr<Calendar> get_Calendar() const;
    /// Sets calendar associated with formatter.
    /// @param value Calendar object.
    ASPOSECPP_SHARED_API void set_Calendar(const SharedPtr<Calendar>& value);

    /// Gets calendar week rule associated with formatter.
    /// @return Week rule.
    ASPOSECPP_SHARED_API CalendarWeekRule get_CalendarWeekRule() const;
    /// Sets calendar week rule associated with formatter.
    /// @param value Week rule.
    ASPOSECPP_SHARED_API void set_CalendarWeekRule(CalendarWeekRule value);

    /// Gets day names.
    /// @return Array of day names, starting with Sunday.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_DayNames() const;
    /// Sets day names.
    /// @param value Array of day names, starting with Sunday.
    ASPOSECPP_SHARED_API void set_DayNames(const ArrayPtr<String>& value);

    /// Gets first day of week.
    /// @return Wek day.
    ASPOSECPP_SHARED_API DayOfWeek get_FirstDayOfWeek() const;
    /// Sets first day of week.
    /// @param value Week day.
    ASPOSECPP_SHARED_API void set_FirstDayOfWeek(DayOfWeek value);

    /// Gets full date and time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_FullDateTimePattern() const;
    /// Sets full date and time pattern.
    /// @param value Format string.
    ASPOSECPP_SHARED_API void set_FullDateTimePattern(const String& value);

    /// Gets month day pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_MonthDayPattern() const;
    /// Sets month day pattern.
    /// @param value Format string.
    ASPOSECPP_SHARED_API void set_MonthDayPattern(const String& value);

    /// Gets month names in genitive form.
    /// @return Array of month names, starting with January.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_MonthGenitiveNames() const;
    /// Sets month names in genitive form.
    /// @param value Array of month names, starting with January.
    ASPOSECPP_SHARED_API void set_MonthGenitiveNames(const ArrayPtr<String>& value);

    /// Gets month names.
    /// @return Array of month names, starting with January.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_MonthNames() const;
    /// Sets month names.
    /// @param value Array of month names, starting with January.
    ASPOSECPP_SHARED_API void set_MonthNames(const ArrayPtr<String>& value);

    /// Gets RFC1123 pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_RFC1123Pattern() const;

    /// Gets shortest day names possible.
    /// @return Array of shortest day names possible, starting with Sunday.
    ASPOSECPP_SHARED_API ArrayPtr<String> get_ShortestDayNames() const;
    /// Sets shortest day names possible.
    /// @param value Array of shortest day names possible, starting with Sunday.
    ASPOSECPP_SHARED_API void set_ShortestDayNames(const ArrayPtr<String>& value);

    /// Gets sortable date and time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_SortableDateTimePattern() const;

    /// Gets universal sortable date and time pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_UniversalSortableDateTimePattern() const;

    /// Gets year and month pattern.
    /// @return Format string.
    ASPOSECPP_SHARED_API String get_YearMonthPattern() const;
    /// Sets year and month pattern.
    /// @param value Format string.
    ASPOSECPP_SHARED_API void set_YearMonthPattern(const String& value);

    /// Gets abbreviated week day name.
    /// @param day_of_week Day to get name of.
    /// @return Week day name.
    ASPOSECPP_SHARED_API String GetAbbreviatedDayName(DayOfWeek day_of_week) const;

    /// Gets abbreviated era name.
    /// @param era Era to get name of.
    /// @return Era name.
    ASPOSECPP_SHARED_API String GetAbbreviatedEraName(int era) const;

    /// Gets abbreviated month name.
    /// @param month Month to get name of.
    /// @return Month name.
    ASPOSECPP_SHARED_API String GetAbbreviatedMonthName(int month) const;

    /// Gets week day name.
    /// @param day_of_week Day to get name of.
    /// @return Week day name.
    ASPOSECPP_SHARED_API String GetDayName(DayOfWeek day_of_week) const;

    /// Gets era by name.
    /// @param era_name Era name.
    /// @return Era index.
    ASPOSECPP_SHARED_API int GetEra(const String& era_name) const;

    /// Gets era name.
    /// @param era Era to get name of.
    /// @return Era name.
    ASPOSECPP_SHARED_API String GetEraName(int era) const;

    /// Gets month name.
    /// @param month Month to get name of.
    /// @return Month name.
    ASPOSECPP_SHARED_API String GetMonthName(int month) const;

    /// Gets genitive month name.
    /// @param month Month to get name of.
    /// @return Month name.
    ASPOSECPP_SHARED_API String GetMonthGenitiveName(int month) const;

    /// Gets leap-year month name.
    /// @param month Month to get name of.
    /// @return Month name.
    ASPOSECPP_SHARED_API String GetLeapYearMonthName(int month) const;

    /// Gets native calendar name if available.
    /// @return Native calendar name.
    ASPOSECPP_SHARED_API String get_NativeCalendarName() const;

    /// Gets all patterns in which date and time values can be formatted.
    /// @return Array of patterns.
    ASPOSECPP_SHARED_API ArrayPtr<String> GetAllDateTimePatterns() const;

    /// Gets all patterns in which date and time values can be formatted using specified format string.
    /// @return Array of patterns.
    ASPOSECPP_SHARED_API ArrayPtr<String> GetAllDateTimePatterns(char16_t format) const;

    /// Sets patterns for the specified format.
    ASPOSECPP_SHARED_API void SetAllDateTimePatterns(const ArrayPtr<String>& patterns, char16_t format);

    /// Gets shortes name for the specified day of week.
    ASPOSECPP_SHARED_API String GetShortestDayName(DayOfWeek day_of_week) const;

    /// Gets invariant date and time formatter.
    /// @return Format info object.
    static ASPOSECPP_SHARED_API const DateTimeFormatInfoPtr& get_InvariantInfo();
    /// Gets current thread's date and time formatter.
    /// @return Format info object.
    static ASPOSECPP_SHARED_API DateTimeFormatInfoPtr get_CurrentInfo();

    /// Gets formatter associated with format provider.
    /// @param provider Provider to get format for.
    /// @return Formatter associated with format provider or current thread's format if unavailable.
    static ASPOSECPP_SHARED_API DateTimeFormatInfoPtr GetInstance(const IFormatProviderPtr& provider);
    /// Gets read-only version of formatter.
    /// @param info Formatter to get read-only version of.
    /// @return if @p info is read-only, returns it, otherwise creates a copy of it and marks it as read-only.
    static ASPOSECPP_SHARED_API DateTimeFormatInfoPtr ReadOnly(const DateTimeFormatInfoPtr& info);

    DateTimeFormatInfo& operator=(const DateTimeFormatInfo&) = delete;

private:
    friend class Details::DateTimeFormatInfoReader;

    using Lock = System::Details::OptionalSpinLock;
    using LockContext = std::lock_guard<Lock>;

    using Tokenizer = Details::DateTimeTokenization::Tokenizer;

    /// Read-only flag.
    const bool m_is_read_only;
    /// Culture data to use.
    const Details::CultureDataPtr m_culture_data;
    /// DateTimeFormat data to use.
    Details::DateTimeFormatDataPtr m_data;
    /// Calendar to use.
    CalendarPtr m_calendar;
    /// Mutex to protect object data.
    mutable Lock m_lockable;
    /// Name of culture associated with format info.
    const String m_culture_name;

    /// Tokenizer.
    mutable System::Details::Lazy<std::shared_ptr<Tokenizer>> m_tokenizer;

    // Read-Write properties

    /// Abbreviated week day names.
    mutable ArrayPtr<String> m_abbreviated_day_names;
    /// Abbreviated week day names in genitive form.
    mutable ArrayPtr<String> m_abbreviated_month_genitive_names;
    /// Abbreviated month names.
    mutable ArrayPtr<String> m_abbreviated_month_names;
    /// AM designator.
    mutable String m_am_designator;
    /// Date separator.
    mutable String m_date_separator;
    /// Week day names.
    mutable ArrayPtr<String> m_day_names;
    /// First day of week.
    mutable Nullable<DayOfWeek> m_first_day_of_week;
    /// Full date and time pattern.
    mutable String m_full_date_time_pattern;
    /// Long date pattern.
    mutable String m_long_date_pattern;
    /// Long date patterns.
    mutable ArrayPtr<String> m_long_date_patterns;
    /// Long time pattern.
    mutable String m_long_time_pattern;
    /// Long time patterns.
    mutable ArrayPtr<String> m_long_time_patterns;
    /// Month day pattern.
    mutable String m_month_day_pattern;
    /// Month names in genitive form.
    mutable ArrayPtr<String> m_month_genitive_names;
    /// Month names.
    mutable ArrayPtr<String> m_month_names;
    /// PM designator.
    mutable String m_pm_designator;
    /// Short date pattern.
    mutable String m_short_date_pattern;
    /// Short date patterns.
    mutable ArrayPtr<String> m_short_date_patterns;
    /// Shortest day names possible.
    mutable ArrayPtr<String> m_shortest_day_names;
    /// Short time pattern.
    mutable String m_short_time_pattern;
    /// Short time patterns.
    mutable ArrayPtr<String> m_short_time_patterns;
    /// Time separator.
    mutable String m_time_separator;
    /// Week rule to use.
    mutable Nullable<CalendarWeekRule> m_week_rule;
    /// Year and month pattern.
    mutable String m_year_month_pattern;
    /// Year and month patterns.
    mutable ArrayPtr<String> m_year_month_patterns;

    // Read-Only properties

    /// Abbreviated English era names.
    mutable ArrayPtr<String> m_abbreviated_english_era_names;
    /// Abbreviated era names.
    mutable ArrayPtr<String> m_abbreviated_era_names;
    /// Era names.
    mutable ArrayPtr<String> m_era_names;
    /// Leap year month names.
    mutable ArrayPtr<String> m_leap_year_month_names;
    /// Native calendar name.
    mutable String m_native_calendar_name;
    /// Decimal separator (used by TimeSpan formatters and parsers).
    mutable String m_decimal_separator;
    /// Format/parse flags.
    mutable Nullable<Details::DateTimeFormatFlags> m_format_flags;

    // Calculated properties

    /// GeneralLongTimePattern = ShortDatePattern + " " + LongTimePattern
    mutable String m_general_long_time_pattern;
    /// GeneralShortTimePattern = ShortDatePattern + " " + ShortTimePattern
    mutable String m_general_short_time_pattern;
    /// DateTimeOffsetPattern = ShortDatePattern + " " + LongTimePattern + TimeZoneOffset
    mutable String m_date_time_offset_pattern;

    // Readonly patterns
    static const String RFC1123Pattern;
    static const String SortablePattern;
    static const String UniversalSortablePattern;
    static const String RoundtripPattern;
    static const String RoundtripUnfixedPattern;
    static const String ISO8601Pattern;

    /// Standart formats.
    static const String StandardFormats;

    /// Copy constructor.
    DateTimeFormatInfo(const DateTimeFormatInfo &copy, 
        bool is_read_only = false, bool is_preload_all_data = false);

    /// Constructor.
    /// @param culture_data Culture to get information from.
    /// @param calendar Calendar to use.
    /// @param is_read_only Read-only flag.
    /// @param is_preload_all_data Flag that controls data loading strategy (True - all data is loaded in the constructor, False - data is loaded on demand).
    DateTimeFormatInfo(const Details::CultureDataPtr& culture_data, const CalendarPtr& calendar,
        bool is_read_only = false, bool is_preload_all_data = false);

    /// Preload all DateTimeFormat data.
    void PreloadAllData();
    /// Verify that instance is not read-only
    void VerifyWritable() const;
    /// Gets lockable object.
    Lock& Lockable() const { return m_lockable; }
    /// Gets internal data.
    Details::DateTimeFormatData& Data() const;
    /// Property change handler (for debug purpose).
    void OnChangeProperty(const LockContext&, const char16_t* property_name);
    /// Gets cached tokenizer.
    const Tokenizer& GetTokenizer(const Details::DateTimeFormatInfoReader& dtfi_reader) const;
    /// Reset cached tokenizer.
    void ResetTokenizer(const LockContext&);

    // Methods below returns cached values and creates them if they don't exist yet
    const String& LongTimePattern(const LockContext&) const;
    const String& MonthDayPattern(const LockContext&) const;
    const String& PMDesignator(const LockContext&) const;
    const String& ShortDatePattern(const LockContext&) const;
    const String& ShortTimePattern(const LockContext&) const;
    const String& TimeSeparator(const LockContext&) const;
    const String& YearMonthPattern(const LockContext&) const;
    const ArrayPtr<String>& AbbreviatedDayNames(const LockContext&) const;
    const ArrayPtr<String>& ShortestDayNames(const LockContext&) const;
    const ArrayPtr<String>& DayNames(const LockContext&) const;
    const ArrayPtr<String>& AbbreviatedMonthNames(const LockContext&) const;
    const ArrayPtr<String>& MonthNames(const LockContext&) const;
    const ArrayPtr<String>& LeapYearMonthNames(const LockContext&) const;
    const String& LongDatePattern(const LockContext&) const;
    const String& FullDateTimePattern(const LockContext&) const;
    DayOfWeek FirstDayOfWeek(const LockContext&) const;
    const ArrayPtr<String>& AbbreviatedMonthGenitiveNames(const LockContext&) const;
    CalendarWeekRule WeekRule(const LockContext&) const;
    const String& AMDesignator(const LockContext&) const;
    const ArrayPtr<String>& MonthGenitiveNames(const LockContext&) const;
    const String& DateSeparator(const LockContext&) const;

    const ArrayPtr<String>& ShortDatePatterns(const LockContext&) const;
    const ArrayPtr<String>& LongDatePatterns(const LockContext&) const;
    const ArrayPtr<String>& ShortTimePatterns(const LockContext&) const;
    const ArrayPtr<String>& LongTimePatterns(const LockContext&) const;
    const ArrayPtr<String>& YearMonthPatterns(const LockContext&) const;

    const ArrayPtr<String>& AbbreviatedEraNames(const LockContext&) const;
    const ArrayPtr<String>& EraNames(const LockContext&) const;
    const ArrayPtr<String>& AbbreviatedEnglishEraNames(const LockContext&) const;
    const String& NativeCalendarName(const LockContext&) const;
    const String& DecimalSeparator(const LockContext&) const;
    const Details::DateTimeFormatFlags FormatFlags(const LockContext&) const;
    const String& CultureName(const LockContext&) const;
    
    const String& GeneralLongTimePattern(const LockContext&) const;
    const String& GeneralShortTimePattern(const LockContext&) const;
    const String& DateTimeOffsetPattern(const LockContext&) const;

    // Gets specific patterns
    ArrayPtr<String> AllShortDatePatterns(const LockContext&) const;
    ArrayPtr<String> AllLongDatePatterns(const LockContext&) const;
    ArrayPtr<String> AllShortTimePatterns(const LockContext&) const;
    ArrayPtr<String> AllLongTimePatterns(const LockContext&) const;
    ArrayPtr<String> AllYearMonthPatterns(const LockContext&) const;
    ArrayPtr<String> AllDateTimePatterns(char16_t format, const LockContext&) const;

    const String& GetAbbreviatedDayName(DayOfWeek day_of_week, const LockContext&) const;
    const String& GetAbbreviatedEraName(int era, const LockContext&) const;
    const String& GetAbbreviatedMonthName(int month, const LockContext&) const;
    const String& GetDayName(DayOfWeek day_of_week, const LockContext&) const;
    int GetEra(const String& era_name, const LockContext&) const;
    const String& GetEraName(int era, const LockContext&) const;
    const String& GetMonthName(int month, const LockContext&) const;
    const String& GetMonthGenitiveName(int month, const LockContext&) const;
    const String& GetLeapYearMonthName(int month, const LockContext&) const;
    const String& GetShortestDayName(DayOfWeek day_of_week, const LockContext&) const;

    static const DateTimeFormatInfoPtr& InvariantInfo();
};

}} // namespace System::Globalization
