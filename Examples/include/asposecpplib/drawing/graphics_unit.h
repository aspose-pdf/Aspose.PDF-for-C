#ifndef _graphics_unit_h_
#define _graphics_unit_h_

#include "system/enum.h"

namespace System { namespace Drawing {

    enum class GraphicsUnit {
        World = 0,     // 0 -- World coordinate (non-physical unit)
        Display = 1,    // 1 -- Variable - for PageTransform only
        Pixel = 2,      // 2 -- Each unit is one device pixel.
        Point = 3,      // 3 -- Each unit is a printer's point, or 1/72 inch.
        Inch = 4,       // 4 -- Each unit is 1 inch.
        Document = 5,   // 5 -- Each unit is 1/300 inch.
        Millimeter = 6  // 6 -- Each unit is 1 millimeter.
    };
}}

template<>
struct EnumMetaInfo<System::Drawing::GraphicsUnit>
{
    static const std::array<std::pair<System::Drawing::GraphicsUnit, const char_t*>, 7>& values();
};

#endif