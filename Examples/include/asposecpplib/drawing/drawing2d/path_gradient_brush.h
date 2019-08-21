/// @file drawing/drawing2d/path_gradient_brush.h
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
/// Ensures that SkColor is an alias for uint32_t.
ASPOSECPP_3RD_PARTY_TYPEDEF(SkColor, std::uint32_t);
/// Forward declaration of SkPaint class.
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
/// Forward declaration of SkPoint struct.
ASPOSECPP_3RD_PARTY_STRUCT(SkPoint);
/// Ensures that SkScalar is an alias for float.
ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);


namespace System { namespace Drawing { namespace Drawing2D {

class Blend;
class ColorBlend;
class GraphicsPath;
class Matrix;
/// Represents a brush that fills the interior of a GraphicsPath object with a gradient.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS PathGradientBrush: public Brush
{
    /// RTTI information.
    RTTI_INFO(System::Drawing::Drawing2D::PathGradientBrush, ::System::BaseTypesInfo<System::Drawing::Brush>);

public:

    /// Constructs a new instance of PathGradientBrush class.
    /// @param points An array that contains vertices of the path
    /// @param wrapMode Specifies how the fills drawn by a brush represented by the object being created
    /// should be tiled
    ASPOSECPP_SHARED_API PathGradientBrush(const ArrayPtr<PointF>& points, WrapMode wrapMode = WrapMode::Clamp);
    /// Constructs a new instance of PathGradientBrush class.
    /// @param points An array that contains vertices of the path
    /// @param wrapMode Specifies how the fills drawn by a brush represented by the object being created
    /// should be tiled
    ASPOSECPP_SHARED_API PathGradientBrush(const ArrayPtr<Point>& points, WrapMode wrapMode = WrapMode::Clamp);
    /// Constructs a new instance of PathGradientBrush class.
    /// @param path A GraphicsPath object that specifies a path filled by the object being created
    ASPOSECPP_SHARED_API PathGradientBrush(const SharedPtr<GraphicsPath>& path);

    /// Returns the wrap mode.
    ASPOSECPP_SHARED_API WrapMode get_WrapMode() const;
    /// Sets the wrap mode.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_WrapMode(WrapMode value);

    /// Returns a value the defines a multicolor linear gradient.
    ASPOSECPP_SHARED_API SharedPtr<ColorBlend> get_InterpolationColors() const;
    /// Sets a value the defines a multicolor linear gradient.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_InterpolationColors(const SharedPtr<ColorBlend>& value);

    /// Gets the center point of the gradient.
    ASPOSECPP_SHARED_API PointF get_CenterPoint() const;
    /// Sets the center point of the gradient.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_CenterPoint(const PointF& value);

    /// Returns a color that is at the center of the path filled by the current object.
    ASPOSECPP_SHARED_API Color get_CenterColor() const;
    /// Returns colors that correspond to the points in the path this PathGradientBrush fills.
    ASPOSECPP_SHARED_API ArrayPtr<Color> get_SurroundColors() const;

    /// Resets the current object's transform matrix so that it becomes an identity matrix.
    ASPOSECPP_SHARED_API void ResetTransform();
    /// Scales the local geometric transformation by the specified factors in the specified order.
    /// @param sx Scale factor by which to perform scaling in in X-axis direction
    /// @param sy Scale factor by which to perform scaling in in Y-axis direction
    /// @param order Specifies the order of the operation
    ASPOSECPP_SHARED_API void ScaleTransform(float sx, float sy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    /// Rotates the local geometric transformation by the specified angle in the specified order.
    /// @param angle The rotation angle
    /// @param order Specifies the order of the operation
    ASPOSECPP_SHARED_API void RotateTransform(float angle, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    /// Translates the local geometric transformation by the specified dimensions in the specified order.
    /// @param dx The value of translation in x
    /// @param dy The value of translation in y
    /// @param order Specifies the order of the operation
    ASPOSECPP_SHARED_API void TranslateTransform(float dx, float dy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    /// Multiplies current object's transform matrix by the specified matrix.
    /// @param matrix The matrix by which the current object's transform matrix is multiplied
    /// @param order Specifies the order of the operation
    ASPOSECPP_SHARED_API void MultiplyTransform(const SharedPtr<Matrix>& matrix, MatrixOrder order = MatrixOrder::Prepend);
    /// Returns a copy of a Matrix object that specifies the geometrical transformations for the brush
    /// represneted by the current object.
    ASPOSECPP_SHARED_API SharedPtr<Matrix> get_Transform() const;
    /// Sets a Matrix object that specifies the geometrical transformations for the brush
    /// represneted by the current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Transform(const SharedPtr<Matrix>& value);

    /// Sets colors that correspond to the points in the path this PathGradientBrush fills.
    /// @param value An array of colors to set
    ASPOSECPP_SHARED_API void set_SurroundColors(const ArrayPtr<Color>& value);
    /// Sets a color that is at the center of the path filled by the current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_CenterColor(Color value);
    /// Sets the focus point for the gradient falloff
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_FocusScales(const PointF& value);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void SetSigmaBellShape(float focus, float scale = 1.0f);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API SharedPtr<Blend> get_Blend() const;
    /// Sets a blend that specifies factors and positions of base colors for this brush
    /// @param value New blend value
    ASPOSECPP_SHARED_API void set_Blend(const SharedPtr<Blend>& value);
    /// Gets the focus point for the gradient falloff
    ASPOSECPP_SHARED_API PointF get_FocusScales() const;
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API RectangleF get_Rectangle();
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void SetBlendTriangularShape(float focus, float scale = 1.0f);

    /// Creates a copy of the current object.
    /// @returns A shared pointer to the copy of the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<Brush> Clone() override;

protected:
    /// Sets the properties of the current brush on the specified SkPaint object.
    /// @param paint An object set the properties on
    /// @param matrix Graphics world transformation matrix
    /// @param apply_shift Is used to make a small brush's texture position shift
    virtual ASPOSECPP_SHARED_API void Apply(SkPaint& paint, const SharedPtr<Drawing2D::Matrix>& matrix, bool apply_shift) override;

private:
    /// Applies the path gradient to the specified SkPaint object.
    /// @param paint The SkPaint object to apply the gradient to
    /// @param matrix The transformation matrix
    void ApplyPathGradient(SkPaint& paint, const SharedPtr<Drawing2D::Matrix>& matrix) const;

private:

    /// A point that specifies the location of the center for gradient falloff.
    PointF m_focus_scales;
    /// The center of the path.
    PointF m_center_point;

    /// Color at the center of the gradient.
    SkColor m_center_color;
    /// Colors at the corresponding poits of the path.
    ArrayPtr<Color> m_surround_colors;

    /// Gradient colors.
    std::vector<SkColor> m_colors;
    std::vector<float> m_factors;
    /// Gradient positoins.
    std::vector<SkScalar> m_positions;
    bool m_interpolation_colors = false;

    /// A rectangle that bounds the path.
    const RectangleF m_path_bounds;
    /// An array of path's vertices.
    std::vector<SkPoint> m_path_points;
    /// Specifies how the brush represented by the current object is tiled.
    WrapMode m_wrap_mode;
    /// This TextureBrush's matrix that specifies graphical transformations.
    SharedPtr<Matrix> m_transform_matrix;

};

}}}

#endif // _aspose_drawing_drawing2d_path_gradient_brush_h_
