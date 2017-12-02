#ifndef _solid_brush_h_
#define _solid_brush_h_

#include "drawing/brush.h"
#include "drawing/color.h"

#include <cstdint>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include "core/SkColor.h"
#endif


ASPOSECPP_3RD_PARTY_TYPEDEF(SkColor, std::uint32_t);
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);


namespace System { namespace Drawing {

    class SolidBrush: public Brush
    {
        FRIEND_FUNCTION_System_MakeObject;

    public:
        SolidBrush(const Color & color);

        Color get_Color() const;
        void set_Color(Color color);
        
        virtual SharedPtr<Brush> Clone();

    protected:
        SolidBrush();
        virtual void Apply(SkPaint &paint) OVERRIDE;

    private:
        SkColor m_sk_color;
    };

}}

#endif // _solid_brush_h_
