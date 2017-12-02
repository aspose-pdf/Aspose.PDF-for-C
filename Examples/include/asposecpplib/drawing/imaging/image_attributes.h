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
    typedef SharedPtr<ImageAttributes> ImageAttributesPtr;

    class ImageAttributes : public Object
    {
    public:
        ImageAttributes();
        
        void ClearBrushRemapTable();
        void ClearColorKey(ColorAdjustType type = ColorAdjustType::Default);
        void ClearColorMatrix(ColorAdjustType type = ColorAdjustType::Default);
        void ClearGamma(ColorAdjustType type = ColorAdjustType::Default);
        void ClearNoOp(ColorAdjustType type = ColorAdjustType::Default);
        void ClearOutputChannel(ColorAdjustType type = ColorAdjustType::Default);
        void ClearOutputChannelColorProfile(ColorAdjustType type = ColorAdjustType::Default);
        void ClearRemapTable(ColorAdjustType type = ColorAdjustType::Default);
        void ClearThreshold(ColorAdjustType type = ColorAdjustType::Default);
        void GetAdjustedPalette(SharedPtr<ColorPalette> palette, ColorAdjustType type);
        void SetBrushRemapTable(ArrayPtr<SharedPtr<ColorMap>> map);
        void SetColorKey(Color colorLow, Color colorHigh, ColorAdjustType type = ColorAdjustType::Default);
        void SetColorMatrices(SharedPtr<ColorMatrix> newColorMatrix, SharedPtr<ColorMatrix> grayMatrix, ColorMatrixFlag mode = ColorMatrixFlag::Default, ColorAdjustType type = ColorAdjustType::Default);
        void SetColorMatrix(SharedPtr<ColorMatrix> newColorMatrix, ColorMatrixFlag mode = ColorMatrixFlag::Default, ColorAdjustType type = ColorAdjustType::Default);
        void SetGamma(float gamma, ColorAdjustType type = ColorAdjustType::Default);
        void SetNoOp(ColorAdjustType type = ColorAdjustType::Default);
        void SetOutputChannel(ColorChannelFlag flags, ColorAdjustType type = ColorAdjustType::Default);
        void SetOutputChannelColorProfile(String colorProfileFilename, ColorAdjustType type = ColorAdjustType::Default);
        void SetRemapTable(ArrayPtr<SharedPtr<ColorMap>> map, ColorAdjustType type = ColorAdjustType::Default);
        void SetThreshold(float threshold, ColorAdjustType type = ColorAdjustType::Default);
        void SetWrapMode(Drawing2D::WrapMode mode, Color color = Color(), bool clamp = false);

        SharedPtr<ImageAttributes> Clone();
        void Dispose() { };
        
    };

}}}


#endif