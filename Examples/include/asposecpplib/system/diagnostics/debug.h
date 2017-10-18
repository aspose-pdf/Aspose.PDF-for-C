#ifndef _aspose_system_diag_debug_h
#define _aspose_system_diag_debug_h

#include "system/shared_ptr.h"
#include "system/string.h"
#include "system/collections/list.h"
#include "system/diagnostics/trace_listener.h"

namespace System { namespace Diagnostics {

struct Debug
{
    static void Fail(const String& message);
    static void Assert(bool condition);
    static void Assert(bool condition, const String& message);
    static void Assert(bool condition, const String& message, const String& detailMessage);
    static void WriteLine(const String& message);
    static void WriteLine(const String& message, const String& message2);
    static void WriteLine(const wchar_t* message);
    static void WriteLine(Object::ptr obj);
    static void Write(const String& message);
    static void Write(const wchar_t* message);
   
    static void Print(const String& message);
    static void Print(const String&, System::ArrayPtr<SharedPtr<System::Object>> args);

    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TraceListener>>> get_Listeners();
};

}} // namespace System::Diagnostics

#endif // _aspose_system_diag_debug_h