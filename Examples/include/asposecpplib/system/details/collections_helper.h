#pragma once
#include <cstddef>
#include <cstdint>
#include <type_traits>

namespace System {
namespace Collections {
namespace Generic {
namespace Details {

/// check index

template<typename Container>
bool IsOutOfBounds(int idx, const Container &container)
{
    // casting to unsigned size type
    return static_cast<std::size_t>(idx) >= container.size();
}

template<typename Container>
bool IsOutOfBounds(std::int64_t idx, const Container &container)
{
    return static_cast<std::uint64_t>(idx) >= static_cast<std::uint64_t>(container.size());
}

/// check length

template<typename Container>
bool IsOutOfSize(int count, const Container &container)
{
    // casting to unsigned size type
    return static_cast<std::size_t>(count) > container.size();
}

template<typename Container>
bool IsOutOfSize(std::int64_t count, const Container &container)
{
    return static_cast<std::uint64_t>(count) > static_cast<std::uint64_t>(container.size());
}

template <class T, typename Dummy = decltype(std::declval<T>() == std::declval<T>())> std::true_type HasOperatorEqualsHelper(T*, T*);
std::false_type HasOperatorEqualsHelper(void*, void*);
template <class T> using has_operator_equals = decltype(HasOperatorEqualsHelper(std::declval<T*>(), std::declval<T*>()));
template <class T>
struct IsEqualExist
{
    static constexpr bool value = has_operator_equals<T>::value;
};

} //namespace Details
} //namespace Generic
} //namespace Collections
} //namespace System
