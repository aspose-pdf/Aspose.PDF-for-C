#ifndef _aspose_system_thai_buddhist_calendar_h_
#define _aspose_system_thai_buddhist_calendar_h_

#include "calendar.h"
#include "system/exceptions.h"

namespace System { namespace Globalization {
class ThaiBuddhistCalendar : public Calendar
{
    RTTI_INFO(System::Globalization::ThaiBuddhistCalendar, ::System::BaseTypesInfo<System::Globalization::Calendar>)

public:
    ThaiBuddhistCalendar();

    virtual CalendarAlgorithmType get_AlgorithmType() const;

    virtual bool IsLeapYear(int year) const;

    virtual bool IsLeapYear(int year, int era) const;

    virtual int get_ID() const;

};

}}

#endif
