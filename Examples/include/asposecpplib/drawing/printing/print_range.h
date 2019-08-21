/// @file drawing/printing/print_range.h
#ifndef _aspose_system_drawing_printing_print_range_h_
#define _aspose_system_drawing_printing_print_range_h_

namespace System { namespace Drawing { namespace Printing {
    /// Specifies what pages are printed.
    enum class PrintRange
    {
        /// Print all pages.
        AllPages = 0x00000000,
        /// Print selected pages.
        Selection = 0x00000001,
        /// Print pages from the specified range.
        SomePages = 0x00000002,
        /// Print currently displayed page.
        CurrentPage = 0x00400000
    };

}}}

#endif
