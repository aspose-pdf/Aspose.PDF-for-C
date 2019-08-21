/// @file drawing/drawing2d/graphics_path.h
#ifndef _aspose_drawing_drawing2d_graphics_path_h_
#define _aspose_drawing_drawing2d_graphics_path_h_

#include "system/object.h"
#include "system/enum_helpers.h"
#include "drawing/pen.h"
#include "drawing/point.h"
#include "drawing/point_f.h"
#include "drawing/rectangle.h"
#include "drawing/rectangle_f.h"
#include "drawing/font_family.h"
#include "drawing/string_format.h"
#include "drawing/drawing2d/matrix.h"
#include "drawing/drawing2d/fill_mode.h"
#include "drawing/drawing2d/path_data.h"
#include "drawing/drawing2d/path_point_type.h"

#include <memory>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkPath.h>
#endif

/// Forward declaration of SkPath class.
ASPOSECPP_3RD_PARTY_CLASS(SkPath);
/// Forward declaration of SkPath class.
ASPOSECPP_3RD_PARTY_CLASS(SkMatrix);
/// Forward declaration of SkRect struct.
ASPOSECPP_3RD_PARTY_STRUCT(SkRect);
/// Ensures that SkScalar is an alias for float.
ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);


namespace System { namespace Drawing { class Graphics; } }
namespace System { namespace Drawing { class Region; } }
namespace System { namespace Drawing { namespace Details { namespace Skia { class SkiaData; } } } }

namespace System { namespace Drawing { namespace Drawing2D {

namespace Detail {
    /// Represents the type of a figure.
    enum class FigureType {
        /// Unknown.
        Unknown   = (0x0),
        /// A line.
        Line      = (0x01 << 0),
        /// A Bezier curve.
        Bezier    = (0x01 << 1),
        /// An arc.
        Arc       = (0x01 << 2),
        /// An ellipse.
        Ellipse   = (0x01 << 3),
        /// A pie.
        Pie       = (0x01 << 4),
        /// A rectangle.
        Rectangle = (0x01 << 5),
        /// A polygon.
        Polygon   = (0x01 << 6),
        /// A curve.
        Curve     = (0x01 << 7),
        /// A string of text.
        String    = (0x01 << 8)
    };

    /// Declaration of template arithmetic operators for values of FigureType enum type.
DECLARE_ENUM_OPERATORS(System::Drawing::Drawing2D::Detail::FigureType);
}

class PathGradientBrush;
/// Represents a set of connected lines and curves.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS GraphicsPath : public Object
{
public:
    /// Constructs a new instance of GraphicsPath class with the specified fill mode.
    /// @param fillMode Specifies how the interior of the closed path represented by the object being created
    /// should be filled
    ASPOSECPP_SHARED_API GraphicsPath(FillMode fillMode = FillMode::Alternate);
    /// Constructs a new instance of GraphicsPath object that represents the specified path.
    /// @param pts An array containing the points that specify the path to be represented by the object being created
    /// @param types An array containing the values tha specify the types of the corresponding points in @p pts array
    /// @param fillMode Specifies how the interior of the closed path represented by the object being created
    /// should be filled
    ASPOSECPP_SHARED_API GraphicsPath(const ArrayPtr<Point>& pts, const ArrayPtr<uint8_t>& types, FillMode fillMode = FillMode::Alternate);
    /// Constructs a new instance of GraphicsPath object that represents the specified path.
    /// @param pts An array containing the points that specify the path to be represented by the object being created
    /// @param types An array containing the values tha specify the types of the corresponding points in @p pts array
    /// @param fillMode Specifies how the interior of the closed path represented by the object being created
    /// should be filled
    ASPOSECPP_SHARED_API GraphicsPath(const ArrayPtr<PointF>& pts, const ArrayPtr<uint8_t>& types, FillMode fillMode = FillMode::Alternate);

    ASPOSECPP_SHARED_API GraphicsPath(const SkPath& path);

    /// Destructor.
    ASPOSECPP_SHARED_API ~GraphicsPath();

    /// Returns a PathData object containing the points that make up a path represented by the current object and
    /// their types.
    ASPOSECPP_SHARED_API SharedPtr<PathData> get_PathData();
    /// Returns an array that contains values that indicate the types of the points that make up a path represented
    /// by the current object.
    ASPOSECPP_SHARED_API ArrayPtr<uint8_t> get_PathTypes() const;
    /// Returns an array that contains points that make up a path represented by the current object.
    ASPOSECPP_SHARED_API ArrayPtr<PointF> get_PathPoints() const;
    /// Returns the number of points in the path represented by the current object.
    ASPOSECPP_SHARED_API int get_PointCount() const;

    /// Returns the fill mode of the current object.
    ASPOSECPP_SHARED_API FillMode get_FillMode();
    /// Sets the fill mode of the current object.
    /// @param mode The value to set
    ASPOSECPP_SHARED_API void set_FillMode(FillMode mode);

    /// Adds the specified cubic Bezier curve to the path represented by the current object.
    /// @param pt1 The starting point of the curve to add
    /// @param pt2 The 1-st control point of the curve to add
    /// @param pt3 The 2-nd control point of the curve to add
    /// @param pt4 The ending point of the curve to add
    ASPOSECPP_SHARED_API void AddBezier(const Point& pt1, const Point& pt2, const Point& pt3, const Point& pt4);
    /// Adds the specified cubic Bezier curve to the path represented by the current object.
    /// @param pt1 The starting point of the curve to add
    /// @param pt2 The 1-st control point of the curve to add
    /// @param pt3 The 2-nd control point of the curve to add
    /// @param pt4 The ending point of the curve to add
    ASPOSECPP_SHARED_API void AddBezier(const PointF& pt1, const PointF& pt2, const PointF& pt3, const PointF& pt4);
    /// Adds the specified cubic Bezier curve to the path represented by the current object.
    /// @param x1 The X coordinate of the starting point of the curve to add
    /// @param y1 The Y coordinate of the starting point of the curve to add
    /// @param x2 The X coordinate of the 1-st control point of the curve to add
    /// @param y2 The Y coordinate of the 1-st control point of the curve to add
    /// @param x3 The X coordinate of the 2-nd control point of the curve to add
    /// @param y3 The Y coordinate of the 2-nd control point of the curve to add
    /// @param x4 The X coordinate of the ending point of the curve to add
    /// @param y4 The Y coordinate of the ending point of the curve to add
    ASPOSECPP_SHARED_API void AddBezier(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
    /// Adds the specified cubic Bezier curve to the path represented by the current object.
    /// @param x1 The X coordinate of the starting point of the curve to add
    /// @param y1 The Y coordinate of the starting point of the curve to add
    /// @param x2 The X coordinate of the 1-st control point of the curve to add
    /// @param y2 The Y coordinate of the 1-st control point of the curve to add
    /// @param x3 The X coordinate of the 2-nd control point of the curve to add
    /// @param y3 The Y coordinate of the 2-nd control point of the curve to add
    /// @param x4 The X coordinate of the ending point of the curve to add
    /// @param y4 The Y coordinate of the ending point of the curve to add
    ASPOSECPP_SHARED_API void AddBezier(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
    /// Adds a sequence of connected cubic Bezier curves to the current figure.
    /// @param points An array of Point structures that represents the points that define the curves
    ASPOSECPP_SHARED_API void AddBeziers(const ArrayPtr<Point>& points);
    /// Adds a sequence of connected cubic Bezier curves to the current figure.
    /// @param points An array of PointF structures that represents the points that define the curves
    ASPOSECPP_SHARED_API void AddBeziers(const ArrayPtr<PointF>& points);

    /// Adds the specified line to the path represented by the current object.
    /// @param pt1 The starting point of the line to add
    /// @param pt2 The ending point of the line to add
    ASPOSECPP_SHARED_API void AddLine(const Point& pt1, const Point& pt2);
    /// Adds the specified line to the path represented by the current object.
    /// @param pt1 The starting point of the line to add
    /// @param pt2 The ending point of the line to add
    ASPOSECPP_SHARED_API void AddLine(const PointF& pt1, const PointF& pt2);
    /// Adds the specified line to the path represented by the current object.
    /// @param x1 The X coordinate of the starting point of the line to add
    /// @param y1 The Y coordinate of the starting point of the line to add
    /// @param x2 The X coordinate of the ending point of the line to add
    /// @param y2 The Y coordinate of the ending point of the line to add
    ASPOSECPP_SHARED_API void AddLine(int x1, int y1, int x2, int y2);
    /// Adds the specified line to the path represented by the current object.
    /// @param x1 The X coordinate of the starting point of the line to add
    /// @param y1 The Y coordinate of the starting point of the line to add
    /// @param x2 The X coordinate of the ending point of the line to add
    /// @param y2 The Y coordinate of the ending point of the line to add
    ASPOSECPP_SHARED_API void AddLine(float x1, float y1, float x2, float y2);

    /// Adds the specified series of connected line segments to the path represented by the current object.
    /// @param points An array containing points that specify the line segments to add
    ASPOSECPP_SHARED_API void AddLines(const ArrayPtr<PointF>& points);
    /// Adds the specified series of connected line segments to the path represented by the current object.
    /// @param points An array containing points that specify the line segments to add
    ASPOSECPP_SHARED_API void AddLines(const ArrayPtr<Point>& points);

    /// Adds a string of text to the path represented by the current object.
    /// @param text The text to add
    /// @param family The font family used to draw the text
    /// @param style A FontStyle enumeration value tha specifies the font style to use
    /// @param emSize The height of the em square box that bounds each character of the string
    /// @param origin Specifies the location where the text starts
    /// @param stringFormat The format of the string
    ASPOSECPP_SHARED_API void AddString(const String& text, const SharedPtr<FontFamily>& family, int style, float emSize, Point origin,
        const SharedPtr<StringFormat>& stringFormat);
    /// Adds a string of text to the path represented by the current object.
    /// @param text The text to add
    /// @param family The font family used to draw the text
    /// @param style A FontStyle enumeration value tha specifies the font style to use
    /// @param emSize The height of the em square box that bounds each character of the string
    /// @param origin Specifies the location where the text starts
    /// @param stringFormat The format of the string
    ASPOSECPP_SHARED_API void AddString(const String& text, const SharedPtr<FontFamily>& family, int style, float emSize, PointF origin,
        const SharedPtr<StringFormat>& stringFormat);
    /// Adds a string of text to the path represented by the current object.
    /// @param text The text to add
    /// @param family The font family used to draw the text
    /// @param style A FontStyle enumeration value tha specifies the font style to use
    /// @param emSize The height of the em square box that bounds each character of the string
    /// @param layoutRect A rectangle that bounds the text
    /// @param stringFormat The format of the string
    ASPOSECPP_SHARED_API void AddString(const String& text, const SharedPtr<FontFamily>& family, int style, float emSize, Rectangle layoutRect,
        const SharedPtr<StringFormat>& stringFormat);
    /// Adds a string of text to the path represented by the current object.
    /// @param text The text to add
    /// @param family The font family used to draw the text
    /// @param style A FontStyle enumeration value tha specifies the font style to use
    /// @param emSize The height of the em square box that bounds each character of the string
    /// @param layoutRect A rectangle that bounds the text
    /// @param stringFormat The format of the string
    ASPOSECPP_SHARED_API void AddString(const String& text, const SharedPtr<FontFamily>& family, int style, float emSize, RectangleF layoutRect,
        const SharedPtr<StringFormat>& stringFormat);

    /// Adds the specified elliptical arc to the path represented by the current object.
    /// @param x The X coordinate of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param y The Y coordinate of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param width The width of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param height The height of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param startAngle Specifies the starting angle of the arc in degrees, measured clockwise from the X-axis
    /// @param sweepAngle Specifies the angle between the starting angle and the end of the arc
    ASPOSECPP_SHARED_API void AddArc(float x, float y, float width, float height, float startAngle, float sweepAngle);
    /// Adds the specified elliptical arc to the path represented by the current object.
    /// @param x The X coordinate of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param y The Y coordinate of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param width The width of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param height The height of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param startAngle Specifies the starting angle of the arc in degrees, measured clockwise from the X-axis
    /// @param sweepAngle Specifies the angle between the starting angle and the end of the arc
    ASPOSECPP_SHARED_API void AddArc(int x, int y, int width, int height, float startAngle, float sweepAngle);
    /// Adds the specified elliptical arc to the path represented by the current object.
    /// @param rect The rectangle that bounds the ellipse from which the arc is drawn
    /// @param startAngle Specifies the starting angle of the arc in degrees, measured clockwise from the X-axis
    /// @param sweepAngle Specifies the angle between the starting angle and the end of the arc
    ASPOSECPP_SHARED_API void AddArc(const RectangleF& rect, float startAngle, float sweepAngle);
    /// Adds the specified elliptical arc to the path represented by the current object.
    /// @param rect The rectangle that bounds the ellipse from which the arc is drawn
    /// @param startAngle Specifies the starting angle of the arc in degrees, measured clockwise from the X-axis
    /// @param sweepAngle Specifies the angle between the starting angle and the end of the arc
    ASPOSECPP_SHARED_API void AddArc(const Rectangle& rect, float startAngle, float sweepAngle);

    /// Adds the specified ellipse to the path represented by the current object.
    /// @param x The X coordinate of the upper left corner of the rectangle that bounds the ellipse to add
    /// @param y The Y coordinate of the upper left corner of the rectangle that bounds the ellipse to add
    /// @param width The width of the upper left corner of the rectangle that bounds the ellipse to add
    /// @param height The height of the upper left corner of the rectangle that bounds the ellipse to add
    ASPOSECPP_SHARED_API void AddEllipse(float x, float y, float width, float height);
    /// Adds the specified ellipse to the path represented by the current object.
    /// @param x The X coordinate of the upper left corner of the rectangle that bounds the ellipse to add
    /// @param y The Y coordinate of the upper left corner of the rectangle that bounds the ellipse to add
    /// @param width The width of the upper left corner of the rectangle that bounds the ellipse to add
    /// @param height The height of the upper left corner of the rectangle that bounds the ellipse to add
    ASPOSECPP_SHARED_API void AddEllipse(int x, int y, int width, int height);
    /// Adds the specified ellipse to the path represented by the current object.
    /// @param rect Specifies a rectangle that bounds the ellipse to add
    ASPOSECPP_SHARED_API void AddEllipse(const RectangleF &rect);
    /// Adds the specified ellipse to the path represented by the current object.
    /// @param rect Specifies a rectangle that bounds the ellipse to add
    ASPOSECPP_SHARED_API void AddEllipse(const Rectangle &rect);

    /// Adds the specified outline of the pie shape to the path represented by the current object.
    /// @param x The X coordinate of the upper left corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param y The Y coordinate of the upper left corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param width The width of the upper left corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param height The height of the upper left corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param startAngle Specifies the starting angle of the pie in degrees, measured clockwise from the X-axis
    /// @param sweepAngle Specifies the angle between the starting angle and the end of the pie
    ASPOSECPP_SHARED_API void AddPie(float x, float y, float width, float height, float startAngle, float sweepAngle);
    /// Adds the specified outline of the pie shape to the path represented by the current object.
    /// @param x The X coordinate of the upper left corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param y The Y coordinate of the upper left corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param width The width of the upper left corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param height The height of the upper left corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param startAngle Specifies the starting angle of the pie in degrees, measured clockwise from the X-axis
    /// @param sweepAngle Specifies the angle between the starting angle and the end of the pie
    ASPOSECPP_SHARED_API void AddPie(int x, int y, int width, int height, float startAngle, float sweepAngle);
    /// Adds the specified outline of the pie shape to the path represented by the current object.
    /// @param rect The rectangle that bounds the ellipse from which the pie is drawn
    /// @param startAngle Specifies the starting angle of the pie in degrees, measured clockwise from the X-axis
    /// @param sweepAngle Specifies the angle between the starting angle and the end of the pie
    ASPOSECPP_SHARED_API void AddPie(const Rectangle& rect, float startAngle, float sweepAngle);

    /// Adds the specified path to the path represented by the current object.
    /// @param path The path to add
    /// @param connect True specifies that the last first figure in the @p path is part of the last figure of the path represented by the
    /// current object; false specifies that the first figure in the @p path and the last figure in the path represented by the current object
    /// are separate figures
    ASPOSECPP_SHARED_API void AddPath(const SharedPtr<GraphicsPath>& path, bool connect);

    /// Adds the specified rectangle to the path represented by the current object.
    /// @param rect A rectangle to add
    ASPOSECPP_SHARED_API void AddRectangle(const Rectangle& rect);
    /// Adds the specified rectangle to the path represented by the current object.
    /// @param rect A rectangle to add
    ASPOSECPP_SHARED_API void AddRectangle(const RectangleF& rect);

    /// Adds the specified series of rectangles to the path represented by the current object.
    /// @param rects An array of Rectangle objects representing the rectangles to add
    ASPOSECPP_SHARED_API void AddRectangles(const ArrayPtr<Rectangle>& rects);
    /// Adds the specified series of rectangles to the path represented by the current object.
    /// @param rects An array of RectangleF objects representing the rectangles to add
    ASPOSECPP_SHARED_API void AddRectangles(const ArrayPtr<RectangleF>& rects);

    /// Adds the specified polygon to the path represented by the current object.
    /// @param points An array containing points that specify the polygon to add
    ASPOSECPP_SHARED_API void AddPolygon(const ArrayPtr<PointF>& points);

    /// Adds the specified polygon to the path represented by the current object.
    /// @param points An array containing points that specify the polygon to add
    ASPOSECPP_SHARED_API void AddPolygon(const ArrayPtr<Point>& points);

    /// Adds the specified curve to the path represented by the current object.
    /// @param points Points that specify the curve
    /// @param tension Specifies the amount that the curve bends between the control points
    ASPOSECPP_SHARED_API void AddCurve(const ArrayPtr<PointF>& points, float tension = 0.5);
    /// Adds the specified curve to the path represented by the current object.
    /// @param points Points that specify the curve
    /// @param tension Specifies the amount that the curve bends between the control points
    ASPOSECPP_SHARED_API void AddCurve(const ArrayPtr<Point>& points, float tension = 0.5);
    /// Adds the specified curve to the path represented by the current object.
    /// @param points Points that specify the curve
    /// @param offset The index of the point in @p points that is used as the staring poit of the curve
    /// @param number_of_segments The number of segments used to draw the curve
    /// @param tension Specifies the amount that the curve bends between the control points
    ASPOSECPP_SHARED_API void AddCurve(const ArrayPtr<PointF>& points, int offset, int number_of_segments, float tension);
    /// Adds the specified curve to the path represented by the current object.
    /// @param points Points that specify the curve
    /// @param offset The index of the point in @p points that is used as the staring poit of the curve
    /// @param number_of_segments The number of segments used to draw the curve
    /// @param tension Specifies the amount that the curve bends between the control points
    ASPOSECPP_SHARED_API void AddCurve(const ArrayPtr<Point>& points, int offset, int number_of_segments, float tension);

    /// Adds the specified closed curve to the path represented by the current object.
    /// @param points Points that specify the curve
    /// @param tension Specifies the amount that the curve bends between the control points
    ASPOSECPP_SHARED_API void AddClosedCurve(const ArrayPtr<PointF>& points, float tension = 0.5);
    /// Adds the specified closed curve to the path represented by the current object.
    /// @param points Points that specify the curve
    /// @param tension Specifies the amount that the curve bends between the control points
    ASPOSECPP_SHARED_API void AddClosedCurve(const ArrayPtr<Point>& points, float tension = 0.5);

    /// Starts a new figure.
    ASPOSECPP_SHARED_API void StartFigure();
    /// Closes the current figure and starts a new one.
    ASPOSECPP_SHARED_API void CloseFigure();
    /// Closes all open figures and starts a new one.
    ASPOSECPP_SHARED_API void CloseAllFigures();

    /// Returns a RectangleF object that represents a rectangle that bounds the path represented by the current object
    /// when it is transformed with the specified matrix.
    /// @param matrix The transform matrix
    /// @param pen A Pen to calculate the bounding rectangle.
    ASPOSECPP_SHARED_API RectangleF GetBounds(const MatrixPtr& matrix = nullptr, const SharedPtr<Pen>& pen = nullptr) const;
         
    /// Returns a PointF object representing the last point in the path.
    ASPOSECPP_SHARED_API PointF GetLastPoint() const;

    /// Empties the path by removing all points from it.
    ASPOSECPP_SHARED_API void Reset();

    /// Transforms the path represented by the current object by applying the specified transform matrix to it.
    /// @param matrix The transform matrix specifying the transformation
    ASPOSECPP_SHARED_API void Transform(const MatrixPtr& matrix);
    ASPOSECPP_SHARED_API void Transform(const SkMatrix& matrix);

    /// Flattens each curve in the path by converting them into a series of connected lines.
    /// The flatness value of 0.25 is used.
    ASPOSECPP_SHARED_API void Flatten();
    /// Flattens each curve in the path by converting them into a series of connected lines.
    /// The flatness value of 0.25 is used.
    /// @param matrix The transform matrix to apply to the path before flattening
    ASPOSECPP_SHARED_API void Flatten(const MatrixPtr& matrix);
    /// Flattens each curve in the path by converting them into a series of connected lines.
    /// @param matrix The transform matrix to apply to the path before flattening
    /// @param flatness Specifies the maximum permitted error between the curve and its flattened approximation
    ASPOSECPP_SHARED_API void Flatten(const MatrixPtr& matrix, float flatness);

    /// Replaces this path with an outline around the original path
    /// @param pen A Pen object that specifies the width between the original and the new outlines
    ASPOSECPP_SHARED_API void Widen(const SharedPtr<Pen>& pen);

    /// Determines if the specified point is contained within the path represented by the current object.
    /// @param point The point to check
    ASPOSECPP_SHARED_API bool IsVisible(const PointF& point);
    /// Determines if the specified point is contained within the path represented by the current object.
    /// @param x The X coordiate of the point to check
    /// @param y The Y coordiate of the point to check
    ASPOSECPP_SHARED_API bool IsVisible(float x, float y);

    /// Creates a copy of the current object.
    /// @returns A GraphicsPath object which is an exact copy of the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<GraphicsPath> Clone();
    /// Releases all operating system resources acquired by the current object.
    void Dispose() { };

    /// Returns a value which is a bitwise combination of Detail::FigureType values
    /// that indicates what types of figures are contained within the path represented by the
    /// current object.
    Detail::FigureType GetFigureFlags() { return m_figure_flags; }
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void SetMarkers();

protected:
    FRIEND_FUNCTION_System_MakeObject;
    friend class System::Drawing::Graphics;
    friend class CustomLineCap;
    friend class PathGradientBrush;
    friend class Details::Skia::SkiaData;

    /// The underlying SkPath object that contains the information about the path.
    std::shared_ptr<SkPath> m_sk_path;
    /// Indicates whether a figure has been started.
    bool m_figure_started = true;
    /// A bitwise combination of Detail::FigureType values that indicates what types of figures are contained
    /// within the path represented by the current object.
    Detail::FigureType m_figure_flags = Detail::FigureType::Unknown;

    /// Adds the specified cubic Bezier curve to the path represented by the current object.
    /// @param x1 The X coordinate of the starting point of the curve to add
    /// @param y1 The Y coordinate of the starting point of the curve to add
    /// @param x2 The X coordinate of the 1-st control point of the curve to add
    /// @param y2 The Y coordinate of the 1-st control point of the curve to add
    /// @param x3 The X coordinate of the 2-nd control point of the curve to add
    /// @param y3 The Y coordinate of the 2-nd control point of the curve to add
    /// @param x4 The X coordinate of the ending point of the curve to add
    /// @param y4 The Y coordinate of the ending point of the curve to add
    ASPOSECPP_SHARED_API void AddBezierImpl(SkScalar x1, SkScalar y1, SkScalar x2, SkScalar y2, SkScalar x3, SkScalar y3, SkScalar x4, SkScalar y4);
    /// Adds the specified line to the path represented by the current object.
    /// @param x1 The X coordinate of the starting point of the line to add
    /// @param y1 The Y coordinate of the starting point of the line to add
    /// @param x2 The X coordinate of the ending point of the line to add
    /// @param y2 The Y coordinate of the ending point of the line to add
    ASPOSECPP_SHARED_API void AddLineImpl(SkScalar x1, SkScalar y1, SkScalar x2, SkScalar y2);
    /// Adds the specified elliptical arc to the path represented by the current object.
    /// @param left The X coordinate of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param top The Y coordinate of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param width The width of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param height The height of the upper left corner of the rectangle that bounds the ellipse from which the arc is drawn
    /// @param startAngle Specifies the starting angle of the arc in degrees, measured clockwise from the X-axis
    /// @param sweepAngle Specifies the angle between the starting angle and the end of the arc
    ASPOSECPP_SHARED_API void AddArcImpl(SkScalar left, SkScalar top, SkScalar width, SkScalar height, SkScalar startAngle, SkScalar sweepAngle);
    /// Adds the specified ellipse to the path represented by the current object.
    /// @param left The X coordinate of the upper left corner of the rectangle that bounds the ellipse to add
    /// @param top The Y coordinate of the upper left corner of the rectangle that bounds the ellipse to add
    /// @param right The X coordinate of the bottom right corner of the rectangle that bounds the ellipse to add
    /// @param bottom The Y coordinate of the bottom right corner of the rectangle that bounds the ellipse to add
    ASPOSECPP_SHARED_API void AddEllipseImpl(SkScalar left, SkScalar top, SkScalar right, SkScalar bottom);
    /// Adds the specified outline of the pie shape to the path represented by the current object.
    /// @param left The X coordinate of the upper left corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param top The Y coordinate of the upper left corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param right The X coordinate of the bottom right corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param bottom The Y coordinate of the bottom right corner of the rectangle that bounds the ellipse from which the pie is drawn
    /// @param startAngle Specifies the starting angle of the pie in degrees, measured clockwise from the X-axis
    /// @param sweepAngle Specifies the angle between the starting angle and the end of the pie
    ASPOSECPP_SHARED_API void AddPieImpl(SkScalar left, SkScalar top, SkScalar right, SkScalar bottom, SkScalar startAngle, SkScalar sweepAngle);
    /// Adds a string of text to the path represented by the current object.
    /// @param text The text to add
    /// @param family The font family used to draw the text
    /// @param style A FontStyle enumeration value tha specifies the font style to use
    /// @param emSize The height of the em square box that bounds each character of the string
    /// @param layoutRect A rectangle that bounds the text
    /// @param stringFormat The format of the string
    ASPOSECPP_SHARED_API void AddStringImpl(const String & text, const SharedPtr<FontFamily>& family, int style, float emSize, SkRect layoutRect, const SharedPtr<StringFormat>& stringFormat);

    /// Returns a processed SkPath.
    /// @param pen A pen to use when drawing
    std::shared_ptr<SkPath> GetSkPath(const SharedPtr<Pen>& pen);

    /// Returns an array that contains values that indicate the types of the points that make up a path represented
    /// by the current object.
    /// @param forceClose True to complete each contur with Closes Verb, otherwise - false
    ASPOSECPP_SHARED_API ArrayPtr<uint8_t> get_PathTypesImpl(bool forceClose = false) const;

    /// Converts path curves into the ones available in .NET engine so ported code can work with them.
    /// @param source Path to convert curves of.
    /// @return Converted path.
    static ASPOSECPP_SHARED_API SkPath ConvertCurves(const SkPath& source);
};

}}}


/// Inserts using declaratios for arithmetic operators declared in namespace System::Drawing::Drawing2D::Detail.
DECLARE_USING_ENUM_OPERATORS(System::Drawing::Drawing2D::Detail)


#endif // _aspose_drawing_drawing2d_graphics_path_h_
