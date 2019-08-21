/// @file system/uri_enum_types.h
/// Contains the declaration of supporting types for System::Uri class.
#pragma once

#include <system/enum_helpers.h>
#include <system/enum.h>
#include <cstdint>

namespace System {

/// Represents the kinds of URIs.
enum class UriKind
{
    /// Undetermined kind
    RelativeOrAbsolute = 0,
    /// Absolute URI
    Absolute = 1,
    /// Relative URI
    Relative = 2
};

/// Represents URI components.
enum class UriComponents
{
    /// The Scheme data
    Scheme = 0x1,
    /// The UserInfo data
    UserInfo = 0x2,
    /// The Host data
    Host = 0x4,
    /// The Port data
    Port = 0x8,
    /// The Scheme, Host and Port data
    SchemeAndServer = Scheme | Host | Port,
    /// The LocalPath data
    Path = 0x10,
    /// The Query data
    Query = 0x20,
    /// The LocalPath and Query data
    PathAndQuery = Path | Query,
    /// The Scheme, Host, Port, Query and LocalPath data
    HttpRequestUrl = Scheme | Host | Port | Path | Query,
    /// The Fragment data
    Fragment = 0x40,
    /// The Scheme, Host, Port, Quer, LocalPath and Fragment data
    AbsoluteUri = Scheme | UserInfo | Host | Port | Path | Query | Fragment,
    /// The Port data; if the port data not present in the Uri and a default port has been assigned to the Scheme, the default port is returned; if there is no default port, -1 is returned
    StrongPort = 0x80,
    /// The Host and Port data; if the port data is not present in the Uri and a default port has been assigned to the Scheme, the default port is returned. If there is no default port, -1 is returned.
    HostAndPort = Host | StrongPort,
    /// The UserInfo, Host, and Port data.If no port data is in the Uri and a default port has been assigned to the Scheme, the default port is returned.If there is no default port, -1 is returned.
    StrongAuthority = UserInfo | Host | StrongPort,
    NormalizedHost = 0x100,
    /// Specifies that the delimiter should be included
    KeepDelimiter = 0x40000000,
    /// The complete Uri context that is needed for Uri Serializers. The context includes the IPv6 scope.
    SerializationInfoString = static_cast<int32_t>(0x80000000)
};

DECLARE_ENUM_OPERATORS(System::UriComponents);
DECLARE_USING_GLOBAL_OPERATORS

/// Specifies how the URI is escaped
enum class UriFormat
{
    /// Escaping according to RFC-2396
    UriEscaped = 1,
    /// No escaping
    Unescaped = 2,
    /// Only the characters that have a reserved meaning in the URI are escaped.
    SafeUnescaped = 3
};

DECLARE_ENUM_OPERATORS(System::UriFormat);
DECLARE_USING_GLOBAL_OPERATORS

} // namespace System

template<>
struct EnumMetaInfo<System::UriKind>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::UriKind, const char_t*>, 3>& values();
};
template<>
struct EnumMetaInfo<System::UriComponents>
{
    typedef void Flags;
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::UriComponents, const char_t*>, 17>& values();
};
template<>
struct EnumMetaInfo<System::UriFormat>
{
    typedef void Flags;
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::UriFormat, const char_t*>, 3>& values();
};
