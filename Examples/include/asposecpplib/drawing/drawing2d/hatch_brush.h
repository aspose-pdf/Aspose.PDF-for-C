#ifndef _hatch_brush_h_
#define _hatch_brush_h_

#include "fwd.h"
#include "drawing/brush.h"
#include "drawing/color.h"
#include "drawing/drawing2d/hatch_style.h"
#include "system/exceptions.h"


ASPOSECPP_3RD_PARTY_CLASS(SkPaint);


namespace System { namespace Drawing { namespace Drawing2D {

    class HatchBrush: public Brush
    {
    public:
        HatchBrush(HatchStyle hatchstyle, Color foreColor = Color::FromArgb(0xFF000000));
        HatchBrush(HatchStyle hatchstyle, Color foreColor, Color backColor);
        
        virtual SharedPtr<Brush> Clone() override;
        
        HatchStyle get_HatchStyle() const;
        Color get_ForegroundColor() const;
        Color get_BackgroundColor() const;

    protected:
        virtual void Apply(SkPaint &paint) override;
        
    };

}}}


#endif