#ifndef _aspose_system_drawing_point_f_h_
#define _aspose_system_drawing_point_f_h_

#include "fwd.h"
#include <system/string.h>
#include <system/boxed_value.h>

namespace System { namespace Drawing {

    class PointF
    {
        public:
            PointF();
            PointF(float x, float y);
            PointF(const SizeF& size);

            inline bool get_IsEmpty() const { return (m_x == 0.0f && m_y == 0.0f); }

            inline float get_X() const { return m_x; }
            inline float get_Y() const { return m_y; }

            inline void set_X(float value) { m_x = value; }
            inline void set_Y(float value) { m_y = value; }

            bool Equals(const PointF& point);
            bool Equals(const PointF& point) const;

            static PointF Add(const PointF& point, const SizeF& size);
            static PointF Subtract(const PointF& point, const SizeF& size);

            static PointF Add(const PointF& point, const Size& size);
            static PointF Subtract(const PointF& point, const Size& size);

            friend PointF operator+(const PointF& point, const SizeF& size);
            friend PointF operator-(const PointF& point, const SizeF& size);

            friend PointF operator+(const PointF& point, const Size& size);
            friend PointF operator-(const PointF& point, const Size& size);

            friend bool operator==(const PointF& point1, const PointF& point2);
            friend bool operator!=(const PointF& point1, const PointF& point2);

            friend bool operator<(const PointF& point1, const PointF& point2);

            static const ASPOSECPP_SHARED_API PointF Empty;

            int GetHashCode() const { return (int)((int)m_x ^ (((int)m_y << 13) | ((int)m_y >> 19))); }

            System::String ToString() const { return String::Format(L"{{X={0}, Y={1}}}", m_x, m_y); }

            bool IsNull() const { return false; }

            // To solve this:
            //    auto enumerator_0 = (bbox)->GetEnumerator();
            //    System::Drawing::PointF e_0;
            //    while (enumerator_0->MoveNext() && ((e_0 = enumerator_0->get_Current()) || true))
            explicit operator bool() { return true; }

        private:
            float m_x;
            float m_y;

    };

}}


namespace System
{
    template<> struct IsBoxable<Drawing::PointF> : std::true_type {};

    template <>
    class BoxedValue<System::Drawing::PointF> : public DefaultBoxedValue<System::Drawing::PointF>
    {
    public:
        BoxedValue(const System::Drawing::PointF& value)
            : DefaultBoxedValue<System::Drawing::PointF>(value)
        {}
    };
}

#endif // _aspose_system_drawing_point_f_h_
