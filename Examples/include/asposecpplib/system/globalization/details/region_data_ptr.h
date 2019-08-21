/// @file system/globalization/details/region_data_ptr.h
#pragma once

#include <memory>

namespace System { namespace Globalization { namespace Details {

/// Forward declaring internal type.
class RegionData;

/// Pointer to hold implementation type.
using RegionDataPtr = std::shared_ptr<RegionData>;

}}} // namespace System::Globalization::Details
