#pragma once

#include <tuple>

namespace System
{
    template <typename T>
    struct MethodArgumentTuple;

    template <typename R, typename C, typename... Args>
    struct MethodArgumentTuple<R(C::*)(Args...)>
    {
        using type = std::tuple<Args...>;
    };
}