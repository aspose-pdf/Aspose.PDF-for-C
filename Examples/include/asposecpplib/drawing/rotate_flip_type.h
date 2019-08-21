/// @file drawing/rotate_flip_type.h
#ifndef _rotate_flip_type_h_
#define _rotate_flip_type_h_

namespace System { namespace Drawing {
    /// Specifies the type of rotation and/or flipping operation.
    enum class RotateFlipType   {
        /// No rotation and no flipping.
        RotateNoneFlipNone = 0,
        /// Rotate by 90 degrees clockwise and no flipping.
        Rotate90FlipNone = 1,
        /// Rotate by 180 degrees clockwise and no flipping.
        Rotate180FlipNone = 2,
        /// Rotate by 270 degrees clockwise and no flipping.
        Rotate270FlipNone = 3,
        /// Horizontal flipping and no rotation.
        RotateNoneFlipX = 4,
        /// Rotate by 90 degrees clockwise and flip horizontally.
        Rotate90FlipX = 5,
        /// Rotate by 180 degrees clockwise and flip horizontally.
        Rotate180FlipX = 6,
        /// Rotate by 270 degrees clockwise and flip horizontally.
        Rotate270FlipX = 7,
        /// Vertical flipping and no rotation.
        RotateNoneFlipY = Rotate180FlipX,
        /// Rotate by 90 degrees clockwise and flip vertically.
        Rotate90FlipY = Rotate270FlipX,
        /// Rotate by 180 degrees clockwise and flip vertically.
        Rotate180FlipY = RotateNoneFlipX,
        /// Rotate by 270 degrees clockwise and flip vertically.
        Rotate270FlipY = Rotate90FlipX,
        /// Horizontal and vertical flipping and no rotation.
        RotateNoneFlipXY = Rotate180FlipNone,
        /// Rotate by 90 degrees clockwise and flip horizontally and vertically.
        Rotate90FlipXY = Rotate270FlipNone,
        /// Rotate by 180 degrees clockwise and flip horizontally and vertically.
        Rotate180FlipXY = RotateNoneFlipNone,
        /// Rotate by 270 degrees clockwise and flip horizontally and vertically.
        Rotate270FlipXY = Rotate90FlipNone
    };
}}

#endif
