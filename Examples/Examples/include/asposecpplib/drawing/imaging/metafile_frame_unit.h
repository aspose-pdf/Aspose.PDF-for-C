/// @file drawing/imaging/metafile_frame_unit.h
#ifndef _metafile_frame_unit_h_
#define _metafile_frame_unit_h_

#include "drawing/graphics_unit.h"

namespace System {  namespace Drawing { namespace Imaging {
    /// Specifies the unit of measurement for the rectangle used to size and position a metafile.
    enum class MetafileFrameUnit {
        /// Specifies a pixel as the unit of measure.
        Pixel = (int)GraphicsUnit::Pixel,
        /// Specifies a printer's point as the unit of measure.
        Point = (int)GraphicsUnit::Point,
        /// Specifies an inch as the unit of measure.
        Inch = (int)GraphicsUnit::Inch,
        /// Specifies 1/300 of an inch as the unit of measure.
        Document = (int)GraphicsUnit::Document,
        /// Specifies a millimeter as the unit of measure.
        Millimeter = (int)GraphicsUnit::Millimeter,
        /// Specifies .01 millimeter as the unit of measure. Provided for compatibility with GDI.
        GdiCompatible
    };
}}}

#endif
