#pragma once
#include <memory>

namespace System
{
    namespace Globalization
    {
        namespace Details
        {
            class CalendarData;

            using CalendarDataPtr = std::shared_ptr<CalendarData>;
        }
    }
}

