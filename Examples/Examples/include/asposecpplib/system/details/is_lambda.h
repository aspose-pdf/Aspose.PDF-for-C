/// @file system/details/is_lambda.h
#pragma once

#include <type_traits>

namespace System { namespace Details {

/// Checks if type is lambda and follows [](){} semantics.
template<typename T>
using is_lambda_void_void = std::integral_constant<bool, std::is_void<std::result_of_t<T()>>::value>;

/// Checks if type is lambda and follows [](bool&){} semantics.
template<typename T>
using is_lambda_void_boolref = std::integral_constant<bool, std::is_void<std::result_of_t<T(bool&)>>::value>;

/// Checks if type is lambda and follows [](bool&) -> type {} semantics.
template<typename T, typename RV = std::result_of_t<T(bool&)>>
using is_lambda_nonovoid_boolref = std::integral_constant<bool, !std::is_void<RV>::value>;

/// Checks if type is lambda and follows [](const R&) {} semantics.
template<typename T, typename R>
using is_lambda_void_arg = std::integral_constant<bool, std::is_void<std::result_of_t<T(const R&)>>::value>;

/// Checks if type is lambda and follows [](bool&, const R&) {} semantics.
template<typename T, typename R>
using is_lambda_void_bool_arg = std::integral_constant<bool, std::is_void<std::result_of_t<T(bool&, const R&)>>::value>;

/// Checks if type is lambda and follows [](bool&, const R&) -> type {} semantics.
template<typename T, typename R, typename RV = std::result_of_t<T(bool&, const R&)>>
using is_lambda_nonvoid_bool_arg = std::integral_constant<bool, !std::is_void<RV>::value>;

}}
