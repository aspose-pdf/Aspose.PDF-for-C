/// @file system/string_comparison.h
#ifndef _string_comparison_h_
#define _string_comparison_h_

#include "fwd.h"
#include "defines.h"

#include <array>

namespace System {

/// Defines string comparison style.
enum class StringComparison {
    /// Use current culture.
    CurrentCulture = 0,
    /// Use current culture, but ignore case.
    CurrentCultureIgnoreCase = 1,
    /// Use invariant culture.
    InvariantCulture = 2,
    /// Use invariant culture, but ignore case.
    InvariantCultureIgnoreCase = 3,
    /// Use ordinal sort rules.
    Ordinal = 4,
    /// Use ordinal sort rules, but ignore case.
    OrdinalIgnoreCase = 5,
};

}

/// Defines string representations of StringComparison enum values.
template<>
struct EnumMetaInfo<System::StringComparison>
{
    /// Returns a array of pairs that associate System::StringComparison enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::StringComparison, const char_t*>, 6>& values();
};

#endif
