#pragma once

#include <type_traits>

namespace System { namespace Details {

// lambda - [](){}
template<typename T>
using is_lambda_void_void = std::integral_constant<bool, std::is_void<std::result_of_t<T()>>::value>;

// lambda - [](bool&){}
template<typename T>
using is_lambda_void_boolref = std::integral_constant<bool, std::is_void<std::result_of_t<T(bool&)>>::value>;

// lambda - [](bool&) -> type {}
template<typename T, typename RV = std::result_of_t<T(bool&)>>
using is_lambda_nonovoid_boolref = std::integral_constant<bool, !std::is_void<RV>::value>;

// lambda - [](const R&) {}
template<typename T, typename R>
using is_lambda_void_arg = std::integral_constant<bool, std::is_void<std::result_of_t<T(const R&)>>::value>;

// lambda - [](bool&, const R&) {}
template<typename T, typename R>
using is_lambda_void_bool_arg = std::integral_constant<bool, std::is_void<std::result_of_t<T(bool&, const R&)>>::value>;

// lambda - [](bool&, const R&) -> type {}
template<typename T, typename R, typename RV = std::result_of_t<T(bool&, const R&)>>
using is_lambda_nonvoid_bool_arg = std::integral_constant<bool, !std::is_void<RV>::value>;
}}