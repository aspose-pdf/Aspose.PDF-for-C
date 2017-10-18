#ifndef _aspose_system_drawing_image_h_
#define _aspose_system_drawing_image_h_

#include "system/object.h"
#include "drawing/imaging/image_attributes.h"
#include "drawing/imaging/image_format.h"
#include "drawing/imaging/image_codec_info.h"
#include "drawing/imaging/encoder_parameters.h"
#include "drawing/imaging/pixel_format.h"
#include "drawing/imaging/color_palette.h"
#include "drawing/imaging/frame_dimension.h"
#include "drawing/rotate_flip_type.h"
#include "drawing/graphics_unit.h"
#include "drawing/size.h"
#include "drawing/rectangle_f.h"
#include "system/io/stream.h"
#include "system/string.h"

// skia headers and forwards
#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkImage.h>
#include <core/SkData.h>
#include <codec/SkEncodedFormat.h>
#endif

#define ASPOSE_DUMMY_META_FILE


ASPOSECPP_3RD_PARTY_CLASS(SkBitmap);
ASPOSECPP_3RD_PARTY_CLASS(SkCanvas);
ASPOSECPP_3RD_PARTY_CLASS(SkData);
ASPOSECPP_3RD_PARTY_CLASS(SkMatrix);
ASPOSECPP_3RD_PARTY_ENUM(SkEncodedFormat);
ASPOSECPP_3RD_PARTY_STRUCT(SkImageInfo);
ASPOSECPP_3RD_PARTY_STRUCT(SkRect);

template <typename T> class sk_sp;

namespace System { namespace Drawing {

    class Bitmap;
    class TextureBrush;

    class Image: virtual public Object
    {
        RTTI_INFO(System::Drawing::Image, ::System::BaseTypesInfo<System::Object>)

    public:
        void Save(const String & filename);
        void Save(const String & filename, Imaging::ImageFormatPtr format);
        void Save(SharedPtr<System::IO::Stream> stream, Imaging::ImageFormatPtr format);
        void Save(const String & filename, Imaging::ImageCodecInfoPtr encoder, Imaging::EncoderParametersPtr encoder_params);
        void Save(SharedPtr<System::IO::Stream> stream, Imaging::ImageCodecInfoPtr encoder, Imaging::EncoderParametersPtr encoder_params);
        void SaveAdd(Imaging::EncoderParametersPtr encoder_params);
        void SaveAdd(SharedPtr<Image> image, Imaging::EncoderParametersPtr encoder_params);

        virtual SharedPtr<Image> Clone() = 0;
        void RotateFlip(RotateFlipType rotate_flip_type);

        RectangleF GetBounds(GraphicsUnit & page_unit);

        virtual int get_Width() const = 0;
        virtual int get_Height() const = 0;
        Size get_Size() const;

        virtual Imaging::ImageFormatPtr get_RawFormat() const = 0;
        virtual Imaging::PixelFormat get_PixelFormat() const = 0;

        float get_HorizontalResolution() const;
        float get_VerticalResolution() const;

        virtual Imaging::ColorPalettePtr get_Palette() const;
        virtual void set_Palette(Imaging::ColorPalettePtr value);

        ArrayPtr<Guid> get_FrameDimensionsList() const;

        int GetFrameCount(Imaging::FrameDimensionPtr dimension);
        int SelectActiveFrame(Imaging::FrameDimensionPtr dimension, int frameIndex);

        static SharedPtr<Image> FromStream(SharedPtr<System::IO::Stream> stream, bool use_embedded_color_management = false, bool validate_image_data = true);
        static SharedPtr<Image> FromFile(const String & filename, bool use_embedded_color_management = false);
        static bool IsAlphaPixelFormat(Imaging::PixelFormat pixfmt);
        static int GetPixelFormatSize(Imaging::PixelFormat pixfmt);

        static SharedPtr<Bitmap> FromHbitmap(IntPtr hbitmap);

        void Dispose() { };

    protected:
        enum { k_default_save_quality = 80 };

        friend class Graphics;
        friend class TextureBrush;
        friend class Bitmap;

        virtual SkCanvas * GetDrawingCanvas() const = 0;
        virtual sk_sp<SkData> GetRawBytes(SkEncodedFormat encoder_type) const = 0;

        void InternalSave(SharedPtr<System::IO::Stream> stream, SkEncodedFormat encoder_type);

        static SkEncodedFormat CheckImageFormat(Imaging::ImageFormatPtr image_format);

        virtual const SkBitmap* GetSkBitmap() const = 0;
        virtual const SkImageInfo* GetSkImageInfo() const = 0;
        virtual const SkEncodedFormat GetSkEncodedFormat() const = 0;

        virtual Imaging::PixelFormat GetOriginalFormat() const = 0;

        virtual void Draw(SkCanvas* sk_canvas, const SkRect& dest_rect, const SkRect&src_rect, SkMatrix* matrix) const = 0;
        virtual void Draw(SkCanvas * sk_canvas, const SkRect& dest_rect, SkMatrix* matrix) const = 0;
        virtual void Draw(SkCanvas* sk_canvas, ArrayPtr<PointF> dest_points, const SkRect& src_rect, SkMatrix* matrix) const = 0;

        static bool IsWmf(System::SharedPtr<System::IO::Stream> stream);
        static bool IsEmf(System::SharedPtr<System::IO::Stream> stream);

        Imaging::ColorPalettePtr m_palette;
        float m_horizontal_resolution = 96.f; //only default 96dpi is supported
        float m_vertical_resolution = 96.f; //only default 96dpi is supported

    };
}}


#endif
