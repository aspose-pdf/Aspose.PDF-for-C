/// @file detail.h
#ifndef __detail_h__
#define __detail_h__

#include <type_traits>
#include <utility>

namespace System
{
namespace detail
{

/// SFINAE to check if static_cast works between two types.
/// @tparam From Source type.
/// @tparam To Destination type.
template <class From, class To, class = decltype(static_cast<To*>((From*)nullptr))>
std::true_type IsStaticCastable_Internal(int);
/// SFINAE to check if static_cast works between two types.
/// @tparam From Source type.
/// @tparam To Destination type.
template <class From, class To>
std::false_type IsStaticCastable_Internal(...);

/// Checks if static_cast works between two types.
/// If possible, typedefs std::true_type, otherwise typedefs std::false_type.
/// @tparam From Source type.
/// @tparam To Destination type.
template <class From, class To>
using is_static_castable = decltype(IsStaticCastable_Internal<From, To>(0));

/// Performs cheapest cast possible from static_cast and dynamic_cast.
/// @tparam From Source type.
/// @tparam To Destination type.
/// @tparam convertible Template implementation selection variable.
template <typename From, typename To, bool convertible = is_static_castable<From, To>::value>
struct cast_statically_or_dynamically
{
    /// Performs actual pointer casting using dynamic_cast.
    /// @param pointer Pointer to cast.
    /// @return Cast pointer.
    static To* cast(From *pointer) { return dynamic_cast<To*>(pointer); }
};

/// Performs cheapest cast possible from static_cast and dynamic_cast.
/// Specialization for @p convertible = true; 
/// @tparam From Source type.
/// @tparam To Destination type.
template <typename From, typename To>
struct cast_statically_or_dynamically<From, To, true>
{
    /// Performs actual pointer casting using static_cast.
    /// @param pointer Pointer to cast.
    /// @return Cast pointer.
    static To* cast(From *pointer) { return static_cast<To*>(pointer); }
};


/// Helper class to check if specific type is a specialization of a given template.
/// @tparam TypeToBe Template to check against.
/// @tparam T Formal arguments of template to check against.
template <template <class ...T> class TypeToBe>
struct Is_A_Internal
{
    /// Detects that pointee is not a template specialization.
    static std::false_type Invoke(...);
    /// Detects that pointee is a template specialization.
    /// @tparam P Template actual arguments.
    template <typename ...P>
    static std::true_type Invoke(const TypeToBe<P...>*);

    /// If @p Tested is a specialization of @p TypeToBe, typedefs std::true_type, otherwise typedefs std::false_type.
    /// @tparam Tested Type to check for being @p TypeToBe specialization.
    template <typename Tested>
    using type = decltype(Invoke((Tested*)nullptr));
};

/// Tests if specific type is a specialization of specific template.
/// If it is, inherits std::true_type, otherwise inherits std::false_type.
/// @tparam Tested Type to check.
/// @tparam TypeToBe Template to check against.
/// @tparam T @p TypeToBe formal template arguments.
template <typename Tested, template <class ...T> class TypeToBe>
struct is_a : public Is_A_Internal<TypeToBe>::template type<Tested> {};
/// Specialization for lvalue references.
template <typename Tested, template <class ...T> class TypeToBe>
struct is_a<Tested&, TypeToBe> : public Is_A_Internal<TypeToBe>::template type<Tested> {};
/// Specialization for rvalue references.
template <typename Tested, template <class ...T> class TypeToBe>
struct is_a<Tested&&, TypeToBe> : public Is_A_Internal<TypeToBe>::template type<Tested> {};


/// Checks whether operator < exists in specified type.
/// If so, inherits std::true_type, otherwise inherits std::false_type.
/// Can be used in std::enable_if
/// @tparam T Type to check for operator < existance.
/// @tparam Sfinae Formal template argument for SFINAE to work.
template<typename T, typename Sfinae = void>
struct has_operator_less : std::false_type {};
/// Specialization for existing operator < .
template<typename T>
struct has_operator_less<
    T
    , decltype((void)(std::declval<T&>() < std::declval<T&>()))
> : std::true_type{};


/// Checks whether operator == exists in specified type.
/// If so, inherits std::true_type, otherwise inherits std::false_type.
/// Can be used in std::enable_if
/// @tparam T Type to check for operator == existance.
/// @tparam Sfinae Formal template argument for SFINAE to work.
template<typename T, typename Sfinae = void>
struct has_operator_equal : std::false_type {};
/// Specialization for existing operator == .
template<typename T>
struct has_operator_equal<
    T
    , decltype((void)(std::declval<T&>() == std::declval<T&>()))
> : std::true_type{};


/// Checks whether Equals method exists in specified type.
/// If so, inherits std::true_type, otherwise inherits std::false_type.
/// Can be used in std::enable_if
/// @tparam T Type to check for Equals method existance.
/// @tparam Sfinae Formal template argument for SFINAE to work.
template<typename T, typename Sfinae = void>
struct has_method_equals : std::false_type {};
/// Specialization for existing Equals method.
template<typename T>
struct has_method_equals<
    T
    , decltype((void)(std::declval<T&>().Equals(std::declval<T&>())))
> : std::true_type{};


/// Checks whether specific type has Equals method but not operator ==.
/// If so, value member is true, otherwise it is false.
/// @tparam T Type to check.
template<typename T>
using has_only_method_equals = std::integral_constant<bool, has_method_equals<T>::value && !has_operator_equal<T>::value>;


/// Checks whether GetHashCode method exists in specified type.
/// If so, inherits std::true_type, otherwise inherits std::false_type.
/// Can be used in std::enable_if
/// @tparam T Type to check for GetHashCode method existance.
/// @tparam Sfinae Formal template argument for SFINAE to work.
template<typename T, typename Sfinae = void>
struct has_method_gethashcode : std::false_type {};
/// Specialization for existing GetHashCode method.
template<typename T>
struct has_method_gethashcode<
    T
    , decltype((void)(std::declval<T&>().GetHashCode()))
> : std::true_type {};


/// Checks whether GetHashCode method exists in type returned by specified type's operator ->.
/// If so, inherits std::true_type, otherwise inherits std::false_type.
/// Can be used in std::enable_if
/// @tparam T Type to check for GetHashCode method existance.
/// @tparam Sfinae Formal template argument for SFINAE to work.
template<typename T, typename Sfinae = void>
struct has_ref_method_gethashcode : std::false_type {};
/// Specialization for existing GetHashCode method.
template<typename T>
struct has_ref_method_gethashcode<
    T
    , decltype((void)(std::declval<T&>()->GetHashCode()))
> : std::true_type {};


/// Checks whether CompareTo method exists specified type.
/// If so, inherits std::true_type, otherwise inherits std::false_type.
/// Can be used in std::enable_if
/// @tparam T Type to check for CompareTo method existance.
/// @tparam Sfinae Formal template argument for SFINAE to work.
template<typename T, typename Sfinae = void>
struct has_method_compareto : std::false_type {};
/// Specialization for existing CompareTo method.
template<typename T>
struct has_method_compareto<
    T
    , decltype((void)(std::declval<T&>()->CompareTo(*static_cast<T*>(nullptr))))
> : std::true_type {};

} //namespace detail
} //namespace System

#endif
