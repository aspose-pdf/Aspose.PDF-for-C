#ifndef _aspose_drawing_drawing2d_adjustable_arrow_cap_h
#define _aspose_drawing_drawing2d_adjustable_arrow_cap_h

#include "fwd.h"
#include "drawing/drawing2d/custom_line_cap.h"


namespace System { namespace Drawing { namespace Drawing2D {

class AdjustableArrowCap: public CustomLineCap
{
    RTTI_INFO(System::Drawing::Drawing2D::AdjustableArrowCap, ::System::BaseTypesInfo<System::Drawing::Drawing2D::CustomLineCap>)

public:
    AdjustableArrowCap(float width, float height, bool is_filled = true);

    float get_Width() const;
    void set_Width(float value);
        
    float get_Height() const;
    void set_Height(float value);
    
    bool get_Filled() const;
    void set_Filled(bool value);

    float get_MiddleInset() const;
    void set_MiddleInset(float value);
    
};
}}}

#endif
