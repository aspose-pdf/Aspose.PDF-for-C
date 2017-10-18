#ifndef _RegExOptions_h_
#define _RegExOptions_h_

#include "system/enum_helpers.h"

namespace System { namespace Text { namespace RegularExpressions {

    enum class RegexOptions {
        None=0,
        Compiled=1,
        CultureInvariant=2,
        ECMAScript=4,
        ExplicitCapture=8,
        IgnoreCase=16,
        IgnorePatternWhitespace=32,
        Multiline=64,
        RightToLeft=128,
        Singleline=256
    };
}}}

DECLARE_ENUM_OPERATORS(System::Text::RegularExpressions::RegexOptions);

#endif // _RegExOptions_h_

