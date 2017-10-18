#ifndef _aspose_system_korean_calendar_h_
#define _aspose_system_korean_calendar_h_

#include "calendar.h"
#include "system/exceptions.h"

namespace System { namespace Globalization {
class KoreanCalendar : public Calendar
{
    RTTI_INFO(System::Globalization::KoreanCalendar, ::System::BaseTypesInfo<System::Globalization::Calendar>)

public:
    KoreanCalendar();

    virtual CalendarAlgorithmType get_AlgorithmType() const;

    virtual bool IsLeapYear(int year) const;

    virtual bool IsLeapYear(int year, int era) const;

protected:
    virtual int get_ID() const;
};

}}

#endif
