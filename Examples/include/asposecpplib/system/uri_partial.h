/// @file system/uri_partial.h
/// Contains the declaration of System::UriPartial enum and supporting types.
#pragma once

#include <system/enum.h>

namespace System {

/// Represents the parts of a URI for the Uri.GetLeftPart method.
enum class UriPartial
{
    /// The scheme component of the URI
    Scheme = 0,
    /// The scheme and authority components of the URI
    Authority = 1,
    /// The scheme, authority and path components of the URI
    Path = 2,
    /// The scheme, authority, path and query components of the URI
    Query = 3
};

} // namespace System

template<>
struct EnumMetaInfo<System::UriPartial>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::UriPartial, const char_t*>, 4>& values();
};
