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

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <codec/SkEncodedFormat.h>
#include <core/SkBitmap.h>
#include <core/SkCanvas.h>
#endif

ASPOSECPP_3RD_PARTY_CLASS(SkBitmap);
ASPOSECPP_3RD_PARTY_CLASS(SkCanvas);
ASPOSECPP_3RD_PARTY_CLASS(SkData);
ASPOSECPP_3RD_PARTY_CLASS(SkWStream);
ASPOSECPP_3RD_PARTY_CLASS(SkMatrix);
ASPOSECPP_3RD_PARTY_ENUM(SkEncodedFormat);
ASPOSECPP_3RD_PARTY_STRUCT(SkImageInfo);
ASPOSECPP_3RD_PARTY_STRUCT(SkRect);

namespace System { namespace Drawing {

namespace Detail {
    ASPOSECPP_3RD_PARTY_ENUM_HOLDER(SkEncodedFormat, int, SkEncodedFormatHolder);
}

namespace Imaging { class Metafile; }

class Graphics;

class Bitmap : public Image
{
    RTTI_INFO(System::Drawing::Bitmap, ::System::BaseTypesInfo<System::Drawing::Image>)

public:
    Bitmap(SharedPtr<Image> original);
    Bitmap(SharedPtr<System::IO::Stream> stream, bool useIcm = false);
    Bitmap(const String & filename);
    Bitmap(const String & filename, bool useIcm);
    Bitmap(int width, int height, Imaging::PixelFormat format = Imaging::PixelFormat::Format32bppArgb, void * extended_data = nullptr);
    Bitmap(SharedPtr<Image> original, const Size &size);
    Bitmap(SharedPtr<Image> original, int width, int height);
    virtual ~Bitmap();

    virtual int get_Width() const OVERRIDE;
    virtual int get_Height() const OVERRIDE;

    virtual Imaging::ImageFormatPtr get_RawFormat() const OVERRIDE;
    virtual Imaging::PixelFormat get_PixelFormat() const OVERRIDE;

    virtual Imaging::ColorPalettePtr get_Palette() const OVERRIDE;
    void set_Palette(Imaging::ColorPalettePtr value) OVERRIDE;

    void SetResolution(float xDpi, float yDpi);
    void SetPixel(int x, int y, Color color);

    Imaging::BitmapDataPtr LockBits(const Rectangle & rect, Imaging::ImageLockMode flags, Imaging::PixelFormat format);
    Imaging::BitmapDataPtr LockBits(const Rectangle & rect, Imaging::ImageLockMode flags, Imaging::PixelFormat format, Imaging::BitmapDataPtr bitmap_data);
    void UnlockBits(Imaging::BitmapDataPtr bitmap_data);
    Color GetPixel(int x, int y);

    void MakeTransparent(Color transparent_color = Color::get_LightGray());
    IntPtr GetHbitmap();

    virtual SharedPtr<Image> Clone() OVERRIDE;
    SharedPtr<Bitmap> Clone(Rectangle rect, Imaging::PixelFormat format);
    SharedPtr<Bitmap> Clone(RectangleF rect, Imaging::PixelFormat format);

    //it must be public for manually implemented code parts
    virtual const SkBitmap* GetSkBitmap() const OVERRIDE;

    //service method used in manually implemented code parts
    static SharedPtr<Bitmap> ConvertToARGBImage(SharedPtr<Bitmap> src_bmp);

    //service method used in manually implemented code parts
    void PremultipleColors();

private:
    void PutRawBytesBmp(SkWStream *to);

    Imaging::PixelFormat m_original_pixel_format;

protected:
    friend class Graphics;
    friend class Imaging::Metafile;
    FRIEND_FUNCTION_System_MakeObject;

    Bitmap(SharedPtr<Bitmap> original, Rectangle rect);

    static bool GetSkBitmapFromArray(ArrayPtr<uint8_t> data, SkBitmap * bitmap, SkEncodedFormat* sk_encoded_format);

    virtual SkCanvas * GetDrawingCanvas() const OVERRIDE;
    virtual sk_sp<SkData> GetRawBytes(SkEncodedFormat encoder_type, int quality) OVERRIDE;

    virtual const SkImageInfo* GetSkImageInfo() const OVERRIDE;
    virtual const SkEncodedFormat GetSkEncodedFormat() const OVERRIDE;

    virtual Imaging::PixelFormat GetOriginalFormat() const OVERRIDE { return m_original_pixel_format; }

    virtual void Draw(SkCanvas* sk_canvas, const SkRect& dest_rect, const SkRect& src_rect, SkMatrix* matrix) const OVERRIDE;
    virtual void Draw(SkCanvas * sk_canvas, const SkRect& dest_rect, SkMatrix* matrix)  const OVERRIDE;
    virtual void Draw(SkCanvas* sk_canvas, ArrayPtr<PointF> dest_points, const SkRect& src_rect, SkMatrix* matrix) const OVERRIDE;

    std::unique_ptr<SkBitmap> m_sk_bitmap;
    Detail::SkEncodedFormatHolder m_sk_encoded_format;

    Imaging::ImageLockMode m_lock_mode = (Imaging::ImageLockMode)0;

};

}}


#endif
