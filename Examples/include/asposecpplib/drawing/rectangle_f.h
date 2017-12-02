#ifndef _aspose_system_drawing_rectangle_f_h_
#define _aspose_system_drawing_rectangle_f_h_

#include "fwd.h"
#include "system/object.h"
#include "drawing/size_f.h"
#include "drawing/point_f.h"
#include <system/boxed_value.h>


namespace System { namespace Drawing {

class RectangleF
{
    RTTI_INFO_VALUE_TYPE(RectangleF);

public:
    RectangleF();
    RectangleF(float x, float y, float width, float height);
    RectangleF(const PointF & location, const SizeF & size);
    explicit RectangleF(const Rectangle &rect);

    inline static RectangleF FromLTRB(float left, float top, float right, float bottom) { return RectangleF(left, top, right - left, bottom - top); }

    inline PointF get_Location() const { return PointF(m_x, m_y); }
    inline void set_Location(PointF value) { m_x = value.get_X(); m_y = value.get_Y(); }

    inline SizeF get_Size() const { return SizeF(m_width, m_height); }
    inline void set_Size(SizeF value) { m_width = value.get_Width(); m_height = value.get_Height(); }

    inline float get_X() const { return m_x; }
    inline void set_X(float value) { m_x = value; }

    inline float get_Y() const { return m_y; }
    inline void set_Y(float value) { m_y = value; }

    inline float get_Width() const { return m_width; }
    inline void set_Width(float value) { m_width = value; }

    inline float get_Height() const { return m_height; }
    inline void set_Height(float value) { m_height = value; }

    inline float get_Left() const { return m_x; }

    inline float get_Top() const { return m_y; }

    inline float get_Right() const { return (m_x + m_width); }

    inline float get_Bottom() const { return (m_y + m_height); }

    inline bool get_IsEmpty() const { return ((m_width <= 0) || (m_height <= 0)); }

    bool Equals(const RectangleF & rect);
    bool Equals(const RectangleF & rect) const;

    bool Contains(float x, float y);
    bool Contains(const PointF & point);
    bool Contains(const RectangleF & rect);

    void Inflate(float width, float height);
    void Inflate(const SizeF & size);
    static RectangleF Inflate(const RectangleF & rect, float x, float y);

    void Intersect(const RectangleF & rect);
    static RectangleF Intersect(const RectangleF & a, const RectangleF  & b);
    bool IntersectsWith(const RectangleF & rect);

    static RectangleF Union(const RectangleF & a, const RectangleF & b);

    void Offset(const PointF & pos);
    void Offset(float x, float y);

    friend bool operator==(const RectangleF & rect1, const RectangleF & rect2);
    friend bool operator!=(const RectangleF & rect1, const RectangleF & rect2);

    bool operator == (std::nullptr_t) const { return false; }
    bool operator != (std::nullptr_t) const { return true; }

    static const ASPOSECPP_SHARED_API RectangleF Empty;

    int GetHashCode() const;

    System::String ToString() const { return String::Format(L"{{X={0},Y={1},Width={2},Height={3}}}", m_x, m_y, m_width, m_height); }

private:
    float m_x;
    float m_y;
    float m_width;
    float m_height;

};

}} // System::Drawing

namespace System
{
    template<> struct IsBoxable<Drawing::RectangleF> : std::true_type {};

    template <>
    class BoxedValue<System::Drawing::RectangleF> : public DefaultBoxedValue<System::Drawing::RectangleF>
    {
    public:
        BoxedValue(const System::Drawing::RectangleF& value)
            : DefaultBoxedValue<System::Drawing::RectangleF>(value)
        {}
    };
}

namespace std
{
    template <>
    struct hash<System::Drawing::RectangleF>
    {
        std::size_t operator()(const System::Drawing::RectangleF& rect) const
        {
            return rect.GetHashCode();
        }
    };
}

#endif // _aspose_system_drawing_rectangle_f_h_
