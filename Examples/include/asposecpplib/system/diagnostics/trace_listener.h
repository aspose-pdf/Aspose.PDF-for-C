#ifndef _aspose_system_diagnostics_trace_listener_
#define _aspose_system_diagnostics_trace_listener_

#include "system/object.h"
#include "system/string.h"

namespace System { namespace Diagnostics {

class TraceListener: public System::Object
{
    RTTI_INFO(System::Diagnostics::TraceListener, ::System::BaseTypesInfo<System::Object>)
public:
    virtual void Write(System::String message);
    virtual void WriteLine(System::String message);
    virtual void Fail(System::String message);
    virtual void Fail(System::String message, System::String detailMessage);
};

}}
#endif