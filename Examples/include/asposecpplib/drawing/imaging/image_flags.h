/// @file drawing/imaging/image_flags.h
#pragma once

#include "system/enum_helpers.h"

namespace System { namespace Drawing { namespace Imaging { 
/// Represents attributes of the pixel data represented by an Image object.
enum class ImageFlags
{
    None = 0,
    /// Scalable.
    Scalable = 1,
    /// Contains alpha information.
    HasAlpha = 2,
    /// There are alpha values greater than 0 and less than 255.
    HasTranslucent = 4,
    PartiallyScalable = 8,
    /// The pixel data is represented in RGB color space.
    ColorSpaceRgb = 16,
    /// The pixel data is represented in CMYK color space.
    ColorSpaceCmyk = 32,
    /// The pixel data is grayscale.
    ColorSpaceGray = 64,
    /// The pixel data is represented in YCBCR color space.
    ColorSpaceYcbcr = 128,
    /// The pixel data is represented in YCCK color space.
    ColorSpaceYcck = 256,
    /// The DPI information is stored in the image.
    HasRealDpi = 4096,
    /// The size of a pixel is stored in the image.
    HasRealPixelSize = 8192,
    /// The pixel data is read-only.
    ReadOnly = 65536,
    /// Can be cached for faster access.
    Caching = 131072,
};
}
}
}
/// Declaration of template arithmetic operators for values of ImageFlags enum type.
DECLARE_ENUM_OPERATORS(System::Drawing::Imaging::ImageFlags);
