/// @file system/diagnostics/trace.h
#ifndef _aspose_system_diag_trace_h_
#define _aspose_system_diag_trace_h_

#include "system/string.h"

namespace System { namespace Diagnostics {

/// Provides interface to access debugger trace (if any).
/// Works in Debug mode only.
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
struct Trace
{
    /// Writes line to debugger trace.
    /// @param message Message to send to debugger.
    static ASPOSECPP_SHARED_API void WriteLine(const String& message);
};

}} // namespace System::Diagnostics

#endif // _aspose_system_diag_trace_h
