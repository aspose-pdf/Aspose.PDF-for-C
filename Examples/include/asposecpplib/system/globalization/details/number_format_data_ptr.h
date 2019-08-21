/// @file system/globalization/details/number_format_data_ptr.h
#pragma once

#include <memory>

namespace System { namespace Globalization { namespace Details {

/// Forward declaring internal type.
class NumberFormatData;

/// Pointer to hold implementation type.
using NumberFormatDataPtr = std::shared_ptr<NumberFormatData>;

}}} // namespace System::Globalization::Details
