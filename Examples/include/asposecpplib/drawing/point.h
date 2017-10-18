#ifndef _point_h_
#define _point_h_

#include "fwd.h"
#include <system/string.h>
#include <system/boxed_value.h>
#include <functional>

namespace System { namespace Drawing {

    class Point
    {
        RTTI_INFO_VALUE_TYPE(Point)
        public:
            Point();
            Point(int x, int y);
            Point(const Size& size);
            Point(int dw);

            inline bool get_IsEmpty() const { return (m_x == 0 && m_y == 0); }

            inline int get_X() const { return m_x; }
            inline int get_Y() const { return m_y; }

            inline void set_X(int value) { m_x = value; }
            inline void set_Y(int value) { m_y = value; }

            bool Equals(const Point& point);
            bool Equals(const Point& point) const;

            int GetHashCode() const;
            String ToString() const;

            static Point Add(const Point& point, const Size& size);
            static Point Subtract(const Point& point, const Size& size);

            static Point Ceiling(const PointF& point);
            static Point Truncate(const PointF& point);
            static Point Round(const PointF& point);

            inline void Offset(int dx, int dy) { m_x += dx; m_y += dy; }
            inline void Offset(Point point) { Offset(point.m_x, point.m_y); }

            operator PointF() const;
            operator Size() const;

            friend Point operator+(const Point& point, const Size& size);
            friend Point operator-(const Point& point, const Size& size);
            friend bool operator==(const Point& point1, const Point& point2);
            friend bool operator!=(const Point& point1, const Point& point2);
            friend bool operator<(const Point& point1, const Point& point2);

            static const ASPOSECPP_SHARED_API Point Empty;

            bool IsNull() const { return false; }
            size_t getStdHash() const;

        private:

            inline int hi_word(int n) { return ((n >> 16) & 0xffff); }
            inline int lo_word(int n) { return (n & 0xffff); }

            int m_x;
            int m_y;

    };

}}

namespace System
{
    template <>
    class BoxedValue<System::Drawing::Point> : public DefaultBoxedValue<System::Drawing::Point>
    {
    public:
        BoxedValue(const System::Drawing::Point& value)
            : DefaultBoxedValue<System::Drawing::Point>(value)
        {}
    };
}
namespace std
{
    template<> struct hash<System::Drawing::Point>
    {
        inline size_t operator()(System::Drawing::Point const& p) const
        {
            return p.getStdHash();
        }
    };
}


#endif