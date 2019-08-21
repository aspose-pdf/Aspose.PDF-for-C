/// @file system/nullable.h
/// Contains the declaration of System::Nullable class.
#ifndef _aspose_system_nullable_h_
#define _aspose_system_nullable_h_

#include <system/get_hash_code.h>
#include <system/boxable_traits.h>
#include <type_traits>
#include <functional>
#include <algorithm>

#include "detail.h"

namespace System
{
    template <typename T>
    class Nullable;

    /// A template predicate that determines if its template argument T in Nullable or its subclass.
    template <class T>
    struct IsNullable : System::detail::is_a<T, System::Nullable> {};

    namespace Details {
        /// Throws exception.
        [[noreturn]]
        ASPOSECPP_SHARED_API void ThrowNullableObjectMustHaveAValue();
    }
    
    /// Represents a value of the specified type that can be assigned null. 
    /// This type should be allocated on stack and passed to functions by value or by reference.
    /// Never use System::SmartPtr class to manage objects of this type.
    /// @tparam The underlying value type which is extended by the Nullable class
    template<typename T>
    class Nullable
    {
        /// All specializations of Nullable template class are friends for each other.
        template<class T2> friend class System::Nullable;
    public:
        /// An alias for a type of the value represented by this class.
        typedef T ValueType;

        /// Constructs an instance that represents null-value.
        Nullable() : m_has_value(false)
        {}

        /// Constructs an instance that represents null.
        Nullable(std::nullptr_t) : m_has_value(false)
        {}

        /// Constructs an instance of Nullable class that represents the specified value
        /// converted (if necessary) to the value of the underlying type T.
        /// @param value A constant reference to the value to be represented by the newly constructed Nullable object
        /// @tparam T1 The type of the specified value
        template<typename T1>
        Nullable(const T1& value) : m_has_value(true), m_value(value)
        {}
        
        /// Constructs an instance that represents a value that is represented by the specified Nullable object. The 
        /// specified nullable object may represent a value of different type than the underlying type of the constructed 
        /// instance in which case the represented value is converted to a value of type T.
        /// @tparam T1 The type of the value represented by the specified Nullable object
        template<typename T1>
        Nullable(const Nullable<T1>& value) : m_has_value(value.m_has_value), m_value(value.m_value)
        {}

        /// Assigns a null to the current object.
        /// @returns A Nullable object that represents null-value.
        template<typename T1, typename = typename std::enable_if<std::is_null_pointer<T1>::value>>
        Nullable<T> operator=(std::nullptr_t) { return Nullable<T>(); }

        /// Replaces the object's currently represented value with the specifed one.
        /// @param x The new value to be represented by the current object
        /// @returns A reference to the self
        /// @tparam The type of the new value to be represented by the current object
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value && !std::is_null_pointer<T1>::value, Nullable<T>&>::type operator=(const T1& x)
        {
            this->m_has_value = true;
            this->m_value = static_cast<T>(x);

            return *this;
        }

        /// Replaces the object's currently represented value with the specifed one.
        /// @param x The new value to be represented by the current object
        /// @returns A reference to the self
        /// @tparam The type of the new value to be represented by the current object
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

        /// Returns a copy of the value represented by the current object.
        /// @returns The value represented by the current object
        /// @throws InvalidOperationException If the current object does not represent any value
        T get_Value() const
        {
            if (!m_has_value)
                Details::ThrowNullableObjectMustHaveAValue();

            return m_value;
        }

        /// Determines whether the current object represents any value.
        /// @returns True if the current object represents a value, otherwise - false
        bool get_HasValue() const { return m_has_value; }

        /// Returns a constant reference to the value represented by the current object.
        /// @returns A constant reference to the value represented by the current object
        /// @throws InvalidOperationException If the current object does not represent any value
        operator const T&() const
        {
            if (!m_has_value)
                Details::ThrowNullableObjectMustHaveAValue();

            return m_value;
        }

        /// Sets the currently represented value to null.
        void reset() { m_has_value = false; }

        /// Determines if the current object represents a null-value.
        /// @returns True if the current object represents a null-value, otherwise - false
        bool IsNull() const { return !m_has_value; }

        /// Helper function to check if this and @p other are both not nulls and call a lambda if so. Used in implementation.s
        /// @tparam T1 Other nullable type.
        /// @param other Other nullable value to compare to.
        /// @param f Lambda to call if both @p this and @p other are not nulls.
        /// @param default_if_both_are_null Return value if both values are nulls.
        /// @return false if either @p this or @p other is null; @p default_if_both_are_null if both are null; result of @p f call if both are not null.
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

        /// Determines if the value represented by the current object is null.
        /// @returns True if the value represented by the current object is null, otherwise - false
        bool operator==(std::nullptr_t) const { return IsNull(); }

        /// Determines if the value represented by the current object is equal to the specified value.
        /// @param other A constant reference to the value to compare with
        /// @returns True if the value represented by the current object is equal to the specified value, otherwise - false
        /// @tparam T1 The type of the value to compare with
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator==(const T1& other) const
        {
            return m_has_value && m_value == other;
        }

        /// Determines if the value represented by the current object is equal to the value represented by the specified Nullable object.
        /// @param other A constant reference to the Nullable object to compare with
        /// @returns True if the value represented by the current object is equal to the value represented by the specified Nullable object, otherwise - false
        /// @tparam T1 The underlying type of the Nullable object to compare with
        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator==(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value == other.get_Value(); },
            true);
        }

        /// Determines if the value represented by the current object is not null.
        /// @returns True if the value represented by the current object is not null, otherwise - false
        bool operator!=(std::nullptr_t) const { return !IsNull(); }

        /// Determines if the value represented by the current object is not equal to the specified value.
        /// @param other A constant reference to the value to compare with
        /// @returns True if the value represented by the current object is not equal to the specified value, otherwise - false
        /// @tparam T1 The type of the value to compare with
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator!=(const T1& other) const
        {
            return IsNull() ? true : m_value != other;
        }

        /// Determines if the value represented by the current object is not equal to the value represented by the specified Nullable object.
        /// @param other A constant reference to the Nullable object to compare with
        /// @returns True if the value represented by the current object is not equal to the value represented by the specified Nullable object, otherwise - false
        /// @tparam T1 The underlying type of the Nullable object to compare with
        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator!=(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value != other.get_Value(); }
            );
        }

        /// Always returns false.
        bool operator>(std::nullptr_t) const { return false; }
        
        /// Determines if the value represented by the current object is greater than the specified value by applying operator>() to these values.
        /// @param other A constant reference to the value to compare with
        /// @returns True if the value represented by the current object is greater than the specified value, otherwise - false
        /// @tparam T1 The type of the value to compare with
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator>(const T1& other) const
        {
            return m_has_value && m_value > other;
        }

        /// Determines if the value represented by the current object is greater than the value represented by the specified Nullable object by applying operator>() to these values.
        /// @param other A constant reference to the Nullable object to compare with
        /// @returns True if the value represented by the current object is greater than the value represented by the specified Nullable object, otherwise - false
        /// @tparam T1 The underlying type of the Nullable object to compare with
        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator>(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value > other.get_Value(); }
            );
        }

        /// Always returns false.
        bool operator<(std::nullptr_t) const { return false; }

        /// Determines if the value represented by the current object is less than the specified value by applying operator<() to these values.
        /// @param other A constant reference to the value to compare with
        /// @returns True if the value represented by the current object is less than the specified value, otherwise - false
        /// @tparam T1 The type of the value to compare with
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator<(const T1& other) const
        {
            return m_has_value && m_value < other;
        }

        /// Determines if the value represented by the current object is less than the value represented by the specified Nullable object by applying operator<() to these values.
        /// @param other A constant reference to the Nullable object to compare with
        /// @returns True if the value represented by the current object is less than the value represented by the specified Nullable object, otherwise - false
        /// @tparam T1 The underlying type of the Nullable object to compare with
        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator<(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value < other.get_Value(); }
            );
        }

        /// Always returns false.
        /// @returns Always - false
        bool operator>=(std::nullptr_t) const { return false; }

        /// Determines if the value represented by the current object is greater or equal to the value represented by the specified object by applying operator>=() to these values.
        /// @param other A constant reference to an object to compare the current object with
        /// @returns True if the value represented by the current object is greater or equal to the value represented by the specified object, otherwise - false
        /// @tparam T1 The underlying type of the value to compare the value represented by the current object with
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator>=(const T1& other) const
        {
            return m_has_value && m_value >= other;
        }

        /// Determines if the value represented by the current object is greater or equal to the value represented by the specified Nullable object by applying operator>=() to these values.
        /// @param other A constant reference to the Nullable object to compare with
        /// @returns True if the value represented by the current object is greater or equal to the value represented by the specified Nullable object, otherwise - false
        /// @tparam T1 The underlying type of the Nullable object to compare with
        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator>=(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value >= other.get_Value(); }
            );
        }

        /// Always returns false.
        bool operator<=(std::nullptr_t) const { return false; }

        /// Determines if the value represented by the current object is less or equal to the specified value by applying operator<=() to these values.
        /// @param other A constant reference to the value to compare with
        /// @returns True if the value represented by the current object is less or equal to the specified value, otherwise - false
        /// @tparam T1 The type of the value to compare with
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, bool>::type operator<=(const T1& other) const
        {
            return m_has_value && m_value <= other;
        }

        /// Determines if the value represented by the current object is less or equal to the value represented by the specified Nullable object by applying operator<=() to these values.
        /// @param other A constant reference to the Nullable object to compare with
        /// @returns True if the value represented by the current object is less or equal to the value represented by the specified Nullable object, otherwise - false
        /// @tparam T1 The underlying type of the Nullable object to compare with
        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, bool>::type operator<=(const T1& other) const
        {
            return NullableBoolHelper<T1>(other,
                [&] {return m_value <= other.get_Value(); }
            );
        }

        /// Returns a defualt constructed instance of Nullable<T> class.
        Nullable<T> operator+(std::nullptr_t) const { return Nullable<T>(); }

        /// Sums nullable and non-nullable values.
        /// @tparam T1 Right operand type.
        /// @param other value to add.
        /// @return Summing result.
        template<typename T1, typename = typename std::enable_if<!IsNullable<T1>::value, int>::type>
        auto operator+(const T1 &other) const -> Nullable<decltype(get_Value() + other)>
        {
            return IsNull() ? nullptr : Nullable<decltype(get_Value() + other)>
                (get_Value() + other);
        }

        /// Sums nullable values.
        /// @tparam T1 Right operand type.
        /// @param other value to add.
        /// @return Summing result.
        template<typename T1, typename = typename std::enable_if<IsNullable<T1>::value, int>::type>
        auto operator+(const T1 &other) const -> System::Nullable<decltype(get_Value() + other.get_Value())>
        {
            return (IsNull() || other.IsNull()) ? nullptr :
                Nullable<decltype(get_Value() + other.get_Value())>
                (get_Value() + other.get_Value());
        }

        /// Substracts nullable and null-pointed values.
        /// @tparam T1 Right operand type, should be nullptr_t.
        /// @return Empty Nullable object.
        template<typename T1, typename = typename std::enable_if<std::is_null_pointer<T1>::value>::type>
        Nullable<T> operator-(T1) const {
            static_assert(std::is_null_pointer<T1>::value, "Operator '-' is ambiguous on operands of type 'Nullable<T>' and '<null>'");
            return Nullable<T>();
        }

        /// Substracts nullable and non-nullable values.
        /// @tparam T1 Right operand type.
        /// @param other value to substract.
        /// @return Substraction result.
        template<typename T1, typename = typename std::enable_if<!IsNullable<T1>::value, int>::type>
        auto operator-(const T1 &other) const -> Nullable<decltype(get_Value() - other)>
        {
            return IsNull() ? nullptr : Nullable<decltype(get_Value() - other)>
                (get_Value() - other);
        }

        /// Substracts nullable values.
        /// @tparam T1 Right operand type.
        /// @param other value to substract.
        /// @return Substraction result.
        template<typename T1, typename = typename std::enable_if<IsNullable<T1>::value, int>::type>
        auto operator-(const T1 &other) const -> System::Nullable<decltype(get_Value() - other.get_Value())>
        {
            return (IsNull() || other.IsNull()) ? nullptr :
                Nullable<decltype(get_Value() - other.get_Value())>
                (get_Value() - other.get_Value());
        }

        /// Resets the current object so that it represents a null-value.
        /// @returns A copy of the self
        Nullable<T> operator+=(std::nullptr_t)
        {
            m_has_value = false;
            return *this;
        }

        /// Applies operator+=() to the value represented by the current object using the specified value as a right-side argument.
        /// @param other A constant reference to the value that is used as a right-side value of the operator+=() applied to the value represented by the current object.
        /// @returns A reference to the self
        /// @tparam T1 The type of the value used as the right-side value of operator+=()
        template<typename T1>
        typename std::enable_if<!IsNullable<T1>::value, Nullable<T>>::type operator+=(const T1& other)
        {
            if (m_has_value) {
                m_value += other;
            }
            return *this;
        }

        /// Applies operator+=() to the value represented by the current object using the value represented by the specified Nullable object as the right-side argument.
        /// @param other A constant reference to Nullable object the value represented by which is used as a right-side argument of the operator+=() applied to the value represented by the current object.
        /// @returns A reference to the self
        /// @tparam T1 The underlying type of a Nullable object the value represented by which is used as the right-side argument of operator+=()
        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, Nullable<T>>::type operator+=(const T1& other)
        {
            m_has_value = m_has_value && !other.IsNull();
            if (m_has_value) {
                m_value += other.get_Value();
            }
            return *this;
        }

        /// Returns an instance of Nullable class that represents a null-value.
        template<typename T1, typename = typename std::enable_if<std::is_null_pointer<T1>::value>::type>
        Nullable<T> operator-=(T1) {
            static_assert(std::is_null_pointer<T1>::value, "Operator '-=' is ambiguous on operands of type 'Nullable<T>' and '<null>'");
            return Nullable<T>();
        }

        /// Applies operator-=() to the value represented by the current object using the specified value as a right-side argument.
        /// @param other A constant reference to the value that is used as a right-side value of the operator-=() applied to the value represented by the current object.
        /// @returns A reference to the self
        /// @tparam T1 The type of the value used as the right-side value of operator-=()
        template<typename T1, typename = typename std::enable_if<!std::is_null_pointer<T1>::value, T1>::type>
        typename std::enable_if<!IsNullable<T1>::value, Nullable<T>>::type operator-=(const T1& other)
        {
            if (m_has_value) {
                m_value -= other;
            }
            return *this;
        }
        
        /// Applies operator|=() to the value represented by the current object using the specified value as a right-side argument.
        /// @param other A boolean value that is used as a right-side value of the operator|=() applied to the value represented by the current object.
        /// @returns A reference to the self.
        /// @tparam T1 The template parameter to make SFINAE work.
        template<typename T1 = T>
        typename std::enable_if<std::is_same<T1, bool>::value, Nullable<T>>::type operator|=(bool other)
        {
            if (m_has_value)
            {
                m_value |= other;
            }
            else if (other)
            {
                m_has_value = true;
                m_value = other;
            }
            return *this;
        }

        /// Applies operator&=() to the value represented by the current object using the specified value as a right-side argument.
        /// @param other A boolean value that is used as a right-side value of the operator&=() applied to the value represented by the current object.
        /// @returns A reference to the self.
        /// @tparam T1 The template parameter to make SFINAE work.
        template<typename T1 = T>
        typename std::enable_if<std::is_same<T1, bool>::value, Nullable<T>>::type operator&=(bool other)
        {
            if (m_has_value)
            {
                m_value &= other;
            }
            else if (!other)
            {
                m_has_value = true;
                m_value = other;
            }
            return *this;
        }


        /// Applies operator-=() to the value represented by the current object using the value represented by the specified Nullable object as the right-side argument.
        /// @param other A constant reference to Nullable object the value represented by which is used as a right-side argument of the operator-=() applied to the value represented by the current object.
        /// @returns A reference to the self
        /// @tparam T1 The underlying type of a Nullable object the value represented by which is used as the right-side argument of operator-=()
        template<typename T1>
        typename std::enable_if<IsNullable<T1>::value, Nullable<T>>::type operator-=(const T1& other)
        {
            m_has_value = m_has_value && !other.IsNull();
            if (m_has_value) {
                m_value -= other.get_Value();
            }
            return *this;
        }

        /// Returns a hash code for the current object.
        int GetHashCode() const
        {
            return m_has_value ? System::GetHashCode<T>(m_value) : 0;
        }

        /// Converts the value represented by the current object to string.
        /// @returns A string representation of the value represented by the current object or an empty string if the value represented by the current object is null
        String ToString() ASPOSE_CONST
        {
            return m_has_value ? System::String::Format(u"{0}", m_value) : u"";
        }

        /// Returns the value represented by the current object or the specified value if the value represented by the current object is null.
        /// @param default_value The value returned by the method if the value represented by the current object is null
        /// @returns A copy of the value represented by the current object is it is not null, otherwise the spcified value is returned
        T GetValueOrDefault(T default_value)
        {
            return m_has_value ? m_value : default_value;
        }
    private:

        /// Indicates if the current object represents a null-value.
        bool m_has_value;

        /// The value represented by the current object.
        T m_value;
    };

    /// Determines if the specified Nullable object represents a value that is not equal to null.
    /// @param other A constant reference to an Nullable object to test
    /// @returns True if the specified object represents non-null value, false otherwise
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, bool>::type operator!=(std::nullptr_t, const T& other) { return !other.IsNull(); }
    
    /// Always returns false.
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, bool>::type operator>(std::nullptr_t, const T&) { return false; }
    
    /// Always returns false.
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, bool>::type operator<(std::nullptr_t, const T&) { return false; }
    
    /// Always returns false.
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, bool>::type operator>=(std::nullptr_t, const T&) { return false; }
    
    /// Always returns false.
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, bool>::type operator<=(std::nullptr_t, const T&) { return false; }

    /// Determines if the specified value is equal to the value represented by the specified Nullable object by applying operator==() to these values.
    /// @param some A constant reference to the value that is to be used as the first comparand
    /// @param other A constant reference to the Nullable object the represented value of which is to be used as the second comparand
    /// @returns True if the comparands are equal, otherwise - false
    /// @tparam T1 The type of the first comparand value
    /// @tparam T2 The underlying type of the Nullable object that represents the second comparand value
    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator==(const T1& some, const T2& other) { return other.IsNull() ? false : some == other.get_Value(); }

    /// Determines if the specified value is not equal to the value represented by the specified Nullable object by applying operator!=() to these values.
    /// @param some A constant reference to the value that is to be used as the first comparand
    /// @param other A constant reference to the Nullable object the represented value of which is to be used as the second comparand
    /// @returns True if the comparands are not equal, otherwise - false
    /// @tparam T1 The type of the first comparand value
    /// @tparam T2 The underlying type of the Nullable object that represents the second comparand value
    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator!=(const T1& some, const T2& other) { return other.IsNull() ? true : some != other.get_Value(); }

    /// Determines if the specified value is greater than the value represented by the specified Nullable object by applying operator>() to these values.
    /// @param some A constant reference to the value that is to be used as the first comparand
    /// @param other A constant reference to the Nullable object the represented value of which is to be used as the second comparand
    /// @returns True if the first comparand is greater than the second comparand, otherwise - false
    /// @tparam T1 The type of the first comparand value
    /// @tparam T2 The underlying type of the Nullable object that represents the second comparand value
    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator>(const T1& some, const T2& other) { return other.IsNull() ? false : some > other.get_Value(); }

    /// Determines if the specified value is less than the value represented by the specified Nullable object by applying operator<() to these values.
    /// @param some A constant reference to the value that is to be used as the first comparand
    /// @param other A constant reference to the Nullable object the represented value of which is to be used as the second comparand
    /// @returns True if the first comparand is less than the second comparand, otherwise - false
    /// @tparam T1 The type of the first comparand value
    /// @tparam T2 The underlying type of the Nullable object that represents the second comparand value
    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator<(const T1& some, const T2& other) { return other.IsNull() ? false : some < other.get_Value(); }

    /// Determines if the specified value is greater or equal to the value represented by the specified Nullable object by applying operator>=() to these values.
    /// @param some A constant reference to the value that is to be used as the first comparand
    /// @param other A constant reference to the Nullable object the represented value of which is to be used as the second comparand
    /// @returns True if the first comparand is greater or equal than the second comparand, otherwise - false
    /// @tparam T1 The type of the first comparand value
    /// @tparam T2 The underlying type of the Nullable object that represents the second comparand value
    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator>=(const T1& some, const T2& other) { return other.IsNull() ? false : some >= other.get_Value(); }

    /// Determines if the specified value is less or equal to the value represented by the specified Nullable object by applying operator<=() to these values.
    /// @param some A constant reference to the value that is to be used as the first comparand
    /// @param other A constant reference to the Nullable object the represented value of which is to be used as the second comparand
    /// @returns True if the first comparand is less or equal to the second comparand, otherwise - false
    /// @tparam T1 The type of the first comparand value
    /// @tparam T2 The underlying type of the Nullable object that represents the second comparand value
    template<typename T1, typename T2>
    typename std::enable_if<!IsNullable<T1>::value && IsNullable<T2>::value, bool>::type
        operator<=(const T1& some, const T2& other) { return other.IsNull() ? false : some <= other.get_Value(); }

    /// Always returns a default-constructed instance of the Nullable<T> class representing the null value.
    template<typename T>
    typename std::enable_if<!IsNullable<T>::value && std::is_class<T>::value, Nullable<T>>::type operator+(std::nullptr_t, const T&) { return Nullable<T>(); }
    
    /// Always returns a default-constructed instance of the Nullable<T> class representing the null value.
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, T>::type operator+(std::nullptr_t, const T&) { return T(); }
    
    /// Always returns a default-constructed instance of the Nullable<T> class representing the null value.
    template<typename T>
    typename std::enable_if<!IsNullable<T>::value && std::is_class<T>::value, Nullable<T>>::type operator+(const T&, std::nullptr_t) { return Nullable<T>(); }
    
    /// Always returns a default-constructed instance of the Nullable<T> class representing the null value.
    template<typename T>
    typename std::enable_if<IsNullable<T>::value, T>::type operator+(const T&, std::nullptr_t) { return T(); }

    /// Sums non-nullable and nullable values.
    /// @tparam T1 Left operand type.
    /// @tparam T2 Right operand type.
    /// @param some Left operand.
    /// @param other Right operand.
    /// @return Summing result.
    template<typename T1, typename T2, typename = typename std::enable_if<!IsNullable<T1>::value, int>::type, typename = typename std::enable_if<IsNullable<T2>::value, int>::type>
    auto operator + (const T1& some, const T2 &other) -> System::Nullable<decltype(some + other.get_Value())>
    {
        return other.IsNull() ? nullptr : Nullable<decltype(some + other.get_Value())>(some + other.get_Value());
    }

    /// Substracts non-nullable and nullable values.
    /// @tparam T1 Left operand type.
    /// @tparam T2 Right operand type.
    /// @param some Left operand.
    /// @param other Right operand.
    /// @return Substaction result.
    template<typename T1, typename T2, typename = typename std::enable_if<!IsNullable<T1>::value, int>::type, typename = typename std::enable_if<IsNullable<T2>::value, int>::type>
    auto operator - (const T1& some, const T2 &other) -> System::Nullable<decltype(some - other.get_Value())>
    {
        return other.IsNull() ? nullptr : Nullable<decltype(some - other.get_Value())>(some - other.get_Value());
    }


    /// IsBoxable<T> specialization for Nullable.
    template <typename T>
    struct IsBoxable<Nullable<T>> : std::true_type {};

}

#endif

