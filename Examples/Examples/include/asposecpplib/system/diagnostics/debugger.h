/// @file system/diagnostics/debugger.h
#ifndef _aspose_system_diagnostic_debugger_h
#define _aspose_system_diagnostic_debugger_h


#include "defines.h"


namespace System { namespace Diagnostics {

/// Debugger interface.
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
struct Debugger
{
    /// Initiates debugger break (if attached).
    static ASPOSECPP_SHARED_API void Break();
};

}} // System::Diagnostics

#endif // _aspose_system_diagnostic_debugger_h
