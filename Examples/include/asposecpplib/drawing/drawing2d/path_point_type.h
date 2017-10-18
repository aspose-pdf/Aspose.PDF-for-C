#ifndef _aspose_drawing_drawing2d_path_point_type_h_
#define _aspose_drawing_drawing2d_path_point_type_h_

#include "system/enum_helpers.h"

namespace System {
    namespace Drawing {
        namespace Drawing2D {

            enum class PathPointType
            {
                Start = 0,    // move

                Line = 1,    // line

                Bezier = 3,    // default Beizer (= cubic Bezier)

                PathTypeMask = 0x07, // type mask (lowest 3 bits).

                DashMode = 0x10, // currently in dash mode.

                PathMarker = 0x20, // a marker for the path.

                CloseSubpath = 0x80, // closed flag

                Bezier3 = 3,    // cubic Bezier
            };
        }
    }
}
//PathPointType enum is not marked as [Flags] attribute, but mostly used as flags
DECLARE_ENUM_OPERATORS(System::Drawing::Drawing2D::PathPointType);

#endif