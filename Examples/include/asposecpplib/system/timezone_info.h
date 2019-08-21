/// @file system/timezone_info.h
/// Contains the declaration System::TimeZoneInfo class.
#pragma once
#include <system/object.h>
#include <system/date_time.h>
#include <system/date_time_offset.h>
#include <system/timespan.h>
#include <system/iequatable.h>
#include <system/collections/read_only_collection.h>
#include <system/default.h>
#include <system/details/icu_namespace.h>
#include <system/details/lazy.h>

/// Begins an ICU namspace scope.
ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START{
    /// Forward declaration of ICU BasicTimeZone class.
    ASPOSECPP_3RD_PARTY_CLASS(BasicTimeZone);
}

namespace System {

class TimeZoneInfo;
/// Alias for shared pointer to an instance of TimeZoneInfo class.
typedef SharedPtr<TimeZoneInfo> TimeZoneInfoPtr;

/// Represents an information destribing a particular time zone.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TimeZoneInfo final
    : public IEquatable<TimeZoneInfoPtr>
{
    /// RTTI information.
    RTTI_INFO(System::TimeZoneInfo, ::System::BaseTypesInfo<System::Object>)

    /// Enabling using constructors.
    FRIEND_FUNCTION_System_MakeObject;

public:
    /// Provides information about a time change in a time zone.
    class ASPOSECPP_SHARED_CLASS TransitionTime final
    {
    public:
        /// Default constructor. FOR INTERNAL USE.
        TransitionTime();

        /// Returns a DateTime object that represents the specific time at which the time change occurs.
        DateTime get_TimeOfDay() const
        {
            return m_time_of_day;
        }

        /// Returns the ordinal number of the month of the year at which the time change occurs.
        int get_Month() const
        {
            return static_cast<int>(m_month);
        }

        /// Returns the ordinal number of the week of the month at which the time change occurs.
        int get_Week() const
        {
            return static_cast<int>(m_week);
        }

        /// Returns the ordinal number of the day of week at which the time change occurs.
        int get_Day() const
        {
            return static_cast<int>(m_day);
        }

        /// Returns the value that represents the day of week at which the time change occurs.
        DayOfWeek get_DayOfWeek() const
        {
            return static_cast<DayOfWeek>(m_day_of_week);
        }

        /// Returns the value that indicates if the time change occurs at a fixed date and time or a floating date and time.
        /// @return True if the time change occurs at a fixed date and time, otherwise - false
        bool get_IsFixedDateRule() const
        {
            return m_is_fixed_date_rule;
        }

        /// Constructs an instance of TransitionTime class that represents a fixed-date rule (time change that occurs on specific day of a specific month).
        /// @param time_of_day The specific time at which the time change occurs.
        /// @param month The month of the year at which the time change occurs.
        /// @param day The day of the month at which the time change occurs.
        /// @return An istance of TransitionTime class that represents the described time change.
        static TransitionTime CreateFixedDateRule(const DateTime& time_of_day, int month, int day)
        {
            return TransitionTime(time_of_day, month, 1, day, DayOfWeek::Sunday, true);
        }

        /// Constructs an instance of TransitionTime class that represents a floating-date rule (time change that occurs on specific day of a specific week of a specific month).
        /// @param time_of_day The specific time at which the time change occurs.
        /// @param month The month of the year at which the time change occurs.
        /// @param week The week of the month at which the time change occurs.
        /// @param day_of_week The day of week at which the time change occurs.
        /// @return An istance of TransitionTime class that represents the described time change.
        static TransitionTime CreateFloatingDateRule(const DateTime& time_of_day, int month, int week, DayOfWeek day_of_week)
        {
            return TransitionTime(time_of_day, month, week, 1, day_of_week, false);
        }

        /// Constructs an instance of TransitionTime class that represents a time change described with the specified parameters.
        /// @param time_of_day The specific time at which the time change occurs.
        /// @param month The month of the year at which the time change occurs.
        /// @param week The week of the month at which the time change occurs.
        /// @param day The day at which the time change occurs.
        /// @param day_of_week The day of week at which the time change occurs.
        /// @param is_fixed_date_rule Value that indicates if the time change occurs at a fixed date and time or a floating date and time.
        /// @return An istance of TransitionTime class that represents the described time change.
        static TransitionTime CreateTransitionTime(DateTime time_of_day, int month, int week, int day, DayOfWeek day_of_week, bool is_fixed_date_rule)
        {
            return TransitionTime(time_of_day, month, week, day, day_of_week, is_fixed_date_rule);
        }

        bool operator==(const TransitionTime& other) const
        {
            return m_is_fixed_date_rule == other.m_is_fixed_date_rule
                && m_time_of_day == other.m_time_of_day
                && m_month == other.m_month
                && (m_is_fixed_date_rule
                    ? m_day == other.m_day
                    : m_week == other.m_week && m_day_of_week == other.m_day_of_week);
        }

        bool operator!=(const TransitionTime& other) const
        {
            return !operator==(other);
        }

    private:
        /// The specific time at which the time change occurs.
        DateTime m_time_of_day;
        /// The month of the year at which the time change occurs.
        uint8_t m_month;
        /// The week of the month at which the time change occurs.
        uint8_t m_week;
        /// The day at which the time change occurs.
        uint8_t m_day;
        /// The day of week at which the time change occurs.
        uint8_t m_day_of_week;
        /// Value that indicates if the time change occurs at a fixed date and time or a floating date and time.
        bool m_is_fixed_date_rule;

        /// Constructor.
        ASPOSECPP_SHARED_API TransitionTime(const DateTime& time_of_day, int month, int week, int day, DayOfWeek day_of_week, bool is_fixed_date_rule);

        /// Verify constructor arguments.
        static void VerifyTransitionTime(const DateTime& time_of_day, int month, int week, int day, DayOfWeek day_of_week);
    };

    class AdjustmentRule;
    /// An alias for a shared pointer to an instance of AdjustmentRule class.
    typedef SharedPtr<AdjustmentRule> AdjustmentRulePtr;

    /// Provides information about a time zone adjustment. 
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS AdjustmentRule final 
        : public IEquatable<AdjustmentRulePtr>
    {
        /// Enabling using constructors.
        FRIEND_FUNCTION_System_MakeObject;

    public:
        /// Returns a DateTime object that represents the date and time when the adjustment rule comes into effect.
        DateTime get_DateStart() const
        {
            return m_date_start;
        }
        /// Returns a DateTime object that represents the date and time when the adjustment rule stops being effective.
        DateTime get_DateEnd() const
        {
            return m_date_end;
        }
        /// Returns in TimeSpan object that represents the amount of time required to form the daylight saving time of the time zone.
        TimeSpan get_DaylightDelta() const
        {
            return m_daylight_delta;
        }
        /// Returns the information about transition from daylight saving time to standard time.
        TransitionTime get_DaylightTransitionStart() const
        {
            return m_daylight_transition_start;
        }
        /// Returns the information about transition from standard time to daylight saving time.
        TransitionTime get_DaylightTransitionEnd() const
        {
            return m_daylight_transition_end;
        }

        /// Returns a delta from the default UTC offset.
        TimeSpan get_BaseUtcOffsetDelta() const
        {
            return m_base_utc_offset_delta;
        }

        /// FOR INTERNAL USE.
        bool get_HasDaylightSaving() const;

        /// Constructs an instance of AdjustmentRule class that represents a time adjustment rule described with the specified parameters.
        /// @param date_start The date and time when the adjustment rule comes into effect.
        /// @param date_end The date and time when the adjustment rule stops being effectvie.
        /// @param daylight_delta The amount of time required to form the daylight saving time of the time zone.
        /// @param daylight_transition_start The information about transition from daylight saving time to standard time.
        /// @param daylight_transition_end The information about transition from standard time to daylight saving time.
        /// @returns An instance of AdjustmentRule class that represents the described time zone adjustment rule.
        static ASPOSECPP_SHARED_API AdjustmentRulePtr CreateAdjustmentRule(
            const DateTime& date_start,
            const DateTime& date_end,
            TimeSpan daylight_delta,
            const TransitionTime& daylight_transition_start,
            const TransitionTime& daylight_transition_end);

        /// Constructs an instance of AdjustmentRule class that represents a time adjustment rule described with the specified parameters.
        /// @param date_start The date and time when the adjustment rule comes into effect.
        /// @param date_end The date and time when the adjustment rule stops being effectvie.
        /// @param daylight_delta The amount of time required to form the daylight saving time of the time zone.
        /// @param daylight_transition_start The information about transition from daylight saving time to standard time.
        /// @param daylight_transition_end The information about transition from standard time to daylight saving time.
        /// @param base_utc_offset_delta The delta from the default UTC offset.
        /// @param no_daylight_transitions Specifies wheter the adjustment rule assumes the transition to daylight saving time.
        /// @returns An instance of AdjustmentRule class that represents the described time zone adjustment rule.
        static ASPOSECPP_SHARED_API AdjustmentRulePtr CreateAdjustmentRule(
            const DateTime& date_start,
            const DateTime& date_end,
            TimeSpan daylight_delta,
            const TransitionTime& daylight_transition_start,
            const TransitionTime& daylight_transition_end,
            TimeSpan base_utc_offset_delta,
            bool no_daylight_transitions);

        ASPOSECPP_SHARED_API bool Equals(AdjustmentRulePtr other) override;
        ASPOSECPP_SHARED_API int GetHashCode() const override;

    private:
        /// The date and time when the adjustment rule comes into effect.
        DateTime m_date_start;
        /// The date and time when the adjustment rule stops being effectvie.
        DateTime m_date_end;
        /// The amount of time required to form the daylight saving time of the time zone.
        TimeSpan m_daylight_delta;
        /// The information about transition from daylight saving time to standard time.
        TransitionTime m_daylight_transition_start;
        /// The information about transition from standard time to daylight saving time.
        TransitionTime m_daylight_transition_end;
        /// Delta from the default UTC offset (utc_offset = default_utc_offset + m_base_utc_offset_delta)
        TimeSpan m_base_utc_offset_delta;
        /// Indicates wheter the adjustment rule assumes the transition to daylight saving time.
        bool m_no_daylight_transitions;

        /// Constructor.
        ASPOSECPP_SHARED_API AdjustmentRule(const DateTime& date_start, const DateTime& date_end, const TimeSpan& daylight_delta,
            const TransitionTime& daylight_transition_start, const TransitionTime& daylight_transition_end,
            const TimeSpan& base_utc_offset_delta, bool no_daylight_transitions);

        /// Verify constructor arguments.
        static void VerifyAdjustmentRule(const DateTime& date_start, const DateTime& date_end, const TimeSpan& daylight_delta,
            const TransitionTime& daylight_transition_start, const TransitionTime& daylight_transition_end, bool no_daylight_transitions);
    };

    /// Returns an instance of TimeZoneInfo that represents a UTC time zone.
    static ASPOSECPP_SHARED_API TimeZoneInfoPtr get_Utc();
    /// Returns an instance of TimeZoneInfo that represents a local time zone.
    static ASPOSECPP_SHARED_API TimeZoneInfoPtr get_Local();

    /// Gets flag indicating if time zone has daylight saving time rules
    ASPOSECPP_SHARED_API bool get_SupportsDaylightSavingTime() const;
    /// Returns an instance of TimeSpan that represents a time interval between the current time zone's standard time and UTC time.
    ASPOSECPP_SHARED_API TimeSpan get_BaseUtcOffset() const;
    /// Gets name for the current time zone's daylight saving time.
    ASPOSECPP_SHARED_API String get_DaylightName() const;
    /// Gets name for the current time zone's standart time.
    ASPOSECPP_SHARED_API String get_StandardName() const;
    /// Gets name for the current time zone.
    ASPOSECPP_SHARED_API String get_DisplayName() const;
    /// Returns the identifier of the time zone represented by the current object.
    ASPOSECPP_SHARED_API String get_Id() const;

    /// Clear cached time zone data.
    static ASPOSECPP_SHARED_API void ClearCachedData();
    /// Convert time from one time zone to another.
    /// @param date_time Date and time to convert.
    /// @param source_time_zone Source time zone.
    /// @param destination_time_zone Destination time zone.
    /// @return Converted date and time.
    static ASPOSECPP_SHARED_API DateTime ConvertTime(const DateTime& date_time, const TimeZoneInfoPtr& source_time_zone, const TimeZoneInfoPtr& destination_time_zone);
    /// Convert time to the time in a specified time zone.
    /// @param date_time_offset Date and time to convert.
    /// @param destination_time_zone Destination time zone.
    /// @return Converted date and time.
    static ASPOSECPP_SHARED_API DateTimeOffset ConvertTime(const DateTimeOffset& date_time_offset, const TimeZoneInfoPtr& destination_time_zone);
    /// Convert time to the time in a specified time zone.
    /// @param date_time Date and time to convert.
    /// @param destination_time_zone Destination time zone.
    /// @return Converted date and time.
    static ASPOSECPP_SHARED_API DateTime ConvertTime(const DateTime& date_time, const TimeZoneInfoPtr& destination_time_zone);
    /// Convert time to the time in a specified time zone.
    /// @param date_time Date and time to convert.
    /// @param destination_time_zone_id Identifier of the destination time zone.
    /// @return Converted date and time.
    static ASPOSECPP_SHARED_API DateTime ConvertTimeBySystemTimeZoneId(const DateTime& date_time, const String& destination_time_zone_id);
    /// Convert time to the time in a specified time zone.
    /// @param date_time_offset Date and time to convert.
    /// @param destination_time_zone_id Identifier of the destination time zone.
    /// @return Converted date and time. 
    static ASPOSECPP_SHARED_API DateTimeOffset ConvertTimeBySystemTimeZoneId(const DateTimeOffset& date_time_offset, const String& destination_time_zone_id);
    /// Convert time to the time in a specified time zone.
    /// @param date_time Date and time to convert.
    /// @param source_time_zone_id Identifier of the source time zone.
    /// @param destination_time_zone_id Identifier of the destination time zone.
    /// @return Converted date and time. 
    static ASPOSECPP_SHARED_API DateTime ConvertTimeBySystemTimeZoneId(const DateTime& date_time, const String& source_time_zone_id, const String& destination_time_zone_id);
    /// Converts UTC-time to the time in a specified time zone.
    /// @param date_time Date and time to convert.
    /// @param destination_time_zone Destination time zone.
    /// @return Converted date and time. 
    static ASPOSECPP_SHARED_API DateTime ConvertTimeFromUtc(const DateTime& date_time, const TimeZoneInfoPtr& destination_time_zone);
    /// Converts time to UTC-time.
    /// @param date_time Date and time to convert.
    /// @param source_time_zone Source time zone.
    /// @return Converted date and time. 
    static ASPOSECPP_SHARED_API DateTime ConvertTimeToUtc(const DateTime& date_time, const TimeZoneInfoPtr& source_time_zone);
    /// Converts time to UTC-time.
    /// @param date_time Date and time to convert.
    /// @return Converted date and time. 
    static ASPOSECPP_SHARED_API DateTime ConvertTimeToUtc(const DateTime& date_time);
    /// Converts time to UTC-time. FOR INTERNAL USE.
    /// @param date_time Date and time to convert.
    /// @return Converted date and time. 
    static DateTime ConvertTimeToUtcNoThrow(const DateTime& date_time);
    /// Creates a custom time zone.
    /// @param id Time zone identifier.
    /// @param base_utc_offset Time interval between the current time zone's standard time and UTC time.
    /// @param display_name Display name.
    /// @param standard_display_name Standard time name.
    /// @param daylight_display_name Daylight saving time name.
    /// @param adjustment_rules Array of adjustment rules.
    /// @param disable_daylight_saving_time True to discard any daylight saving time information present in adjustment_rules.
    /// @return New time zone.
    static ASPOSECPP_SHARED_API TimeZoneInfoPtr CreateCustomTimeZone(const String& id, const TimeSpan& base_utc_offset, const String& display_name, const String& standard_display_name, const String& daylight_display_name, const ArrayPtr<AdjustmentRulePtr>& adjustment_rules, bool disable_daylight_saving_time);
    /// Creates a custom time zone.
    /// @param id Time zone identifier.
    /// @param base_utc_offset Time interval between the current time zone's standard time and UTC time.
    /// @param display_name Display name.
    /// @param standard_display_name Standard time name.
    /// @param daylight_display_name Daylight saving time name.
    /// @param adjustment_rules Array of adjustment rules.
    /// @return New time zone.
    static ASPOSECPP_SHARED_API TimeZoneInfoPtr CreateCustomTimeZone(const String& id, const TimeSpan& base_utc_offset, const String& display_name, const String& standard_display_name, const String& daylight_display_name, const ArrayPtr<AdjustmentRulePtr>& adjustment_rules);
    /// Creates a custom time zone.
    /// @param id Time zone identifier.
    /// @param base_utc_offset Time interval between the current time zone's standard time and UTC time.
    /// @param display_name Display name.
    /// @param standard_display_name Standard time name.
    /// @return New time zone.
    static ASPOSECPP_SHARED_API TimeZoneInfoPtr CreateCustomTimeZone(const String& id, const TimeSpan& base_utc_offset, const String& display_name, const String& standard_display_name);
    /// Gets time zone with specified identifier.
    /// @param id Time zone identifier.
    /// @return Time zone with specified identifier.
    static ASPOSECPP_SHARED_API TimeZoneInfoPtr FindSystemTimeZoneById(const String& id);
    /// Gets sorted collection of all time zones available on the local system.
    /// @return Collection of TimeZoneInfo objects.
    static ASPOSECPP_SHARED_API SharedPtr<System::Collections::ObjectModel::ReadOnlyCollection<TimeZoneInfoPtr>> GetSystemTimeZones();

    /// Returns an array consisting of AdjustmentRule objects that represent adjustment rules that apply to the current TimeZoneInfo object.
    ASPOSECPP_SHARED_API ArrayPtr<AdjustmentRulePtr> GetAdjustmentRules() const;
    /// Gets UTC dates and times that a specified date and time can be mapped to.
    /// @param date_time Date and time.
    /// @return Array of UTC dates and times.
    ASPOSECPP_SHARED_API ArrayPtr<TimeSpan> GetAmbiguousTimeOffsets(const DateTime& date_time) const;
    /// Gets UTC dates and times that a specified date and time can be mapped to.
    /// @param date_time_offset Date and time.
    /// @return Array of UTC dates and times.
    ASPOSECPP_SHARED_API ArrayPtr<TimeSpan> GetAmbiguousTimeOffsets(const DateTimeOffset& date_time_offset) const;
    /// Calculates difference between time in this time zone and UTC time zone for a specified date and time.
    /// @param date_time Date and time.
    /// @return Time difference between time zones.
    ASPOSECPP_SHARED_API TimeSpan GetUtcOffset(const DateTime& date_time) const;
    /// Calculates difference between time in this time zone and UTC time zone for a specified date and time. FOR INTERNAL USE.
    /// @param date_time Date and time.
    /// @return Time difference between time zones.
    TimeSpan GetUtcOffsetNoThrow(const DateTime& date_time) const;
    /// Calculates difference between time in this time zone and UTC time zone for a specified date and time.
    /// @param date_time_offset Date and time.
    /// @return Time difference between time zones.
    ASPOSECPP_SHARED_API TimeSpan GetUtcOffset(const DateTimeOffset& date_time_offset) const;
    /// Checks if current and another time zones have the same adjustment rules.
    /// @param other Time zone info.
    /// @return True if time zones have identical adjustment rules.
    ASPOSECPP_SHARED_API bool HasSameRules(const TimeZoneInfoPtr& other) const;
    /// Checks if specified date and time is ambiguous and can be mapped to many UTC times.
    /// @param date_time Date and Time.
    /// @return True if date_time is ambiguous.
    ASPOSECPP_SHARED_API bool IsAmbiguousTime(const DateTime& date_time) const;
    /// Checks if specified date and time is ambiguous and can be mapped to many UTC times.
    /// @param date_time_offset Date and Time.
    /// @return True if date_time is ambiguous.
    ASPOSECPP_SHARED_API bool IsAmbiguousTime(const DateTimeOffset& date_time_offset) const;
    /// Checks if specified date and time falls in range of daylight saving time.
    /// @param date_time Date and Time.
    /// @return True if date_time is a daylight saving time.
    ASPOSECPP_SHARED_API bool IsDaylightSavingTime(const DateTime& date_time) const;
    /// Checks if specified date and time falls in range of daylight saving time.
    /// @param date_time Date and Time.
    /// @return True if date_time is a daylight saving time.
    ASPOSECPP_SHARED_API bool IsDaylightSavingTimeNoThrow(const DateTime& date_time) const;
    /// Checks if specified date and time falls in range of daylight saving time.
    /// @param date_time_offset Date and Time.
    /// @return True if date_time is a daylight saving time.
    ASPOSECPP_SHARED_API bool IsDaylightSavingTime(const DateTimeOffset& date_time_offset) const;
    /// Checks if specified date and time is invalid.
    /// @param date_time Date and Time.
    /// @return True is date_time is invalid.
    ASPOSECPP_SHARED_API bool IsInvalidTime(const DateTime& date_time) const;

    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> obj) override;
    ASPOSECPP_SHARED_API bool Equals(TimeZoneInfoPtr other) override;
    ASPOSECPP_SHARED_API int GetHashCode() const override;
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;

    /// Internal helper function that returns the UTC offset for a UTC-datetime in a specified time zone. FOR INTERNAL USE.
    static TimeSpan GetUtcOffsetFromUtc(const DateTime& time, const TimeZoneInfoPtr& zone);

    /// Internal helper function that returns the UTC offset for a UTC-datetime in a specified time zone. FOR INTERNAL USE.
    static TimeSpan GetUtcOffsetFromUtc(const DateTime& time, const TimeZoneInfoPtr& zone, bool& is_daylight_savings, bool& is_ambiguous_local_dst);

protected:
    /// The identifier of the time zone.
    const String m_id;
    /// The display name for the time zone.
    const String m_display_name;
    /// The display name for the standard time of the time zone.
    const String m_standard_display_name;
    /// The dispaly name for the daylight saving time of the time zone.
    const String m_daylight_display_name;
    /// A time interval between the current time zone's standard time and UTC time.
    const TimeSpan m_base_utc_offset;
    /// Indicates whether the time zone represented by the current object assumes transition to daylight saving time.
    const bool m_supports_daylight_saving_time;
    /// Adjustment rules that apply to the current time zone.
    mutable System::Details::Lazy<ArrayPtr<AdjustmentRulePtr>> m_adjustment_rules;
    /// ICU Time zone.
    const std::unique_ptr<const icu::BasicTimeZone> m_icu_time_zone;
    /// Time zone kind (UTC, Local or Unspecified).
    const DateTimeKind m_time_zone_kind;

    /// Constructs an instance of TimeZoneInfo.
    /// @param id The identifier of the time zone represented by the object being constructed.
    /// @param base_utc_offset A time interval between the time zone's standard time and UTC time
    /// @param display_name The display name for the time zone represented by the object being constructed.
    /// @param standard_display_name The display name for the standard time of the time zone represented by the object being constructed.
    /// @param daylight_display_name The dispaly name for the daylight saving time of the time zone reprsented by the object being constructed.
    /// @param adjustment_rules The array containing the AdjustmentRule objects representing adjustment rules that apply to the time zone represented by the object being created.
    /// @param disable_daylight_saving_time Specifies whether the time zone represented by the object being constructed assumes transition to daylight saving time.
    TimeZoneInfo(
        const String& id,
        const TimeSpan& base_utc_offset,
        const String& display_name,
        const String& standard_display_name,
        const String& daylight_display_name,
        const ArrayPtr<AdjustmentRulePtr>& adjustment_rules,
        bool disable_daylight_saving_time,
        std::unique_ptr<const icu::BasicTimeZone>&& icu_time_zone,
        DateTimeKind time_zone_kind = DateTimeKind::Unspecified);

    /// Convert time from one time zone to another.
    /// @param date_time Date and time to convert.
    /// @param source_time_zone Source time zone.
    /// @param destination_time_zone Destination time zone.
    /// @param throw_on_invalid_time Throws exception in @p date_time is invalid.
    /// @return Converted date and time.
    static DateTime ConvertTime(const DateTime& date_time, const TimeZoneInfoPtr& source_time_zone, const TimeZoneInfoPtr& destination_time_zone, bool throw_on_invalid_time);

    /// Verify time zone information.
    static void VerifyTimeZoneInfo(const String& id, const TimeSpan& base_utc_offset, const ArrayPtr<AdjustmentRulePtr>& adjustment_rules);

    const ArrayPtr<AdjustmentRulePtr>& AdjustmentRules() const;
};

} // namespace System
