#ifndef _gregorian_calendar_h_
#define _gregorian_calendar_h_

#include "calendar.h"
#include "system/details/icu_namespace.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include "unicode/calendar.h"
#include "unicode/gregocal.h"
#endif


ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START {
    ASPOSECPP_3RD_PARTY_CLASS(Calendar);
    ASPOSECPP_3RD_PARTY_CLASS(GregorianCalendar);
}


namespace System
{
    namespace Globalization
    {
        enum GregorianCalendarTypes
        {
            Localized = CalendarId::GREGORIAN,
            USEnglish = CalendarId::GREGORIAN_US,
            MiddleEastFrench = CalendarId::GREGORIAN_ME_FRENCH,
            Arabic = CalendarId::GREGORIAN_ARABIC,
            TransliteratedEnglish = CalendarId::GREGORIAN_XLIT_ENGLISH,
            TransliteratedFrench = CalendarId::GREGORIAN_XLIT_FRENCH
        };

        class GregorianCalendar : public Calendar
        {
            FRIEND_FUNCTION_System_MakeObject;
            RTTI_INFO(System::Globalization::GregorianCalendar, ::System::BaseTypesInfo<System::Globalization::Calendar>)

        public:
            GregorianCalendar();
            GregorianCalendar(GregorianCalendarTypes type);

            virtual CalendarAlgorithmType get_AlgorithmType() const;
            virtual bool IsLeapYear(int year) const;
            virtual bool IsLeapYear(int year, int era) const;
            friend SharedPtr<Calendar> Calendar::CreateInstance(icu::Calendar *ptr);

            static SharedPtr<Calendar>  GetDefaultInstance();

        protected:
            virtual int get_ID() const;
        private:
            GregorianCalendar(icu::GregorianCalendar *ptr);
            static icu::GregorianCalendar *CreateCalendar();
            icu::GregorianCalendar *m_gcalendar;
            static SharedPtr<Calendar>  m_defaultInstance;
            GregorianCalendarTypes m_type;
        };
    }
}

#endif //_gregorian_calendar_h_
