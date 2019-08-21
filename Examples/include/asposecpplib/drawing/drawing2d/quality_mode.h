/// @file drawing/drawing2d/quality_mode.h
#ifndef _quality_mode_h_
#define _quality_mode_h_

namespace System { namespace Drawing { namespace Drawing2D {
    /// Specifies an overall rendering quality.
    enum class  QualityMode {
        /// Invalid qulity mode.
        Invalid = -1,
        /// Default quality mode.
        Default = 0,
        /// Low quality, higher speed.
        Low = 1,
        /// High quality, lower speed.
        High = 2
    };

}}}

#endif
