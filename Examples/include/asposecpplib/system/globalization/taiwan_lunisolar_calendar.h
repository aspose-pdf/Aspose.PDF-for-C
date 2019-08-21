/// @file system/globalization/taiwan_lunisolar_calendar.h
#pragma once

#include <system/globalization/east_asian_lunisolar_calendar.h>

namespace System { namespace Globalization {

class TaiwanLunisolarCalendar;
/// TaiwanLunisolarCalendar pointer type.
typedef SharedPtr<TaiwanLunisolarCalendar> TaiwanLunisolarCalendarPtr;

/// Taiwan lunisolar calendar. Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TaiwanLunisolarCalendar : public EastAsianLunisolarCalendar
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::TaiwanLunisolarCalendar, ::System::BaseTypesInfo<System::Globalization::EastAsianLunisolarCalendar>)

    /// Enabling using constructors.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructor.
    ASPOSECPP_SHARED_API TaiwanLunisolarCalendar();

public:
    using Calendar::GetMonthsInYear;
    using Calendar::GetDaysInMonth;
    using Calendar::GetLeapMonth;
    using Calendar::IsLeapDay;
    using Calendar::IsLeapYear;

    ASPOSECPP_SHARED_API DateTime get_MinSupportedDateTime() const override;
    ASPOSECPP_SHARED_API DateTime get_MaxSupportedDateTime() const override;
    ASPOSECPP_SHARED_API ArrayPtr<int> get_Eras() const override;
    ASPOSECPP_SHARED_API int GetMonthsInYear(int year, int era) const override;
    ASPOSECPP_SHARED_API int GetDaysInMonth(int year, int month, int era) const override;
    ASPOSECPP_SHARED_API int GetLeapMonth(int year, int era) const override;
    ASPOSECPP_SHARED_API bool IsLeapYear(int year, int era) const override;
    ASPOSECPP_SHARED_API bool IsLeapDay(int year, int month, int day, int era) const override;
    
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

protected:
    Details::CalendarId get_ID() const override;

private:
    void VerifyYear(int year, int era) const override;
    void VerifyMonth(int year, int month, int era) const override;
    void VerifyDate(int year, int month, int day, int era) const override;

    int EraToIcuEra(int era) const override;
    int IcuEraToEra(int icuEra) const override;
};

}} // namespace System::Globalization
