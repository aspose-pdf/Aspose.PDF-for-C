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
#include "drawing/drawing2d/coordinate_space.h"
#include "drawing/drawing2d/flush_intention.h"
#include "drawing/drawing2d/fill_mode.h"
#include "drawing/pen.h"
#include "drawing/copy_pixel_operation.h"
#include "drawing/drawing2d/compositing_quality.h"
#include "drawing/imaging/image_attributes.h"
#include "drawing/text/text_rendering_hint.h"
#include "drawing/imaging/emf_plus_record_type.h"
#include "drawing/imaging/play_record_callback.h"

#include "drawing/graphics_unit.h"
#include "drawing/string_format.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkCanvas.h>
#endif

#include <memory>
#include <functional>


ASPOSECPP_3RD_PARTY_CLASS(SkCanvas);

namespace System { namespace Drawing { namespace Imaging { class Metafile; } } }
namespace System { namespace Drawing { namespace Drawing2D { class GraphicsContainer; } } }

namespace System { namespace Drawing {

class Region;
class Bitmap;
class Icon;
class Font;

class Graphics : virtual public Object
{
    FRIEND_FUNCTION_System_MakeObject;

public:
    friend class Region;
    friend class Bitmap;
    friend class Font;

    using EnumerateMetafileProc = MulticastDelegate<bool(Imaging::EmfPlusRecordType, int32_t, int32_t, IntPtr, Imaging::PlayRecordCallback)>;

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

    void DrawArc(SharedPtr<Pen> pen, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t sweepAngle);
    void DrawArc(SharedPtr<Pen> pen, float x, float y, float width, float height, float startAngle, float sweepAngle);
    void DrawArc(SharedPtr<Pen> pen, Rectangle rect, float startAngle, float sweepAngle);
    void DrawArc(SharedPtr<Pen> pen, RectangleF rect, float startAngle, float sweepAngle);

    void DrawPie(SharedPtr<Pen> pen, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t sweepAngle);
    void DrawPie(SharedPtr<Pen> pen, float x, float y, float width, float height, float startAngle, float sweepAngle);
    void DrawPie(SharedPtr<Pen> pen, Rectangle rect, float startAngle, float sweepAngle);
    void DrawPie(SharedPtr<Pen> pen, RectangleF rect, float startAngle, float sweepAngle);

    void FillPie(SharedPtr<Brush> brush, int x, int y, int width, int height, int startAngle, int sweepAngle);
    void FillPie(SharedPtr<Brush> brush, float x, float y, float width, float height, float startAngle, float sweepAngle);
    void FillPie(SharedPtr<Brush> brush, Rectangle rect, float startAngle, float sweepAngle);

    void DrawRectangle(SharedPtr<Pen> pen, int x, int y, int width, int height);
    void DrawRectangle(SharedPtr<Pen> pen, Rectangle rect);

    void DrawRectangles(SharedPtr<Pen> pen, ArrayPtr<Rectangle> rects);
    void DrawRectangles(SharedPtr<Pen> pen, ArrayPtr<RectangleF> rects);

    void DrawPolygon(SharedPtr<Pen> pen, ArrayPtr<Point> points);
    void DrawPolygon(SharedPtr<Pen> pen, ArrayPtr<PointF> points);

    void FillRectangle(SharedPtr<Brush> brush, float x, float y, float width, float height);
    void FillRectangle(SharedPtr<Brush> brush, int x, int y, int width, int height);
    void FillRectangle(SharedPtr<Brush> brush, Rectangle rect);
    void FillRectangle(SharedPtr<Brush> brush, RectangleF rect);

    void FillRectangles(SharedPtr<Brush> brush, ArrayPtr<Rectangle> rects);
    void FillRectangles(SharedPtr<Brush> brush, ArrayPtr<RectangleF> rects);

    void DrawEllipse(SharedPtr<Pen> pen, Rectangle rect);
    void DrawEllipse(SharedPtr<Pen> pen, RectangleF rect);
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

    void FillPolygon(SharedPtr<Brush> brush, ArrayPtr<Point> points, Drawing2D::FillMode fillMode = Drawing2D::FillMode::Alternate);
    void FillPolygon(SharedPtr<Brush> brush, ArrayPtr<PointF> points, Drawing2D::FillMode fillMode = Drawing2D::FillMode::Alternate);

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

    void DrawImage(SharedPtr<Image> image, ArrayPtr<PointF> destPoints, RectangleF srcRect, GraphicsUnit srcUnit);
    void DrawImage(SharedPtr<Image> image, ArrayPtr<PointF> destPoints);
    void DrawImage(SharedPtr<Image> image, ArrayPtr<Point> destPoints, Rectangle srcRect, GraphicsUnit srcUnit);
    void DrawImage(SharedPtr<Image> image, ArrayPtr<Point> destPoints, Rectangle srcRect, GraphicsUnit srcUnit, SharedPtr<Imaging::ImageAttributes> imageAttr);
    void DrawImage(SharedPtr<Image> image, float x, float y, RectangleF srcRect, GraphicsUnit srcUnit);

    void DrawImageUnscaled(SharedPtr<Image> image, int x, int y);
    void DrawImageUnscaled(SharedPtr<Image> image, int x, int y, int width, int height);
    void DrawImageUnscaled(SharedPtr<Image> image, Rectangle rect);
    void DrawImageUnscaled(SharedPtr<Image> image, Point point);

    void DrawLine(SharedPtr<Pen> pen, Point pt1, Point pt2);
    void DrawLine(SharedPtr<Pen> pen, PointF pt1, PointF pt2);
    void DrawLine(SharedPtr<Pen> pen, float x1, float y1, float x2, float y2);

    void DrawIcon(SharedPtr<Icon> icon, Rectangle targetRect);
    void DrawIcon(SharedPtr<Icon> icon, int32_t x, int32_t y);
    void DrawIconUnstretched(SharedPtr<Icon> icon, Rectangle targetRect);
    void DrawImageUnscaledAndClipped(SharedPtr<Image> image, Rectangle rectangle);
    ArrayPtr<SharedPtr<Region>> MeasureCharacterRanges(System::String text, SharedPtr<Font> font, RectangleF layoutRect, SharedPtr<StringFormat> stringFormat);


    SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, PointF const& origin = PointF(0, 0), System::SharedPtr<StringFormat> const& stringFormat = nullptr) const;
    SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, int width, System::SharedPtr<StringFormat> const& stringFormat = nullptr) const;
    SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, SizeF const& layoutArea, System::SharedPtr<StringFormat> const& stringFormat, int& charactersFitted, int& linesFilled) const;
    SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, SizeF const& layoutArea, System::SharedPtr<StringFormat> const& stringFormat = nullptr) const;

    IntPtr GetHdc();

    void ReleaseHdc();
    void ReleaseHdc(IntPtr hdc);

    static SharedPtr<Graphics> FromHwnd(IntPtr hwnd);
    static SharedPtr<Graphics> FromHwndInternal(IntPtr hwnd);

    float get_PageScale() const;
    void set_PageScale(float scale);

    Point get_RenderingOrigin() const;
    void set_RenderingOrigin(Point point);

    SharedPtr<Drawing2D::Matrix> get_Transform();
    void set_Transform(SharedPtr<Drawing2D::Matrix> matrix);

    float get_DpiX();
    float get_DpiY();

    SharedPtr<Region> get_Clip();
    void set_Clip(SharedPtr<Region> region);

    void SetClip(SharedPtr<Region> region, Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);
    void SetClip(Rectangle rect, Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);
    void SetClip(RectangleF rect, Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);
    void SetClip(SharedPtr<Graphics> graphics, Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);
    void SetClip(SharedPtr<Drawing2D::GraphicsPath> path, Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);

    void ExcludeClip(Rectangle rect);
    void ExcludeClip(SharedPtr<Region> region);

    void ResetClip();

    void DrawPath(SharedPtr<Pen> pen, SharedPtr<Drawing2D::GraphicsPath> path);
    void DrawLines(SharedPtr<Pen> pen, System::ArrayPtr<System::Drawing::Point> points);
    void DrawLines(SharedPtr<Pen> pen, System::ArrayPtr<System::Drawing::PointF> points);

    void DrawBezier(SharedPtr<Pen> pen, const Point & pt1, const Point & pt2, const Point & pt3, const Point & pt4);
    void DrawBezier(SharedPtr<Pen> pen, const PointF& pt1, const PointF& pt2, const PointF& pt3, const PointF& pt4);
    void DrawBezier(SharedPtr<Pen> pen, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
    void DrawBeziers(SharedPtr<Pen> pen, ArrayPtr<Point> points);
    void DrawBeziers(SharedPtr<Pen> pen, ArrayPtr<PointF> points);

    void DrawClosedCurve(SharedPtr<Pen> pen, ArrayPtr<Point> points, float tension = 0.5f, Drawing2D::FillMode fillmode = Drawing2D::FillMode::Alternate);
    void DrawClosedCurve(SharedPtr<Pen> pen, ArrayPtr<PointF> points, float tension = 0.5f, Drawing2D::FillMode fillmode = Drawing2D::FillMode::Alternate);

    void DrawCurve(SharedPtr<Pen> pen, ArrayPtr<Point> points, float tension = 0.5f);
    void DrawCurve(SharedPtr<Pen> pen, ArrayPtr<PointF> points, float tension = 0.5f);
    void DrawCurve(SharedPtr<Pen> pen, ArrayPtr<Point> points, int32_t offset, int32_t numberOfSegments, float tension = 0.5f);
    void DrawCurve(SharedPtr<Pen> pen, ArrayPtr<PointF> points, int32_t offset, int32_t numberOfSegments, float tension = 0.5f);

    void FillClosedCurve(SharedPtr<Brush> brush, ArrayPtr<PointF> points, Drawing2D::FillMode fillmode = Drawing2D::FillMode::Alternate, float tension = 0.5f);
    void FillClosedCurve(SharedPtr<Brush> brush, ArrayPtr<Point> points, Drawing2D::FillMode fillmode = Drawing2D::FillMode::Alternate, float tension = 0.5f);

    void ResetTransform();
    void ScaleTransform(float sx, float sy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    void RotateTransform(float angle, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    void TranslateTransform(float dx, float dy, Drawing2D::MatrixOrder order= Drawing2D::MatrixOrder::Prepend);
    void MultiplyTransform(SharedPtr<Drawing2D::Matrix> matrix, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);

    void TranslateClip(int dx, int dy);
    void TranslateClip(float dx, float dy);

    void TransformPoints(Drawing2D::CoordinateSpace destSpace, Drawing2D::CoordinateSpace srcSpace, ArrayPtr<System::Drawing::Point> pts);
    void TransformPoints(Drawing2D::CoordinateSpace destSpace, Drawing2D::CoordinateSpace srcSpace, ArrayPtr<System::Drawing::PointF> pts);

    SharedPtr<Drawing2D::GraphicsState> Save();
    void Restore(SharedPtr<Drawing2D::GraphicsState> graphicsState);
    void Flush(Drawing2D::FlushIntention intention = Drawing2D::FlushIntention::Flush);

    void IntersectClip(System::SharedPtr<Region> region);
    void IntersectClip(System::Drawing::RectangleF rect);
    void IntersectClip(System::Drawing::Rectangle rect);

    bool IsVisible(Point point);
    bool IsVisible(PointF point);
    bool IsVisible(Rectangle rect);
    bool IsVisible(RectangleF rect);
    bool IsVisible(int32_t x, int32_t y);
    bool IsVisible(float x, float y);
    bool IsVisible(float x, float y, float width, float height);
    bool IsVisible(int32_t x, int32_t y, int32_t width, int32_t height);

    SharedPtr<Drawing2D::GraphicsContainer> BeginContainer();
    SharedPtr<Drawing2D::GraphicsContainer> BeginContainer(Rectangle dstrect, Rectangle srcrect, GraphicsUnit unit);
    SharedPtr<Drawing2D::GraphicsContainer> BeginContainer(RectangleF dstrect, RectangleF srcrect, GraphicsUnit unit);
    void EndContainer(SharedPtr<Drawing2D::GraphicsContainer> container);

    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, ArrayPtr<PointF> destPoints, Graphics::EnumerateMetafileProc callback);
    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, ArrayPtr<Point> destPoints, Graphics::EnumerateMetafileProc callback);
    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, Point destPoint, Graphics::EnumerateMetafileProc callback);
    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, PointF destPoint, Graphics::EnumerateMetafileProc callback);
    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, Rectangle destRect, Graphics::EnumerateMetafileProc callback);
    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, RectangleF destRect, Graphics::EnumerateMetafileProc callback);
    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, Point destPoint, Rectangle srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);
    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, PointF destPoint, RectangleF srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);
    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, ArrayPtr<Point> destPoints, Rectangle srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);
    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, ArrayPtr<PointF> destPoints, RectangleF srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);
    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, Rectangle destRect, Rectangle srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);
    void EnumerateMetafile(SharedPtr<Imaging::Metafile> metafile, RectangleF destRect, RectangleF srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);

    void AddMetafileComment(System::ArrayPtr<uint8_t> data);

    void CopyFromScreen(Point upperLeftSource, Point upperLeftDestination, Size blockRegionSize, CopyPixelOperation copyPixelOperation = CopyPixelOperation::SourceCopy);
    void CopyFromScreen(int32_t sourceX, int32_t sourceY, int32_t destinationX, int32_t destinationY, Size blockRegionSize, CopyPixelOperation copyPixelOperation = CopyPixelOperation::SourceCopy);

    int32_t get_TextContrast() const;
    void set_TextContrast(int32_t value);

    bool get_IsClipEmpty() const;
    bool get_IsVisibleClipEmpty() const;
    RectangleF get_VisibleClipBounds() const;

    Color GetNearestColor(Color color);

    void Dispose() { };
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
    Point m_rendering_origin;

    Drawing2D::PixelOffsetMode m_pixel_offset_mode;

    SharedPtr<Drawing2D::Matrix> m_transform_matrix;

    float m_horizontal_resolution; //only default 96dpi is supported
    float m_vertical_resolution; //only default 96dpi is supported

    SkRect ToSkRect(const Drawing::RectangleF& rect, GraphicsUnit unit);

    SharedPtr<Drawing2D::Matrix> CalculateWorldMatrix();

    static float ConvertToPixelSize(float size, float dpi, GraphicsUnit unit);
};

}}


#endif // _aspose_drawing_graphics_h_
