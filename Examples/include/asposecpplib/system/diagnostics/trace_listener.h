/// @file system/diagnostics/trace_listener.h
#ifndef _aspose_system_diagnostics_trace_listener_
#define _aspose_system_diagnostics_trace_listener_

#include "system/object.h"
#include "system/string.h"

namespace System { namespace Diagnostics {

/// Interface to react to debug and trace infofmation.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TraceListener: public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Diagnostics::TraceListener, ::System::BaseTypesInfo<System::Object>)
public:
    /// Writes message to debugger.
    /// @param message Message to write.
    virtual ASPOSECPP_SHARED_API void Write(System::String message);
    /// Writes line to debugger.
    /// @param message Message to write.
    virtual ASPOSECPP_SHARED_API void WriteLine(System::String message);
    /// Writes failure message to debugger.
    /// @param message Message to write.
    virtual ASPOSECPP_SHARED_API void Fail(System::String message);
    /// Writes failure message to debugger.
    /// @param message Message to write.
    /// @param detailMessage Detailed message to write.
    virtual ASPOSECPP_SHARED_API void Fail(System::String message, System::String detailMessage);
};

}}
#endif
