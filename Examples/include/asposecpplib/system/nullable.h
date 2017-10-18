#ifndef _aspose_system_nullable_h_
#define _aspose_system_nullable_h_

#include <system/exceptions.h>
#include <system/convert.h>
#include <system/get_hash_code.h>
#include <type_traits>
#include <functional>
#include <algorithm>

#include "detail.h"

namespace System
{
    template <typename T>
    class Nullable;

    template <class T>
    struct IsNullable : System::detail::is_a<T, System::Nullable> {};

    template<typename T>
    class Nullable
    {
        template<class T2> friend class System::Nullable;
    public:
        typedef T ValueType;

        Nullable() : m_has_value(false)
        {}

        Nullable(std::nullptr_t) : m_has_value(false)
        {}

        template<typename T1>
        Nullable(const T1& value) : m_has_value(true), m_value(value)
        {}

        template<typename T1>
        Nullable(const Nullable<T1>& value) : m_has_value(value.m_has_value), m_value(value.m_value)
        {}

        template<typename T1, typename = typename std::enable_if<std::is_null_pointer<T1>::value>>
        Nullable<T> operator=(std::nullptr_t) { return Nullable<T>(); }

        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value && !std::is_null_pointer<T1>::value, Nullable<T>&>::type operator=(const T1& x)
        {
            this->m_has_value = true;
            this->m_value = x;

            return *this;
        }

        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value && !std::is_null_pointer<T1>::value, Nullable<T>&>::type operator=(const T1& x)
        {
            this->m_has_value = x.m_has_value;
            if (x.m_has_value)
            {
                this->m_value = x.m_value;
            }

            return *this;
        }

        T get_Value() const
        {
            if (!m_has_value)
            {
                throw InvalidOperationException(L"Nullable object must have a value");
            }
            return m_value;
        }

        bool get_HasValue() const { return m_has_value; }

        operator const T&() const
        {
            if (!m_has_value)
            {
                throw InvalidOperationException(L"Nullable object must have a value");
            }

            return m_value;
        }

        void reset() { m_has_value = false; }

        bool IsNull() const { return !m_has_value; }

        template<typename T1>
        bool NullableBoolHelper(const T1& other, std::function<bool()> f, bool default_if_both_are_null = false) const
        {
            if (IsNull())
            {
                if (other.IsNull())
                {
                    return default_if_both_are_null;
                }
                else
                {
                    return false;
                }
            }

            if (other.IsNull())
            {
                return false;
            }

            return f();
        }

        bool operator==(std::nullptr_t) const { return IsNull(); }
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator==(const T1& other) const
        {
            return m_has_value && m_value == other;
        }

        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator==(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value == other.get_Value(); },
            true);
        }

        bool operator!=(std::nullptr_t) const { return !IsNull(); }

        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator!=(const T1& other) const
        {
            return IsNull() ? true : m_value != other;
        }

        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator!=(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value != other.get_Value(); }
            );
        }

        bool operator>(std::nullptr_t) const { return false; }
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator>(const T1& other) const
        {
            return m_has_value && m_value > other;
        }

        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator>(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value > other.get_Value(); }
            );
        }

        bool operator<(std::nullptr_t) const { return false; }
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator<(const T1& other) const
        {
            return m_has_value && m_value < other;
        }

        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator<(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value < other.get_Value(); }
            );
        }

        bool operator>=(std::nullptr_t) const { return false; }
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator>=(const T1& other) const
        {
            return m_has_value && m_value >= other;
        }

        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator>=(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value >= other.get_Value(); }
            );
        }

        bool operator<=(std::nullptr_t) const { return false; }
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator<=(const T1& other) const
        {
            return m_has_value && m_value <= other;
        }

        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator<=(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value <= other.get_Value(); }
            );
        }

        Nullable<T> operator+(std::nullptr_t) const { return Nullable<T>(); }

        template<typename T1, typename = typename std::enable_if<!IsNullable<T1>::value, int>::type>
        auto operator+(const T1 &other) const -> Nullable<decltype(get_Value() + other)>
        {
            return IsNull() ? nullptr : Nullable<decltype(get_Value() + other)>
                (get_Value() + other);
        }

        template<typename T1, typename = typename std::enable_if<IsNullable<T1>::value, int>::type>
        auto operator+(const T1 &other) const -> System::Nullable<decltype(get_Value() + other.get_Value())>
        {
            return (IsNull() || other.IsNull()) ? nullptr :
                Nullable<decltype(get_Value() + other.get_Value())>
                (get_Value() + other.get_Value());
        }

        template<typename T1, typename = typename std::enable_if<std::is_null_pointer<T1>::value>::type>
        Nullable<T> operator-(T1) const {
            static_assert(std::is_null_pointer<T1>::value, "Operator '-' is ambiguous on operands of type 'Nullable<T>' and '<null>'");
            return Nullable<T>();
        }

        template<typename T1, typename = typename std::enable_if<!IsNullable<T1>::value, int>::type>
        auto operator-(const T1 &other) const -> Nullable<decltype(get_Value() - other)>
        {
            return IsNull() ? nullptr : Nullable<decltype(get_Value() - other)>
                (get_Value() - other);
        }

        template<typename T1, typename = typename std::enable_if<IsNullable<T1>::value, int>::type>
        auto operator-(const T1 &other) const -> System::Nullable<decltype(get_Value() - other.get_Value())>
        {
            return (IsNull() || other.IsNull()) ? nullptr :
                Nullable<decltype(get_Value() - other.get_Value())>
                (get_Value() - other.get_Value());
        }


        Nullable<T> operator+=(std::nullptr_t)
        {
            m_has_value = false;
            return *this;
        }

        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, Nullable<T>>::type operator+=(const T1& other)
        {
            if (m_has_value) {
                m_value += other;
            }
            return *this;
        }

        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, Nullable<T>>::type operator+=(const T1& other)
        {
            m_has_value = m_has_value && !other.IsNull();
            if (m_has_value) {
                m_value += other.get_Value();
            }
            return *this;
        }

        template<typename T1, typename = typename std::enable_if<std::is_null_pointer<T1>::value>::type>
        Nullable<T> operator-=(T1) {
            static_assert(std::is_null_pointer<T1>::value, "Operator '-=' is ambiguous on operands of type 'Nullable<T>' and '<null>'");
            return Nullable<T>();
        }

        template<typename T1, typename = typename std::enable_if<!std::is_null_pointer<T1>::value, T1>::type>
        typename std::enable_if<!IsNullable<T1>::value, Nullable<T>>::type operator-=(const T1& other)
        {
            if (m_has_value) {
                m_value -= other;
            }
            return *this;
        }

        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, Nullable<T>>::type operator-=(const T1& other)
        {
            m_has_value = m_has_value && !other.IsNull();
            if (m_has_value) {
                m_value -= other.get_Value();
            }
            return *this;
        }





        int GetHashCode() const
        {
            return m_has_value ? System::GetHashCode<T>(m_value) : 0;
        }

        String ToString() ASPOSE_CONST
        {
            return m_has_value ? System::Convert::ToString(m_value) : L"";
        }

        T GetValueOrDefault(T default_value)
        {
            return m_has_value ? m_value : default_value;
        }
    private:

        bool m_has_value;
        T m_value;
    };

    template<typename T>
    typename std::enable_if<IsNullable<T>::value, bool>::type operator!=(std::nullptr_t, const T& other) { return !other.IsNull(); }
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, bool>::type operator>(std::nullptr_t, const T&) { return false; }
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, bool>::type operator<(std::nullptr_t, const T&) { return false; }
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, bool>::type operator>=(std::nullptr_t, const T&) { return false; }
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, bool>::type operator<=(std::nullptr_t, const T&) { return false; }

    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator==(const T1& some, const T2& other) { return other.IsNull() ? false : some == other.get_Value(); }

    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator!=(const T1& some, const T2& other) { return other.IsNull() ? true : some != other.get_Value(); }

    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator>(const T1& some, const T2& other) { return other.IsNull() ? false : some > other.get_Value(); }

    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator<(const T1& some, const T2& other) { return other.IsNull() ? false : some < other.get_Value(); }

    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator>=(const T1& some, const T2& other) { return other.IsNull() ? false : some >= other.get_Value(); }

    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator<=(const T1& some, const T2& other) { return other.IsNull() ? false : some <= other.get_Value(); }

    template<typename T>
    typename std::enable_if<!IsNullable<T>::value && std::is_class<T>::value, Nullable<T>>::type operator+(std::nullptr_t, const T&) { return Nullable<T>(); }
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, T>::type operator+(std::nullptr_t, const T&) { return T(); }
    template<typename T>
    typename std::enable_if<!IsNullable<T>::value && std::is_class<T>::value, Nullable<T>>::type operator+(const T&, std::nullptr_t) { return Nullable<T>(); }
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, T>::type operator+(const T&, std::nullptr_t) { return T(); }

    template<typename T1, typename T2, typename = typename std::enable_if<!IsNullable<T1>::value, int>::type, typename = typename std::enable_if<IsNullable<T2>::value, int>::type>
    auto operator + (const T1& some, const T2 &other) -> System::Nullable<decltype(some + other.get_Value())>
    {
        return other.IsNull() ? nullptr : Nullable<decltype(some + other.get_Value())>(some + other.get_Value());
    }

    template<typename T1, typename T2, typename = typename std::enable_if<!IsNullable<T1>::value, int>::type, typename = typename std::enable_if<IsNullable<T2>::value, int>::type>
    auto operator - (const T1& some, const T2 &other) -> System::Nullable<decltype(some - other.get_Value())>
    {
        return other.IsNull() ? nullptr : Nullable<decltype(some - other.get_Value())>(some - other.get_Value());
    }

}

#endif

