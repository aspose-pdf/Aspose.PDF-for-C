/// @file system/details/culture_data_ptr.h
#pragma once
#include <memory>

namespace System
{
namespace Globalization
{
namespace Details
{

/// Private implementation class.
class CultureData;
/// Implementation pointer.
using CultureDataPtr = std::shared_ptr<CultureData>;

}
}
}

