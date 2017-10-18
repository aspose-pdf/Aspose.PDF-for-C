#ifndef _aspose_drawing_string_alignment_h_
#define _aspose_drawing_string_alignment_h_

#include "system/enum.h"

namespace System {
    namespace Drawing {

        enum class StringAlignment
        {
            Near = 0,

            Center = 1,

            Far = 2
        };
    }
}

template<>
struct EnumMetaInfo<System::Drawing::StringAlignment>
{
    static const std::array<std::pair<System::Drawing::StringAlignment, const char_t*>, 3>& values();
};
#endif