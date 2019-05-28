/// @file drawing/printing/print_action.h
#ifndef _System_Drawing_Printing_PrintAction_h_
#define _System_Drawing_Printing_PrintAction_h_

namespace System { namespace Drawing { namespace Printing {
    /// Specifies a type of print operation.
    enum class PrintAction
    {
        /// Printing to a file.
        PrintToFile = 0,
        /// Printing preview.
        PrintToPreview = 1,
        /// Printing to a printer.
        PrintToPrinter = 2
    };

}}}

#endif
