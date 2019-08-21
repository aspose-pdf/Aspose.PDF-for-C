/// @file system/globalization/east_asian_lunisolar_calendar.h
#pragma once

#include <system/globalization/calendar.h>

namespace System { namespace Globalization {

class EastAsianLunisolarCalendar;
/// EastAsianLunisolarCalendar pointer type.
typedef SharedPtr<EastAsianLunisolarCalendar> EastAsianLunisolarCalendarPtr;

/// East-asian lunisolar calendar.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS EastAsianLunisolarCalendar : public Calendar
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::EastAsianLunisolarCalendar, ::System::BaseTypesInfo<System::Globalization::Calendar>)

public:
    ASPOSECPP_SHARED_API CalendarAlgorithmType get_AlgorithmType() const override;

    /// Gets celestial stem.
    /// @param sexagenaryYear Number from 1 through 60.
    /// @return Number from 1 through 10.
    ASPOSECPP_SHARED_API int GetCelestialStem(int sexagenaryYear) const;
    /// Gets terrestrial branch.
    /// @param sexagenaryYear Number from 1 through 60.
    /// @return Number from 1 through 12.
    ASPOSECPP_SHARED_API int GetTerrestrialBranch(int sexagenaryYear) const;

    /// Gets the year in the sexagenary cycle.
    /// @param time DateTime object.
    /// @return Number from 1 through 60.
    virtual ASPOSECPP_SHARED_API int GetSexagenaryYear(const DateTime& time) const;

protected:
    ASPOSECPP_SHARED_API EastAsianLunisolarCalendar() = default;
    EastAsianLunisolarCalendar(std::unique_ptr<icu::Calendar>&& calendar);
};

}} // namespace System::Globalization
