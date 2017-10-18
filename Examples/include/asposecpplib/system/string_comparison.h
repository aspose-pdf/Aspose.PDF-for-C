#ifndef _string_comparison_h_
#define _string_comparison_h_

#include "fwd.h"

#include <array>

namespace System {

    enum class StringComparison {
        //     Compare strings using culture-sensitive sort rules and the current culture.
        CurrentCulture = 0,
        //     Compare strings using culture-sensitive sort rules, the current culture, and ignoring the case of the strings being compared.
        CurrentCultureIgnoreCase = 1,
        //     Compare strings using culture-sensitive sort rules and the invariant culture.
        InvariantCulture = 2,
        //     Compare strings using culture-sensitive sort rules, the invariant culture, and ignoring the case of the strings being compared.
        InvariantCultureIgnoreCase = 3,
        //     Compare strings using ordinal sort rules.
        Ordinal = 4,
        //     Compare strings using ordinal sort rules and ignoring the case of the strings being compared.
        OrdinalIgnoreCase = 5,
    };
}

template<>
struct EnumMetaInfo<System::StringComparison>
{
    static const std::array<std::pair<System::StringComparison, const char_t*>, 6>& values();
};

#endif
