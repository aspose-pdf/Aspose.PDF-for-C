/// @file drawing/texture_brush.h
#ifndef _aspose_drawing_texture_brush_h
#define _aspose_drawing_texture_brush_h

#include "fwd.h"
#include "brush.h"
#include "image.h"
#include "drawing2d/wrap_mode.h"
#include "drawing2d/matrix.h"
#include "drawing2d/matrix_order.h"
#include "rectangle.h"
#include "rectangle_f.h"
#include "imaging/image_attributes.h"
#include "drawing2d/wrap_mode.h"

#include <memory>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include "core/SkShader.h"
#endif

/// Forward declaration of SkBitmap class.
ASPOSECPP_3RD_PARTY_CLASS(SkBitmap);
/// Forward declaration of SkMatrix class.
ASPOSECPP_3RD_PARTY_CLASS(SkMatrix);
/// Forward declaration of SkPaint class.
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
/// Forward declaration of SkShader class.
ASPOSECPP_3RD_PARTY_CLASS(SkShader);


namespace System { namespace Drawing {
/// Represents a brush that uses an image to fill the interior of a shape.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TextureBrush : public Brush
{
    /// RTTI information.
    RTTI_INFO(System::Drawing::TextureBrush, ::System::BaseTypesInfo<System::Drawing::Brush>);

public:

    /// Declaring template function System::MakeObject(...) a friend of this class.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructs a new instance of TextureBrush class that uses the specified image.
    /// @param image An image used by the brush to fill the interior of a shape
    /// @param wrap_mode Specifies how the brush object is tiled
    ASPOSECPP_SHARED_API TextureBrush(const SharedPtr<Image>& image, Drawing2D::WrapMode wrap_mode = Drawing2D::WrapMode::Tile);
    /// Constructs a new instance of TextureBrush class that uses the specified image.
    /// @param image An image used by the brush to fill the interior of a shape
    /// @param dst_rect Specifies the bounding rectangle for the brush
    /// @param image_attrs The image attributes
    ASPOSECPP_SHARED_API TextureBrush(const SharedPtr<Image>& image, RectangleF dst_rect, const SharedPtr<Imaging::ImageAttributes>& image_attrs = nullptr);
    /// Constructs a new instance of TextureBrush class that uses the specified image.
    /// @param image An image used by the brush to fill the interior of a shape
    /// @param wrap_mode Specifies how the brush object is tiled
    /// @param dst_rect Specifies the bounding rectangle for the brush
    ASPOSECPP_SHARED_API TextureBrush(const SharedPtr<Image>& image, Drawing2D::WrapMode wrap_mode, RectangleF dst_rect);
    /// Constructs a new instance of TextureBrush class that uses the specified image.
    /// @param image An image used by the brush to fill the interior of a shape
    /// @param wrap_mode Specifies how the brush object is tiled
    /// @param dst_rect Specifies the bounding rectangle for the brush
    ASPOSECPP_SHARED_API TextureBrush(const SharedPtr<Image>& image, Drawing2D::WrapMode wrap_mode, Rectangle dst_rect);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~TextureBrush();

    /// Returns an image used by the current TextureBrush object.
    ASPOSECPP_SHARED_API SharedPtr<Image> get_Image();
    /// Returns a value that specifies how the brush represented by the current object is tiled.
    ASPOSECPP_SHARED_API Drawing2D::WrapMode get_WrapMode();
    /// Sets a value that specifies how the brush represented by the current object is tiled.
    /// @param wrap_mode The value to set
    ASPOSECPP_SHARED_API void set_WrapMode(Drawing2D::WrapMode wrap_mode);

    /// Returns a copy of a Matrix object that specifies the geometrical transformations for the brush
    /// represneted by the current object.
    ASPOSECPP_SHARED_API System::SharedPtr<Drawing2D::Matrix> get_Transform();
    /// Sets a Matrix object that specifies the geometrical transformations for the brush
    /// represneted by the current object.
    /// @param matrix The value to set
    ASPOSECPP_SHARED_API void set_Transform(const System::SharedPtr<Drawing2D::Matrix>& matrix);

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
    ASPOSECPP_SHARED_API void MultiplyTransform(const SharedPtr<Drawing2D::Matrix>& matrix, Drawing2D::MatrixOrder order = Drawing2D::MatrixOrder::Prepend);

    /// Creates a copy of the current object.
    /// @returns A shared pointer to the copy of the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<Brush> Clone() override;

protected:
    /// Sets the properties of the current brush on the specified SkPaint object.
    /// @param paint An object set the properties on
    /// @param matrix Graphics world transformation matrix
    /// @param apply_shift Is used to make a small brush's texture position shift
    virtual ASPOSECPP_SHARED_API void Apply(SkPaint &paint, const SharedPtr<Drawing2D::Matrix>& matrix, bool apply_shift) override;

    /// Initializes a newly created TextureBrush object.
    /// @param image An image used by the brush to fill the interior of a shape
    /// @param wrap_mode Specifies how the brush object is tiled
    /// @param dst_rect Specifies the bounding rectangle for the brush
    ASPOSECPP_SHARED_API void InitBrushSettings(const SharedPtr<Image>& image, Drawing2D::WrapMode wrap_mode, Rectangle dst_rect);

    /// An image used by the current object.
    SharedPtr<Image> m_image;
    /// This TextureBrush's matrix that specifies graphical transformations.
    SharedPtr<Drawing2D::Matrix> m_transform_matrix = MakeObject<Drawing2D::Matrix>();
    /// The bounding rectangle of this TextureBrush object.
    Rectangle m_texture_rect;

    /// Specifies how the brush represented by the current object is tiled.
    Drawing2D::WrapMode m_wrap_mode = Drawing2D::WrapMode::Tile;
    /// Brush bitmap.
    std::unique_ptr<SkBitmap> m_brush_bitmap;

private:
    /// Copy Constructor.
    TextureBrush(const TextureBrush& brush);
};

}} // namespace System { namespace Drawing {

#endif // #ifndef texture_brush_h
