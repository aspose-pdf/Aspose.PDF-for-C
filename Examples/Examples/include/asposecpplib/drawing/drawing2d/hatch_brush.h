/// @file drawing/drawing2d/hatch_brush.h
#ifndef _aspose_drawing_drawing2d_hatch_brush_h_
#define _aspose_drawing_drawing2d_hatch_brush_h_

#include "fwd.h"
#include "drawing/bitmap.h"
#include "drawing/brush.h"
#include "drawing/color.h"
#include "drawing/drawing2d/hatch_style.h"
#include "system/exceptions.h"

/// Forward declaration of SkPaint class.
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
/// Forward declaration of SkBitmap class.
ASPOSECPP_3RD_PARTY_CLASS(SkBitmap);

namespace System { namespace Drawing { namespace Drawing2D {
/// Represents a rectangular brush with a hatch style, a foreground color, and a background color.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS HatchBrush: public Brush
{
    /// RTTI information.
    RTTI_INFO(System::Drawing::Drawing2D::HatchBrush, ::System::BaseTypesInfo<System::Drawing::Brush>);

public:

    /// Declaring template function System::MakeObject(...) a friend of this class.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructs a new instance of HatchBrush class that represents a brush with the specified hatch style,
    /// foreground color and background color.
    /// @param hatch_style Specifies the hatch style for the brush
    /// @param fore_color Foreground color for the brush
    /// @param back_color Background color for the brush
    ASPOSECPP_SHARED_API HatchBrush(HatchStyle hatch_style, Color fore_color, Color back_color = Color::FromArgb(0xFF000000));

    /// Creates an exact copy of the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<Brush> Clone() override;

    /// Returns a value that indicates the hatch style of this brush.
    ASPOSECPP_SHARED_API HatchStyle get_HatchStyle() const;
    /// Returns a value that indicates the foreground color of this brush.
    ASPOSECPP_SHARED_API Color get_ForegroundColor() const;
    /// Returns a value that indicates the background color of this brush.
    ASPOSECPP_SHARED_API Color get_BackgroundColor() const;

protected:
    /// Sets the properties of the current brush on the specified SkPaint object.
    /// @param paint An object set the properties on
    /// @param matrix Graphics world transformation matrix
    /// @param apply_shift Is used to make a small brush's texture position shift
    virtual void Apply(SkPaint& paint, const SharedPtr<Drawing2D::Matrix>& matrix, bool apply_shift) override;

private:
    /// Copy Constructor.
    HatchBrush(const HatchBrush& brush);

    /// Hatch style of this hatch brush.
    HatchStyle m_hatch_style;

    /// Background color of this hatch brush.
    Color m_fore_color;

    /// Foreground color of this hatch brush.
    Color m_back_color;

    /// Brush bitmap.
    std::unique_ptr<SkBitmap> m_brush_bitmap;
};

}}}


#endif // _aspose_drawing_drawing2d_hatch_brush_h_
