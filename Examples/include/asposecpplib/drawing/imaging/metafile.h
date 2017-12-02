#ifndef _aspose_system_drawing_metafile_h_
#define _aspose_system_drawing_metafile_h_

#include "fwd.h"

#include "drawing/image.h"
#include "drawing/imaging/emf_type.h"
#include "drawing/imaging/metafile_header.h"
#include "drawing/imaging/metafile_frame_unit.h"
#include "drawing/rectangle.h"
#include "system/io/stream.h"

#include <memory>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkBitmap.h>
#include <core/SkCanvas.h>
#endif


ASPOSECPP_3RD_PARTY_CLASS(SkBitmap);
ASPOSECPP_3RD_PARTY_CLASS(SkCanvas);
ASPOSECPP_3RD_PARTY_CLASS(SkData);
ASPOSECPP_3RD_PARTY_ENUM(SkEncodedFormat);
ASPOSECPP_3RD_PARTY_STRUCT(SkImageInfo);


namespace System { namespace Drawing { namespace Imaging {

class Metafile : public Image
{
    RTTI_INFO(System::Drawing::Imaging::Metafile, ::System::BaseTypesInfo<System::Drawing::Image>)

public:
    Metafile(System::String filename);
    Metafile(SharedPtr<System::IO::Stream> stream);
    Metafile(SharedPtr<System::IO::Stream> stream, IntPtr hdc, EmfType type);
    Metafile(SharedPtr<System::IO::Stream> stream, IntPtr hdc);
    Metafile(SharedPtr<System::IO::Stream> stream, IntPtr hdc, Rectangle rect, MetafileFrameUnit frameUnit, EmfType type);
    Metafile(SharedPtr<System::IO::Stream> stream, IntPtr hdc, RectangleF rect, MetafileFrameUnit frameUnit, EmfType type);
    Metafile(IntPtr, EmfType);
    virtual ~Metafile();
    SharedPtr<MetafileHeader> GetMetafileHeader();
    IntPtr GetHenhmetafile();

    virtual int get_Width() const OVERRIDE;
    virtual int get_Height() const OVERRIDE;

    virtual Imaging::ImageFormatPtr get_RawFormat() const OVERRIDE;
    virtual Imaging::PixelFormat get_PixelFormat() const OVERRIDE;

    virtual SharedPtr<Image> Clone() OVERRIDE;

protected:
    FRIEND_FUNCTION_System_MakeObject;

    virtual SkCanvas * GetDrawingCanvas() const OVERRIDE;
    virtual sk_sp<SkData> GetRawBytes(SkEncodedFormat encoder_type, int quality) OVERRIDE;
    virtual const SkBitmap* GetSkBitmap() const OVERRIDE;
    virtual const SkImageInfo* GetSkImageInfo() const OVERRIDE;
    virtual const SkEncodedFormat GetSkEncodedFormat() const OVERRIDE;

    virtual void Draw(SkCanvas* sk_canvas, const SkRect& dest_rect, const SkRect&src_rect, SkMatrix* matrix) const OVERRIDE;
    virtual void Draw(SkCanvas * sk_canvas, const SkRect& dest_rect, SkMatrix* matrix) const OVERRIDE;
    virtual void Draw(SkCanvas* sk_canvas, ArrayPtr<PointF> dest_points, const SkRect& src_rect, SkMatrix* matrix) const OVERRIDE;

    virtual Imaging::PixelFormat GetOriginalFormat() const OVERRIDE;

#ifdef ASPOSE_DUMMY_META_FILE
    Metafile(SharedPtr<System::IO::Stream> stream, Drawing::Imaging::ImageFormatPtr image_format);
    Drawing::Imaging::ImageFormatPtr m_image_format;
    Rectangle m_bounds;
    int m_width;
    int m_height;
    std::unique_ptr<SkBitmap> m_dummy_sk_bitmap;
#endif
};

}}}

#endif