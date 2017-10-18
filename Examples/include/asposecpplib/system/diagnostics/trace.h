#ifndef _aspose_system_diag_trace_h_
#define _aspose_system_diag_trace_h_

#include "system/string.h"

namespace System { namespace Diagnostics {

struct Trace
{
    static void WriteLine(const String& message);
};

}} // namespace System::Diagnostics

#endif // _aspose_system_diag_trace_h