/// @file system/globalization/culture_types.h
#pragma once

#include <system/details/enum_meta_info.h>
#include <system/enum_helpers.h>

namespace System { namespace Globalization {

/// Culture categories bitmask entries.
enum class CultureTypes : int32_t
{
    /// Culture that is specific for language but not for contry or region.
    NeutralCultures = 1,
    /// Specific to country/region.
    SpecificCultures = 2,
    /// Cultures installed in OS.
    InstalledWin32Cultures = 4,
    /// All avaliable cultures.
    AllCultures = NeutralCultures | SpecificCultures | InstalledWin32Cultures, // = 7
    /// User-defined cultures.
    UserCustomCulture = 8,
    /// User-defined replacements for existing cultures.
    ReplacementCultures = 16,
    /// Obsolete.
    WindowsOnlyCultures = 32,
    /// Obsolete.
    FrameworkCultures = 64
};

}} // namespace Globalization::System

/// Declaration of template arithmetic operators for values of CultureTypes enum type.
DECLARE_ENUM_OPERATORS(System::Globalization::CultureTypes)

template<>
struct EnumMetaInfo<System::Globalization::CultureTypes>
{
    typedef void Flags;
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Globalization::CultureTypes, const char16_t*>, 8>& values();
};
