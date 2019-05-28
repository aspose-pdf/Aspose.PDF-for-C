/// @file system/details/calendar_data_ptr.h
#pragma once
#include <memory>

namespace System
{
namespace Globalization
{
namespace Details
{

/// Forward declaring internal type.
class CalendarData;

/// Pointer to hold implementation type.
using CalendarDataPtr = std::shared_ptr<CalendarData>;

}
}
}

