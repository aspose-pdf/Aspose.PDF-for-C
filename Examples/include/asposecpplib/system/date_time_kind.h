/// @file system/date_time_kind.h
#pragma once

#include <system/details/enum_meta_info.h>

namespace System {

/// Enumeration values of which represent the kinds of date and time.
enum class DateTimeKind
{
    /// Unspecified kind
    Unspecified,
    /// UTC time
    Utc,
    /// Local time
    Local
};

} // namespace System

  /// Specialization for System::DateTimeKind enum.
template<>
struct EnumMetaInfo<System::DateTimeKind>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::DateTimeKind, const char16_t*>, 3>& values();
};
