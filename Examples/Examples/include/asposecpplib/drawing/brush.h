/// @file drawing/brush.h
#ifndef _aspose_system_drawing_brush_h_
#define _aspose_system_drawing_brush_h_

#include "system/object.h"
#include "drawing2d/wrap_mode.h"
#include "drawing2d/matrix.h"

/// Forward declaration of SkPaint class.
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);

namespace System { namespace Drawing {
/// A base class for classes that represent fillers used to fill the interiors of graphical shapes.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Brush : public Object
{
    /// RTTI information.
    RTTI_INFO(System::Drawing::Brush, ::System::BaseTypesInfo<System::Object>)

public:
    /// Creates a copy of the current object.
    /// @returns A shared pointer to the copy of the current object.
    virtual ASPOSECPP_SHARED_API SharedPtr<Brush> Clone() = 0;
    /// Releases operating system resources acquired by the current object.
    void Dispose() { };

protected:
    friend class Graphics;
    friend class Pen;
    /// Sets the properties of the current brush on the specified SkPaint object.
    /// @param paint An object set the properties on
    /// @param matrix Graphics world transformation matrix
    /// @param apply_shift Is used to make a small brush's texture position shift
    virtual ASPOSECPP_SHARED_API void Apply(SkPaint &paint, const SharedPtr<Drawing2D::Matrix>& matrix, bool apply_shift = false) = 0;
};

}}


#endif
