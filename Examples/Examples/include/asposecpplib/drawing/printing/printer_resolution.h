/// @file drawing/printing/printer_resolution.h
#ifndef _aspose_drawing_printing_printer_resolution_h_
#define _aspose_drawing_printing_printer_resolution_h_

#include <system/object.h>

namespace System { namespace Drawing { namespace Printing {
    /// Represents a resolution of a printer.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS PrinterResolution : public Object
    {
    public:
        /// Returns horizontal resolution.
        int get_X() const
        {
            return m_x;
        }
        /// Sets horizontal resolution.
        /// @param value The value to set
        void set_X(int value)
        {
            m_x = value;
        }

        /// Returns vertical resolution
        int get_Y() const
        {
            return m_y;
        }
        /// Sets vertical resolution.
        /// @param value The value to set
        void set_Y(int value)
        {
            m_y = value;
        }

    private:
        /// Horizontal resolution.
        int m_x;
        /// Vertical resolution.
        int m_y;
    };

}}}

#endif // _aspose_drawing_printing_printer_resolution_h_
