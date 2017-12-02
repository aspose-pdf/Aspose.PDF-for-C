#ifndef _aspose_drawing_drawing2d_path_gradient_brush_h_
#define _aspose_drawing_drawing2d_path_gradient_brush_h_

#include "fwd.h"
#include "drawing/color.h"
#include "drawing/brush.h"
#include "drawing/rectangle_f.h"
#include "drawing/drawing2d/wrap_mode.h"
#include "drawing/drawing2d/matrix_order.h"
#include "drawing/point_f.h"
#include "system/array.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkColor.h>
#include <core/SkPoint.h>
#endif

ASPOSECPP_3RD_PARTY_TYPEDEF(SkColor, std::uint32_t);
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
ASPOSECPP_3RD_PARTY_STRUCT(SkPoint);
ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);


namespace System { namespace Drawing { namespace Drawing2D {

class Blend;
class ColorBlend;
class GraphicsPath;
class Matrix;

class PathGradientBrush: public Brush
{
public:
    PathGradientBrush(ArrayPtr<PointF> points, WrapMode wrapMode = WrapMode::Clamp);
    PathGradientBrush(ArrayPtr<Point> points, WrapMode wrapMode = WrapMode::Clamp);
    PathGradientBrush(SharedPtr<GraphicsPath> path);

    WrapMode get_WrapMode() const;
    void set_WrapMode(WrapMode value);

    SharedPtr<ColorBlend> get_InterpolationColors() const;
    void set_InterpolationColors(SharedPtr<ColorBlend> value);

    PointF get_CenterPoint() const;
    void set_CenterPoint(const PointF& value);

    Color get_CenterColor();

    ArrayPtr<Color> get_SurroundColors();

    void ResetTransform();
    void ScaleTransform(float sx, float sy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    void RotateTransform(float angle, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    void TranslateTransform(float dx, float dy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    void MultiplyTransform(SharedPtr<Matrix> matrix, MatrixOrder order = MatrixOrder::Prepend);
    SharedPtr<Matrix> get_Transform() const;
    void set_Transform(SharedPtr<Matrix> value);
    
    void set_SurroundColors(ArrayPtr<Color> value);
    void set_CenterColor(Color value);
    void set_FocusScales(const PointF& value);
    void SetSigmaBellShape(float focus, float scale = 1.0f);
    
    SharedPtr<Blend> get_Blend() const;
    void set_Blend(SharedPtr<Blend> value);

    PointF get_FocusScales() const;
    RectangleF get_Rectangle();
        
    void SetBlendTriangularShape(float focus, float scale = 1.0f);

    virtual SharedPtr<Brush> Clone();

protected:
    virtual void Apply(SkPaint& paint);
    
private:
    void ApplyRadialGradient(SkPaint& paint) const;
    void ApplyPathGradient(SkPaint& paint) const;
    bool PathIsAlmostRect();
private:
    bool m_is_elliptical;

    bool m_is_ell;
    PointF m_focus_scales;
    PointF m_outer_center_point;
    PointF m_inner_center_point;

    Color m_center_color;
    ArrayPtr<Color> m_surround_colors;

    std::vector<SkColor> m_colors;
    std::vector<SkScalar> m_positions;

    RectangleF m_path_bounds;
    std::vector<SkPoint> m_path_points;

    SharedPtr<Matrix> m_transform_matrix;
    
};

}}}

#endif // _aspose_drawing_drawing2d_path_gradient_brush_h_
