/// @file system/globalization/daylight_time.h
#pragma once

#include <system/object.h>
#include <system/date_time.h>
#include <system/timespan.h>

namespace System { namespace Globalization {

class DaylightTime;
/// DaylightTime pointer type.
typedef SharedPtr<DaylightTime> DaylightTimePtr;

/// Period of daylight saving time.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DaylightTime : public virtual Object
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::DaylightTime, ::System::BaseTypesInfo<System::Object>)

    /// Enabling using constructors.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructor.
    /// @param start Date and time when daylight saving time begins (must be in local time).
    /// @param end Date and time when daylight saving time ends (must be in local time).
    /// @param delta Difference between standard time and daylight saving time.
    ASPOSECPP_SHARED_API DaylightTime(const DateTime& start, const DateTime& end, const TimeSpan& delta);

public:
    /// Gets date and time when daylight saving time begins.
    /// @return Date and time when daylight saving time begins (value is in local time).
    ASPOSECPP_SHARED_API DateTime get_Start() const;
    /// Gets date and time when daylight saving time ends.
    /// @return Date and time when daylight saving time ends (value is in local time).
    ASPOSECPP_SHARED_API DateTime get_End() const;
    /// Gets difference between standard time and daylight saving time.
    /// @return Difference between standard time and daylight saving time.
    ASPOSECPP_SHARED_API TimeSpan get_Delta() const;

private:
    /// Date and time when daylight saving time begins.
    const DateTime m_start;
    /// Date and time when daylight saving time ends.
    const DateTime m_end;
    /// Difference between standard time and daylight saving time.
    const TimeSpan m_delta;
};

}} // namespace System::Globalization
