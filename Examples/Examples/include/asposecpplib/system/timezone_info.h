/// @file system/timezone_info.h
/// Contains the declaration System::TimeZoneInfo class.
#pragma once
#include "system/object.h"
#include "system/date_time.h"
#include "system/timespan.h"

namespace System
{

class TimeZoneInfo;
/// Alias for shared pointer to an instance of TimeZoneInfo class.
typedef SharedPtr<TimeZoneInfo> TimeZoneInfoPtr;

/// Represents an information destribing a particular time zone.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TimeZoneInfo : public System::Object
{
public:
    /// Provides information about a time change in a time zone.
    class TransitionTime
    {
        /// The specific time at which the time change occurs.
        DateTime m_timeOfDay;
        /// The month of the year at which the time change occurs.
        uint8_t m_month;
        /// The week of the month at which the time change occurs.
        uint8_t m_week;
        /// The day at which the time change occurs.
        uint8_t m_day;
        /// The day of week at which the time change occurs.
        DayOfWeek m_dayOfWeek;
        /// Value that indicates if the time change occurs at a fixed date and time or a floating date and time.
        bool m_isFixedDateRule;

    public:
        /// Returns a DateTime object that represents the specific time at which the time change occurs.
        DateTime get_TimeOfDay()
        {
            return m_timeOfDay;
        }

        /// Returns the ordinal number of the month of the year at which the time change occurs.
        int get_Month()
        {
            return (int)m_month;
        }
            
        /// Returns the ordinal number of the week of the month at which the time change occurs.
        int get_Week()
        {
            return (int)m_week;
        }

        /// Returns the ordinal number of the day of week at which the time change occurs.
        int get_Day()
        {
            return (int)m_day;
        }

        /// Returns the value that represents the day of week at which the time change occurs.
        DayOfWeek get_DayOfWeek()
        {
            return m_dayOfWeek;
        }

        /// Returns the value that indicates if the time change occurs at a fixed date and time or a floating date and time.
        /// @returns True if the time change occurs at a fixed date and time, otherwise - false
        bool get_IsFixedDateRule()
        {
            return m_isFixedDateRule;
        }

        /// Constructs an instance of TransitionTime class that represents a time change described with the specified parameters.
        /// @param timeOfDay The specific time at which the time change occurs.
        /// @param month The month of the year at which the time change occurs.
        /// @param week The week of the month at which the time change occurs.
        /// @param day The day at which the time change occurs.
        /// @param dayOfWeek The day of week at which the time change occurs.
        /// @param isFixedDateRule Value that indicates if the time change occurs at a fixed date and time or a floating date and time.
        /// @returns An istance of TransitionTime class that represents the described time change.
        static TransitionTime CreateTransitionTime(
            DateTime timeOfDay,
            int month,
            int week,
            int day,
            System::DayOfWeek dayOfWeek,
            bool isFixedDateRule) 
        {
            TransitionTime t;
            t.m_isFixedDateRule = isFixedDateRule;
            t.m_timeOfDay = timeOfDay;
            t.m_dayOfWeek = dayOfWeek;
            t.m_day = (uint8_t)day;
            t.m_week = (uint8_t)week;
            t.m_month = (uint8_t)month;

            return t;
        }

    };

    class AdjustmentRule;
    /// An alias for a shared pointer to an instance of AdjustmentRule class.
    typedef SharedPtr<AdjustmentRule> AdjustmentRulePtr;
    /// An alias for a pointer to an array of shared pointerns to instances of AdjustmentRule class.
    typedef ArrayPtr<System::SharedPtr<AdjustmentRule>>  AdjustmentRulesArray;

    /// Provides information about a time zone adjustment. 
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS AdjustmentRule : public System::Object
    {
        /// The date and time when the adjustment rule comes into effect.
        DateTime m_dateStart;
        /// The date and time when the adjustment rule stops being effectvie.
        DateTime m_dateEnd;
        /// The amount of time required to form the daylight saving time of the time zone.
        TimeSpan m_daylightDelta;
        /// The information about transition from daylight saving time to standard time.
        TransitionTime m_daylightTransitionStart;
        /// The information about transition from standard time to daylight saving time.
        TransitionTime m_daylightTransitionEnd;
        /// Delta from the default UTC offset (utcOffset = defaultUtcOffset + m_baseUtcOffsetDelta)
        TimeSpan m_baseUtcOffsetDelta;   
        /// Indicates wheter the adjustment rule assumes the transition to daylight saving time.
        bool m_noDaylightTransitions;
    public:
        /// Returns a DateTime object that represents the date and time when the adjustment rule comes into effect.
        DateTime  get_DateStart() { return m_dateStart;  };
        /// Returns a DateTime object that represents the date and time when the adjustment rule stops being effective.
        DateTime  get_DateEnd() { return m_dateEnd;  };
        /// Returns in TimeSpan object that represents the amount of time required to form the daylight saving time of the time zone.
        TimeSpan get_DaylightDelta() { return m_daylightDelta;  };
        /// Returns the information about transition from daylight saving time to standard time.
        TransitionTime get_DaylightTransitionStart() { return m_daylightTransitionStart;  };
        /// Returns the information about transition from standard time to daylight saving time.
        TransitionTime get_DaylightTransitionEnd() { return m_daylightTransitionEnd;  };

        /// Constructs an instance of AdjustmentRule class that represents a time adjustment rule described with the specified parameters.
        /// @param dateStart The date and time when the adjustment rule comes into effect.
        /// @param dateEnd The date and time when the adjustment rule stops being effectvie.
        /// @param daylightDelta The amount of time required to form the daylight saving time of the time zone.
        /// @param daylightTransitionStart The information about transition from daylight saving time to standard time.
        /// @param daylightTransitionEnd The information about transition from standard time to daylight saving time.
        /// @param noDaylightTransitions Specifies wheter the adjustment rule assumes the transition to daylight saving time.
        /// @returns An instance of AdjustmentRule class that represents the described time zone adjustment rule.
        static AdjustmentRulePtr CreateAdjustmentRule(
            DateTime dateStart,
            DateTime dateEnd,
            TimeSpan daylightDelta,
            TransitionTime daylightTransitionStart,
            TransitionTime daylightTransitionEnd,
            bool noDaylightTransitions) 
            
        {
            AdjustmentRulePtr rule = new AdjustmentRule();

            rule->m_dateStart = dateStart;
            rule->m_dateEnd = dateEnd;
            rule->m_daylightDelta = daylightDelta;
            rule->m_daylightTransitionStart = daylightTransitionStart;
            rule->m_daylightTransitionEnd = daylightTransitionEnd;
            rule->m_baseUtcOffsetDelta = TimeSpan::Zero;
            rule->m_noDaylightTransitions = noDaylightTransitions;

            return rule;
        }
    protected:
        /// Constructor.
        ASPOSECPP_SHARED_API AdjustmentRule();
        /// Returns a delta from the default UTC offset.
        ASPOSECPP_SHARED_API TimeSpan get_BaseUtcOffsetDelta();

    };

    /// Returns an array consisting of AdjustmentRule objects that represent adjustment rules that apply to the current TimeZoneInfo object.
    AdjustmentRulesArray GetAdjustmentRules() { return m_adjustmentRules;  };
    /// Returns the identifier of the time zone represented by the current object.
    String get_Id() { return m_id;  };
    /// Returns an instance of TimeSpan that represents a time interval between the current time zone's standard time and UTC time.
    TimeSpan get_BaseUtcOffset() { return m_baseUtcOffset;  };
    /// Returns an instance of TimeZoneInfo that represents a local time zone.
    static ASPOSECPP_SHARED_API TimeZoneInfoPtr get_Local();

    /// Constructs an instance of TimeZoneInfo.
    /// @param id The identifier of the time zone represented by the object being constructed.
    /// @param baseUtcOffset A time interval between the time zone's standard time and UTC time
    /// @param displayName The display name for the time zone represented by the object being constructed.
    /// @param standardDisplayName The display name for the standard time of the time zone represented by the object being constructed.
    /// @param daylightDisplayName The dispaly name for the daylight saving time of the time zone reprsented by the object being constructed.
    /// @param adjustmentRules The array containing the AdjustmentRule objects representing adjustment rules that apply to the time zone represented by the object being created.
    /// @param disableDaylightSavingTime Specifies whether the time zone represented by the object being constructed assumes transition to daylight saving time.
    ASPOSECPP_SHARED_API TimeZoneInfo(
        const String& id,
        const TimeSpan& baseUtcOffset,
        const String& displayName,
        const String& standardDisplayName,
        const String& daylightDisplayName,
        AdjustmentRulesArray adjustmentRules,
        bool disableDaylightSavingTime);

protected:
    /// The identifier of the time zone.
    System::String m_id;
    /// The display name for the time zone.
    System::String m_displayName;
    /// The display name for the standard time of the time zone.
    System::String m_standardDisplayName;
    /// The dispaly name for the daylight saving time of the time zone.
    System::String m_daylightDisplayName;
    /// A time interval between the current time zone's standard time and UTC time.
    System::TimeSpan m_baseUtcOffset;
    /// Indicates whether the time zone represented by the current object assumes transition to daylight saving time.
    bool m_supportsDaylightSavingTime;
    /// Adjustment rules that apply to the current time zone.
    AdjustmentRulesArray m_adjustmentRules;
};

} // namespace System
