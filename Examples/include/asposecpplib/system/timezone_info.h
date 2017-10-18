#pragma once
#include "system/object.h"
#include "system/date_time.h"
#include "system/timespan.h"

namespace System
{
    class TimeZoneInfo;
    typedef SharedPtr<TimeZoneInfo> TimeZoneInfoPtr;

    class TimeZoneInfo : public System::Object
    {
    public:
        class TransitionTime
        {
            DateTime m_timeOfDay;
            uint8_t m_month;
            uint8_t m_week;
            uint8_t m_day;
            DayOfWeek m_dayOfWeek;
            bool m_isFixedDateRule;

        public:

            DateTime get_TimeOfDay()
            {
                return m_timeOfDay;
            }

            int get_Month()
            {
                return (int)m_month;
            }
            
            int get_Week()
            {
                return (int)m_week;
            }

            int get_Day()
            {
                return (int)m_day;
            }

            DayOfWeek get_DayOfWeek()
            {
                return m_dayOfWeek;
            }

            bool get_IsFixedDateRule()
            {
                return m_isFixedDateRule;
            }

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
        typedef SharedPtr<AdjustmentRule> AdjustmentRulePtr;
        typedef ArrayPtr<System::SharedPtr<AdjustmentRule>>  AdjustmentRulesArray;

        class AdjustmentRule : public System::Object
        {
            DateTime m_dateStart;
            DateTime m_dateEnd;
            TimeSpan m_daylightDelta;
            TransitionTime m_daylightTransitionStart;
            TransitionTime m_daylightTransitionEnd;
            TimeSpan m_baseUtcOffsetDelta;   // delta from the default Utc offset (utcOffset = defaultUtcOffset + m_baseUtcOffsetDelta)
            bool m_noDaylightTransitions;
        public:
            DateTime  get_DateStart() { return m_dateStart;  };
            DateTime  get_DateEnd() { return m_dateEnd;  };
            TimeSpan get_DaylightDelta() { return m_daylightDelta;  };
            TransitionTime get_DaylightTransitionStart() { return m_daylightTransitionStart;  };
            TransitionTime get_DaylightTransitionEnd() { return m_daylightTransitionEnd;  };
        protected:
            AdjustmentRule();
            TimeSpan get_BaseUtcOffsetDelta();

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
        };


        AdjustmentRulesArray GetAdjustmentRules() { return m_adjustmentRules;  };
        String get_Id() { return m_id;  };
        TimeSpan get_BaseUtcOffset() { return m_baseUtcOffset;  };

        static TimeZoneInfoPtr get_Local();

        TimeZoneInfo(
            const String& id,
            const TimeSpan& baseUtcOffset,
            const String& displayName,
            const String& standardDisplayName,
            const String& daylightDisplayName,
            AdjustmentRulesArray adjustmentRules,
            bool disableDaylightSavingTime);

    protected:
        System::String m_id;
        System::String m_displayName;
        System::String m_standardDisplayName;
        System::String m_daylightDisplayName;
        System::TimeSpan m_baseUtcOffset;
        bool m_supportsDaylightSavingTime;
        AdjustmentRulesArray m_adjustmentRules;


    };

} // namespace System
