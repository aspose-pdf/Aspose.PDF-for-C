/// @file system/test_tools/method_argument_tuple.h
#pragma once

#include <tuple>
#include <type_traits>

namespace System
{

/// Defines tuple to store method arguments.
/// @tparam T Method type.
template <typename T>
struct MethodArgumentTuple;

/// Defines tuple to store method arguments.
/// @tparam R Method return value.
/// @tparam C Type that declares method.
/// @tparam Args Arguments type.
template <typename R, typename C, typename... Args>
struct MethodArgumentTuple<R(C::*)(Args...)>
{
    /// Tuple to hold arguments of specified method.
    using type = std::tuple<typename std::remove_reference<Args>::type...>;
};

/// Defines tuple to store method arguments.
/// @tparam R Method return value.
/// @tparam Args Arguments type.
template <typename R, typename... Args>
struct MethodArgumentTuple<R(*)(Args...)>
{
    /// Tuple to hold arguments of specified method.
    using type = std::tuple<typename std::remove_reference<Args>::type...>;
};

} // namespace System
