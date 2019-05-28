/// @file drawing/drawing2d/linear_gradient_brush.h
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

/// Ensures that SkColor is an alias for uint32_t.
ASPOSECPP_3RD_PARTY_TYPEDEF(SkColor, std::uint32_t);
/// Forward declaration of SkPaint class.
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
/// Forward declaration of SkPoint struct.
ASPOSECPP_3RD_PARTY_STRUCT(SkPoint);
/// Ensures that SkScalar is an alias for float.
ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);



namespace System { namespace Drawing { namespace Drawing2D {

namespace Detail {
    /// An alias for an array of two points.
    typedef std::array<SkPoint, 2> SkPoints;
    /// Declares class SkPointsHolder that encapsulates SkPoints class.
    ASPOSECPP_3RD_PARTY_TYPE_HOLDER_HIDDEN_TYPE(SkPoints, SkPoints, 2*2*sizeof(float), float, SkPointsHolder);
}

class Blend;
class ColorBlend;

/// Represents a liear gradient brush.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS LinearGradientBrush: public Brush
{
    /// RTTI information.
    RTTI_INFO(System::Drawing::Drawing2D::LinearGradientBrush, ::System::BaseTypesInfo<System::Drawing::Brush>);

public:
    /// Constructs a new instance of LinearGradientBrush.
    /// @param point1 The start point of the gradient
    /// @param point2 The end point of the gradient
    /// @param color1 The start color of the gradient
    /// @param color2 The end color of the gradient
    ASPOSECPP_SHARED_API LinearGradientBrush(const PointF& point1, const PointF& point2, const Color& color1, const Color& color2);
    /// Constructs a new instance of LinearGradientBrush.
    /// @param point1 The start point of the gradient
    /// @param point2 The end point of the gradient
    /// @param color1 The start color of the gradient
    /// @param color2 The end color of the gradient
    ASPOSECPP_SHARED_API LinearGradientBrush(const Point& point1, const Point& point2, const Color& color1, const Color& color2);
    /// Constructs a new instance of LinearGradientBrush.
    /// @param rect A bouding rectagle of the gradient
    /// @param color1 The start color of the gradient
    /// @param color2 The end color of the gradient
    /// @param linearGradientMode The gradient direction
    ASPOSECPP_SHARED_API LinearGradientBrush(const RectangleF& rect, const Color& color1, const Color& color2, LinearGradientMode linearGradientMode);
    /// Constructs a new instance of LinearGradientBrush.
    /// @param rect A bouding rectagle of the gradient
    /// @param color1 The start color of the gradient
    /// @param color2 The end color of the gradient
    /// @param linearGradientMode The gradient direction
    ASPOSECPP_SHARED_API LinearGradientBrush(const Rectangle& rect, const Color& color1, const Color& color2, LinearGradientMode linearGradientMode);
    /// Constructs a new instance of LinearGradientBrush.
    /// @param rect A bouding rectagle of the gradient
    /// @param color1 The start color of the gradient
    /// @param color2 The end color of the gradient
    /// @param angle The angle of the gradient orientation line; measured in degrees clockwise from the x-axis
    /// @param isAngleScaleable Specifies if the angle of the gradient is affected by the trasformation associated with the brush
    ASPOSECPP_SHARED_API LinearGradientBrush(const RectangleF& rect, const Color& color1, const Color& color2, float angle, bool isAngleScaleable = false);
    /// Constructs a new instance of LinearGradientBrush.
    /// @param rect A bouding rectagle of the gradient
    /// @param color1 The start color of the gradient
    /// @param color2 The end color of the gradient
    /// @param angle The angle of the gradient orientation line; measured in degrees clockwise from the x-axis
    /// @param isAngleScaleable Specifies if the angle of the gradient is affected by the trasformation associated with the brush
    ASPOSECPP_SHARED_API LinearGradientBrush(const Rectangle& rect, const Color& color1, const Color& color2, float angle, bool isAngleScaleable = false);

    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void ResetTransform();
    /// Multiplies current object's transform matrix by the specified matrix.
    /// @param matrix The matrix by which the current object's transform matrix is multiplied
    /// @param order Specifies the order of the operation
    ASPOSECPP_SHARED_API void MultiplyTransform(const SharedPtr<Matrix>& matrix, MatrixOrder order = MatrixOrder::Prepend);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void RotateTransform(float angle, MatrixOrder order = MatrixOrder::Prepend);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void ScaleTransform(float sx, float sy, MatrixOrder order = MatrixOrder::Prepend);

    /// Returns the wrap mode.
    ASPOSECPP_SHARED_API WrapMode get_WrapMode() const;
    /// Sets the wrap mode.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_WrapMode(WrapMode value);
    /// Returns a blend that specifies factors and positions of base colors for this brush
    ASPOSECPP_SHARED_API SharedPtr<Blend> get_Blend() const;
    /// Sets a blend that specifies factors and positions of base colors for this brush
    /// @param value New blend value
    ASPOSECPP_SHARED_API void set_Blend(const SharedPtr<Blend>& value);

    /// Returns a ColorBlend object that defines a multicolor linear gradient.
    ASPOSECPP_SHARED_API SharedPtr<ColorBlend> get_InterpolationColors() const;
    /// Sets a ColorBlend object that defines a multicolor linear gradient.
    /// @param value A value to set
    ASPOSECPP_SHARED_API void set_InterpolationColors(const SharedPtr<ColorBlend>& value);

    /// Returns a copy of a Matrix object that specifies the geometrical transformations for the brush
    /// represneted by the current object.
    ASPOSECPP_SHARED_API SharedPtr<Matrix> get_Transform() const;
    /// Sets a Matrix object that specifies the geometrical transformations for the brush
    /// represneted by the current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Transform(const SharedPtr<Matrix>& value);

    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void SetSigmaBellShape(float focus, float scale = 1.0f);

    /// Returns a bounding rectangle.
    ASPOSECPP_SHARED_API RectangleF get_Rectangle();

    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void TranslateTransform(float dx, float dy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);

    /// Returns a value indicating that gamma correction is enabled for this brush
    ASPOSECPP_SHARED_API bool get_GammaCorrection() const;
    /// Sets gamma correction status for this brush
    /// @param value New gamma correction value
    ASPOSECPP_SHARED_API void set_GammaCorrection(bool value);

    /// Returns starting and ending colors of this gradiend
    ASPOSECPP_SHARED_API ArrayPtr<Color> get_LinearColors() const;
    /// Sets starting and ending colors of this gradiend
    /// @param value Array of two colors
    ASPOSECPP_SHARED_API void set_LinearColors(const ArrayPtr<Color>& value);

    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void SetBlendTriangularShape(float focus, float scale = 1.0f);
    /// Creates a copy of the current object.
    /// @returns A shared pointer to the copy of the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<Brush> Clone();

protected:
    /// Sets the properties of the current brush on the specified SkPaint object.
    /// @param paint An object set the properties on
    /// @param matrix Graphics world transformation matrix
    /// @param apply_shift Is used to make a small brush's texture position shift
    virtual ASPOSECPP_SHARED_API void Apply(SkPaint& paint, const SharedPtr<Drawing2D::Matrix>& matrix, bool apply_shift) override;

private:
    /// Represents a basic parameterns of a LinearGradientBrush brush.
    typedef std::tuple<Detail::SkPointsHolder, RectangleF, float> GradientInnerData;

    /// Constructs a new instance of LinearGradientBrush.
    /// @param data Brush parameters including starting and ending points, bounding rectangle, angle and indication if the angle is scalable
    /// @param color1 The start color of the gradient
    /// @param color2 The end color of the gradient
    ASPOSECPP_SHARED_API LinearGradientBrush(const GradientInnerData& data, const Color& color1, const Color& color2);

    /// Converts the spefified parameters of the brush into GradientInnerData object.
    /// @param point1 The start point of the gradient
    /// @param point2 The end point of the gradient
    static ASPOSECPP_SHARED_API GradientInnerData CalculateInnerData(const PointF& point1, const PointF& point2);
    /// Converts the spefified parameters of the brush into GradientInnerData object.
    /// @param rect A bouding rectagle of the gradient
    /// @param angle The angle of the gradient orientation line; measured in degrees clockwise from the x-axis
    /// @param isAngleScaleable Specifies if the angle of the gradient is affected by the trasformation associated with the brush
    static GradientInnerData CalculateInnerData(const RectangleF& rect, float angle = 0, bool isAngleScaleable = true);

    static float GetAngleFromMode(LinearGradientMode mode);

    /// Initializes transformation matrix associated with the current object.
    ASPOSECPP_SHARED_API void SetupInitialMatrix();

    void InterpolateColors();

private:
    /// The starting and ending points of the gradient.
    const Detail::SkPointsHolder m_points;
    /// The bounding rectangle of the gradient.
    const RectangleF m_rectangle;
    /// The angle of the gradient orientation line.
    const float m_angle;

    SkColor m_color1;
    SkColor m_color2;

    /// Gradient starting and ending colors.
    std::vector<SkColor> m_colors;
    std::vector<float> m_factors;
    /// Blend positions along the gradient.
    std::vector<SkScalar> m_positions;
    bool m_interpolation_colors = false;

    /// Wrap mode.
    WrapMode m_wrap_mode = WrapMode::Tile;
    /// Tranformation matrix.
    SharedPtr<Drawing2D::Matrix> m_transform_matrix;

    bool m_gamma_correction = false;
};

}}}

#endif // _aspose_drawing_drawing2d_linear_gradient_brush_h_
