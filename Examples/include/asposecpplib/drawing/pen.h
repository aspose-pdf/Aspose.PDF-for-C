/// @file drawing/pen.h
#ifndef _aspose_drawing_pen_h_
#define _aspose_drawing_pen_h_

#include "drawing/color.h"
#include "drawing/brush.h"
#include "drawing/drawing2d/line_cap.h"
#include "drawing/drawing2d/line_join.h"
#include "drawing/drawing2d/dash_cap.h"
#include "drawing/drawing2d/dash_style.h"
#include "drawing/drawing2d/pen_alignment.h"
#include "drawing/drawing2d/matrix.h"
#include "drawing/drawing2d/matrix_order.h"
#include "drawing/drawing2d/pen_type.h"
#include "system/exceptions.h"
#include <cstdint>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include "core/SkColor.h"
#include "core/SkPath.h"
#endif

/// Ensures that SkColor is an alias for uint32_t.
ASPOSECPP_3RD_PARTY_TYPEDEF(SkColor, std::uint32_t);
/// Forward declaration of SkPaint class.
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
/// Forward declaration of SkPath class.
ASPOSECPP_3RD_PARTY_CLASS(SkPath);
/// Ensures that SkScalar is an alias for float.
ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);


namespace System { namespace Drawing {

namespace Drawing2D { class CustomLineCap; }
namespace Drawing2D { class GraphicsPath; }
/// Represents properties such as color, width etc. of the lines and curves being drawn.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Pen : public Object
{
public:
    /// Constructs a new Pen object representing the specified color.
    /// @param color The color of the pen represented by the object being constructed
    ASPOSECPP_SHARED_API Pen(const Color & color);
    /// Constructs a new Pen object representing the specified color and width.
    /// @param color The color of the pen represented by the object being constructed
    /// @param width The width of the pen represented by the object being constructed
    ASPOSECPP_SHARED_API Pen(const Color & color, float width);
    /// Constructs a new Pen object and initializes it with the specified Brush object.
    /// @param brush The Brush object that specifies the fill properties of the pen represented by the object being constructed
    ASPOSECPP_SHARED_API Pen(const SharedPtr<Brush>& brush);
    /// Constructs a new Pen object and initializes it with the specified Brush object.
    /// @param brush The Brush object that specifies the fill properties of the pen represented by the object being constructed
    /// @param width The width of the pen represented by the object being constructed
    ASPOSECPP_SHARED_API Pen(const SharedPtr<Brush>& brush, float width);

    /// Returns a value that indicates the alignment of the current Pen object.
    ASPOSECPP_SHARED_API Drawing2D::PenAlignment get_Alignment() const;
    /// Sets the alignment of the current Pen object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Alignment(Drawing2D::PenAlignment value);

    /// Returns the width of the current Pen object.
    ASPOSECPP_SHARED_API float get_Width() const;
    /// Sets the width of the current Pen object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Width(float value);

    /// Returns a value that indicates the starting line cap of the current Pen object.
    ASPOSECPP_SHARED_API Drawing2D::LineCap get_StartCap() const;
    /// Sets the starting line cap of the current Pen object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_StartCap(Drawing2D::LineCap value);

    /// Returns a value that indicates the ending line cap of the current Pen object.
    ASPOSECPP_SHARED_API Drawing2D::LineCap get_EndCap() const;
    /// Sets the ending line cap of the current Pen object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_EndCap(Drawing2D::LineCap value);

    /// Returns a value that indicates how the lines drawn by this Pen object are joined.
    ASPOSECPP_SHARED_API Drawing2D::LineJoin get_LineJoin() const;
    /// Sets a value that specifies how the lines drawn by this Pen object are joined.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_LineJoin(Drawing2D::LineJoin value);

    /// Returns the limit of the thickness of the join on a mitered corner. 
    ASPOSECPP_SHARED_API float get_MiterLimit() const;
    /// Sets the limit of the thickness of the join on a mitered corner.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_MiterLimit(float value);

    /// Returns the distance from the start of a line to the beginning of a dash pattern.
    ASPOSECPP_SHARED_API float get_DashOffset() const;
    /// Sets the distance from the start of a line to the beginning of a dash pattern.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_DashOffset(float value);

    /// Returns a value that indicates the cap used at the both ends of a dashed line.
    ASPOSECPP_SHARED_API Drawing2D::DashCap get_DashCap() const;
    /// Sets a value that specifies the cap used at the both ends of a dashed line.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_DashCap(Drawing2D::DashCap value);

    /// Returns a value that indicates the dash style of the current Pen object.
    ASPOSECPP_SHARED_API Drawing2D::DashStyle get_DashStyle() const;
    /// Sets a value that specifies the dash style of the current Pen object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_DashStyle(Drawing2D::DashStyle value);

    /// Returns an array indicating custom dash pattern in a dashed line.
    ASPOSECPP_SHARED_API System::ArrayPtr<float> get_DashPattern() const;
    /// Sets an array specifying custom dash pattern in a dashed line. The array consists
    /// of numbers that specify the lengths of alternating dashes and spaces.
    ASPOSECPP_SHARED_API void set_DashPattern(const System::ArrayPtr<float>& value);

    /// Returns an array of values that specifies a compound pen.
    ASPOSECPP_SHARED_API System::ArrayPtr<float> get_CompoundArray() const;
    /// Sets an array of values that specifies a compound pen.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_CompoundArray(const System::ArrayPtr<float>& value);

    /// Returns a copy of a Matrix object that specifies the geometrical transformations for the pen
    /// represneted by the current object.
    ASPOSECPP_SHARED_API SharedPtr<Drawing2D::Matrix> get_Transform();
    /// Sets a Matrix object that specifies the geometrical transformations for the pen
    /// represneted by the current object.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_Transform(const SharedPtr<Drawing2D::Matrix>& value);

    /// Sets the custom start line cap.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_CustomStartCap(const SharedPtr<Drawing2D::CustomLineCap>& value);
    /// Sets the custom end line cap.
    /// @param value The value to set
    ASPOSECPP_SHARED_API void set_CustomEndCap(const SharedPtr<Drawing2D::CustomLineCap>& value);
    
    /// Sets this pen's Brush object.
    /// @param brush The value to set
    ASPOSECPP_SHARED_API void set_Brush(const SharedPtr<Brush>& brush);
    /// Returns this pen's Brush object.
    ASPOSECPP_SHARED_API SharedPtr<Brush> get_Brush();

    /// Sets this pen's color.
    /// @param color The value to set
    ASPOSECPP_SHARED_API void set_Color(const Color & color);
    /// Returns this pen's color.
    ASPOSECPP_SHARED_API Color get_Color() const;
    /// Returns a copy of the current object.
    ASPOSECPP_SHARED_API SharedPtr<Pen> Clone();

    /// Resets the current object's transform matrix so that it becomes an identity matrix.
    ASPOSECPP_SHARED_API void ResetTransform();

    /// Multiplies current object's transform matrix by the specified matrix.
    /// @param matrix The matrix by which the current object's transform matrix is multiplied
    /// @param order Specifies the order of the operation
    ASPOSECPP_SHARED_API void MultiplyTransform(const SharedPtr<Drawing2D::Matrix>& matrix, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    
    /// Rotates the local geometric transformation by the specified angle in the specified order.
    /// @param angle The rotation angle
    /// @param order Specifies the order of the operation
    ASPOSECPP_SHARED_API void RotateTransform(float angle, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    /// Scales the local geometric transformation by the specified factors in the specified order.
    /// @param sx Scale factor by which to perform scaling in in X-axis direction
    /// @param sy Scale factor by which to perform scaling in in Y-axis direction
    /// @param order Specifies the order of the operation
    ASPOSECPP_SHARED_API void ScaleTransform(float sx, float sy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    /// Translates the local geometric transformation by the specified dimensions in the specified order.
    /// @param dx The value of translation in x
    /// @param dy The value of translation in y
    /// @param order Specifies the order of the operation
    ASPOSECPP_SHARED_API void TranslateTransform(float dx, float dy, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API void SetLineCap(Drawing2D::LineCap startCap, Drawing2D::LineCap endCap, Drawing2D::DashCap dashCap);
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API Drawing2D::PenType get_PenType() const;
    /// Releases all operating resources acquired by the current object.
    void Dispose() { };

protected:
    friend class Graphics;
    friend class System::Drawing::Drawing2D::GraphicsPath;
    /// Sets the properties of the current pen on the specified SkPaint object.
    /// @param paint An object set the properties on
    /// @param matrix Graphics world transformation matrix
    /// @param antialiased Specifies if 'antialiased' property should be set on the specified SkPaint object.
    virtual ASPOSECPP_SHARED_API void Apply(SkPaint &paint, const SharedPtr<Drawing2D::Matrix>& matrix, bool antialiased = false);

private:
    /// Initializes a newly created Pen object.
    void Init();
    /// Returns an array of values that specify the dash pattern of the specified dash style.
    /// @param value The dash style for which to return the pattern
    /// @returns An array containing values that specify the lengths of dashes and spaces in the dash pattern
    System::ArrayPtr<float> GetPatternForDashStyle(Drawing2D::DashStyle value);

    /// An alias for a vector of SkPaint objects.
    typedef std::vector<SkPaint> SkPaints;

    /// Makes custom caps.
    SkPaints MakeCustomCaps(const SkPaint& base_paint, float& start_cap_inset, float& end_cap_inset,
                            float scale_x, float scale_y) const;
    /// Clears Skia caps.
    SkPaint ClearSkiaCaps(const SkPaint& base_paint, float start_cap_inset, float end_cap_inset) const;
    /// Makes main effects.
    SkPaint MakeMainEffects(const SkPaint& base_paint, const SharedPtr<Drawing2D::Matrix>& matrix, float phase, float start_cap_inset, float end_cap_inset) const;
    /// Makes compound effect.
    SkPaints MakeCompoundEffect(const SkPaint& base_paint, float phase) const;
    /// Appends start/end line caps to the destination path.
    /// @param src_path The path to calculate line caps.
    /// @param dst_path The path where the resulting path will be added.
    void AppendCapsPath(const SkPath* src_path, SkPath* dest_path) const;
    
    /// Creates an outline around graphics path.
    /// @param src_path The path to create an outline.
    /// @param dst_path The path where the resulting path will be added.
    void ApplyOutlineEffect(const SkPath* src_path, SkPath* dest_path) const;

private:
    /// This Pen's brush.
    SharedPtr<Brush> m_brush;
    /// This Pen's width.
    SkScalar m_sk_width;

    float m_sk_miter_limit = 10.0f;
    float m_dash_offset = 0;

    /// This Pen's dash cap.
    Drawing2D::DashCap m_dash_cap;
    /// This Pen's start line cap.
    Drawing2D::LineCap m_start_cap;
    /// This Pen's end line cap.
    Drawing2D::LineCap m_end_cap;
    /// This Pen's dash style.
    Drawing2D::DashStyle m_dash_style;
    /// This Pen's line joining method.
    Drawing2D::LineJoin m_line_join;
    /// This Pen's alignment.
    Drawing2D::PenAlignment m_pen_alignment;

    /// Dash pattern.
    ArrayPtr<float> m_dash_pattern;
    /// Specifies compound pen. 
    ArrayPtr<float> m_compound_array;

    /// This Pen's custom start line cap.
    SharedPtr<Drawing2D::CustomLineCap> m_custom_start_cap;
    /// This Pen's custom end line cap.
    SharedPtr<Drawing2D::CustomLineCap> m_custom_end_cap;

    /// This Pen's matrix that specifies graphical transformations.
    SharedPtr<Drawing2D::Matrix> m_transform_matrix;
};

}} // System::Drawing

#endif // _aspose_drawing_pen_h_
