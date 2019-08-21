/// @file drawing/printing/print_event_handler.h
#ifndef _System_Drawing_Printing_PrintEventHandler_h_
#define _System_Drawing_Printing_PrintEventHandler_h_

#include <system/shared_ptr.h>
#include <system/eventhandler.h>
#include <drawing/printing/print_event_args.h>

namespace System { namespace Drawing { namespace Printing {

/// A type of a function object that handles BeginPrint and EndPrint events.
using PrintEventHandler = System::EventHandler<System::SharedPtr<PrintEventArgs>>;

}}}

#endif // _System_Drawing_Printing_PrintEventHandler_h_

