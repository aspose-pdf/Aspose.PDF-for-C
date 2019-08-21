/// @file system/details/comparer_type.h
#ifndef _aspose_system_details_comparer_type_h
#define _aspose_system_details_comparer_type_h


#include "system/icomparable.h"
#include "system/shared_ptr.h"
#include <type_traits>


namespace System {
namespace Collections {
namespace Generic {
namespace Details {


/// Checks whether CompareTo method exists in specified type.
/// If so, inherits std::true_type, otherwise inherits std::false_type.
/// Can be used in std::enable_if
/// @tparam T Type to check for Equals method existance.
/// @tparam Sfinae Formal template argument for SFINAE to work.
template<typename T, typename Sfinae = void>
struct has_method_compareto : std::false_type {};
/// Specialization for existing CompareTo method.
template<typename T>
struct has_method_compareto<
    T
    , decltype((void)(std::declval<T&>().CompareTo(std::declval<T&>())))
> : std::true_type{};

/// Compares elements using 'less' semantics.
/// @tparam T Compared elements type.
template <typename T>
struct ComparerType
{
    /// Compares value types implementing IComparable interface.
    /// @tparam Q Type to compare.
    /// @param a LHS value.
    /// @param b RHS value.
    /// @return True if @p a is considered less than @p b, false otherwise.
    template <typename Q>
    typename std::enable_if<std::is_base_of<System::IComparable<Q>, Q>::value || has_method_compareto<Q>::value, bool>::type operator () (const Q &a, const Q &b)
    {
        return a.CompareTo(b) < 0;
    }
    /// Compares primitive value types and objects not implementing IComparable interface.
    /// @tparam Q Type to compare.
    /// @param a LHS value.
    /// @param b RHS value.
    /// @return True if @p a is considered less than @p b, false otherwise.
    template <typename Q>
    typename std::enable_if<!(std::is_base_of<IComparable<Q>, Q>::value || has_method_compareto<Q>::value) && !std::is_floating_point<Q>::value, bool>::type
    operator () (const Q &a, const Q &b)
    {
        return a < b;
    }
    /// Compares floating point types.
    /// @tparam Q Type to compare.
    /// @param a LHS value.
    /// @param b RHS value.
    /// @return True if @p a is considered less than @p b, false otherwise.
    template <typename Q>
    typename std::enable_if<std::is_floating_point<Q>::value, bool>::type
    operator () (const Q &a, const Q &b)
    {
        if (std::isnan(a) && !std::isnan(b))
            return true;
        return a < b;
    }
};

/// Compares elements using 'less' semantics.
/// @tparam T Compared elements type.
template <typename T>
struct ComparerType<SharedPtr<T>>
{
    /// Compares pointer types implementing IComparable interface.
    /// @tparam Q Type to compare.
    /// @param a LHS value.
    /// @param b RHS value.
    /// @return True if @p a is considered less than @p b, false otherwise.
    template <typename Q>
    typename std::enable_if<std::is_base_of<System::IComparable<System::SharedPtr<Q>>, Q>::value, bool>::type operator () (const System::SharedPtr<Q> &a, const System::SharedPtr<Q> &b)
    {
        return a->CompareTo(b) < 0;
    }
    /// Compares pointer types not implementing IComparable interface.
    /// @tparam Q Type to compare.
    /// @param a LHS value.
    /// @param b RHS value.
    /// @return True if @p a is considered less than @p b, false otherwise.
    template <typename Q>
    typename std::enable_if<!std::is_base_of<System::IComparable<System::SharedPtr<Q>>, Q>::value, bool>::type operator () (const System::SharedPtr<Q> &a, const System::SharedPtr<Q> &b)
    {
        return a < b;
    }
};

} //namespace Details
} //namespace Generic
} //namespace Collections
} //namespace System


#endif //_aspose_system_details_comparer_type_h
