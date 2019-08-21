/// @file system/diagnostics/process_window_style.h
#ifndef _process_window_style_h_
#define _process_window_style_h_

namespace System { namespace Diagnostics {

/// Style of process window.
enum class ProcessWindowStyle   {
    /// Normal window.
    Normal,
    /// Hidden window.
    Hidden,
    /// Minimized window.
    Minimized,
    /// Maximized window.
    Maximized
};

}}

#endif // _process_window_style_h_
