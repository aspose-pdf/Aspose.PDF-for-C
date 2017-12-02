#ifndef _aspose_system_drawing_size_h_
#define _aspose_system_drawing_size_h_

#include "fwd.h"
#include <system/boxed_value.h>
#include <system/string.h>

namespace System { namespace Drawing {

    class Size
    {
        RTTI_INFO_VALUE_TYPE(Size)
        public:
            Size();
            Size(const Point& point);
            Size(int width, int height);

            inline bool get_IsEmpty() const { return (m_width == 0 && m_height == 0); }

            inline int get_Width() const { return m_width; }
            inline int get_Height() const{ return m_height; }

            inline void set_Width(int value) { m_width = value; }
            inline void set_Height(int value) { m_height = value; }

            bool Equals(const Size& size) const;
            String ToString() const;
            int32_t GetHashCode() const;

            static Size Add(const Size& size1, const Size& size2);
            static Size Subtract(const Size& size1, const Size& size2);

            static Size Ceiling(const SizeF& size);
            static Size Truncate(const SizeF& size);
            static Size Round(const SizeF& size);

            operator SizeF() const;
            operator Point() const;

            friend Size operator+(const Size& size1, const Size& size2);
            friend Size operator-(const Size& size1, const Size& size2);
            friend bool operator==(const Size& size1, const Size& size2);
            friend bool operator!=(const Size& size1, const Size& size2);

            ASPOSECPP_SHARED_API static const Size Empty;

        private:
            int m_width;
            int m_height;

    };

}}

namespace System
{
    template<> struct IsBoxable<Drawing::Size> : std::true_type {};

    template <>
    class BoxedValue<System::Drawing::Size> : public DefaultBoxedValue<System::Drawing::Size>
    {
    public:
        BoxedValue(const System::Drawing::Size& value)
            : DefaultBoxedValue<System::Drawing::Size>(value)
        {}
    };
}

#endif // _aspose_system_drawing_size_h_
