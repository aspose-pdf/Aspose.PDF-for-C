/// @file drawing/imaging/color_adjust_type.h
#ifndef _color_adjust_type_h_
#define _color_adjust_type_h_

namespace System {  namespace Drawing { namespace Imaging {
    /// Specifies which objects use color adjustment information.
    enum class ColorAdjustType {
        /// Defines color adjustment information that is used by all objects that do not have their own color adjustment information.
        Default = 0,
        /// Defines color adjustment information for Bitmap objects.
        Bitmap,
        /// Defines color adjustment information for Brush objects.
        Brush,
        /// Defines color adjustment information for Pen objects.
        Pen,
        /// Defines color adjustment information for text.
        Text,
        /// Specifies the number of types specified.
        Count,
        /// Specifies the number of types specified.
        Any
    };
}}}
#endif
