/// @file system/globalization/culture_types.h
#pragma once


#include "system/enum_helpers.h"


namespace System
{
namespace Globalization
{

/// Culture categories bitmask entries.
enum CultureTypes : uint32_t
{
    /// Culture that is specific for language but not for contry or region.
    NeutralCultures = 1,
    /// Specific to country/region.
    SpecificCultures = 2,
    /// Cultures installed in OS.
    InstalledWin32Cultures = 4,
    /// All avaliable cultures.
    AllCultures = 7,
    /// User-defined cultures.
    UserCustomCulture = 8,
    /// User-defined replacements for existing cultures.
    ReplacementCultures = 16,
    /// Obsolete.
    WindowsOnlyCultures = 32,
    /// Obsolete.
    FrameworkCultures = 64
};

} // namespace Globalization
} // namespace System

  /// Declaration of template arithmetic operators for values of CultureTypes enum type.
DECLARE_ENUM_OPERATORS(System::Globalization::CultureTypes)
