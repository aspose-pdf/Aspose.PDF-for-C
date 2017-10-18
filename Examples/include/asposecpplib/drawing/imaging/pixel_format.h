#ifndef _pixel_format_h_
#define _pixel_format_h_
#include "system/enum_helpers.h"

namespace System {  namespace Drawing { namespace Imaging {

    /*
    * In-memory pixel data formats:
    *  bits 0-7 = format index
    *  bits 8-15 = pixel size (in bits)
    *  bits 16-23 = flags
    *  bits 24-31 = reserved
    */

    enum class PixelFormat {
        ///    Specifies that pixel data contains
        ///    color indexed values which means they are an index to colors in the system color
        ///    table, as opposed to individual color values.
        Indexed = 0x00010000,
        ///    Specifies that pixel data contains GDI colors.
        Gdi = 0x00020000,
        ///       Specifies that pixel data contains alpha values that are not pre-multiplied.
        Alpha = 0x00040000,
        ///       Specifies that pixel format contains pre-multipled alpha values.
        PAlpha = 0x00080000,
        ///       Reserved.
        Extended = 0x00100000,
        ///       The default pixel format of 32 bits per pixel. The format specifies 24-bit color depth and an 8-bit alpha channel.
        Canonical = 0x00200000,
        ///       Specifies that pixel format is undefined.
        Undefined = 0,
        ///       Specifies that pixel format is a don't care.
        DontCare = 0,
        ///       Specifies thatpixel format is 1 bit per pixel indexed
        ///       color. The color table therefore has two colors in it.
        Format1bppIndexed = 1 | (1 << 8) | (int)Indexed | (int)Gdi,
        ///       Specifies that pixel format is 4 bits per pixel indexed
        ///       color. The color table therefore has 16 colors in it.
        Format4bppIndexed = 2 | (4 << 8) | (int)Indexed | (int)Gdi,
        ///       Specifies that pixel format is 8 bits per pixel indexed
        ///       color. The color table therefore has 256 colors in it.
        Format8bppIndexed = 3 | (8 << 8) | (int)Indexed | (int)Gdi,
        ///       The pixel format is 16 bits per pixel. The color information specifies 65536 shades of gray.
        Format16bppGrayScale = 4 | (16 << 8) | (int)Extended,
        ///       Specifies that the format is 16 bits per pixel; 5 bits each are used for the red, green, and blue components. The remaining bit is not used.
        Format16bppRgb555 = 5 | (16 << 8) | (int)Gdi,
        ///       Specifies that pixel format is 16 bits per pixel. The
        ///       color information specifies 32768 shades of color of which 5 bits are red, 5
        ///       bits are green and 5 bits are blue.
        Format16bppRgb565 = 6 | (16 << 8) | (int)Gdi,
        ///       Specifies that pixel format
        ///       is 16 bits per pixel. The color information specifies 32768
        ///       shades of color of which 5 bits are red, 5 bits are green, 5
        ///       bits are blue and 1 bit is alpha.
        Format16bppArgb1555 = 7 | (16 << 8) | (int)Alpha | (int)Gdi,
        ///       Specifies that pixel format is 24 bits per pixel. The
        ///       color information specifies 16777216 shades of color of which 8 bits are red, 8
        ///       bits are green and 8 bits are blue.
        Format24bppRgb = 8 | (24 << 8) | (int)Gdi,
        ///       Specifies that pixel format is 24 bits per pixel. The
        ///       color information specifies 16777216 shades of color of which 8 bits are red, 8
        ///       bits are green and 8 bits are blue.
        Format32bppRgb = 9 | (32 << 8) | (int)Gdi,
        ///       Specifies that pixel format is 32 bits per pixel. The
        ///       color information specifies 16777216 shades of color of which 8 bits are red, 8
        ///       bits are green and 8 bits are blue. The 8 additional bits are alpha bits.
        Format32bppArgb = 10 | (32 << 8) | (int)Alpha | (int)Gdi | (int)Canonical,
        ///       Specifies that
        ///       pixel format is 32 bits per pixel. The color information
        ///       specifies 16777216 shades of color of which 8 bits are red, 8 bits are
        ///       green and 8 bits are blue. The 8 additional bits are pre-multiplied alpha bits. .
        Format32bppPArgb = 11 | (32 << 8) | (int)Alpha | (int)PAlpha | (int)Gdi,
        ///    Specifies that pixel format is 48 bits per pixel.
        ///    The color information specifies 16777216 shades of color of which 8 bits are
        ///    red, 8 bits are green and 8 bits are blue. The 8 additional bits are alpha bits.
        Format48bppRgb = 12 | (48 << 8) | (int)Extended,
        ///       Specifies pixel format is 64 bits per pixel. The
        ///       color information specifies 16777216 shades of color of which 16 bits are red, 16
        ///       bits are green and 16 bits are blue. The 16 additional bits are alpha bits.
        Format64bppArgb = 13 | (64 << 8) | (int)Alpha | (int)Canonical | (int)Extended,
        ///       Specifies that pixel format is 64 bits per pixel. The
        ///       color information specifies 16777216 shades of color of which 16 bits are red,
        ///       16 bits are green and 16 bits are blue. The 16 additional bits are
        ///       pre-multiplied alpha bits.
        Format64bppPArgb = 14 | (64 << 8) | (int)Alpha | (int)PAlpha | (int)Extended,
        ///       Specifies that pixel format is 64 bits per pixel. The
        ///       color information specifies 16777216 shades of color of which 16 bits are red,
        ///       16 bits are green and 16 bits are blue. The 16 additional bits are alpha bits.
        Max = 15,
    };
    DECLARE_ENUM_OPERATORS(PixelFormat);

}}}

#endif