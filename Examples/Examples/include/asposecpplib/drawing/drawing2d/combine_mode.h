/// @file drawing/drawing2d/combine_mode.h
#ifndef _combine_mode_h_
#define _combine_mode_h_

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies how clipping regions are combined.
    enum class CombineMode {
        /// One clipping region is replaced by another.
        Replace = 0,
        /// The two clipping regions are combined by taking their intersection.
        Intersect = 1,
        /// The two clipping regions are combined by taking the union of both.
        Union = 2,
        /// The two clipping regions are combined by taking only the area enclosed by one or the other regions, but not both.
        Xor = 3,
        /// Two clipping regions are combined by taking the area of the first region that does not intersect with the second.
        Exclude = 4,
        /// Two clipping regions are combined by taking the area of the second region that does not intersect with the first.
        Complement = 5
    };
}}}

#endif
