#ifndef _image_format_h_
#define _image_format_h_

#include "fwd.h"
#include "system/guid.h"

namespace System { namespace Drawing { namespace Imaging {

    class ImageFormat;
    typedef SharedPtr<ImageFormat> ImageFormatPtr;

    class ImageFormat: public Object
    {
        public:
            ImageFormat(const System::Guid & guid);

            bool Equals(ImageFormatPtr format) const;
            System::Guid get_Guid() const { return m_guid; }

        public:
            static ImageFormatPtr get_MemoryBmp() { return m_memory_bmp; }
            static ImageFormatPtr get_Bmp() { return m_bmp; }
            static ImageFormatPtr get_Emf() { return m_emf; }
            static ImageFormatPtr get_Wmf() { return m_wmf; }
            static ImageFormatPtr get_Gif() { return m_gif; }
            static ImageFormatPtr get_Jpeg() { return m_jpeg; }
            static ImageFormatPtr get_Png()  { return m_png; }
            static ImageFormatPtr get_Tiff() { return m_tiff; }
            static ImageFormatPtr get_Exif() { return m_exif; }
            static ImageFormatPtr get_Icon() { return m_icon; }

        private:

            static const ImageFormatPtr ASPOSECPP_SHARED_API m_memory_bmp;
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_bmp;
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_emf;
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_wmf;
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_jpeg;
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_png;
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_gif;
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_tiff;
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_exif;
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_photo_cd;
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_flash_pix;
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_icon;

            System::Guid m_guid;
    };

}}}


#endif