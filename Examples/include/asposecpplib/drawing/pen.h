#ifndef __pen_h__
#define __pen_h__

#include "drawing/color.h"
#include "drawing/brush.h"
#include "drawing/drawing2d/line_cap.h"
#include "drawing/drawing2d/line_join.h"
#include "drawing/drawing2d/dash_cap.h"
#include "drawing/drawing2d/dash_style.h"
#include "drawing/drawing2d/pen_alignment.h"
#include "drawing/drawing2d/matrix.h"
#include "system/exceptions.h"
#include <cstdint>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include "core/SkColor.h"
#include "core/SkPath.h"
#endif


ASPOSECPP_3RD_PARTY_TYPEDEF(SkColor, std::uint32_t);
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
ASPOSECPP_3RD_PARTY_CLASS(SkPath);
ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);


namespace System { namespace Drawing {

namespace Drawing2D { class CustomLineCap; }
namespace Drawing2D { class GraphicsPath; }

class Pen : public Object
{
public:
    Pen(const Color & color);
    Pen(const Color & color, float width);
    Pen(SharedPtr<Brush> brush);
    Pen(SharedPtr<Brush> brush, float width);

    Drawing2D::PenAlignment get_Alignment() const;
    void set_Alignment(Drawing2D::PenAlignment value);

    float get_Width() const;
    void set_Width(float value);

    Drawing2D::LineCap get_StartCap() const;
    void set_StartCap(Drawing2D::LineCap value);

    Drawing2D::LineCap get_EndCap() const;
    void set_EndCap(Drawing2D::LineCap value);

    Drawing2D::LineJoin get_LineJoin() const;
    void set_LineJoin(Drawing2D::LineJoin value);

    float get_MiterLimit() const;
    void set_MiterLimit(float value);

    float get_DashOffset() const;
    void set_DashOffset(float value);

    Drawing2D::DashCap get_DashCap() const;
    void set_DashCap(Drawing2D::DashCap value);

    Drawing2D::DashStyle get_DashStyle() const;
    void set_DashStyle(Drawing2D::DashStyle value);

    System::ArrayPtr<float> get_DashPattern() const;
    void set_DashPattern(System::ArrayPtr<float> value);

    System::ArrayPtr<float> get_CompoundArray() const;
    void set_CompoundArray(System::ArrayPtr<float> value);

    SharedPtr<Drawing2D::Matrix> get_Transform();

    void set_Transform(SharedPtr<Drawing2D::Matrix> value);
    void set_CustomStartCap(SharedPtr<Drawing2D::CustomLineCap> value);
    void set_CustomEndCap(SharedPtr<Drawing2D::CustomLineCap> value);
    void set_Brush(SharedPtr<Brush> brush);
    void set_Color(const Color & color);
    Color get_Color();

    SharedPtr<Pen> Clone();

    void Dispose() { };

protected:
    friend class Graphics;
    friend class System::Drawing::Drawing2D::GraphicsPath;

    Pen();
    virtual void Apply(SkPaint &paint, bool antialiased = false);

private:
    void Init();
    System::ArrayPtr<float> GetPatternForDashStyle(Drawing2D::DashStyle value);

    typedef std::vector<SkPaint> SkPaints;
    SkPaints MakeCustomCaps(const SkPaint& base_paint, float& start_cap_inset, float& end_cap_inset) const;
    SkPaint ClearSkiaCaps(const SkPaint& base_paint, float start_cap_inset, float end_cap_inset) const;
    SkPaint MakeMainEffects(const SkPaint& base_paint, float phase) const;
    SkPaints MakeCompoundEffect(const SkPaint& base_paint, float phase) const;

    void AppendCapsPath(const SkPath* src_path, SkPath* dest_path) const;

private:
    SharedPtr<Brush> m_brush;
    SkColor m_sk_color;
    SkScalar m_sk_width;
    SkScalar m_sk_miter_limit;

    Drawing2D::DashCap m_dash_cap;
    Drawing2D::LineCap m_start_cap;
    Drawing2D::LineCap m_end_cap;
    Drawing2D::DashStyle m_dash_style;
    Drawing2D::LineJoin m_line_join;

    ArrayPtr<float> m_dash_pattern;
    ArrayPtr<float> m_compound_array;

    SharedPtr<Drawing2D::CustomLineCap> m_custom_start_cap;
    SharedPtr<Drawing2D::CustomLineCap> m_custom_end_cap;

};

}}

#endif
