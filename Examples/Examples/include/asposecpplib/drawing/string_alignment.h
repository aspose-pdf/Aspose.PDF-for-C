/// @file drawing/string_alignment.h
#ifndef _aspose_drawing_string_alignment_h_
#define _aspose_drawing_string_alignment_h_

#include "system/enum.h"

namespace System {
    namespace Drawing {
        /// Specifies the string alignment relative to its layout rectangle.
        enum class StringAlignment
        {
            /// Near.
            Near = 0,
            /// Center.
            Center = 1,
            /// Far from the origin of the layout rectangle.
            Far = 2
        };
    }
}

/// Specialization for System::Drawing::StringAlignment; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::StringAlignment>
{
    /// Returns a array of pairs that associate System::Drawing::StringAlignment enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::StringAlignment, const char_t*>, 3>& values();
};
#endif
