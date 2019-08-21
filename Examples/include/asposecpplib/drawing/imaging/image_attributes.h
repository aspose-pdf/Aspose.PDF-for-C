/// @file drawing/imaging/image_attributes.h
#ifndef _image_attributes_h_
#define _image_attributes_h_

#include "fwd.h"
#include "drawing/color.h"
#include "drawing/imaging/color_matrix.h"
#include "drawing/imaging/color_map.h"
#include "drawing/imaging/color_palette.h"
#include "drawing/imaging/color_channel_flag.h"
#include "drawing/imaging/color_matrix_flag.h"
#include "drawing/imaging/color_adjust_type.h"
#include "drawing/drawing2d/wrap_mode.h"

namespace System { namespace Drawing { namespace Imaging {

    class ImageAttributes;
    /// An aliast for a shared pointer to an instance of the ImageAttributes class.
    typedef SharedPtr<ImageAttributes> ImageAttributesPtr;

    /// Represents information about how image colors are manipulated during rendering.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS ImageAttributes : public Object
    {
    public:
        /// Default constructor.
        ASPOSECPP_SHARED_API ImageAttributes();
        
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void ClearBrushRemapTable();
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void ClearColorKey(ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void ClearColorMatrix(ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void ClearGamma(ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void ClearNoOp(ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void ClearOutputChannel(ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void ClearOutputChannelColorProfile(ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void ClearRemapTable(ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void ClearThreshold(ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void GetAdjustedPalette(const SharedPtr<ColorPalette>& palette, ColorAdjustType type);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void SetBrushRemapTable(const ArrayPtr<SharedPtr<ColorMap>>& map);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void SetColorKey(Color colorLow, Color colorHigh, ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void SetColorMatrices(const SharedPtr<ColorMatrix>& newColorMatrix, const SharedPtr<ColorMatrix>& grayMatrix, ColorMatrixFlag mode = ColorMatrixFlag::Default, ColorAdjustType type = ColorAdjustType::Default);
        /// Sets the color-adjustment matrix.
        /// @param newColorMatrix The color-adjustment matrix to set
        /// @param mode Specifies the type of image and color that will be affected by the color-adjustment matrix
        /// @param type Specifies the type of objects for which the color-adjustment matrix is set
        ASPOSECPP_SHARED_API void SetColorMatrix(const SharedPtr<ColorMatrix>& newColorMatrix, ColorMatrixFlag mode = ColorMatrixFlag::Default, ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void SetGamma(float gamma, ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void SetNoOp(ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void SetOutputChannel(ColorChannelFlag flags, ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void SetOutputChannelColorProfile(const String& colorProfileFilename, ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void SetRemapTable(const ArrayPtr<SharedPtr<ColorMap>>& map, ColorAdjustType type = ColorAdjustType::Default);
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        ASPOSECPP_SHARED_API void SetThreshold(float threshold, ColorAdjustType type = ColorAdjustType::Default);
        /// Sets the wrap mode and color used to decide how to tile a texture across a shape, or at shape boundaries.
        ASPOSECPP_SHARED_API void SetWrapMode(Drawing2D::WrapMode mode, Color color = Color(), bool clamp = false);
        /// Creates a copy of the current object.
        /// @returns An ImageAttributes object which is an exact copy of the current object.
        ASPOSECPP_SHARED_API SharedPtr<ImageAttributes> Clone();
        /// Releases all operating system resources acquired by the current object.
        void Dispose() { };
    private:
        /// Current object's color-adjustment matrix.
        SharedPtr<ColorMatrix> m_color_matrix;
        /// The type of image and color that will be affected by the current object's color-adjustment matrix.
        ColorMatrixFlag m_color_matrix_flag;
        /// The type of objects for which the current object's color-adjustment matrix is applied.
        ColorAdjustType m_color_adjust_type;
        /// The element of WrapMode that specifies how repeated copies of an image are used to tile an area.
        Drawing2D::WrapMode m_wrap_mode;
        /// The color object that specifies the color of pixels outside of a rendered image.
        Color m_color;
    };

}}}


#endif
