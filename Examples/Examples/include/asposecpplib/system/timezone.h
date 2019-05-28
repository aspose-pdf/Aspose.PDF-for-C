/// @file system/timezone.h
/// Contains the declaration System::TimeZone class.
#ifndef _timezone_h_
#define _timezone_h_
#include "system/object.h"
#include "system/date_time.h"
#include "system/timespan.h"

namespace System
{

class TimeZone;
/// Shared pointer to an instance of TimeZone class.
typedef SharedPtr<TimeZone> TimeZonePtr;

/// Represents a time zone.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TimeZone : public System::Object
{
public:
    /// Returns a name for the daylight saving time of the time zone represented by the current object.
    virtual ASPOSECPP_SHARED_API String get_DaylightName() const = 0;
    /// Returns a name for the standard time of the time zone represented by the current object.
    virtual ASPOSECPP_SHARED_API String get_StandardName() const = 0;

    // at the moment GetUtcOffset works only for DateTime::Now
    /// Returns the UTC offset for the specified local time.
    /// @param time The time to calculate the UTC offset for
    /// @returns The UTC offset for the specified local time
    virtual ASPOSECPP_SHARED_API TimeSpan GetUtcOffset(DateTime time) = 0;

    /// Determines if the date and time value represented by the specified DateTime object falls in the range of daylight saving time for the time zone represented by the current TimeZone object.
    /// @returns True if the date and time value represented by the specified DateTime object falls in the range of daylight saving time of the time zone represented by the current TimeZone object, otherwise - false
    virtual ASPOSECPP_SHARED_API bool IsDaylightSavingTime(DateTime time) = 0;

    /// Returns a new instance of TimeZone class that represents the current time zone.
    static ASPOSECPP_SHARED_API TimeZonePtr get_CurrentTimeZone();

protected:
    /// Constructs a new instance of TimZone class.
    ASPOSECPP_SHARED_API TimeZone();
};

} // namespace System
#endif // _timezone_h_
