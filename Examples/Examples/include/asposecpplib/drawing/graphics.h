/// @file drawing/graphics.h
#ifndef _aspose_drawing_graphics_h_
#define _aspose_drawing_graphics_h_

#include "fwd.h"
#include "drawing/image.h"
#include "drawing/brushes.h"
#include "drawing/font.h"
#include "drawing/size_f.h"
#include "drawing/drawing2d/smoothing_mode.h"
#include "drawing/drawing2d/graphics_path.h"
#include "drawing/drawing2d/graphics_container.h"
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
#include <stack>

/// Forward declaration of SkCanvas class.
ASPOSECPP_3RD_PARTY_CLASS(SkCanvas);
/// Forward declaration of SkSize class.
ASPOSECPP_3RD_PARTY_STRUCT(SkSize);

namespace System { namespace Drawing { namespace Imaging { class Metafile; } } }
namespace System { namespace Drawing { namespace Drawing2D { class GraphicsContainer; } } }

namespace System { namespace Drawing {

class Region;
class Bitmap;
class Icon;
class Font;
/// Represents a drawing surface.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Graphics : virtual public Object
{
    /// RTTI information.
    RTTI_INFO(System::Drawing::Graphics, ::System::BaseTypesInfo<System::Object>);

    /// Declaring template function System::MakeObject(...) a friend of this class.
    FRIEND_FUNCTION_System_MakeObject;

public:
    friend class Region;
    friend class Bitmap;
    friend class Font;
    /// The type of a callback fuction object used as an argument for EnumerateMetafile method.
    using EnumerateMetafileProc = MulticastDelegate<bool(Imaging::EmfPlusRecordType, int32_t, int32_t, IntPtr, Imaging::PlayRecordCallback)>;
    /// The type of a callback fuction object used as an argument for DrawImage method.
    using DrawImageAbort = std::function<bool(IntPtr ptr)>;

    /// Creates a new Graphics object from the specified image.
    /// @param image An Image object from which a Graphics object should be created
    /// @returns The created Graphics object
    static ASPOSECPP_SHARED_API SharedPtr<Graphics> FromImage(const SharedPtr<Image>& image);

    /// Returns a value that indicates how composited images are drawn on the surface represented by the current object.
    ASPOSECPP_SHARED_API Drawing2D::CompositingMode get_CompositingMode();
    /// Sets a value that specifies how composited images are drawn on the surface represented by the current object.
    /// @param mode The value to set
    ASPOSECPP_SHARED_API void set_CompositingMode(Drawing2D::CompositingMode mode);

    /// Returns a value that indicates the quality level used when compositing images.
    ASPOSECPP_SHARED_API Drawing2D::CompositingQuality get_CompositingQuality();
    /// Sets a value that specifies the quality level to use when compositing images.
    /// @param quality The value to set
    ASPOSECPP_SHARED_API void set_CompositingQuality(Drawing2D::CompositingQuality quality);

    /// Returns a value that indicates the interpolation mode associated with the current object.
    ASPOSECPP_SHARED_API Drawing2D::InterpolationMode get_InterpolationMode();
    /// Sets a value that indicates the interpolation mode associated with the current object.
    /// @param mode The value to set
    ASPOSECPP_SHARED_API void set_InterpolationMode(Drawing2D::InterpolationMode mode);

    /// Returns a value that indicates how the pixels are offset during rendering on the surface represented by the current object.
    ASPOSECPP_SHARED_API Drawing2D::PixelOffsetMode get_PixelOffsetMode();
    /// Sets a value that specifies how the pixels should be offset during rendering on the surface represented by the current object
    /// @param mode The value to set
    ASPOSECPP_SHARED_API void set_PixelOffsetMode(Drawing2D::PixelOffsetMode mode);

    /// Returns a value that indicates a soothing mode used during rendering on the surface represented by the current object.
    ASPOSECPP_SHARED_API Drawing2D::SmoothingMode get_SmoothingMode();
    /// Sets a value that specifies a soothing mode used during rendering on the surface represented by the current object.
    /// @param mode The value to set
    ASPOSECPP_SHARED_API void set_SmoothingMode(Drawing2D::SmoothingMode mode);

    /// Returns a value that indicates the quality of text rendering.
    ASPOSECPP_SHARED_API Text::TextRenderingHint get_TextRenderingHint();
    /// Sets a value that specifies the quality of text rendering.
    /// @param hint The value to set
    ASPOSECPP_SHARED_API void set_TextRenderingHint(Text::TextRenderingHint hint);

    /// Returns measurement units used for page coordinates on the surface represented by the
    /// current object.
    ASPOSECPP_SHARED_API GraphicsUnit get_PageUnit() const;
    /// Sets measurement units used for page coordinates on the surface represented by the
    /// current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_PageUnit(GraphicsUnit value);

    /// Returns a rectangle that bounds the clipping area of the surface
    /// represented by the current object.
    ASPOSECPP_SHARED_API RectangleF get_ClipBounds() const;

    /// Clears the drawing surface represented by the current object and
    /// fills it with the specified color.
    /// @param color The color to fill the surface with
    ASPOSECPP_SHARED_API void Clear(Color color);

    /// Draws the specified arc using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the arc
    /// @param x The X coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param y The Y coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param width The width of the rectangle that defines the ellipse
    /// @param height The height of the rectangle that defines the ellipse
    /// @param startAngle Angle in degrees measured clockwise from the X axis to the starting point of the arc
    /// @param sweepAngle Angle in degrees measured clockwise from the @p startAngle to ending point of the arc
    ASPOSECPP_SHARED_API void DrawArc(const SharedPtr<Pen>& pen, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t sweepAngle);
    /// Draws the specified arc using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the arc
    /// @param x The X coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param y The Y coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param width The width of the rectangle that defines the ellipse
    /// @param height The height of the rectangle that defines the ellipse
    /// @param startAngle Angle in degrees measured clockwise from the X axis to the starting point of the arc
    /// @param sweepAngle Angle in degrees measured clockwise from the @p startAngle to ending point of the arc
    ASPOSECPP_SHARED_API void DrawArc(const SharedPtr<Pen>& pen, float x, float y, float width, float height, float startAngle, float sweepAngle);
    /// Draws the specified arc using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the arc
    /// @param rect The rectangle that defines the ellipse
    /// @param startAngle Angle in degrees measured clockwise from the X axis to the starting point of the arc
    /// @param sweepAngle Angle in degrees measured clockwise from the @p startAngle to ending point of the arc
    ASPOSECPP_SHARED_API void DrawArc(const SharedPtr<Pen>& pen, Rectangle rect, float startAngle, float sweepAngle);
    /// Draws the specified arc using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the arc
    /// @param rect The rectangle that defines the ellipse
    /// @param startAngle Angle in degrees measured clockwise from the X axis to the starting point of the arc
    /// @param sweepAngle Angle in degrees measured clockwise from the @p startAngle to ending point of the arc
    ASPOSECPP_SHARED_API void DrawArc(const SharedPtr<Pen>& pen, RectangleF rect, float startAngle, float sweepAngle);

    /// Draws the specified pie using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the pie
    /// @param x The X coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param y The Y coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param width The width of the rectangle that defines the ellipse
    /// @param height The height of the rectangle that defines the ellipse
    /// @param startAngle Angle in degrees measured clockwise from the X axis to the starting point of the pie
    /// @param sweepAngle Angle in degrees measured clockwise from the @p startAngle to ending point of the pie
    ASPOSECPP_SHARED_API void DrawPie(const SharedPtr<Pen>& pen, int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t sweepAngle);
    /// Draws the specified pie using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the pie
    /// @param x The X coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param y The Y coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param width The width of the rectangle that defines the ellipse
    /// @param height The height of the rectangle that defines the ellipse
    /// @param startAngle Angle in degrees measured clockwise from the X axis to the starting point of the pie
    /// @param sweepAngle Angle in degrees measured clockwise from the @p startAngle to ending point of the pie
    ASPOSECPP_SHARED_API void DrawPie(const SharedPtr<Pen>& pen, float x, float y, float width, float height, float startAngle, float sweepAngle);
    /// Draws the specified pie using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the pie
    /// @param rect The rectangle that defines the ellipse
    /// @param startAngle Angle in degrees measured clockwise from the X axis to the starting point of the pie
    /// @param sweepAngle Angle in degrees measured clockwise from the @p startAngle to ending point of the pie
    ASPOSECPP_SHARED_API void DrawPie(const SharedPtr<Pen>& pen, Rectangle rect, float startAngle, float sweepAngle);
    /// Draws the specified pie using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the pie
    /// @param rect The rectangle that defines the ellipse
    /// @param startAngle Angle in degrees measured clockwise from the X axis to the starting point of the pie
    /// @param sweepAngle Angle in degrees measured clockwise from the @p startAngle to ending point of the pie
    ASPOSECPP_SHARED_API void DrawPie(const SharedPtr<Pen>& pen, RectangleF rect, float startAngle, float sweepAngle);

    /// Fills the specified pie using the specified brush on the surface represented by the current object.
    /// @param brush A brush to use when filling the pie
    /// @param x The X coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param y The Y coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param width The width of the rectangle that defines the ellipse
    /// @param height The height of the rectangle that defines the ellipse
    /// @param startAngle Angle in degrees measured clockwise from the X axis to the starting point of the pie
    /// @param sweepAngle Angle in degrees measured clockwise from the @p startAngle to ending point of the pie
    ASPOSECPP_SHARED_API void FillPie(const SharedPtr<Brush>& brush, int x, int y, int width, int height, int startAngle, int sweepAngle);
    /// Fills the specified pie using the specified brush on the surface represented by the current object.
    /// @param brush A brush to use when filling the pie
    /// @param x The X coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param y The Y coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param width The width of the rectangle that defines the ellipse
    /// @param height The height of the rectangle that defines the ellipse
    /// @param startAngle Angle in degrees measured clockwise from the X axis to the starting point of the pie
    /// @param sweepAngle Angle in degrees measured clockwise from the @p startAngle to ending point of the pie
    ASPOSECPP_SHARED_API void FillPie(const SharedPtr<Brush>& brush, float x, float y, float width, float height, float startAngle, float sweepAngle);
    /// Fills the specified pie using the specified brush on the surface represented by the current object.
    /// @param brush A brush to use when filling the pie
    /// @param rect The rectangle that defines the ellipse
    /// @param startAngle Angle in degrees measured clockwise from the X axis to the starting point of the pie
    /// @param sweepAngle Angle in degrees measured clockwise from the @p startAngle to ending point of the pie
    ASPOSECPP_SHARED_API void FillPie(const SharedPtr<Brush>& brush, Rectangle rect, float startAngle, float sweepAngle);

    /// Draws the specified rectangle using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the rectangle
    /// @param x The X coordinate of the upper left corner of the rectangle to draw
    /// @param y The Y coordinate of the upper left corner of the rectangle to draw
    /// @param width The width of the rectangle to draw
    /// @param height The height of the rectangle to draw
    ASPOSECPP_SHARED_API void DrawRectangle(const SharedPtr<Pen>& pen, int x, int y, int width, int height);
    /// Draws the specified rectangle using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the rectangle
    /// @param x The X coordinate of the upper left corner of the rectangle to draw
    /// @param y The Y coordinate of the upper left corner of the rectangle to draw
    /// @param width The width of the rectangle to draw
    /// @param height The height of the rectangle to draw
    ASPOSECPP_SHARED_API void DrawRectangle(const SharedPtr<Pen>& pen, float x, float y, float width, float height);
    /// Draws the specified rectangle using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the rectangle
    /// @param rect A Rectangle object that specifies the location and size of the rectangle to draw
    ASPOSECPP_SHARED_API void DrawRectangle(const SharedPtr<Pen>& pen, Rectangle rect);

    /// Draws a series of rectangles using the specified pen
    /// @param pen A pen to use when drawing the rectangles
    /// @param rects Array of rectangles to draw
    ASPOSECPP_SHARED_API void DrawRectangles(const SharedPtr<Pen>& pen, const ArrayPtr<Rectangle>& rects);
    /// Draws a series of rectangles using the specified pen
    /// @param pen A pen to use when drawing the rectangles
    /// @param rects Array of rectangles to draw
    ASPOSECPP_SHARED_API void DrawRectangles(const SharedPtr<Pen>& pen, const ArrayPtr<RectangleF>& rects);

    /// Draws a polygon using the specified pen
    /// @param pen A pen to use when drawing the polygon
    /// @param points Array of vertices that defines the polygon
    ASPOSECPP_SHARED_API void DrawPolygon(const SharedPtr<Pen>& pen, const ArrayPtr<Point>& points);
    /// Draws a polygon using the specified pen
    /// @param pen A pen to use when drawing the polygon
    /// @param points Array of vertices that defines the polygon
    ASPOSECPP_SHARED_API void DrawPolygon(const SharedPtr<Pen>& pen, const ArrayPtr<PointF>& points);

    /// Fills the specified rectangle with the specified brush.
    /// @param brush A Brush object to use for filling
    /// @param x The X coordinate of the upper left corner of the rectangle to fill
    /// @param y The Y coordinate of the upper left corner of the rectangle to fill
    /// @param width The width of the rectangle to fill
    /// @param height The height of the rectangle to fill
    ASPOSECPP_SHARED_API void FillRectangle(const SharedPtr<Brush>& brush, float x, float y, float width, float height);
    /// Fills the specified rectangle with the specified brush.
    /// @param brush A Brush object to use for filling
    /// @param x The X coordinate of the upper left corner of the rectangle to fill
    /// @param y The Y coordinate of the upper left corner of the rectangle to fill
    /// @param width The width of the rectangle to fill
    /// @param height The height of the rectangle to fill
    ASPOSECPP_SHARED_API void FillRectangle(const SharedPtr<Brush>& brush, int x, int y, int width, int height);
    /// Fills the specified rectangle with the specified brush.
    /// @param brush A Brush object to use for filling
    /// @param rect A Rectangle object that specifies the location and size of the rectangle to fill
    ASPOSECPP_SHARED_API void FillRectangle(const SharedPtr<Brush>& brush, Rectangle rect);
    /// Fills the specified rectangle with the specified brush.
    /// @param brush A Brush object to use for filling
    /// @param rect A RectangleF object that specifies the location and size of the rectangle to fill
    ASPOSECPP_SHARED_API void FillRectangle(const SharedPtr<Brush>& brush, RectangleF rect);

    /// Fills a series of rectangles using the specified brush
    /// @param brush A brush to use when filling the rectangles
    /// @param rects Array of rectangles to draw
    ASPOSECPP_SHARED_API void FillRectangles(const SharedPtr<Brush>& brush, const ArrayPtr<Rectangle>& rects);
    /// Fills a series of rectangles using the specified brush
    /// @param brush A brush to use when filling the rectangles
    /// @param rects Array of rectangles to draw
    ASPOSECPP_SHARED_API void FillRectangles(const SharedPtr<Brush>& brush, const ArrayPtr<RectangleF>& rects);

    /// Draws the specified ellipse using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the ellipse
    /// @param rect The rectangle that defines the ellipse
    ASPOSECPP_SHARED_API void DrawEllipse(const SharedPtr<Pen>& pen, Rectangle rect);
    /// Draws the specified ellipse using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the ellipse
    /// @param rect The rectangle that defines the ellipse
    ASPOSECPP_SHARED_API void DrawEllipse(const SharedPtr<Pen>& pen, RectangleF rect);
    /// Draws the specified ellipse using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the ellipse
    /// @param x The X coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param y The Y coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param width The width of the rectangle that defines the ellipse
    /// @param height The height of the rectangle that defines the ellipse
    ASPOSECPP_SHARED_API void DrawEllipse(const SharedPtr<Pen>& pen, int x, int y, int width, int height);
    /// Draws the specified ellipse using the specified pen on the surface represented by the current object.
    /// @param pen A pen to use when drawing the ellipse
    /// @param x The X coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param y The Y coordinate of the upper left corner of the rectangle that defines the ellipse
    /// @param width The width of the rectangle that defines the ellipse
    /// @param height The height of the rectangle that defines the ellipse
    ASPOSECPP_SHARED_API void DrawEllipse(const SharedPtr<Pen>& pen, float x, float y, float width, float height);

    /// Draws the specified string at the specified location using the specified font and brush.
    /// @param str The string to draw
    /// @param font A font to use
    /// @param brush A Brush object to use for drawing
    /// @param topLeft Specifies the location of the upper left corner of the drawn string
    /// @param stringFormat Specified the format of the string
    ASPOSECPP_SHARED_API void DrawString(const String &str, const SharedPtr<Font>& font, const SharedPtr<Brush>& brush, PointF topLeft, const System::SharedPtr<System::Drawing::StringFormat>& stringFormat = nullptr);
    /// Draws the specified string in the specified rectangle using the specified font and brush.
    /// @param str The string to draw
    /// @param font A font to use
    /// @param brush A Brush object to use for drawing
    /// @param layoutRectangle Specifies a rectangle to draw the string in
    /// @param stringFormat Specified the format of the string
    ASPOSECPP_SHARED_API void DrawString(const String &str, const SharedPtr<Font>& font, const SharedPtr<Brush>& brush, RectangleF layoutRectangle, const System::SharedPtr<System::Drawing::StringFormat>& stringFormat = nullptr);
    /// Draws the specified string at the specified location using the specified font and brush.
    /// @param str The string to draw
    /// @param font A font to use
    /// @param brush A Brush object to use for drawing
    /// @param x The X coordinate of the location of the upper left corner of the drawn string
    /// @param y The Y coordinate of the location of the upper left corner of the drawn string
    /// @param stringFormat Specified the format of the string
    ASPOSECPP_SHARED_API void DrawString(const String &str, const SharedPtr<Font>& font, const SharedPtr<Brush>& brush, float x, float y, const System::SharedPtr<System::Drawing::StringFormat>& stringFormat = nullptr);

    /// Fills the interior of the ellipse specified by the bounding rectangle using the specified brush.
    /// @param brush A Brush object to use for filling
    /// @param rect The bounding rectangle that defines the ellipse to fill
    ASPOSECPP_SHARED_API void FillEllipse(const SharedPtr<Brush>& brush, Rectangle rect);
    /// Fills the interior of the ellipse specified by the bounding rectangle using the specified brush.
    /// @param brush A Brush object to use for filling
    /// @param rect The bounding rectangle that defines the ellipse to fill
    ASPOSECPP_SHARED_API void FillEllipse(const SharedPtr<Brush>& brush, RectangleF rect);
    /// Fills the interior of the ellipse specified by the bounding rectangle using the specified brush.
    /// @param brush A Brush object to use for filling
    /// @param x The X coordinate of the upper left corner of the bounding rectangle
    /// @param y The Y coordinate of the upper left corner of the bounding rectangle
    /// @param width The width of the bounding rectangle
    /// @param height The height of the bounding rectangle
    ASPOSECPP_SHARED_API void FillEllipse(const SharedPtr<Brush>& brush, int x, int y, int width, int height);
    /// Fills the interior of the ellipse specified by the bounding rectangle using the specified brush.
    /// @param brush A Brush object to use for filling
    /// @param x The X coordinate of the upper left corner of the bounding rectangle
    /// @param y The Y coordinate of the upper left corner of the bounding rectangle
    /// @param width The width of the bounding rectangle
    /// @param height The height of the bounding rectangle
    ASPOSECPP_SHARED_API void FillEllipse(const SharedPtr<Brush>& brush, float x, float y, float width, float height);
    /// Fills the interiors of the specified path using the specified brush.
    /// @param brush A Brush object that specifies the parameters of the fill
    /// @param path The path to fill
    ASPOSECPP_SHARED_API void FillPath(const SharedPtr<Brush>& brush, const SharedPtr<Drawing2D::GraphicsPath>& path);
    /// Fills the interiors of the specified region using the specified brush.
    /// @param brush A Brush object that specifies the parameters of the fill
    /// @param region The region to fill
    ASPOSECPP_SHARED_API void FillRegion(const SharedPtr<Brush>& brush, const SharedPtr<Region>& region);
    /// Fills the interiors of the specified polygon using the specified brush.
    /// @param brush A Brush object that specifies the parameters of the fill
    /// @param points An array containing the points that define the polygon
    /// @param fillMode The fill mode
    ASPOSECPP_SHARED_API void FillPolygon(const SharedPtr<Brush>& brush, const ArrayPtr<Point>& points, Drawing2D::FillMode fillMode = Drawing2D::FillMode::Alternate);
    /// Fills the interiors of the specified polygon using the specified brush.
    /// @param brush A Brush object that specifies the parameters of the fill
    /// @param points An array containing the points that define the polygon
    /// @param fillMode The fill mode
    ASPOSECPP_SHARED_API void FillPolygon(const SharedPtr<Brush>& brush, const ArrayPtr<PointF>& points, Drawing2D::FillMode fillMode = Drawing2D::FillMode::Alternate);

    /// NOT IMPLEMENTED.
    /// @param image IGNORED
    /// @param destPoints IGNORED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, const System::ArrayPtr<Point>& destPoints);
    /// Draws the specified region of the specified image at the specified location.
    /// @param image The image to draw
    /// @param destPoints An array containing three points that define a parallelogram on the drawing surface to draw the image to
    /// @param srcRect A rectangle that defines the region of the specified image to draw
    /// @param srcUnit The measurement units used by @p srcRect parameter
    /// @param imgAttributes Specifies coloring and gamma information for the image
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, const System::ArrayPtr<PointF>& destPoints,
                                        const RectangleF& srcRect, GraphicsUnit srcUnit,
                                        const Imaging::ImageAttributesPtr& imgAttributes);
    /// Draws the specified image at the specified location.
    /// @param image The image to draw
    /// @param x The X coordinate of the upper left corner of the drawn image
    /// @param y The Y coordinate of the upper left corner of the drawn image
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, int x, int y);
    /// Draws the specified image at the specified location.
    /// @param image The image to draw
    /// @param x The X coordinate of the upper left corner of the drawn image
    /// @param y The Y coordinate of the upper left corner of the drawn image
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, float x, float y);
    /// Draws the specified image at the specified location.
    /// @param image The image to draw
    /// @param pt The location of the upper left corner of the drawn image
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, Point pt);
    /// Draws the specified image at the specified location.
    /// @param image The image to draw
    /// @param pt The location of the upper left corner of the drawn image
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, PointF pt);
    /// Draws the specified image to the specified rectangle.
    /// @param image The image to draw
    /// @param x The X coordinate of the upper left corner of the rectangle to draw the image to
    /// @param y The Y coordinate of the upper left corner of the rectangle to draw the image to
    /// @param width The width of the upper left corner of the rectangle to draw the image to
    /// @param height The height of the upper left corner of the rectangle to draw the image to
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, int x, int y, int width, int height);
    /// Draws the specified image to the specified rectangle.
    /// @param image The image to draw
    /// @param x The X coordinate of the upper left corner of the rectangle to draw the image to
    /// @param y The Y coordinate of the upper left corner of the rectangle to draw the image to
    /// @param width The width of the upper left corner of the rectangle to draw the image to
    /// @param height The height of the upper left corner of the rectangle to draw the image to
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, float x, float y, float width, float height);
    /// Draws the specified region of the specified image at the specified location.
    /// @param image The image to draw
    /// @param destRect A rectangle to draw the image to
    /// @param srcRect A rectangle that defines the region of the specified image to draw
    /// @param srcUnit The measurement units used by @p srcRect parameter
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, RectangleF destRect, RectangleF srcRect, GraphicsUnit srcUnit);
    /// Draws the specified region of the specified image at the specified location.
    /// @param image The image to draw
    /// @param destRect A rectangle to draw the image to
    /// @param srcRect A rectangle that defines the region of the specified image to draw
    /// @param srcUnit The measurement units used by @p srcRect parameter
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, Rectangle destRect, Rectangle srcRect, GraphicsUnit srcUnit);
    /// Draws the specified region of the specified image at the specified location.
    /// @param image The image to draw
    /// @param x The X coordinate of the upper left corner of the rectangle to draw the image to
    /// @param y The Y coordinate of the upper left corner of the rectangle to draw the image to
    /// @param srcRect A rectangle that defines the region of the specified image to draw
    /// @param srcUnit The measurement units used by @p srcRect parameter
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, int x, int y, Rectangle srcRect, GraphicsUnit srcUnit);
    /// Draws the specified image at the specified location.
    /// @param image The image to draw
    /// @param rect A rectangle to draw the image to
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, const Rectangle & rect);
    /// Draws the specified image at the specified location.
    /// @param image The image to draw
    /// @param rect A rectangle to draw the image to
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, const RectangleF & rect);
    /// Draws the specified region of the specified image to the specified rectangle.
    /// @param image The image to draw
    /// @param destRect A rectangle to draw the image to
    /// @param srcX The X coordinate of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcY The Y coordinate of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcWidth The width of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcHeight The height of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcUnit The measurement units in which parameters @p srcX, @p srcY, @p srcWidth and @p srcHeight are specified
    /// @param imgAttributes Specifies coloring and gamma information for the image
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, Rectangle destRect, int srcX, int srcY, int srcWidth, int srcHeight, GraphicsUnit srcUnit, const Imaging::ImageAttributesPtr& imgAttributes);
    /// Draws the specified region of the specified image to the specified rectangle.
    /// @param image The image to draw
    /// @param destRect A rectangle to draw the image to
    /// @param srcX The X coordinate of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcY The Y coordinate of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcWidth The width of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcHeight The height of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcUnit The measurement units in which parameters @p srcX, @p srcY, @p srcWidth and @p srcHeight are specified
    /// @param imgAttributes Specifies coloring and gamma information for the image
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, Rectangle destRect, float srcX, float srcY, float srcWidth, float srcHeight, GraphicsUnit srcUnit, const Imaging::ImageAttributesPtr& imgAttributes);
    /// Draws the specified region of the specified image to the specified rectangle.
    /// @param image The image to draw
    /// @param destRect A rectangle to draw the image to
    /// @param srcX The X coordinate of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcY The Y coordinate of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcWidth The width of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcHeight The height of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcUnit The measurement units in which parameters @p srcX, @p srcY, @p srcWidth and @p srcHeight are specified
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, Rectangle destRect, int srcX, int srcY, int srcWidth, int srcHeight, GraphicsUnit srcUnit);
    /// Draws the specified region of the specified image to the specified rectangle.
    /// @param image The image to draw
    /// @param destRect A rectangle to draw the image to
    /// @param srcX The X coordinate of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcY The Y coordinate of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcWidth The width of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcHeight The height of the upper left corner of the rectangle that specifies the portion of the image to draw
    /// @param srcUnit The measurement units in which parameters @p srcX, @p srcY, @p srcWidth and @p srcHeight are specified
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, Rectangle destRect, float srcX, float srcY, float srcWidth, float srcHeight, GraphicsUnit srcUnit);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, Rectangle destRect, int srcX, int srcY, int srcWidth, int srcHeight, GraphicsUnit srcUnit, const Imaging::ImageAttributesPtr& imgAttributes, Graphics::DrawImageAbort callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, Rectangle destRect, float srcX, float srcY, float srcWidth, float srcHeight, GraphicsUnit srcUnit, const Imaging::ImageAttributesPtr& imgAttributes, Graphics::DrawImageAbort callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, Rectangle destRect, int srcX, int srcY, int srcWidth, int srcHeight, GraphicsUnit srcUnit, const Imaging::ImageAttributesPtr& imgAttributes, Graphics::DrawImageAbort callback, IntPtr callbackData);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, Rectangle destRect, float srcX, float srcY, float srcWidth, float srcHeight, GraphicsUnit srcUnit, const Imaging::ImageAttributesPtr& imgAttributes, Graphics::DrawImageAbort callback, IntPtr callbackData);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, const ArrayPtr<PointF>& destPoints, RectangleF srcRect, GraphicsUnit srcUnit);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, const ArrayPtr<PointF>& destPoints);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, const ArrayPtr<Point>& destPoints, Rectangle srcRect, GraphicsUnit srcUnit);
    /// Draws the specified region of the specified image at the specified location.
    /// @param image The image to draw
    /// @param destPoints An array containing three points that define a parallelogram on the drawing surface to draw the image to
    /// @param srcRect A rectangle that defines the region of the specified image to draw
    /// @param srcUnit The measurement units used by @p srcRect parameter
    /// @param imageAttr Specifies coloring and gamma information for the image
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, const ArrayPtr<Point>& destPoints,
                                        Rectangle srcRect, GraphicsUnit srcUnit,
                                        const SharedPtr<Imaging::ImageAttributes>& imageAttr);
    /// Draws the specified region of the specified image at the specified location.
    /// @param image The image to draw
    /// @param x The X coordinate of the upper left corner of the rectangle to draw the image to
    /// @param y The Y coordinate of the upper left corner of the rectangle to draw the image to
    /// @param srcRect A rectangle that defines the region of the specified image to draw
    /// @param srcUnit The measurement units used by @p srcRect parameter
    ASPOSECPP_SHARED_API void DrawImage(const SharedPtr<Image>& image, float x, float y, RectangleF srcRect, GraphicsUnit srcUnit);

    /// Draws the specified image using its original physical size at the specified location.
    /// @param image The image to draw
    /// @param x The X coordinate of the upper left corner of the drawn image
    /// @param y The Y coordinate of the upper left corner of the drawn image
    ASPOSECPP_SHARED_API void DrawImageUnscaled(const SharedPtr<Image>& image, int x, int y);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImageUnscaled(const SharedPtr<Image>& image, int x, int y, int width, int height);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImageUnscaled(const SharedPtr<Image>& image, Rectangle rect);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImageUnscaled(const SharedPtr<Image>& image, Point point);

    /// Draws the specified line using the specified pen.
    /// @param pen A Pen object that specifies graphical properties of the line to draw
    /// @param pt1 The first point defining the line to draw
    /// @param pt2 The second point defining the line to draw
    ASPOSECPP_SHARED_API void DrawLine(const SharedPtr<Pen>& pen, Point pt1, Point pt2);
    /// Draws the specified line using the specified pen.
    /// @param pen A Pen object that specifies graphical properties of the line to draw
    /// @param pt1 The first point defining the line to draw
    /// @param pt2 The second point defining the line to draw
    ASPOSECPP_SHARED_API void DrawLine(const SharedPtr<Pen>& pen, PointF pt1, PointF pt2);
    /// Draws the specified line using the specified pen.
    /// @param pen A Pen object that specifies graphical properties of the line to draw
    /// @param x1 The X-coordinate of the first point defining the line to draw
    /// @param y1 The Y-coordinate of the first point defining the line to draw
    /// @param x2 The X-coordinate of the second point defining the line to draw
    /// @param y2 The Y-coordinate of the second point defining the line to draw
    ASPOSECPP_SHARED_API void DrawLine(const SharedPtr<Pen>& pen, int x1, int y1, int x2, int y2);
    /// Draws the specified line using the specified pen.
    /// @param pen A Pen object that specifies graphical properties of the line to draw
    /// @param x1 The X-coordinate of the first point defining the line to draw
    /// @param y1 The Y-coordinate of the first point defining the line to draw
    /// @param x2 The X-coordinate of the second point defining the line to draw
    /// @param y2 The Y-coordinate of the second point defining the line to draw
    ASPOSECPP_SHARED_API void DrawLine(const SharedPtr<Pen>& pen, float x1, float y1, float x2, float y2);

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawIcon(const SharedPtr<Icon>& icon, Rectangle targetRect);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawIcon(const SharedPtr<Icon>& icon, int32_t x, int32_t y);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawIconUnstretched(const SharedPtr<Icon>& icon, Rectangle targetRect);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawImageUnscaledAndClipped(const SharedPtr<Image>& image, Rectangle rectangle);
    /// Returns an array of regions each of which bounds character positions in the specified string
    /// @param text The string to measure
    /// @param font The font used during the measurement of the string
    /// @param layoutRect The layout rectangle used during the measurement of the string
    /// @param stringFormat The string format, contaions the character ranges to measure
    ASPOSECPP_SHARED_API ArrayPtr<SharedPtr<Region>> MeasureCharacterRanges(const System::String& text,
                                                                        const SharedPtr<Font>& font,
                                                                        RectangleF layoutRect,
                                                                        const SharedPtr<StringFormat>& stringFormat);
    /// Returns a size of the specified string when drawn in the specified font in the specified format.
    /// @param str The string whose size to calculate
    /// @param font The font used to draw the string
    /// @param origin Specifies the location of the upper left corner of the string
    /// @param stringFormat Specifies the string format
    /// @returns A SizeF object that represents the size of the string in the measurment units specified by the PageUnit property of the current Grapphics object.
    ASPOSECPP_SHARED_API SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, PointF const& origin = PointF(0, 0), System::SharedPtr<StringFormat> const& stringFormat = nullptr) const;
    /// Returns a size of the specified string when drawn in the specified font in the specified format.
    /// @param str The string whose size to calculate
    /// @param font The font used to draw the string
    /// @param width The maximum width of the string
    /// @param stringFormat Specifies the string format
    /// @returns A SizeF object that represents the size of the string in the measurment units specified by the PageUnit property of the current Grapphics object.
    ASPOSECPP_SHARED_API SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, int width, System::SharedPtr<StringFormat> const& stringFormat = nullptr) const;
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, SizeF const& layoutArea, System::SharedPtr<StringFormat> const& stringFormat, int& charactersFitted, int& linesFilled) const;
    /// Returns a size of the specified string when drawn in the specified font in the specified format.
    /// @param str The string whose size to calculate
    /// @param font The font used to draw the string
    /// @param layoutArea The maximum layout area of the string
    /// @param stringFormat Specifies the string format
    /// @returns A SizeF object that represents the size of the string in the measurment units specified by the PageUnit property of the current Grapphics object.
    ASPOSECPP_SHARED_API SizeF MeasureString(String const& str, System::SharedPtr<Font> const& font, SizeF const& layoutArea, System::SharedPtr<StringFormat> const& stringFormat = nullptr) const;

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API IntPtr GetHdc();

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void ReleaseHdc();
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void ReleaseHdc(IntPtr hdc);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    static ASPOSECPP_SHARED_API SharedPtr<Graphics> FromHwnd(IntPtr hwnd);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    static ASPOSECPP_SHARED_API SharedPtr<Graphics> FromHwndInternal(IntPtr hwnd);

    /// Returns the scaling between world units and page units for the current Graphics object.
    ASPOSECPP_SHARED_API float get_PageScale() const;
    /// Sets the scaling between world units and page units for the current Graphics object.
    /// @param scale The value to set
    ASPOSECPP_SHARED_API void set_PageScale(float scale);

    /// Returns a Point object that represents the rendering origin of the current Graphics object for dithering and for hatch brushes.
    ASPOSECPP_SHARED_API Point get_RenderingOrigin() const;
    /// Sets a Point object that specifies the rendering origin of the current Graphics object for dithering and for hatch brushes.
    /// @param point The value to set
    ASPOSECPP_SHARED_API void set_RenderingOrigin(Point point);

    /// Returns the geometric world transformation for the current Graphics object.
    ASPOSECPP_SHARED_API SharedPtr<Drawing2D::Matrix> get_Transform();
    /// Sets the geometric world transformation for the current Graphics object.
    /// @param matrix The value to set
    ASPOSECPP_SHARED_API void set_Transform(const SharedPtr<Drawing2D::Matrix>& matrix);

    /// Returns the horizontal resolution.
    ASPOSECPP_SHARED_API float get_DpiX();
    /// Returns the vertical resolution.
    ASPOSECPP_SHARED_API float get_DpiY();

    /// Returns a Region object that represents a region that limits the drawing area of the drawing surface
    /// represented by the current Graphics object.
    ASPOSECPP_SHARED_API SharedPtr<Region> get_Clip();
    /// Sets a region that limits the drawing area of the drawing surface represented by the current
    // Graphics object.
    ASPOSECPP_SHARED_API void set_Clip(const SharedPtr<Region>& region);

    /// Sets the clipping region of drawing surface represented by the current Graphics object
    /// to the result of the specified operation that combines the current clip region and the
    /// specified region.
    /// @param region Specifies a region to combine
    /// @param combineMode Specifies the combining operation
    ASPOSECPP_SHARED_API void SetClip(const SharedPtr<Region>& region, Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);
    /// Sets the clipping region of drawing surface represented by the current Graphics object
    /// to the result of the specified operation that combines the current clip region and the
    /// specified region.
    /// @param rect Specifies a region to combine
    /// @param combineMode Specifies the combining operation
    ASPOSECPP_SHARED_API void SetClip(Rectangle rect, Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);
    /// Sets the clipping region of drawing surface represented by the current Graphics object
    /// to the result of the specified operation that combines the current clip region and the
    /// specified region.
    /// @param rect Specifies a region to combine
    /// @param combineMode Specifies the combining operation
    ASPOSECPP_SHARED_API void SetClip(RectangleF rect, Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void SetClip(const SharedPtr<Graphics>& graphics,
                                      Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);
    /// Sets the clipping region of drawing surface represented by the current Graphics object
    /// to the result of the specified operation that combines the current clip region and the
    /// region specified by a graphics path.
    /// @param path Specifies a region to combine
    /// @param combineMode Specifies the combining operation
    ASPOSECPP_SHARED_API void SetClip(const SharedPtr<Drawing2D::GraphicsPath>& path,
                                      Drawing2D::CombineMode combineMode = Drawing2D::CombineMode::Replace);

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void ExcludeClip(Rectangle rect);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void ExcludeClip(const SharedPtr<Region>& region);
    /// Resets the clip region for this graphics to an infinite region
    ASPOSECPP_SHARED_API void ResetClip();

    /// Draws the specified path using the specified pen.
    /// @param pen A Pen object to use for drawing
    /// @param path A graphics path to draw
    ASPOSECPP_SHARED_API void DrawPath(const SharedPtr<Pen>& pen, const SharedPtr<Drawing2D::GraphicsPath>& path);
    /// Draws a series of line segments using the specified pen
    /// @param pen A pen to use when drawing the lines
    /// @param points Array of points to connect
    ASPOSECPP_SHARED_API void DrawLines(const SharedPtr<Pen>& pen, const System::ArrayPtr<System::Drawing::Point>& points);
    /// Draws a series of line segments using the specified pen
    /// @param pen A pen to use when drawing the lines
    /// @param points Array of points to connect
    ASPOSECPP_SHARED_API void DrawLines(const SharedPtr<Pen>& pen, const System::ArrayPtr<System::Drawing::PointF>& points);

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawBezier(const SharedPtr<Pen>& pen, const Point & pt1, const Point & pt2, const Point & pt3, const Point & pt4);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawBezier(const SharedPtr<Pen>& pen, const PointF& pt1, const PointF& pt2, const PointF& pt3, const PointF& pt4);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void DrawBezier(const SharedPtr<Pen>& pen, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
    /// Draws a series of Bezier splines using the specified pen
    /// @param pen A pen to use when drawing the splines
    /// @param points Array of points that determines the curve
    ASPOSECPP_SHARED_API void DrawBeziers(const SharedPtr<Pen>& pen, const ArrayPtr<Point>& points);
    /// Draws a series of Bezier splines using the specified pen
    /// @param pen A pen to use when drawing the splines
    /// @param points Array of points that determines the curve
    ASPOSECPP_SHARED_API void DrawBeziers(const SharedPtr<Pen>& pen, const ArrayPtr<PointF>& points);

    /// Draws a closed spline using the specified pen
    /// @param pen A pen to use when drawing the spline
    /// @param points Array of points that determines the spline
    /// @param tension Value that specifies the tension of the spline
    /// @param fillmode IGNORED
    ASPOSECPP_SHARED_API void DrawClosedCurve(const SharedPtr<Pen>& pen, const ArrayPtr<Point>& points, float tension = 0.5f,
                                              Drawing2D::FillMode fillmode = Drawing2D::FillMode::Alternate);
    /// Draws a closed spline using the specified pen
    /// @param pen A pen to use when drawing the spline
    /// @param points Array of points that determines the spline
    /// @param tension Value that specifies the tension of the spline
    /// @param fillmode IGNORED
    ASPOSECPP_SHARED_API void DrawClosedCurve(const SharedPtr<Pen>& pen, const ArrayPtr<PointF>& points, float tension = 0.5f,
                                              Drawing2D::FillMode fillmode = Drawing2D::FillMode::Alternate);

    /// Draws a spline using the specified pen
    /// @param pen A pen to use when drawing the spline
    /// @param points Array of points that determines the spline
    /// @param tension Value that specifies the tension of the spline
    ASPOSECPP_SHARED_API void DrawCurve(const SharedPtr<Pen>& pen, const ArrayPtr<Point>& points, float tension = 0.5f);
    /// Draws a spline using the specified pen
    /// @param pen A pen to use when drawing the spline
    /// @param points Array of points that determines the spline
    /// @param tension Value that specifies the tension of the spline
    ASPOSECPP_SHARED_API void DrawCurve(const SharedPtr<Pen>& pen, const ArrayPtr<PointF>& points, float tension = 0.5f);
    /// Draws a spline using the specified pen
    /// @param pen A pen to use when drawing the spline
    /// @param points Array of points that determines the spline
    /// @param offset Offset from the 1st element in the @p points array
    /// @param numberOfSegments Number of segments to include into the curve
    /// @param tension Value that specifies the tension of the spline
    ASPOSECPP_SHARED_API void DrawCurve(const SharedPtr<Pen>& pen, const ArrayPtr<Point>& points, int32_t offset,
                                        int32_t numberOfSegments, float tension = 0.5f);
    /// Draws a spline using the specified pen
    /// @param pen A pen to use when drawing the spline
    /// @param points Array of points that determines the spline
    /// @param offset Offset from the 1st element in the @p points array
    /// @param numberOfSegments Number of segments to include into the curve
    /// @param tension Value that specifies the tension of the spline
    ASPOSECPP_SHARED_API void DrawCurve(const SharedPtr<Pen>& pen, const ArrayPtr<PointF>& points, int32_t offset,
                                        int32_t numberOfSegments, float tension = 0.5f);

    /// Draws a closed spline using the specified brush
    /// @param brush A brush to use when drawing the spline
    /// @param points Array of points that determines the spline
    /// @param fillmode IGNORED
    /// @param tension Value that specifies the tension of the spline
    ASPOSECPP_SHARED_API void FillClosedCurve(const SharedPtr<Brush>& brush, const ArrayPtr<PointF>& points,
        Drawing2D::FillMode fillmode = Drawing2D::FillMode::Alternate, float tension = 0.5f);
    /// Draws a closed spline using the specified brush
    /// @param brush A brush to use when drawing the spline
    /// @param points Array of points that determines the spline
    /// @param fillmode IGNORED
    /// @param tension Value that specifies the tension of the spline
    ASPOSECPP_SHARED_API void FillClosedCurve(const SharedPtr<Brush>& brush, const ArrayPtr<Point>& points,
        Drawing2D::FillMode fillmode = Drawing2D::FillMode::Alternate, float tension = 0.5f);

    /// Resets the world transformation matrix of the current object so that it becomes an identity matrix.
    ASPOSECPP_SHARED_API void ResetTransform();
    /// Applies the specified scale vector to the world transformation matrix of the current object.
    /// @param sx The value by which to scale the matrix in x-axis direction
    /// @param sy The value by which to scale the matrix in y-axis direction
    /// @param order The order in which the scale vector is applied to the matrix
    ASPOSECPP_SHARED_API void ScaleTransform(float sx, float sy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    /// Applies the specified rotation to the world transformation matrix of the current Graphics object in the specified order.
    /// @param angle The rotation angle
    /// @param order The order in which the rotanion operation is applied to the matrix
    ASPOSECPP_SHARED_API void RotateTransform(float angle, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    /// Applies the specified translation vector to the world transformation matrix of the current Graphics object.
    /// @param dx The X value by which the matrix is translated
    /// @param dy The Y value by which the matrix is translated
    /// @param order The order in which the translation vector is applied to the matrix
    ASPOSECPP_SHARED_API void TranslateTransform(float dx, float dy, Drawing2D::MatrixOrder order= Drawing2D::MatrixOrder::Prepend);
    /// Multiplies the world transformation matrix of the current Graphics object by the specified matrix.
    /// @param matrix The matrix to multiply the world transformation matrix of the current Graphics object by
    /// @param order The multiplication order
    ASPOSECPP_SHARED_API void MultiplyTransform(const SharedPtr<Drawing2D::Matrix>& matrix, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void TranslateClip(int dx, int dy);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void TranslateClip(float dx, float dy);

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void TransformPoints(Drawing2D::CoordinateSpace destSpace, Drawing2D::CoordinateSpace srcSpace,
                                              const ArrayPtr<System::Drawing::Point>& pts);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void TransformPoints(Drawing2D::CoordinateSpace destSpace, Drawing2D::CoordinateSpace srcSpace,
                                              const ArrayPtr<System::Drawing::PointF>& pts);

    /// Saves the current state of this object and returns the saved state
    ASPOSECPP_SHARED_API SharedPtr<Drawing2D::GraphicsState> Save();
    /// Restores the state of this object from the saved state
    /// @param graphicsState The state to restore from
    ASPOSECPP_SHARED_API void Restore(const SharedPtr<Drawing2D::GraphicsState>& graphicsState);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void Flush(Drawing2D::FlushIntention intention = Drawing2D::FlushIntention::Flush);

    /// Updates the clip region of this object to the intersection of the current clip and the specified clip
    /// @param region The region to intersect with
    ASPOSECPP_SHARED_API void IntersectClip(const System::SharedPtr<Region>& region);
    /// Updates the clip region of this object to the intersection of the current clip and the specified clip
    /// @param rect The rectangle to intersect with
    ASPOSECPP_SHARED_API void IntersectClip(System::Drawing::RectangleF rect);
    /// Updates the clip region of this object to the intersection of the current clip and the specified clip
    /// @param rect The rectangle to intersect with
    ASPOSECPP_SHARED_API void IntersectClip(System::Drawing::Rectangle rect);

    /// Determines whether the specified point is contained within the visible
    /// clip region of the current Graphics object.
    /// @param point The point to check
    /// @returns True if @p point is contained within the visible clip region of the
    /// current Graphics object, otherwise - false
    ASPOSECPP_SHARED_API bool IsVisible(Point point);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API bool IsVisible(PointF point);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API bool IsVisible(Rectangle rect);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API bool IsVisible(RectangleF rect);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API bool IsVisible(int32_t x, int32_t y);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API bool IsVisible(float x, float y);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API bool IsVisible(float x, float y, float width, float height);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API bool IsVisible(int32_t x, int32_t y, int32_t width, int32_t height);

    /// Saves a container with the current state of this object, opens and uses a new container and returns the saved container
    ASPOSECPP_SHARED_API SharedPtr<Drawing2D::GraphicsContainer> BeginContainer();
    /// Saves a container with the current state of this object, opens and uses a new container and returns the saved container
    /// @param dstrect The rectangle that specifies a scale transformation of the new container. Used together with @p srcrect
    /// @param srcrect The rectangle that specifies a scale transformation of the new container. Used together with @p dstrect
    /// @param unit The value that specifies the unit of measure of the new container
    ASPOSECPP_SHARED_API SharedPtr<Drawing2D::GraphicsContainer> BeginContainer(Rectangle dstrect, Rectangle srcrect, GraphicsUnit unit);
    /// Saves a container with the current state of this object, opens and uses a new container and returns the saved container
    /// @param dstrect The rectangle that specifies a scale transformation of the new container. Used together with @p srcrect
    /// @param srcrect The rectangle that specifies a scale transformation of the new container. Used together with @p dstrect
    /// @param unit The value that specifies the unit of measure of the new container
    ASPOSECPP_SHARED_API SharedPtr<Drawing2D::GraphicsContainer> BeginContainer(RectangleF dstrect, RectangleF srcrect, GraphicsUnit unit);
    /// Closes the current container and restores the state of this object from the state of saved container
    /// @param container The container to restore the state from
    ASPOSECPP_SHARED_API void EndContainer(const SharedPtr<Drawing2D::GraphicsContainer>& container);

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, const ArrayPtr<PointF>& destPoints, Graphics::EnumerateMetafileProc callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, const ArrayPtr<Point>& destPoints, Graphics::EnumerateMetafileProc callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, Point destPoint, Graphics::EnumerateMetafileProc callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, PointF destPoint, Graphics::EnumerateMetafileProc callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, Rectangle destRect, Graphics::EnumerateMetafileProc callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, RectangleF destRect, Graphics::EnumerateMetafileProc callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, Point destPoint, Rectangle srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, PointF destPoint, RectangleF srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, const ArrayPtr<Point>& destPoints, Rectangle srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, const ArrayPtr<PointF>& destPoints, RectangleF srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, Rectangle destRect, Rectangle srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void EnumerateMetafile(const SharedPtr<Imaging::Metafile>& metafile, RectangleF destRect, RectangleF srcRect, GraphicsUnit srcUnit, Graphics::EnumerateMetafileProc callback);

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void AddMetafileComment(const System::ArrayPtr<uint8_t>& data);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void CopyFromScreen(Point upperLeftSource, Point upperLeftDestination, Size blockRegionSize, CopyPixelOperation copyPixelOperation = CopyPixelOperation::SourceCopy);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void CopyFromScreen(int32_t sourceX, int32_t sourceY, int32_t destinationX, int32_t destinationY, Size blockRegionSize, CopyPixelOperation copyPixelOperation = CopyPixelOperation::SourceCopy);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API int32_t get_TextContrast() const;
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void set_TextContrast(int32_t value);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API bool get_IsClipEmpty() const;
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API bool get_IsVisibleClipEmpty() const;

    /// Returns the RectangleF object that represents a bounding rectangle of
    /// the visible clipping region of the current Graphics object.
    ASPOSECPP_SHARED_API RectangleF get_VisibleClipBounds() const;

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API Color GetNearestColor(Color color);

    /// Releases all operating system resources acquired by the current object.
    void Dispose() { };
private:
    /// The underlying canvas.
    std::unique_ptr<SkCanvas> m_sk_canvas;
    /// Constructs a new instance of Graphics object and initializes it with
    /// the specified canvas object and horizontal and vertical resolution.
    /// @param canvas The SkCanvas object to be used be the Graphics object being created
    /// @param hRes The horizontal resolution
    /// @param vRes The vertical resolution
    Graphics(SkCanvas * canvas, float hRes = 96.0f, float vRes = 96.0f);

    void SaveState(int id);
    void RestoreState(int id);
    void ResetState(const SharedPtr<Drawing2D::Matrix>& matrix);

    struct State
    {
        State();

        /// Interpolation mode.
        Drawing2D::InterpolationMode m_interpolation_mode;
        /// Composition quality.
        Drawing2D::CompositingQuality m_compositing_quality;
        /// Compositing mode.
        Drawing2D::CompositingMode m_compositing_mode;
        /// Smoothing mode.
        Drawing2D::SmoothingMode m_smoothing_mode;
        /// Text rendering hint.
        Text::TextRenderingHint m_text_rendering_hint;
        /// Page unit.
        GraphicsUnit m_page_unit;
        /// Page scale.
        float m_page_scale;
        /// Rendering origin.
        Point m_rendering_origin;
        /// Text contrast.
        int32_t m_text_contrast;

        /// Pixel offset mode.
        Drawing2D::PixelOffsetMode m_pixel_offset_mode;
        /// Graphics world transformation matrix.
        SharedPtr<Drawing2D::Matrix> m_transform_matrix;
        SharedPtr<Drawing2D::Matrix> m_base_transform_matrix;
    } m_current_state;

    /// Horizontal resoluton.
    const float m_horizontal_resolution; //only default 96dpi is supported
    /// Vertical resolution.
    const float m_vertical_resolution; //only default 96dpi is supported

    std::stack<std::pair<int, State>> m_states;

    /// Converts the specified RectangleF object to equivalent SkRect object.
    /// @param rect The rectangle to convert
    /// @param unit The measurement units in which @p rect is specified
    /// @returns SkRect object equivalent to @p rect
    SkRect ToSkRect(const Drawing::RectangleF& rect, GraphicsUnit unit);

    /// Calculates this object's graphics world transformation matrix.
    SharedPtr<Drawing2D::Matrix> CalculateWorldMatrix(bool apply_shift = false) const;
    SharedPtr<Drawing2D::Matrix> CalculateBaseMatrix() const;

    /// Converts the specified size represented in the specified measurement units to size represented in pixels.
    /// @param size The size to convert
    /// @param dpi Resolution
    /// @param unit The measurement unit in which @p size is expressed
    /// @returns @p size converted to pixels
    static float ConvertToPixelSize(float size, float dpi, GraphicsUnit unit);

    /// Correct text size according to specified string format
    /// @param size The original size
    /// @param format The string format
    /// @returns A SizeF object that represents corrected text size
    static SizeF CorrectSize(const SizeF& size, const System::SharedPtr<StringFormat>& format);

private:
    void DrawArcImpl(const SharedPtr<Pen>& pen, float x, float y, float width, float height, float startAngle, float sweepAngle);
    void DrawPieImpl(const SharedPtr<Pen>& pen, float x, float y, float width, float height, float startAngle, float sweepAngle);
    void FillPieImpl(const SharedPtr<Brush>& brush, float x, float y, float width, float height, float startAngle, float sweepAngle);
    void DrawEllipseImpl(const SharedPtr<Pen>& pen, float x, float y, float width, float height);
};

}}


#endif // _aspose_drawing_graphics_h_
