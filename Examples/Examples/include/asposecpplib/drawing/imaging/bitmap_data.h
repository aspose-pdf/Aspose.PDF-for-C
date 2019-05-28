/// @file drawing/imaging/bitmap_data.h
#ifndef _bitmap_data_h_
#define _bitmap_data_h_

#include "fwd.h"
#include "drawing/imaging/pixel_format.h"
#include "system/object.h"

namespace System { namespace Drawing { class Bitmap; } }

namespace System { namespace Drawing { namespace Imaging {

    class BitmapData;

    /// An alias for a shared pointer to an instance of BitmapData class.
    typedef SharedPtr<BitmapData> BitmapDataPtr;
    /// Represents a set of attributes of a bitmap image.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS BitmapData : public Object
    {
    public:
        /// Returns the width of the image in pixels.
        ASPOSECPP_SHARED_API int get_Width() const;
        /// Sets the width of the image in pixels.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_Width(int value);
        /// Returns the height of the image in pixels.
        ASPOSECPP_SHARED_API int get_Height() const;
        /// Sets the height of the image in pixels.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_Height(int value);
        /// Returns the stride width of the image in bytes.
        ASPOSECPP_SHARED_API int get_Stride() const;
        /// Sets the stride width of the image in bytes.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_Stride(int value);
        /// Returns the address of the first pixel data in the bitmap.
        ASPOSECPP_SHARED_API IntPtr get_Scan0() const;
        /// Sets the address of the first pixel data in the bitmap.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_Scan0(IntPtr value);
        /// Returns the pixel format of the bitmap image.
        ASPOSECPP_SHARED_API PixelFormat get_PixelFormat() const;
        /// Sets the pixel format of the bitmap image.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_PixelFormat(PixelFormat value);

    private:

        friend class System::Drawing::Bitmap;
        /// The width of the image in pixels.
        int m_width = 0;
        /// The height of the image in pixels.
        int m_height = 0;
        /// The stride width of the image in bytes.
        int m_stride = 0;
        /// The pixel format of the bitmap image.
        int m_pixel_format = 0;
        /// A pointer to the buffer containing the pixel data of the bitmap image.
        std::unique_ptr<uint8_t[]> m_scan0;

        /// Reserved. Not used.
        int m_reserved = 0;
    };

}}}


#endif
