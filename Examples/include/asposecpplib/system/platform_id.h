/// @file system/platform_id.h
/// Contains the declaration of System::PlatformID enum.
#ifndef _platform_id_h_
#define _platform_id_h_

#include  <system/enum.h>

namespace System {

/// Represents an operating system platform. 
enum class PlatformID {
    /// Win32S layer
    Win32S = 0,
    /// Windows 95 or Windows 98
    Win32Windows = 1,
    /// Windows NT or later
    Win32NT = 2,
    /// Windows CE
    WinCE = 3,
    /// Unix
    Unix = 4,
    /// Xbox
    Xbox = 5,
    /// Macintosh
    MacOSX = 6
};

}

template<>
struct EnumMetaInfo<System::PlatformID>
{
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::PlatformID, const char_t*>, 7>& values();
};

#endif
