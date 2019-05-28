/// @file drawing/imaging/image_format.h
#ifndef _image_format_h_
#define _image_format_h_

#include "fwd.h"
#include "system/guid.h"

namespace System { namespace Drawing { namespace Imaging {

    class ImageFormat;
    /// An alias for a shared pointer to an instance of ImageFormat class.
    typedef SharedPtr<ImageFormat> ImageFormatPtr;

    /// Represents the file format of an image.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS ImageFormat: public Object
    {
        public:
            /// Constructs an instance of ImageFormat class that represents an image format format associated
            /// with the specified GUID.
            /// @param guid GUID specifying the image format
            ASPOSECPP_SHARED_API ImageFormat(const System::Guid & guid);

            /// Determines if the image formats represented by the current and specified objects are equal.
            /// @param format The image format object to compare the current object with
            /// @returns True if the current and the specified objects represent the same image format,
            /// otherwise - false
            ASPOSECPP_SHARED_API bool Equals(ImageFormatPtr format) const;
            /// Returns the GUID associated with the image format represented by the current object.
            System::Guid get_Guid() const { return m_guid; }

        public:
            /// Returns a shared pointer to an ImageFormat object that represents the format of a bitmap in memory.
            static ImageFormatPtr get_MemoryBmp() { return m_memory_bmp; }
            /// Returns a shared pointer to an ImageFormat object that represents the bitmap image format.
            static ImageFormatPtr get_Bmp() { return m_bmp; }
            /// Returns a shared pointer to an ImageFormat object that represents the enhanced metafile format.
            static ImageFormatPtr get_Emf() { return m_emf; }
            /// Returns a shared pointer to an ImageFormat object that represents the Windows metafile (WMF) image format.
            static ImageFormatPtr get_Wmf() { return m_wmf; }
            /// Returns a shared pointer to an ImageFormat object that represents the Graphics Interchange Format (GIF) image format.
            static ImageFormatPtr get_Gif() { return m_gif; }
            /// Returns a shared pointer to an ImageFormat object that represents the Joint Photographic Experts Group (JPEG) image format.
            static ImageFormatPtr get_Jpeg() { return m_jpeg; }
            /// Returns a shared pointer to an ImageFormat object that represents the W3C Portable Network Graphics (PNG) image format.
            static ImageFormatPtr get_Png()  { return m_png; }
            /// Returns a shared pointer to an ImageFormat object that represents the Tagged Image File Format (TIFF) image format.
            static ImageFormatPtr get_Tiff() { return m_tiff; }
            /// Returns a shared pointer to an ImageFormat object that represents the Exchangeable Image File (Exif) format.
            static ImageFormatPtr get_Exif() { return m_exif; }
            /// Returns a shared pointer to an ImageFormat object that represents the Windows icon image format.
            static ImageFormatPtr get_Icon() { return m_icon; }
        private:
            /// An ImageFormat object that represents the format of a bitmap in memory.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_memory_bmp;
            /// An ImageFormat object that represents the bitmap image format.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_bmp;
            /// An ImageFormat object that represents the enhanced metafile format.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_emf;
            /// An ImageFormat object that represents the Windows metafile (WMF) image format.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_wmf;
            /// An ImageFormat object that represents the Joint Photographic Experts Group (JPEG) image format.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_jpeg;
            /// An ImageFormat object that represents the W3C Portable Network Graphics (PNG) image format.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_png;
            /// An ImageFormat object that represents the Graphics Interchange Format (GIF) image format.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_gif;
            /// An ImageFormat object that represents the Tagged Image File Format (TIFF) image format.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_tiff;
            /// An ImageFormat object that represents the Exchangeable Image File (Exif) format.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_exif;
            /// An ImageFormat object that represents a photo CD format.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_photo_cd;
            /// An ImageFormat object that represents a FlashPix format.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_flash_pix;
            /// An ImageFormat object that represents the Windows icon image format.
            static const ImageFormatPtr ASPOSECPP_SHARED_API m_icon;

            /// The GUID associated with the image format represented by the current object.
            System::Guid m_guid;
    };

}}}


#endif
