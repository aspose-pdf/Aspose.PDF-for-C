#ifndef _rectangle_h_
#define _rectangle_h_

#include "fwd.h"
#include <system/object.h>
#include <system/windows/forms/screen.h>
#include <system/string.h>
#include <system/boxed_value.h>
#include "drawing/size.h"
#include "drawing/point.h"

namespace System { namespace Drawing {

    class RectangleF;

    class Rectangle
    {
    private:
        friend class RectangleF;

        RTTI_INFO_VALUE_TYPE(Rectangle)

        public:
            Rectangle();
            Rectangle(int x, int y, int width, int height);
            Rectangle(const Point & location, const Size & size);
            Rectangle(const System::Windows::Forms::Screen::Rectangle_ & rect);

            inline static Rectangle FromLTRB(int left, int top, int right, int bottom) { return Rectangle(left, top, right - left, bottom - top); }

            inline Point get_Location() const { return Point(m_x, m_y); }
            inline void set_Location(Point value) { m_x = value.get_X(); m_y = value.get_Y(); }

            inline Size get_Size() const { return Size(m_width, m_height); }
            inline void set_Size(Size value) { m_width = value.get_Width(); m_height = value.get_Height(); }

            inline int get_X() const { return m_x; }
            inline void set_X(int value) { m_x = value; }

            inline int get_Y() const { return m_y; }
            inline void set_Y(int value) { m_y = value; }

            inline int get_Width() const { return m_width; }
            inline void set_Width(int value) { m_width = value; }

            inline int get_Height() const { return m_height; }
            inline void set_Height(int value) { m_height = value; }

            inline int get_Left() const { return m_x; }

            inline int get_Top() const { return m_y; }

            inline int get_Right() const { return (m_x + m_width); }

            inline int get_Bottom() const { return (m_y + m_height); }

            inline bool get_IsEmpty() const { return (m_x == 0 && m_y == 0 && m_width == 0 && m_height == 0); }

            bool Equals(const Rectangle & rect) const;

            static Rectangle Ceiling(const RectangleF & rect);
            static Rectangle Truncate(const RectangleF & rect);
            static Rectangle Round(const RectangleF & rect);

            bool Contains(int x, int y) const;
            bool Contains(const Point & point) const;
            bool Contains(const Rectangle & rect) const;

            void Inflate(int width, int height);
            void Inflate(const Size & size);
            static Rectangle Inflate(const Rectangle & rect, int x, int y);

            void Intersect(const Rectangle & rect);
            static Rectangle Intersect(const Rectangle & a, const Rectangle  & b);
            bool IntersectsWith(const Rectangle & rect);

            static Rectangle Union(const Rectangle & a, const Rectangle & b);

            void Offset(const Point & pos);
            void Offset(int x, int y);

            friend bool operator==(const Rectangle & rect1, const Rectangle & rect2);
            friend bool operator!=(const Rectangle & rect1, const Rectangle & rect2);

            bool operator == (std::nullptr_t) const { return false; }
            bool operator != (std::nullptr_t) const { return true; }

            String ToString() const;
            int GetHashCode() const;

            //explicit operator int*() const { return nullptr; }

            operator RectangleF() const;


            static const ASPOSECPP_SHARED_API Rectangle Empty;

        private:

            int m_x;
            int m_y;
            int m_width;
            int m_height;

    };

}}

namespace System
{
    template <>
    class BoxedValue<System::Drawing::Rectangle> : public DefaultBoxedValue<System::Drawing::Rectangle>
    {
    public:
        BoxedValue(const System::Drawing::Rectangle& value)
            : DefaultBoxedValue<System::Drawing::Rectangle>(value)
        {}
    };
}

#endif