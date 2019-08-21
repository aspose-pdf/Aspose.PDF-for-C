/// @file system/globalization/globalization_extensions.h
#pragma once

#include <system/string_comparer.h>
#include <system/globalization/compare_info.h>

namespace System { namespace Globalization {

/// Globalization related methods.
class GlobalizationExtensions final
{
public:
    /// Gets StringComparer object for the specified CompareInfo object and specified string comparison rules.
    /// @param compare_info CompareInfo object.
    /// @param options String comparison options.
    /// @return StringComparer object.
    static ASPOSECPP_SHARED_API StringComparerPtr GetStringComparer(const CompareInfoPtr& compare_info, CompareOptions options);
};

}} // namespace System::Globalization
