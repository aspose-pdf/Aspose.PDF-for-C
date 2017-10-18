#ifndef _aspose_system_japanese_calendar_h_
#define _aspose_system_japanese_calendar_h_

#include "calendar.h"
#include "system/exceptions.h"

namespace System {    namespace Globalization {
class JapaneseCalendar : public Calendar
{
    RTTI_INFO(System::Globalization::JapaneseCalendar, ::System::BaseTypesInfo<System::Globalization::Calendar>)

public:
    JapaneseCalendar();

    virtual CalendarAlgorithmType get_AlgorithmType() const;

    virtual bool IsLeapYear(int year) const;

    virtual bool IsLeapYear(int year, int era) const;

protected:
    virtual int get_ID() const;
};

}}


#endif
