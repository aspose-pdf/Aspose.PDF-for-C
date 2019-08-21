/// @file system/globalization/gregorian_calendar.h
#pragma once

#include <system/globalization/calendar.h>
#include <system/globalization/gregorian_calendar_types.h>
#include <system/details/icu_namespace.h>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <unicode/calendar.h>
#endif

/// Begins an ICU namspace scope.
ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START {
    /// Calendar ICU class forward declaration.
    ASPOSECPP_3RD_PARTY_CLASS(Calendar);
}

namespace System { namespace Globalization {

class GregorianCalendar;
/// GregorianCalendar pointer type.
typedef SharedPtr<GregorianCalendar> GregorianCalendarPtr;

/// Gregorian calendar.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS GregorianCalendar : public Calendar
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::GregorianCalendar, ::System::BaseTypesInfo<System::Globalization::Calendar>)

    /// Allows construction using MakeObject().
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructs specific gregorian calendar.
    /// @param type Type of calendar to construct.
    ASPOSECPP_SHARED_API GregorianCalendar(GregorianCalendarTypes type = GregorianCalendarTypes::Localized);

public:
    using Calendar::GetMonthsInYear;
    using Calendar::GetDaysInYear;
    using Calendar::GetDaysInMonth;
    using Calendar::GetLeapMonth;
    using Calendar::IsLeapDay;
    using Calendar::IsLeapMonth;
    using Calendar::IsLeapYear;
    using Calendar::ToDateTime;

    /// Current era.
    static constexpr int ADEra = 1;

    /// Gets Gregorian calendar type.
    /// @return Calendar type.
    virtual ASPOSECPP_SHARED_API GregorianCalendarTypes get_CalendarType() const;

    /// Sets Gregorian calendar type.
    /// @param value Calendar type.
    virtual ASPOSECPP_SHARED_API void set_CalendarType(GregorianCalendarTypes value);

    ASPOSECPP_SHARED_API CalendarAlgorithmType get_AlgorithmType() const override;
    ASPOSECPP_SHARED_API DateTime get_MinSupportedDateTime() const override;
    ASPOSECPP_SHARED_API DateTime get_MaxSupportedDateTime() const override;
    ASPOSECPP_SHARED_API ArrayPtr<int> get_Eras() const override;
    ASPOSECPP_SHARED_API int GetMonthsInYear(int year, int era) const override;
    ASPOSECPP_SHARED_API int GetDaysInYear(int year, int era) const override;
    ASPOSECPP_SHARED_API int GetDaysInMonth(int year, int month, int era) const override;
    ASPOSECPP_SHARED_API int GetDayOfYear(const DateTime &time) const override;
    ASPOSECPP_SHARED_API DayOfWeek GetDayOfWeek(const DateTime& time) const override;
    ASPOSECPP_SHARED_API int GetEra(const DateTime& time) const override;
    ASPOSECPP_SHARED_API int GetYear(const DateTime& time) const override;
    ASPOSECPP_SHARED_API int GetMonth(const DateTime& time) const override;
    ASPOSECPP_SHARED_API int GetDayOfMonth(const DateTime& time) const override;
    ASPOSECPP_SHARED_API int GetLeapMonth(int year, int era) const override;
    ASPOSECPP_SHARED_API bool IsLeapYear(int year, int era) const override;
    ASPOSECPP_SHARED_API bool IsLeapMonth(int year, int month, int era) const override;
    ASPOSECPP_SHARED_API bool IsLeapDay(int year, int month, int day, int era) const override;
    ASPOSECPP_SHARED_API DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era) const override;
    
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

    /// Gets default gregorian calendar instance.
    static ASPOSECPP_SHARED_API CalendarPtr GetDefaultInstance();

protected:
    Details::CalendarId get_ID() const override;
    bool IsGregorianBasedCalendar() const override;

private:
    /// Gregorian calendar type.
    GregorianCalendarTypes m_type;

    void VerifyYear(int year, int era) const override;
    void VerifyMonth(int year, int month, int era) const override;
    void VerifyDate(int year, int month, int day, int era) const override;

    int EraToIcuEra(int era) const override;
    int IcuEraToEra(int icu_era) const override;
};

}} // namespace System::Globalization
