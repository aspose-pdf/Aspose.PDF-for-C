#ifndef _aspose_drawing_texture_brush_h
#define _aspose_drawing_texture_brush_h

#include "fwd.h"
#include "brush.h"
#include "image.h"
#include "drawing2d/wrap_mode.h"
#include "drawing2d/matrix.h"
#include "drawing2d/matrix_order.h"
#include "rectangle.h"
#include "rectangle_f.h"
#include "imaging/image_attributes.h"
#include "drawing2d/wrap_mode.h"

#include <memory>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include "core/SkShader.h"
#endif


ASPOSECPP_3RD_PARTY_CLASS(SkBitmap);
ASPOSECPP_3RD_PARTY_CLASS(SkMatrix);
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
ASPOSECPP_3RD_PARTY_CLASS(SkShader);


namespace System { namespace Drawing {

class TextureBrush : public Brush
{
    RTTI_INFO(TextureBrush, ::System::BaseTypesInfo<System::Drawing::Brush>);

public:
    TextureBrush(SharedPtr<Image> image);
    TextureBrush(SharedPtr<Image> image, RectangleF dst_rect, SharedPtr<Imaging::ImageAttributes> image_attrs);
    TextureBrush(SharedPtr<Image> image, Drawing2D::WrapMode wrap_mode, RectangleF dst_rect);
    TextureBrush(SharedPtr<Image> image, Drawing2D::WrapMode wrap_mode, Rectangle dst_rect);
    virtual ~TextureBrush();

    SharedPtr<Image> get_Image();

    Drawing2D::WrapMode get_WrapMode();
    void set_WrapMode(Drawing2D::WrapMode wrap_mode);

    System::SharedPtr<Drawing2D::Matrix> get_Transform();
    void set_Transform(System::SharedPtr<Drawing2D::Matrix> matrix);

    void ResetTransform();
    void ScaleTransform(float sx, float sy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    void RotateTransform(float angle, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    void TranslateTransform(float dx, float dy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    void MultiplyTransform(SharedPtr<Drawing2D::Matrix> matrix, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);

protected:
    virtual void Apply(SkPaint &paint);
    virtual SharedPtr<Brush> Clone();
    void InitBrushSettings(SharedPtr<Image> image, Drawing2D::WrapMode wrap_mode, Rectangle dst_rect);

    SharedPtr<Image> m_image;
    SharedPtr<Drawing2D::Matrix> m_transform_matrix = MakeObject<Drawing2D::Matrix>();
    Rectangle m_texture_rect;

    Drawing2D::WrapMode m_wrap_mode = Drawing2D::WrapMode::Tile;
    int m_sk_tile_mode_x;
    int m_sk_tile_mode_y;
    std::unique_ptr<SkMatrix> m_addition_clamp_matrix;
    std::unique_ptr<SkBitmap> m_brush_bitmap;
};

}} // namespace System { namespace Drawing {

#endif // #ifndef texture_brush_h