#ifndef _System_Drawing_Printing_PrintAction_h_
#define _System_Drawing_Printing_PrintAction_h_

namespace System { namespace Drawing { namespace Printing {

    enum class PrintAction
    {
        PrintToFile = 0,
        PrintToPreview = 1,
        PrintToPrinter = 2
    };

}}}

#endif