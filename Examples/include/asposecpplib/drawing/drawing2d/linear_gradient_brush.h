#ifndef _aspose_drawing_drawing2d_linear_gradient_brush_h_
#define _aspose_drawing_drawing2d_linear_gradient_brush_h_

#include <array>
#include <tuple>

#include "fwd.h"
#include "drawing/brush.h"
#include "drawing/color.h"
#include "drawing/rectangle_f.h"
#include "drawing/drawing2d/linear_gradient_mode.h"
#include "drawing/drawing2d/matrix.h"
#include "drawing/drawing2d/matrix_order.h"
#include "drawing/drawing2d/wrap_mode.h"

#include <cstdint>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkPoint.h>
#include <core/SkColor.h>
#include <core/SkScalar.h>
#endif


ASPOSECPP_3RD_PARTY_TYPEDEF(SkColor, std::uint32_t);
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
ASPOSECPP_3RD_PARTY_STRUCT(SkPoint);
ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);



namespace System { namespace Drawing { namespace Drawing2D {

namespace Detail {
    typedef std::array<SkPoint, 2> SkPoints;
    ASPOSECPP_3RD_PARTY_TYPE_HOLDER_HIDDEN_TYPE(SkPoints, SkPoints, 2*2*sizeof(float), float, SkPointsHolder);
}

class Blend;
class ColorBlend;

class LinearGradientBrush: public Brush
{
public:
    LinearGradientBrush(const PointF& point1, const PointF& point2, const Color& color1, const Color& color2);
    LinearGradientBrush(const Point& point1, const Point& point2, const Color& color1, const Color& color2);
    LinearGradientBrush(const RectangleF& rect, const Color& color1, const Color& color2, LinearGradientMode linearGradientMode);
    LinearGradientBrush(const Rectangle& rect, const Color& color1, const Color& color2, LinearGradientMode linearGradientMode);
    LinearGradientBrush(const RectangleF& rect, const Color& color1, const Color& color2, float angle, bool isAngleScaleable = false);
    LinearGradientBrush(const Rectangle& rect, const Color& color1, const Color& color2, float angle, bool isAngleScaleable = false);

    void ResetTransform();
    void MultiplyTransform(SharedPtr<Matrix> matrix, MatrixOrder order = MatrixOrder::Prepend);
    void RotateTransform(float angle, MatrixOrder order = MatrixOrder::Prepend);
    void ScaleTransform(float sx, float sy, MatrixOrder order = MatrixOrder::Prepend);
    
    WrapMode get_WrapMode() const;
    void set_WrapMode(WrapMode value);

    SharedPtr<Blend> get_Blend() const;
    void set_Blend(SharedPtr<Blend> value);

    SharedPtr<ColorBlend> get_InterpolationColors() const;
    void set_InterpolationColors(SharedPtr<ColorBlend> value);

    SharedPtr<Matrix> get_Transform() const;
    void set_Transform(SharedPtr<Matrix> value);

    void SetSigmaBellShape(float focus, float scale = 1.0f);

    RectangleF get_Rectangle();

    void TranslateTransform(float dx, float dy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);

    bool get_GammaCorrection() const;
    void set_GammaCorrection(bool value);
    
    ArrayPtr<Color> get_LinearColors() const;
    void set_LinearColors(ArrayPtr<Color> value);

    void SetBlendTriangularShape(float focus, float scale = 1.0f);

    virtual SharedPtr<Brush> Clone();

protected:
    virtual void Apply(SkPaint& paint);
    
private:
    typedef std::tuple<Detail::SkPointsHolder, RectangleF, float> GradientInnerData;

    LinearGradientBrush(const GradientInnerData& data, const Color& color1, const Color& color2);

    static GradientInnerData CalculateInnerData(const PointF& point1, const PointF& point2);
    static GradientInnerData CalculateInnerData(const RectangleF& rect, float angle = 0, bool isAngleScaleable = false);

    void SetupInitialMatrix();

private:
    const Detail::SkPointsHolder m_points;
    const RectangleF m_rectangle;
    const float m_angle;

    std::vector<SkColor> m_colors;
    std::vector<SkScalar> m_positions;

    WrapMode m_wrap_mode = WrapMode::Tile;

    SharedPtr<Drawing2D::Matrix> m_transform_matrix;
};

}}}

#endif // _aspose_drawing_drawing2d_linear_gradient_brush_h_
