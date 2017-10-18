#ifndef _aspose_drawing_graphics_h_
#define _aspose_drawing_graphics_h_

#include "fwd.h"
#include "drawing/image.h"
#include "drawing/brushes.h"
#include "drawing/font.h"
#include "drawing/size_f.h"
#include "drawing/drawing2d/smoothing_mode.h"
#include "drawing/drawing2d/graphics_path.h"
#include "drawing/drawing2d/graphics_state.h"
#include "drawing/drawing2d/pixel_offset_mode.h"
#include "drawing/drawing2d/interpolation_mode.h"
#include "drawing/drawing2d/combine_mode.h"
#include "drawing/drawing2d/compositing_mode.h"
#include "drawing/drawing2d/matrix_order.h"
#include "drawing/drawing2d/matrix.h"
#include "drawing/pen.h"
#include "drawing/drawing2d/compositing_quality.h"
#include "drawing/imaging/image_attributes.h"
#include "drawing/text/text_rendering_hint.h"

#include "drawing/graphics_unit.h"
#include "drawing/string_format.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkCanvas.h>
#endif

#include <memory>
#include <functional>


ASPOSECPP_3RD_PARTY_CLASS(SkCanvas);


namespace System { namespace Drawing {

class Region;
class Bitmap;

class Graphics : virtual public Object
{
    FRIEND_FUNCTION_System_MakeObject;

public:
    friend class Region;
    friend class Bitmap;

    using DrawImageAbort = std::function<bool(IntPtr ptr)>;

    static SharedPtr<Graphics> FromImage(SharedPtr<Image> image);

    Drawing2D::CompositingMode get_CompositingMode();
    void set_CompositingMode(Drawing2D::CompositingMode mode);

    Drawing2D::CompositingQuality get_CompositingQuality();
    void set_CompositingQuality(Drawing2D::CompositingQuality quality);

    Drawing2D::InterpolationMode get_InterpolationMode();
    void set_InterpolationMode(Drawing2D::InterpolationMode mode);

    Drawing2D::PixelOffsetMode get_PixelOffsetMode();
    void set_PixelOffsetMode(Drawing2D::PixelOffsetMode mode);

    Drawing2D::SmoothingMode get_SmoothingMode();
    void set_SmoothingMode(Drawing2D::SmoothingMode mode);

    Text::TextRenderingHint get_TextRenderingHint();
    void set_TextRenderingHint(Text::TextRenderingHint hint);

    GraphicsUnit get_PageUnit() const;
    void set_PageUnit(GraphicsUnit value);

    RectangleF get_ClipBounds();

    void Clear(Color color);

    void DrawArc(SharedPtr<Pen> pen, int x, int y, int width, int height, int startAngle, int sweepAngle);
    void DrawArc(SharedPtr<Pen> pen, float x, float y, float width, float height, float startAngle, float sweepAngle);

    void DrawPie(SharedPtr<Pen> pen, int x, int y, int width, int height, int startAngle, int sweepAngle);
    void DrawPie(SharedPtr<Pen> pen, float x, float y, float width, float height, float startAngle, float sweepAngle);

    void FillPie(SharedPtr<Brush> pen, int x, int y, int width, int height, int startAngle, int sweepAngle);
    void FillPie(SharedPtr<Brush> pen, float x, float y, float width, float height, float startAngle, float sweepAngle);

    void DrawRectangle(SharedPtr<Pen> pen, int x, int y, int width, int height);
    void DrawRectangle(SharedPtr<Pen> pen, Rectangle rect);

    void DrawPolygon(SharedPtr<Pen> pen, ArrayPtr<Point> points);

    void FillRectangle(SharedPtr<Brush> brush, float x, float y, float width, float height);
    void FillRectangle(SharedPtr<Brush> brush, int x, int y, int width, int height);
    void FillRectangle(SharedPtr<Brush> brush, Rectangle rect);
    void FillRectangle(SharedPtr<Brush> brush, RectangleF rect);

    void DrawEllipse(SharedPtr<Pen> brush, Rectangle rect);
    void DrawEllipse(SharedPtr<Pen> pen, int x, int y, int width, int height);
    void DrawEllipse(SharedPtr<Pen> pen, float x, float y, float width, float height);

    void DrawString(const String &str, SharedPtr<Font> font, SharedPtr<Brush> brush, PointF topLeft, System::SharedPtr<System::Drawing::StringFormat> stringFormat = nullptr);
    void DrawString(const String &str, SharedPtr<Font> font, SharedPtr<Brush> brush, RectangleF layoutRectangle, System::SharedPtr<System::Drawing::StringFormat> stringFormat = nullptr);
    void DrawString(const String &str, SharedPtr<Font> font, SharedPtr<Brush> brush, float x, float y, System::SharedPtr<System::Drawing::StringFormat> stringFormat = nullptr);

    void FillEllipse(SharedPtr<Brush> brush, Rectangle rect);
    void FillEllipse(SharedPtr<Brush> brush, RectangleF rect);
    void FillEllipse(SharedPtr<Brush> brush, int x, int y, int width, int height);

    void FillPath(SharedPtr<Brush> brush, SharedPtr<Drawing2D::GraphicsPath> path);
    void FillRegion(SharedPtr<Brush> brush, SharedPtr<Region> region);

    void FillPolygon(SharedPtr<Brush> brush, ArrayPtr<Point> points);

    void DrawImage(SharedPtr<Image> image, System::ArrayPtr<Point> destPoints);
    void DrawImage(SharedPtr<Image> image, System::ArrayPtr<PointF> destPoints, const RectangleF & srcRect, GraphicsUnit srcUnit, Imaging::ImageAttributesPtr imgAttributes);
    void DrawImage(SharedPtr<Image> image, int x, int y);
    void DrawImage(SharedPtr<Image> image, Point pt);
    void DrawImage(SharedPtr<Image> image, PointF pt);
    void DrawImage(SharedPtr<Image> image, int x, int y, int width, int height);
    void DrawImage(SharedPtr<Image> image, RectangleF destRect, RectangleF srcRect, GraphicsUnit srcUnit);
    void DrawImage(SharedPtr<Image> image, Rectangle destRect, Rectangle srcRect, GraphicsUnit srcUnit);
    void DrawImage(SharedPtr<Image> image, int x, int y, Rectangle srcRect, GraphicsUnit srcUnit);
    void DrawImage(SharedPtr<Image> image, const Rectangle & rect);
    void DrawImage(SharedPtr<Image> image, const RectangleF & rect);
    void DrawImage(SharedPtr<Image> image, Rectangle destRect, int srcX, int srcY, int srcWidth, int srcHeight, GraphicsUnit srcUnit, Imaging::ImageAttributesPtr imgAttributes);
    void DrawImage(SharedPtr<Image> image, Rectangle destRect, int srcX, int srcY, int srcWidth, int srcHeight, GraphicsUnit srcUnit);

    void DrawImage(SharedPtr<Image> image, Rectangle destRect, int srcX, int srcY, int srcWidth, int srcHeight, GraphicsUnit srcUnit, Imaging::ImageAttributesPtr imgAttributes, Graphics::DrawImageAbort callback);
    void DrawImage(SharedPtr<Image> image, Rectangle destRect, float srcX, float srcY, float srcWidth, float srcHeight, GraphicsUnit srcUnit, Imaging::ImageAttributesPtr imgAttributes, Graphics::DrawImageAbort callback);

    void DrawImage(SharedPtr<Image> image, Rectangle destRect, int srcX, int srcY, int srcWidth, int srcHeight, GraphicsUnit srcUnit, Imaging::ImageAttributesPtr imgAttributes, Graphics::DrawImageAbort callback, IntPtr callbackData);
    void DrawImage(SharedPtr<Image> image, Rectangle destRect, float srcX, float srcY, float srcWidth, float srcHeight, GraphicsUnit srcUnit, Imaging::ImageAttributesPtr imgAttributes, Graphics::DrawImageAbort callback, IntPtr callbackData);

    void DrawImageUnscaled(SharedPtr<Image> image, int x, int y);
    void DrawImageUnscaled(SharedPtr<Image> image, int x, int y, int width, int height);
    void DrawImageUnscaled(SharedPtr<Image> image, Rectangle rect);

    void DrawLine(SharedPtr<Pen> pen, Point pt1, Point pt2);
    void DrawLine(SharedPtr<Pen> pen, PointF pt1, PointF pt2);
    void DrawLine(SharedPtr<Pen> pen, float x1, float y1, float x2, float y2);


    SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, PointF const& origin = PointF(0, 0), System::SharedPtr<StringFormat> const& stringFormat = nullptr) const;
    SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, int width, System::SharedPtr<StringFormat> const& stringFormat) const;
    SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, SizeF const& layoutArea, System::SharedPtr<StringFormat> const& stringFormat, int& charactersFitted, int& linesFilled) const;
    SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, SizeF const& layoutArea, System::SharedPtr<StringFormat> const& stringFormat = nullptr) const;


    IntPtr GetHdc();

    void ReleaseHdc();
    void ReleaseHdc(IntPtr hdc);

    static SharedPtr<Graphics> FromHwnd(IntPtr hwnd);
    static SharedPtr<Graphics> FromHwndInternal(IntPtr hwnd);

    float get_PageScale() const;
    void set_PageScale(float scale);

    SharedPtr<Drawing2D::Matrix> get_Transform();
    void set_Transform(SharedPtr<Drawing2D::Matrix> matrix);

    float get_DpiX();
    float get_DpiY();

    SharedPtr<Region> get_Clip();
    void set_Clip(SharedPtr<Region> value);

    void SetClip(SharedPtr<Region> value, Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);
    void SetClip(Rectangle rect, Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);
    void SetClip(RectangleF rect, Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);

    void DrawPath(SharedPtr<Pen> pen, SharedPtr<Drawing2D::GraphicsPath> path);
    void DrawLines(SharedPtr<Pen> pen, System::ArrayPtr<System::Drawing::Point> points);
    void DrawLines(SharedPtr<Pen> pen, System::ArrayPtr<System::Drawing::PointF> points);
    void DrawBezier(SharedPtr<Pen> pen, const PointF& pt1, const PointF& pt2, const PointF& pt3, const PointF& pt4);

    void ResetTransform();
    void ScaleTransform(float sx, float sy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    void RotateTransform(float angle, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    void TranslateTransform(float dx, float dy, Drawing2D::MatrixOrder order= Drawing2D::MatrixOrder::Prepend);
    void MultiplyTransform(SharedPtr<Drawing2D::Matrix> matrix, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);

    void TranslateClip(int dx, int dy);
    void TranslateClip(float dx, float dy);

    void Dispose() { };
    SharedPtr<Drawing2D::GraphicsState> Save();

private:

    std::unique_ptr<SkCanvas> m_sk_canvas;

    Graphics(SkCanvas * canvas);

    Drawing2D::InterpolationMode m_interpolation_mode;
    Drawing2D::CompositingQuality m_compositing_quality;
    Drawing2D::CompositingMode m_compositing_mode;
    Drawing2D::SmoothingMode m_smoothing_mode;
    Text::TextRenderingHint m_text_rendering_hint;
    GraphicsUnit m_page_unit;
    float m_page_scale;
    Drawing2D::PixelOffsetMode m_pixel_offset_mode;

    SharedPtr<Drawing2D::Matrix> m_transform_matrix;

    float m_horizontal_resolution; //only default 96dpi is supported
    float m_vertical_resolution; //only default 96dpi is supported

    SizeF ScaleGraphicsUnits(GraphicsUnit unit);
    SkRect ToSkRect(const Drawing::RectangleF& rect, GraphicsUnit unit);
};

}}


#endif // _aspose_drawing_graphics_h_
