#ifndef _timezone_h_
#define _timezone_h_
#include "system/object.h"
#include "system/date_time.h"
#include "system/timespan.h"

namespace System
{
    class TimeZone;
    typedef SharedPtr<TimeZone> TimeZonePtr;

    class TimeZone : public System::Object
    {
    public:
        virtual String get_DaylightName() const = 0;
        virtual String get_StandardName() const = 0;

        // at the moment GetUtcOffset works only for DateTime::Now
        virtual TimeSpan GetUtcOffset(DateTime time) = 0;
        virtual bool IsDaylightSavingTime(DateTime time) = 0;

        static TimeZonePtr get_CurrentTimeZone();

    protected:
        TimeZone();
    };

} // namespace System
#endif // _timezone_h_
