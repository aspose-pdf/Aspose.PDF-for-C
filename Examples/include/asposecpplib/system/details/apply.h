/// @file system/details/apply.h
#pragma once

// C++14 std::apply implementation - http://en.cppreference.com/w/cpp/utility/apply
// Very simple implementation, without taking into account all possible types of callable

#include <utility>
#include <tuple>

namespace System { namespace Details
{

/// Invokes lambda with given argments.
/// @tparam F Lambda type.
/// @tparam Args Arguments type.
/// @param f Function to invoke.
/// @param args Arguments to pass to @p f.
/// @return @p f invocation result.
template<typename F, typename... Args>
decltype(auto) invoke_lambda(F&& f, Args&&... args)
{
    return std::forward<F>(f)(std::forward<Args>(args)...);
}

/// Invokes lambda with arguments provided as tuple.
/// @tparam F Lambda type.
/// @tparam Tuple Tuple type containing function arguments.
/// @tparam I Order of indexes to pass to @p f.
/// @param f Function to invoke.
/// @param t Tuple of @p f arguments.
/// @return @p f invocation result.
template <class F, class Tuple, std::size_t... I>
constexpr decltype(auto) apply_impl(F&& f, Tuple&& t, std::index_sequence<I...>)
{
    return invoke_lambda(std::forward<F>(f), std::get<I>(std::forward<Tuple>(t))...);
}

/// Invokes lambda with arguments provided as tuple.
/// @tparam F Lambda type.
/// @tparam Tuple Tuple type containing function arguments.
/// @param f Function to invoke.
/// @param t Tuple of @p f arguments.
/// @return @p f invocation result.
template <class F, class Tuple>
constexpr decltype(auto) apply(F&& f, Tuple&& t)
{
    return apply_impl(
        std::forward<F>(f), std::forward<Tuple>(t),
        std::make_index_sequence<std::tuple_size<std::decay_t<Tuple>>::value>{});
}

}}
