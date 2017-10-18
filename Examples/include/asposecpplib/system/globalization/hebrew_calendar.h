#ifndef _aspose_system_hebrew_calendar_h_
#define _aspose_system_hebrew_calendar_h_

#include "calendar.h"
#include "system/exceptions.h"

namespace System { namespace Globalization {
class HebrewCalendar : public Calendar
{
    RTTI_INFO(System::Globalization::HebrewCalendar, ::System::BaseTypesInfo<System::Globalization::Calendar>)

public:
    HebrewCalendar();

    virtual CalendarAlgorithmType get_AlgorithmType() const;

    virtual bool IsLeapYear(int year) const;

    virtual bool IsLeapYear(int year, int era) const;

protected:
    virtual int get_ID() const;
};
    
}}

#endif
