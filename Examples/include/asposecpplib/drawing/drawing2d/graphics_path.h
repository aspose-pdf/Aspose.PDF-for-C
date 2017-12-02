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


ASPOSECPP_3RD_PARTY_CLASS(SkPath);
ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);


namespace System { namespace Drawing { class Graphics; } }
namespace System { namespace Drawing { class Region; } }


namespace System { namespace Drawing { namespace Drawing2D {

namespace Detail {
    enum class FigureType {
        Unknown   = (0x0),
        Line      = (0x01 << 0),
        Bezier    = (0x01 << 1),
        Arc       = (0x01 << 2),
        Ellipse   = (0x01 << 3),
        Pie       = (0x01 << 4),
        Rectangle = (0x01 << 5),
        Polygon   = (0x01 << 6),
        Curve     = (0x01 << 7),
        String    = (0x01 << 8)
    };

DECLARE_ENUM_OPERATORS(System::Drawing::Drawing2D::Detail::FigureType);
}

class PathGradientBrush;

class GraphicsPath : public Object
{
public:

    GraphicsPath();
    GraphicsPath(FillMode fillMode);
    GraphicsPath(ArrayPtr<Point> pts, ArrayPtr<uint8_t> types);
    GraphicsPath(ArrayPtr<PointF> pts, ArrayPtr<uint8_t> types);
    ~GraphicsPath();

    SharedPtr<PathData> get_PathData();
    ArrayPtr<uint8_t> get_PathTypes() const;
    ArrayPtr<PointF> get_PathPoints() const;
    int get_PointCount() const;

    FillMode get_FillMode();
    void set_FillMode(FillMode mode);

    void AddBezier(const Point& pt1, const Point& pt2, const Point& pt3, const Point& pt4);
    void AddBezier(const PointF& pt1, const PointF& pt2, const PointF& pt3, const PointF& pt4);
    void AddBezier(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
    void AddBezier(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

    void AddLine(const Point& pt1, const Point& pt2);
    void AddLine(const PointF& pt1, const PointF& pt2);
    void AddLine(int x1, int y1, int x2, int y2);
    void AddLine(float x1, float y1, float x2, float y2);

    void AddLines(ArrayPtr<PointF> points);
    void AddLines(ArrayPtr<Point> points);

    void AddString(const String& text, SharedPtr<FontFamily> family, int style, float emSize, PointF origin,
        SharedPtr<StringFormat> stringFormat);

    void AddArc(float x, float y, float width, float height, float startAngle, float sweepAngle);
    void AddArc(int x, int y, int width, int height, float startAngle, float sweepAngle);
    void AddArc(const RectangleF& rect, float startAngle, float sweepAngle);
    void AddArc(const Rectangle& rect, float startAngle, float sweepAngle);

    void AddEllipse(float x, float y, float width, float height);
    void AddEllipse(int x, int y, int width, int height);
    void AddEllipse(const RectangleF &rect);
    void AddEllipse(const Rectangle &rect);

    void AddPie(float x, float y, float width, float height, float startAngle, float sweepAngle);
    void AddPie(int x, int y, int width, int height, float startAngle, float sweepAngle);
    void AddPie(const Rectangle& rect, float startAngle, float sweepAngle);

    void AddPath(SharedPtr<GraphicsPath> path, bool connect);

    void AddRectangle(const Rectangle& rect);
    void AddRectangle(const RectangleF& rect);

    void AddRectangles(ArrayPtr<Rectangle> rects);
    void AddRectangles(ArrayPtr<RectangleF> rects);

    void AddPolygon(ArrayPtr<PointF> points);
    void AddPolygon(ArrayPtr<Point> points);

    void AddCurve(ArrayPtr<PointF> points, float tension = 0.5);
    void AddCurve(ArrayPtr<Point> points, float tension = 0.5);
    void AddCurve(ArrayPtr<PointF> points, int offset, int number_of_segments, float tension);

    void AddClosedCurve(ArrayPtr<PointF> points, float tension = 0.5);
    void AddClosedCurve(ArrayPtr<Point> points, float tension = 0.5);

    void StartFigure();
    void CloseFigure();
    void CloseAllFigures();

    RectangleF GetBounds() const { return GetBounds(nullptr); }
    RectangleF GetBounds(MatrixPtr matrix) const;

    PointF GetLastPoint() const;

    void Reset();

    void Transform(MatrixPtr matrix);

    void Flatten();
    void Flatten(MatrixPtr matrix);
    void Flatten(MatrixPtr matrix, float flatness);

    void Widen(SharedPtr<Pen>);

    bool IsVisible(const PointF& point);
    bool IsVisible(float x, float y);

    virtual SharedPtr<GraphicsPath> Clone();

    void Dispose() { };

    Detail::FigureType GetFigureFlags() { return m_figure_flags; }

    void SetMarkers();

protected:

    friend class System::Drawing::Graphics;
    friend class System::Drawing::Drawing2D::CustomLineCap;
    friend class System::Drawing::Drawing2D::PathGradientBrush;
    friend class System::Drawing::Region;

    std::unique_ptr<SkPath> m_sk_path;
    bool m_figure_started = true;
    Detail::FigureType m_figure_flags = Detail::FigureType::Unknown;

    void AddBezierImpl(SkScalar x1, SkScalar y1, SkScalar x2, SkScalar y2, SkScalar x3, SkScalar y3, SkScalar x4, SkScalar y4);
    void AddLineImpl(SkScalar x1, SkScalar y1, SkScalar x2, SkScalar y2);
    void AddArcImpl(SkScalar left, SkScalar top, SkScalar width, SkScalar height, SkScalar startAngle, SkScalar sweepAngle);
    void AddEllipseImpl(SkScalar left, SkScalar top, SkScalar right, SkScalar bottom);
    void AddPieImpl(SkScalar left, SkScalar top, SkScalar right, SkScalar bottom, SkScalar startAngle, SkScalar sweepAngle);

    /// iterate through SkPath segments of each contur and convert
    /// SkPath::Verb sequence into Drawing2D::PathPointType's
    /// @forceClose - complete each contur with Closes Verb
    ArrayPtr<uint8_t> get_PathTypesImpl(bool forceClose = false) const;

    static SkPath ConvertCurves(const SkPath& source);
};

}}}



DECLARE_USING_ENUM_OPERATORS(System::Drawing::Drawing2D::Detail)


#endif // _aspose_drawing_drawing2d_graphics_path_h_
