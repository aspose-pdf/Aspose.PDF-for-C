/// @file drawing/drawing2d/path_point_type.h
#ifndef _aspose_drawing_drawing2d_path_point_type_h_
#define _aspose_drawing_drawing2d_path_point_type_h_

#include "system/enum_helpers.h"

namespace System {
    namespace Drawing {
        namespace Drawing2D {
            /// Specifies the type of a path point.
            enum class PathPointType
            {
                /// The starting point.
                Start = 0,
                /// A line segment.
                Line = 1,
                /// Bezier curve.
                Bezier = 3, 
                /// A type mask point.
                PathTypeMask = 0x07,
                /// Specifies that a segment is dashed.
                DashMode = 0x10,
                /// A path marker.
                PathMarker = 0x20,
                /// The ending point of a subpath.
                CloseSubpath = 0x80,
                /// Cubic Bezier curve.
                Bezier3 = 3, 
            };
        }
    }
}
//PathPointType enum is not marked as [Flags] attribute, but mostly used as flags
/// Declaration of template arithmetic operators for values of PathPointType enum type.
DECLARE_ENUM_OPERATORS(System::Drawing::Drawing2D::PathPointType);

#endif
