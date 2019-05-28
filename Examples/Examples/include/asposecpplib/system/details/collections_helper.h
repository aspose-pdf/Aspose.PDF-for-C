/// @file system/details/collections_helper.h
#pragma once
#include <cstddef>
#include <cstdint>
#include <type_traits>

namespace System {
namespace Collections {
namespace Generic {
namespace Details {

// check index
/// Checks if index is out of container bounds, excluding container size.
/// @tparam Container Container type.
/// @param idx Index.
/// @param container Container to check index against.
/// @return True if index is out of container bounds, false otherwise.
template<typename Container>
bool IsOutOfBounds(int idx, const Container &container)
{
    // casting to unsigned size type
    return static_cast<std::size_t>(idx) >= container.size();
}
/// Checks if index is out of container bounds, excluding container size.
/// @tparam Container Container type.
/// @param idx Index.
/// @param container Container to check index against.
/// @return True if index is out of container bounds, false otherwise.
template<typename Container>
bool IsOutOfBounds(std::int64_t idx, const Container &container)
{
    return static_cast<std::uint64_t>(idx) >= static_cast<std::uint64_t>(container.size());
}

// check length
/// Checks if index is out of container bounds, including container size.
/// @tparam Container Container type.
/// @param count Index.
/// @param container Container to check index against.
/// @return True if index is out of container bounds, false otherwise.
template<typename Container>
bool IsOutOfSize(int count, const Container &container)
{
    // casting to unsigned size type
    return static_cast<std::size_t>(count) > container.size();
}
/// Checks if index is out of container bounds, including container size.
/// @tparam Container Container type.
/// @param count Index.
/// @param container Container to check index against.
/// @return True if index is out of container bounds, false otherwise.
template<typename Container>
bool IsOutOfSize(std::int64_t count, const Container &container)
{
    return static_cast<std::uint64_t>(count) > static_cast<std::uint64_t>(container.size());
}

/// Helper function to determine whether specific class has operator ==.
/// @tparam T Type to check.
/// @tparam Dummy Dummy argument for SFINAE magic.
/// @return Value of std::true_type if operator == is present and false otherwise.
template <class T, typename Dummy = decltype(std::declval<T>() == std::declval<T>())> std::true_type HasOperatorEqualsHelper(T*, T*);
/// Helper function to determine whether specific class has operator ==.
/// @return Value of std::true_type if operator == is present and false otherwise.
std::false_type HasOperatorEqualsHelper(void*, void*);
/// Dummy typedef to check for operator == existance.
/// @tparam T Type to check.
template <class T> using has_operator_equals = decltype(HasOperatorEqualsHelper(std::declval<T*>(), std::declval<T*>()));
/// Checks if type provides operator ==.
/// @tparam T Type to check.
template <class T>
struct IsEqualExist
{
    /// True if operator == is provided, false otherwise.
    static constexpr bool value = has_operator_equals<T>::value;
};

} //namespace Details
} //namespace Generic
} //namespace Collections
} //namespace System
