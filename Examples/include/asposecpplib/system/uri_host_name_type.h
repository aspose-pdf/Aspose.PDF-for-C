/// @file system/uri_host_name_type.h
/// Contains the declaration of System::UriHostNameType enum and supporting types.
#pragma once

#include <system/enum.h>

namespace System {

/// Represents the type of host name.
enum class UriHostNameType
{
    /// The host name type is not supplied
    Unknown = 0,
    /// The name is set but its type cannot be determined
    Basic = 1,
    /// DNS name
    Dns = 2,
    /// IPv4 address
    IPv4 = 3,
    /// IPv6 address
    IPv6 = 4
};

} // namespace System

template<>
struct EnumMetaInfo<System::UriHostNameType>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::UriHostNameType, const char_t*>, 5>& values();
};
