/// @file system/uri_parser.h
/// Contains the declaration of System::UriParser class and supporting types.
#pragma once

#include <system/string.h>

namespace System {

class UriParser
{
public:
    /// Indicates whether the parser for a scheme is registered
    /// @param schemeName The scheme name to check
    /// @returns True if @p schemeName has been registered; otherwise, false
    static ASPOSECPP_SHARED_API bool IsKnownScheme(const String& schemeName);

    ASPOSECPP_SHARED_API UriParser() = delete;
};

} // namespace System
