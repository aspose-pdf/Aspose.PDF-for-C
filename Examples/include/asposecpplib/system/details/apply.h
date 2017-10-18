#pragma once

// C++14 std::apply implementation - http://en.cppreference.com/w/cpp/utility/apply
// Very simple implementation, without taking into account all possible types of callable

#include <utility>
#include <tuple>

namespace System { namespace Details
{

template<typename F, typename... Args>
decltype(auto) invoke_lambda(F&& f, Args&&... args)
{
    return std::forward<F>(f)(std::forward<Args>(args)...);
}

template <class F, class Tuple, std::size_t... I>
constexpr decltype(auto) apply_impl(F&& f, Tuple&& t, std::index_sequence<I...>)
{
    return invoke_lambda(std::forward<F>(f), std::get<I>(std::forward<Tuple>(t))...);
}

template <class F, class Tuple>
constexpr decltype(auto) apply(F&& f, Tuple&& t)
{
    return apply_impl(
        std::forward<F>(f), std::forward<Tuple>(t),
        std::make_index_sequence<std::tuple_size<std::decay_t<Tuple>>::value>{});
}

}}