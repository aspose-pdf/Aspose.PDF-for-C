/// @file system/globalization/details/date_time_format_data_ptr.h
#pragma once

#include <memory>

namespace System { namespace Globalization { namespace Details {

/// Forward declaring internal type.
class DateTimeFormatData;

/// Pointer to hold implementation type.
using DateTimeFormatDataPtr = std::shared_ptr<DateTimeFormatData>;

}}} // namespace System::Globalization::Details
