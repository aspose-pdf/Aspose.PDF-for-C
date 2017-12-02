#ifndef _aspose_drawing_drawing2d_custom_line_cap_h_
#define _aspose_drawing_drawing2d_custom_line_cap_h_

#include "fwd.h"
#include "drawing/drawing2d/line_cap.h"
#include "drawing/drawing2d/line_join.h"
#include "system/exceptions.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkScalar.h>
#include <core/SkPath.h>
#endif


ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
ASPOSECPP_3RD_PARTY_CLASS(SkPath);
ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);


namespace System { namespace Drawing {

class Pen;

namespace Drawing2D {

class GraphicsPath;

class CustomLineCap : public Object
{
    RTTI_INFO(System::Drawing::Drawing2D::CustomLineCap, ::System::BaseTypesInfo<System::Object>)

public:
    CustomLineCap(SharedPtr<GraphicsPath> fillPath, SharedPtr<GraphicsPath> strokePath,
        LineCap baseCap = LineCap::Flat, float baseInset = 0);

    void SetStrokeCaps(LineCap startCap, LineCap endCap);

    void GetStrokeCaps(LineCap & startCap, LineCap & endCap);

    virtual SharedPtr<CustomLineCap> Clone();

    LineCap get_BaseCap() const;
    void set_BaseCap(LineCap value);
    
    float get_BaseInset() const;
    void set_BaseInset(float value);
    
    LineJoin get_StrokeJoin() const;
    void set_StrokeJoin(LineJoin value);
    
    float get_WidthScale() const;
    void set_WidthScale(float value);

    void Dispose() {};

protected:
    friend class System::Drawing::Pen;

    CustomLineCap();

    static SharedPtr<CustomLineCap> MakeForLineCap(LineCap value);

    void Apply(const SkPaint& base_paint, std::vector<SkPaint>& result, float& inset, SkScalar width,
        bool is_start_cap) const;

    void AppendPath(const SkPath* src_path, SkPath* dest_path, SkScalar width, bool is_start_cap) const;

    bool m_is_filled;
    float m_inset;
    SharedPtr<GraphicsPath> m_path;

    LineCap m_start_cap;
    LineCap m_end_cap;

    SharedPtr<CustomLineCap> m_start_cap_child;
    SharedPtr<CustomLineCap> m_end_cap_child;
};
}}}

#endif
