#ifndef _size_f_h_
#define _size_f_h_

#include "fwd.h"
#include <system/string.h>
#include <system/boxed_value.h>

namespace System { namespace Drawing {

    class SizeF
    {
        public:
            SizeF();
            SizeF(const PointF& point);
            SizeF(float width, float height);

            inline bool get_IsEmpty() const { return (m_width == 0.0f && m_height == 0.0f); }

            inline float get_Width() const { return m_width; }
            inline float get_Height() const { return m_height; }

            inline void set_Width(float value) { m_width = value; }
            inline void set_Height(float value) { m_height = value; }

            bool Equals(const SizeF& size) const;

            PointF ToPointF() const;
            Size ToSize() const;

            System::String ToString() const { return String::Format(L"{{Width={0}, Height={1}}}", m_width, m_height); }
            int32_t GetHashCode() const;

            static SizeF Add(const SizeF& size1, const SizeF& size2);
            static SizeF Subtract(const SizeF& size1, const SizeF& size2);

            operator PointF() const;

            friend SizeF operator+(const SizeF& size1, const SizeF& size2);
            friend SizeF operator-(const SizeF& size1, const SizeF& size2);
            friend bool operator==(const SizeF& size1, const SizeF& size2);
            friend bool operator!=(const SizeF& size1, const SizeF& size2);

            SizeF& operator+=(const SizeF& size);

            static ASPOSECPP_SHARED_API const SizeF Empty;

        private:
            float m_width;
            float m_height;

    };

}}

namespace System
{
    template <>
    class BoxedValue<System::Drawing::SizeF> : public DefaultBoxedValue<System::Drawing::SizeF>
    {
    public:
        BoxedValue(const System::Drawing::SizeF& value)
            : DefaultBoxedValue<System::Drawing::SizeF>(value)
        {}
    };
}

#endif