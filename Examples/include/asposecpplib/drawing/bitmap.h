/// @file drawing/bitmap.h
#ifndef _aspose_system_drawing_bitmap_h_
#define _aspose_system_drawing_bitmap_h_

#include "fwd.h"
#include "defines.h"
#include "drawing/image.h"
#include "drawing/color.h"
#include "drawing/rectangle.h"
#include "drawing/rectangle_f.h"
#include "drawing/imaging/bitmap_data.h"
#include "drawing/imaging/pixel_format.h"
#include "drawing/imaging/image_lock_mode.h"
#include "drawing/size_f.h"
#include "system/io/stream.h"
#include "system/string.h"

#include <memory>

#if defined(ASPOSECPP_SHARED_EXPORTS) || defined(ASPOSECPP_SKIA_EXTERNAL_USAGE)
#include <codec/SkEncodedFormat.h>
#include <core/SkBitmap.h>
#include <core/SkCanvas.h>
#endif

/// Forward declaration of SkBitmap class.
ASPOSECPP_3RD_PARTY_CLASS(SkBitmap);
/// Forward declaration of SkCanvas class.
ASPOSECPP_3RD_PARTY_CLASS(SkCanvas);
/// Forward declaration of SkData class.
ASPOSECPP_3RD_PARTY_CLASS(SkData);
/// Forward declaration of SkStream class.
ASPOSECPP_3RD_PARTY_CLASS(SkWStream);
/// Forward declaration of SkMatrix class.
ASPOSECPP_3RD_PARTY_CLASS(SkMatrix);
/// Forward declaration of SkImageInfo struct.
ASPOSECPP_3RD_PARTY_STRUCT(SkImageInfo);
/// Forward declaration of SkRect struct.
ASPOSECPP_3RD_PARTY_STRUCT(SkRect);
/// Ensures that SkColor is an alias for uint32_t.
ASPOSECPP_3RD_PARTY_TYPEDEF(SkColor, uint32_t);

#if defined(ASPOSECPP_SHARED_EXPORTS) || !defined(ASPOSECPP_SKIA_EXTERNAL_USAGE)
/// Static checks of SkEncodedFormat enum.
ASPOSECPP_3RD_PARTY_ENUM(SkEncodedFormat);
#endif

namespace System { namespace Drawing {

namespace Detail {
    /// Declaration of SkEncodedFormatHolder class that represents a value of
    /// SkEncodedFormat enum type whose underlying type is 'int'.
    ASPOSECPP_3RD_PARTY_ENUM_HOLDER(SkEncodedFormat, int, SkEncodedFormatHolder);
}

namespace Imaging { class Metafile; }

class Graphics;
/// Represents a GDI+ bitmap image.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Bitmap : public Image
{
    RTTI_INFO(System::Drawing::Bitmap, ::System::BaseTypesInfo<System::Drawing::Image>)

public:
    /// Constructs a new Bitmap object from the specified existing image.
    /// @param original The existing image to create the bitmap image from
    ASPOSECPP_SHARED_API Bitmap(const SharedPtr<Image>& original);
    /// Constructs a new Bitmap object from the specified stream.
    /// @param stream A stream that contains image data
    /// @param useIcm IGNORED
    ASPOSECPP_SHARED_API Bitmap(const SharedPtr<System::IO::Stream>& stream, bool useIcm = false);
    /// Constructs a new Bitmap object from the specified file.
    /// @param filename A name of the file that contains image data
    ASPOSECPP_SHARED_API Bitmap(const String & filename);
    /// Constructs a new Bitmap object from the specified file.
    /// @param filename A name of the file that contains image data
    /// @param useIcm IGNORED
    ASPOSECPP_SHARED_API Bitmap(const String & filename, bool useIcm);
    /// Constructs a new Bitmap object that represents a bitmap image with the specified width, height,
    /// pixel format and pixel data.
    /// @param width The width of the image
    /// @param height The height of the image
    /// @param format The pixel format of the image
    /// @param extended_data A pointer to the buffer containing the pixel data
    ASPOSECPP_SHARED_API Bitmap(int width, int height, Imaging::PixelFormat format = Imaging::PixelFormat::Format32bppArgb, void * extended_data = nullptr);
    /// Constructs a new Bitmap object from the specified existing image, scaled to the specified size.
    /// @param original The existing image to create the bitmap image from
    /// @param size The size of the new image
    ASPOSECPP_SHARED_API Bitmap(const SharedPtr<Image>& original, const Size &size);
    /// Constructs a new Bitmap object from the specified existing image with width and height scaled to the
    /// specified values.
    /// @param original The existing image to create the bitmap image from
    /// @param width Width of the new image
    /// @param height Height of the new image
    ASPOSECPP_SHARED_API Bitmap(const SharedPtr<Image>& original, int width, int height);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~Bitmap();

    /// Returns the width of the image in pixels.
    virtual ASPOSECPP_SHARED_API int get_Width() const OVERRIDE;
    /// Returns the height of the image in pixels.
    virtual ASPOSECPP_SHARED_API int get_Height() const OVERRIDE;

    /// Returns the file format of the image represented by the current object.
    virtual ASPOSECPP_SHARED_API Imaging::ImageFormatPtr get_RawFormat() const OVERRIDE;
    /// Returns the pixel format of the image represented by the current object.
    virtual ASPOSECPP_SHARED_API Imaging::PixelFormat get_PixelFormat() const OVERRIDE;

    /// Returns the color palette used by the image represented by the current object.
    virtual ASPOSECPP_SHARED_API Imaging::ColorPalettePtr get_Palette() const OVERRIDE;
    /// Sets the color palette used by the image represented by the current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Palette(Imaging::ColorPalettePtr value) OVERRIDE;

    /// Sets the resolution of the image.
    /// @param xDpi The new horizontal resolution in pixels per inch.
    /// @param yDpi The new vertical resolution in pixels per inch.
    ASPOSECPP_SHARED_API void SetResolution(float xDpi, float yDpi);
    /// Sets the color of the specified pixel in the bitmap image represented by the current object.
    /// @param x X coordinate of the pixel
    /// @param y Y coordinate of the pixel
    /// @param color The new color to set
    ASPOSECPP_SHARED_API void SetPixel(int x, int y, Color color);

    /// Locks a Bitmap into system memory.
    /// @param rect A rectangle that specifies the region of the image to lock
    /// @param flags Specifies the access level to the bitmap
    /// @param format The data format of this bitmap
    /// @return A shared pointer to a BitmapData object that contains information about the performed lock operation
    ASPOSECPP_SHARED_API Imaging::BitmapDataPtr LockBits(const Rectangle & rect, Imaging::ImageLockMode flags, Imaging::PixelFormat format);
    /// Locks a Bitmap into system memory.
    /// @param rect A rectangle that specifies the region of the image to lock
    /// @param flags Specifies the access level to the bitmap
    /// @param format The data format of this bitmap
    /// @param bitmap_data Contains information about the lock operation
    /// @return A shared pointer to a BitmapData object that contains information about the performed lock operation
    ASPOSECPP_SHARED_API Imaging::BitmapDataPtr LockBits(const Rectangle & rect, Imaging::ImageLockMode flags, Imaging::PixelFormat format, const Imaging::BitmapDataPtr& bitmap_data);
    /// Unlocks the specified bitmap from system memory.
    /// @param bitmap_data An object that contains information about the lock operation
    ASPOSECPP_SHARED_API void UnlockBits(const Imaging::BitmapDataPtr& bitmap_data);
    /// Returns the color of the specified pixel.
    /// @param x The X coordinate of the pixel whose color to return
    /// @param y The Y coordinate of the pixel whose color to return
    /// @returns The color of the specified pixel
    ASPOSECPP_SHARED_API Color GetPixel(int x, int y);

    /// Changes the color of all pixels with the specified color to transparent.
    /// @param transparent_color The color of the pixels whose color to change
    ASPOSECPP_SHARED_API void MakeTransparent(Color transparent_color = Color::get_LightGray());

    /// Creates a GDI bitmap object from the bitmap represented by the current object.
    /// @returns A handle to the created GDI bitmap object.
    ASPOSECPP_SHARED_API IntPtr GetHbitmap();

    /// Creates a copy of the current object.
    /// @returns A copy of the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<Image> Clone() OVERRIDE;
    /// Creates a Bitmap object that represents a copy of a region of the bitmap image represented by the current object.
    /// @param rect The rectangle that specifies the region to copy
    /// @param format The pixel format for the new Bitmap
    /// @returns The created Bitmap object
    ASPOSECPP_SHARED_API SharedPtr<Bitmap> Clone(Rectangle rect, Imaging::PixelFormat format);
    /// Creates a Bitmap object that represents a copy of a region of the bitmap image represented by the current object.
    /// @param rect The rectangle that specifies the region to copy
    /// @param format The pixel format for the new Bitmap
    /// @returns The created Bitmap object
    ASPOSECPP_SHARED_API SharedPtr<Bitmap> Clone(RectangleF rect, Imaging::PixelFormat format);

    /// Rotates image to multiple of 90 degrees and flips.
    /// @param rotate_flip_type The type of rotation and/or flip operation
    virtual ASPOSECPP_SHARED_API void RotateFlip(RotateFlipType rotate_flip_type) OVERRIDE;

    // it must be public for manually implemented code parts
    /// Returns a raw pointer to the underlying SkBitmap object.
    virtual ASPOSECPP_SHARED_API const SkBitmap* GetSkBitmap() const OVERRIDE;

    /// Returns whether the original format is a multi-image.
    virtual ASPOSECPP_SHARED_API bool IsMultiImage() const OVERRIDE;

    // Service method used in manually implemented code parts
    /// Creates a copy of the specified bitmap image with pixel format changed to Format32bppArgb.
    /// @param src_bmp The original bitmap to copy
    /// @returns The copy of the original bitmap with the pixel format changed to Format32bppArgb
    static ASPOSECPP_SHARED_API SharedPtr<Bitmap> ConvertToARGBImage(const SharedPtr<Bitmap>& src_bmp);

    //service method used in manually implemented code parts
    /// Premultiplies the colors of the pixels of the image represented by the current object.
    ASPOSECPP_SHARED_API void PremultipleColors();

    //service method used in manually implemented code parts
    /// Enables pixel processing mode.
    /// @param update_colors Specifies whether to update colors.
    ASPOSECPP_SHARED_API bool BeginPixelProcessing(bool update_colors = true);

    //service method used in manually implemented code parts
    /// Disables pixel processing mode.
    /// @param update_colors Specifies whether to update colors.
    ASPOSECPP_SHARED_API bool EndPixelProcessing(bool update_colors = true);

private:
    /// Writes the raw bitmap image data to the specified stream.
    /// @param to The stream to write the data to
    void PutRawBytesBmp(SkWStream *to);

    /// The image format of the bitmap image.
    Imaging::PixelFormat m_original_pixel_format = Imaging::PixelFormat::Undefined;

    /// Is the original format a multi-image.
    bool m_is_multi_image = false;

    /// Indicates if the pixel processing mode is activated.
    bool m_pixel_processing_mode = false;

    /// A table of 2 black-and-white colors.
    static const SkColor s_bw_colors[];
    /// A table of 256 colors.
    static const SkColor s_indexed_colors[];
    /// A table of 256 gray scale colors.
    static const SkColor s_gray_colors[];


protected:
    friend class Graphics;
    friend class Imaging::Metafile;
    /// Declaring template function System::MakeObject(...) a friend of this class.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructs a Bitmap object that represents a copy of a region of the bitmap image represented by the specified Bitmap object.
    /// @param original The original image
    /// @param rect The rectangle that specifies the region of the original image to copy
    /// @param format The pixel format for the bitmap
    ASPOSECPP_SHARED_API Bitmap(const SharedPtr<Bitmap>& original, Rectangle rect, Imaging::PixelFormat format);
    /// Assigns the bitmap image data from the specified byte array to the specfied SkBitmap object.
    /// @param data The bitmap image data
    /// @returns True if the operation succeeded, otherwise -false
    ASPOSECPP_SHARED_API bool GetSkBitmapFromArray(const ArrayPtr<uint8_t>& data);
    /// Returns the drawing canvas object.
    virtual ASPOSECPP_SHARED_API SkCanvas * GetDrawingCanvas() const OVERRIDE;
    /// Saves an image represented by the current object in the specified format using the specified
    /// image quality level setting when encoding the image to the momory buffer.
    /// @param encoder_type The image format to save the image in
    /// @param quality The quality level setting used when encoding the image
    /// @returns An SkData object that represents a memory buffer to which the image was saved
    virtual ASPOSECPP_SHARED_API sk_sp<SkData> GetRawBytes(SkEncodedFormat encoder_type, int quality) OVERRIDE;
    /// Returns a value that specifies the format of the image represented by the current object.
    virtual ASPOSECPP_SHARED_API const SkEncodedFormat GetSkEncodedFormat() const OVERRIDE;
    /// Returns the original image format of the bitmap image represented by the current object.
    virtual Imaging::PixelFormat GetOriginalFormat() const OVERRIDE { return m_original_pixel_format; }

    /// Draws the specified region of the image represented by the current object to the specified region on the specified canvas.
    /// The source bitmap region is scaled and translated to fill the destination region.
    /// @param sk_canvas The canvas to draw on
    /// @param dest_rect The rectangle on the canvas to draw to
    /// @param src_rect The rectangle specifying the portion of the image to draw
    /// @param matrix The matrix that specifies how to traslate and scale the source image region
    /// @param quality The quality of image interpolation
    /// @param blend_mode Specifies how the source colors are combined with the background colors
    virtual void Draw(SkCanvas* sk_canvas, const SkRect& dest_rect, const SkRect& src_rect, SkMatrix* matrix, SkFilterQuality quality, SkBlendMode blend_mode) const OVERRIDE;
    /// Draws the the image represented by the current object to the specified region on the specified canvas.
    /// The source image is scaled and translated to fill the destination region.
    /// @param sk_canvas The canvas to draw on
    /// @param dest_rect The rectangle in the canvas to draw to
    /// @param matrix The matrix that specifies how to traslate and scale the source image region
    /// @param quality The quality of image interpolation
    /// @param blend_mode Specifies how the source colors are combined with the background colors
    virtual void Draw(SkCanvas* sk_canvas, const SkRect& dest_rect, SkMatrix* matrix, SkFilterQuality quality, SkBlendMode blend_mode) const OVERRIDE;
    /// Draws the specified region of the image represented by the current object to the specified region on the specified canvas.
    /// The source bitmap region is scaled and translated to fill the destination region.
    /// @param sk_canvas The canvas to draw on
    /// @param dest_points Array of 3 PointF objects representing points that define the rectangular region on the canvas to draw to
    /// @param src_rect The rectangle specifying the portion of the image to draw
    /// @param matrix The matrix that specifies how to traslate and scale the source image region
    /// @param quality The quality of image interpolation
    /// @param blend_mode Specifies how the source colors are combined with the background colors
    virtual void Draw(SkCanvas* sk_canvas, ArrayPtr<PointF> dest_points, const SkRect& src_rect, SkMatrix* matrix, SkFilterQuality quality, SkBlendMode blend_mode) const OVERRIDE;

    /// The underlying object that contains the binary image represented by the current object.
    std::unique_ptr<SkBitmap> m_sk_bitmap;
    /// The format of the image represented by the current object.
    Detail::SkEncodedFormatHolder m_sk_encoded_format;
    /// The current binary image lock mode.
    Imaging::ImageLockMode m_lock_mode = (Imaging::ImageLockMode)0;

    /// The black-and-white color table.
    static SkColorTable s_bw_color_table;
    /// The indexed color table.
    static SkColorTable s_indexed_color_table;
    /// The gray color table.
    static SkColorTable s_gray_color_table;

};

}}


#endif
