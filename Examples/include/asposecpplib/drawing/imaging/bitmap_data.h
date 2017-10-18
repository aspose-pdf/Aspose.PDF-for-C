#ifndef _bitmap_data_h_
#define _bitmap_data_h_

#include "fwd.h"
#include "drawing/imaging/pixel_format.h"
#include "system/object.h"

namespace System { namespace Drawing { class Bitmap; } }

namespace System { namespace Drawing { namespace Imaging {

    class BitmapData;

    typedef SharedPtr<BitmapData> BitmapDataPtr;

    class BitmapData : public Object
    {
    public:

        int get_Width() const;

        void set_Width(int value);

        int get_Height() const;

        void set_Height(int value);

        int get_Stride() const;

        void set_Stride(int value);

        IntPtr get_Scan0() const;

        void set_Scan0(IntPtr value);

        PixelFormat get_PixelFormat() const;

        void set_PixelFormat(PixelFormat value);

    private:

        friend class System::Drawing::Bitmap;

        int m_width = 0;
        int m_height = 0;
        int m_stride = 0;
        int m_pixel_format = 0;
        
        std::unique_ptr<uint8_t[]> m_scan0;

        int m_reserved = 0;
    };

}}}


#endif
