/// @file drawing/graphics_unit.h
#ifndef _graphics_unit_h_
#define _graphics_unit_h_

#include "system/enum.h"

namespace System { namespace Drawing {

    /// Represents a unit of measure.
    enum class GraphicsUnit {
        /// World coordinate (non-physical unit).
        World = 0,     
        /// The units of measure of the display device.
        Display = 1,    
        /// A device pixel.
        Pixel = 2,      
        /// A printer's point (1/72 of an inch).
        Point = 3,   
        /// One inch.
        Inch = 4, 
        /// 1/300 of an inch.
        Document = 5,  
        /// One millimeter.
        Millimeter = 6 
    };
}}

/// Specialization for System::Drawing::GraphicsUnit; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::GraphicsUnit>
{
    /// Returns a array of pairs that associate System::Drawing::GraphicsUnit enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::GraphicsUnit, const char_t*>, 7>& values();
};

#endif
