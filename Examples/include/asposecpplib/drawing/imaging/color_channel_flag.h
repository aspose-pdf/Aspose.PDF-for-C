/// @file drawing/imaging/color_channel_flag.h
#ifndef _aspose_drawing_imaging_color_channel_flag_h_
#define _aspose_drawing_imaging_color_channel_flag_h_

namespace System { namespace Drawing { namespace Imaging {
/// Specifies a color channel in CMYK color space.
enum class ColorChannelFlag {
    /// The cyan color channel.
    ColorChannelC = 0,
    /// The magenta color channel.
    ColorChannelM = 1,
    /// The yellow color channel.
    ColorChannelY = 2,
    /// The black color channel.
    ColorChannelK = 3,
    /// The last selected channel should be used.
    ColorChannelLast = 4
};
}}}

#endif
