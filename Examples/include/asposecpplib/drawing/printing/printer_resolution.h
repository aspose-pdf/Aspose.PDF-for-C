#ifndef _aspose_drawing_printing_printer_resolution_h_
#define _aspose_drawing_printing_printer_resolution_h_

#include <system/object.h>

namespace System { namespace Drawing { namespace Printing {

    class PrinterResolution : public Object
    {
    public:
        int get_X() const
        {
            return m_x;
        }
        void set_X(int value)
        {
            m_x = value;
        }
        int get_Y() const
        {
            return m_y;
        }
        void set_Y(int value)
        {
            m_y = value;
        }

    private:
        int m_x;
        int m_y;
    };

}}}

#endif // _aspose_drawing_printing_printer_resolution_h_
