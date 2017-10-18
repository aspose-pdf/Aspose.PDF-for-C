#ifndef _aspose_system_hijri_calendar_h_
#define _aspose_system_hijri_calendar_h_

#include "calendar.h"
#include "system/exceptions.h"

namespace System { namespace Globalization {
class HijriCalendar : public Calendar
{
    RTTI_INFO(System::Globalization::HijriCalendar, ::System::BaseTypesInfo<System::Globalization::Calendar>)

public:
    HijriCalendar();

    virtual CalendarAlgorithmType get_AlgorithmType() const;

    virtual bool IsLeapYear(int year) const;

    virtual bool IsLeapYear(int year, int era) const;

protected:
    virtual int get_ID() const;

};

}}

#endif
