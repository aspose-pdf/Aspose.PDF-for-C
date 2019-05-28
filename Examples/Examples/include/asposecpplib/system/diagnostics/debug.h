/// @file system/diagnostics/debug.h
#ifndef _aspose_system_diag_debug_h
#define _aspose_system_diag_debug_h

#include "system/shared_ptr.h"
#include "system/string.h"
#include "system/collections/list.h"
#include "system/diagnostics/trace_listener.h"

namespace System { namespace Diagnostics {

/// Collection of debug methods allowing it sending debug information to registered listeners.
/// All output functions work in Debug only.
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
struct Debug
{
    /// Send fail message.
    /// @param message Failure description.
    static ASPOSECPP_SHARED_API void Fail(const String& message);
    /// Assert condition and send information on failure.
    /// @param condition Condition value.
    static ASPOSECPP_SHARED_API void Assert(bool condition);
    /// Assert condition and send information on failure.
    /// @param condition Condition value.
    /// @param message Message to populate on assertion failure.
    static ASPOSECPP_SHARED_API void Assert(bool condition, const String& message);
    /// Assert condition and send information on failure.
    /// @param condition Condition value.
    /// @param message Message to populate on assertion failure.
    /// @param detailMessage Detailed message to populate on assertion failure.
    static ASPOSECPP_SHARED_API void Assert(bool condition, const String& message, const String& detailMessage);
    /// Writes line to debug interface.
    /// @param message Message to write.
    static ASPOSECPP_SHARED_API void WriteLine(const String& message);
    /// Writes line to debug interface.
    /// @param message Message to write.
    /// @param message2 Extra message.
    static ASPOSECPP_SHARED_API void WriteLine(const String& message, const String& message2);
    /// Writes line to debug interface.
    /// @param message Message to write.
    static ASPOSECPP_SHARED_API void WriteLine(const char_t* message);
    /// Writes line to debug interface.
    /// @param obj Object to dump.
    static ASPOSECPP_SHARED_API void WriteLine(Object::ptr obj);
    /// Writes string to debug interface.
    /// @param message Message to write.
    static ASPOSECPP_SHARED_API void Write(const String& message);
    /// Writes string to debug interface.
    /// @param message Message to write.
    static ASPOSECPP_SHARED_API void Write(const char_t* message);

    /// Print message to debug interface.
    /// @param message Message to write.
    static ASPOSECPP_SHARED_API void Print(const String& message);
    /// Print message to debug interface.
    /// @param format Format string.
    /// @param args Arguments to substitute to format string.
    static ASPOSECPP_SHARED_API void Print(const String& format, const System::ArrayPtr<SharedPtr<System::Object>>& args);

    /// Accesses static list of listeners.
    /// @return List of delegates being envoked on each write operation.
    static ASPOSECPP_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TraceListener>>> get_Listeners();
};

}} // namespace System::Diagnostics

#endif // _aspose_system_diag_debug_h
