/// @file system/collections/iequality_comparer.h
#ifndef _iequality_comparer_h_
#define _iequality_comparer_h_

#include "system/object.h"
#include <system/details/equality_helper.h>

namespace System { namespace Collections { namespace Generic {

/// Interface providing means to compare two objects for equality.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T Type being compared.
template<typename T>
class ABSTRACT IEqualityComparer: virtual public Object
{
public:
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::IEqualityComparer<T>, System::BaseTypesInfo<System::Object>);
public:
    /// Checks if two objects are equal.
    /// @param x LHS object.
    /// @param y RHS object.
    /// @return True if objects are considered equal, false otherwise.
    virtual bool Equals(T x, T y) ASPOSE_CONST = 0;
    /// Gets hash code for some object.
    /// @param obj Object to calculate hash code for.
    /// @return Hash code calculated for @p obj.
    virtual int GetHashCode(T obj) const = 0;
};

/// Adapter making it possible using IEqualityComparer with STL-styled collections and algorithms.
/// Uses IEqualityComparer, if set. If not set, uses operator ==, Object::Equals or T::Equals, whichever is available.
/// @tparam T Type being compared.
template<class T>
struct EqualityComparerAdapter
{
    /// Creates adapter not using any comparator.
    EqualityComparerAdapter()
    {}
    /// Creates adapter with given comparator.
    /// @param comparator Comparator to use.
    EqualityComparerAdapter(const SharedPtr<IEqualityComparer<T>>& comparator)
        : m_comparator(comparator)
    {}

    /// Sets comparator.
    /// @param comparator Comparator to use.
    void set_EqualityComparator(const SharedPtr<IEqualityComparer<T>>& comparator)
    {
        m_comparator = comparator;
    }

    /// Compares two objects.
    /// @param x LHS operand.
    /// @param y RHS operand.
    /// @return True if operands are considered equal, false otherwise.
    bool operator()(const T &x, const T &y) const
    {
        if( m_comparator )
            return m_comparator->Equals(x, y);

        return System::Details::AreEqual(x, y);
    }

private:
    /// Comparator to use.
    SharedPtr<IEqualityComparer<T>> m_comparator;
};

/// Hash function selector for Dictionary class. This implementation uses STL hashing given no alternative is provided.
/// @tparam T Element type.
/// @tparam Enable Dummy template argument for specialization deduction.
template <typename T, class Enable = void>
struct DictionaryHashSelector
{
    /// Hasher type to use.
    using type = std::hash<T>;
};

/// Hash function selector for Dictionary class. This implementation uses GetHashCode function and applies to types providing such a function.
/// @tparam T Element type.
template <typename T>
struct DictionaryHashSelector<T, typename std::enable_if<System::detail::has_method_gethashcode<T>::value>::type>
{
    /// Hasher type to use.
    using type = struct
    {
        /// Argument type.
        using argument_type = const T&;
        /// Result type.
        using result_type = std::size_t;
        /// Calculates hash value.
        /// @param obj Object to calculate hash value for.
        /// @return Calculated hash value.
        std::size_t operator ()(argument_type obj) const
        {
            return static_cast<std::size_t>(obj.GetHashCode());
        }
    };
};

/// Hash function selector for Dictionary class. This implementation uses GetHashCode function and applies to pointers to types providing such a function.
/// @tparam T Element type.
template <typename T>
struct DictionaryHashSelector<T, typename std::enable_if<System::detail::has_ref_method_gethashcode<T>::value && !System::detail::has_method_gethashcode<T>::value>::type>
{
    /// Hasher type to use.
    using type = struct
    {
        /// Argument type.
        using argument_type = const T&;
        /// Result type.
        using result_type = std::size_t;
        /// Calculates hash value.
        /// @param obj Object to calculate hash value for.
        /// @return Calculated hash value.
        template<typename K>
        std::size_t operator ()(const System::SharedPtr<K>& obj) const
        {
            if (obj)
            {
                return obj->GetHashCode();
            }
            return 0;
        }
    };
};


/// Hash function selector for Dictionary class. This implementation works for enums as STL doesn't.
/// @tparam T Element type.
template <typename T>
struct DictionaryHashSelector<T, typename std::enable_if<std::is_enum<T>::value>::type>
{
    /// Hasher type to use.
    using type = struct
    {
        /// Argument type.
        using argument_type = const T&;
        /// Result type.
        using result_type = std::size_t;
        /// Calculates hash value.
        /// @param enum_ Enum value.
        /// @return Calculated hash value.
        std::size_t operator ()(argument_type enum_) const
        {
            return static_cast<std::size_t>(enum_);
        }
    };
};

/// Adapter to use IEqualityComparer for hashing.
/// Uses comparator object, if set; otherwise, uses available hash method selected using DictionaryHashSelector struct.
/// @tparam Hashed type.
template<typename T>
struct EqualityComparerHashAdapter
{
    /// Creates adapter with no comparator to use.
    EqualityComparerHashAdapter()
    {}
    /// Creates adapter with given comparator to use.
    /// @param comparator Comparator to use.
    EqualityComparerHashAdapter(const SharedPtr<IEqualityComparer<T>>& comparator)
        : m_comparator(comparator)
    {}
    /// Sets comparator to use.
    /// @param comparator Comparator to use.
    void set_EqualityComparator(const SharedPtr<IEqualityComparer<T>>& comparator)
    {
        m_comparator = comparator;
    }
    /// Calculates hash value.
    /// @param x Hashed object.
    /// @return Calculated hash value.
    std::size_t operator ()(const T &x) const
    {
        if (m_comparator)
            return static_cast<std::size_t>(m_comparator->GetHashCode(x));

        typename DictionaryHashSelector<T>::type hash_selector;

        return hash_selector(x);
    }

private:
    /// Comparator to use.
    SharedPtr<IEqualityComparer<T>> m_comparator;
};

}}}

#endif // _IEnumerator_h_
