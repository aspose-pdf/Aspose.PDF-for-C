#ifndef _image_attributes_h_
#define _image_attributes_h_

#include "fwd.h"
#include "drawing/imaging/color_matrix.h"
#include "drawing/imaging/color_map.h"
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

        void SetColorMatrix(ColorMatrixPtr new_color_matrix, ColorMatrixFlag flags = ColorMatrixFlag::Default, ColorAdjustType type = ColorAdjustType::Default);
        void SetThreshold(float threshold, ColorAdjustType type = ColorAdjustType::Default);
        void SetRemapTable(System::ArrayPtr<ColorMapPtr> map, ColorAdjustType type = ColorAdjustType::Default);
        void SetColorKey(const Color & color_low, const Color & color_high, ColorAdjustType type = ColorAdjustType::Default);
        void SetWrapMode(Drawing2D::WrapMode mode);

    };

}}}


#endif