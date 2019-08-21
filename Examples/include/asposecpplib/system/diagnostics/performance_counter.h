/// @file system/diagnostics/performance_counter.h
#ifndef _performance_counter_h_
#define _performance_counter_h_

#include <system/object.h>

#include "fwd.h"
#include "system/string.h"


namespace System
{
namespace Diagnostics
{

/// Dummy class for PerformanceCounter-using ported code to compile.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS PerformanceCounter : public System::Object // Component, ISupportInitialize
{
public:
    /// Creates performance counter.
    ASPOSECPP_SHARED_API PerformanceCounter();
    /// Creates performance counter of specific category.
    ASPOSECPP_SHARED_API PerformanceCounter(const String& category_name, const String& counter_name);
    /// Creates performance counter of specific category and instance name.
    ASPOSECPP_SHARED_API PerformanceCounter(const String& category_name, const String& counter_name, const String& instance_name, const String& machine_name);

    /// Gets next measured value.
    ASPOSECPP_SHARED_API float NextValue();
    /// Stops all performance counting operations.
    ASPOSECPP_SHARED_API void Close();
};

}
}
#endif
