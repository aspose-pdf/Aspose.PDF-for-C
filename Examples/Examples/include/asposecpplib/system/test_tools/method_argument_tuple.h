/// @file system/test_tools/method_argument_tuple.h
#pragma once

#include <tuple>

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
    using type = std::tuple<Args...>;
};

}
