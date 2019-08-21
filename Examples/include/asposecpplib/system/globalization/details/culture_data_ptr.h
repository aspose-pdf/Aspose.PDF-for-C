/// @file system/globalization/details/culture_data_ptr.h
#pragma once

#include <memory>

namespace System { namespace Globalization { namespace Details {

/// Forward declaring internal type.
class CultureData;

/// Pointer to hold implementation type.
using CultureDataPtr = std::shared_ptr<CultureData>;

}}} // namespace System::Globalization::Details
