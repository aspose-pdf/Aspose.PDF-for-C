/// @file system/primitive_types.h
/// Contains the declaration of some functions that perform basic operations with primitive types.
#ifndef _aspose_system_primitive_types_h_
#define _aspose_system_primitive_types_h_

#include <system/boolean.h>
#include <system/byte.h>
#include <system/double.h>
#include <system/int16.h>
#include <system/int32.h>
#include <system/int64.h>
#include <system/sbyte.h>
#include <system/single.h>
#include <system/uint16.h>
#include <system/uint32.h>
#include <system/uint64.h>

#include <system/exceptions.h>
#include <system/get_hash_code.h>//do not remove. porter includes primitive_types.h on using System::GetHashCode(...)
#include <limits>
#include <cmath>

namespace System
{

/// Determines the equality of two values applying operator==() to them.
/// @param a The first comparand
/// @param b The second comparand
/// @returns The boolean value returned by operator==() applied to @p a and @p b
/// @tparam TA The type of the first comparand
/// @tparam TB The type of the second comparand
template <typename TA, typename TB>
inline bool Equals(const TA& a, const TB& b)
{
    return a == b;
}

/// Specialization for single-precision floating point values.
/// Although two floating point NaNs are defined by IEC 60559:1989 to always compare as unequal, the contract for System.Object.Equals,
/// requires that overrides must satisfy the requirements for an equivalence operator. Therefore, System.Double.Equals and System.Single.Equals
/// return True when comparing two NaNs, while the equality operator returns False in that case, as required by the standard.
/// @param a The first comparand
/// @param b The second comparand
/// @returns True if both values are NaN or are equal, otherwise - false
template<>
inline bool Equals<float, float>(const float& a, const float& b)
{
    return (std::isnan(a) && std::isnan(b)) ? true : a == b;
}

/// Specialization for double-precision floating point values.
/// @param a The first comparand
/// @param b The second comparand
/// @returns True if both values are NaN or are equal, otherwise - false
template<>
inline bool Equals<double, double>(const double& a, const double& b)
{
    return (std::isnan(a) && std::isnan(b)) ? true : a == b;
}

/// Compares two values.
/// @param a The first comparand
/// @param b The second comparand
/// @returns -1 if @p a compares less than @p b; 0 if the values are equal; 1 if @p a compares greater than @p b
/// @tparam TA The type of the first comparand
/// @tparam TB The type of the second comparand
template <typename TA, typename TB>
std::enable_if_t<!std::is_floating_point<TA>::value && !std::is_floating_point<TB>::value, int>
Compare(const TA& a, const TB& b)
{
    return (a < b) ? -1 : ((b < a) ? 1 : 0);
}

/// Compares two floating point values.
/// @param a The first comparand
/// @param b The second comparand
/// @returns -1 if @p a compares less than @p b; 0 if the values are equal; 1 if @p a compares greater than @p b
/// @tparam TA The type of the first comparand
/// @tparam TB The type of the second comparand
template <typename TA, typename TB>
std::enable_if_t<std::is_floating_point<TA>::value && std::is_floating_point<TB>::value, int>
Compare(const TA& a, const TB& b)
{
    if (std::isnan(a))
    {
        if (std::isnan(b))
            return 0;
        return -1;
    }
    if (std::isnan(b))
        return 1;
    return (a < b) ? -1 : ((b < a) ? 1 : 0);
}

/// Determines if the specified value is Not-A-Number value.
/// @param value The value to check
/// @returns True if @p value is a NaN value, otherwise - false
/// @tparam T The type of the value checked by the function
template <typename T>
inline bool IsNaN(const T& value)
{
    return std::isnan(value);
}

/// Determines if the specified value represents infinity.
/// @param value The value to check
/// @returns True if @p value represents infinity, otherwise - false
/// @tparam T The type of the value checked by the function
template <typename T>
inline bool IsInfinity(const T& value)
{
    return std::isinf(value);
}

/// Determines if the specified value represents positive infinity.
/// @param value The value to check
/// @returns True if @p value represents positive infinity, otherwise - false
/// @tparam T The type of the value checked by the function
template <typename T>
inline bool IsPositiveInfinity(const T& value)
{
    return (std::isinf(value) && value > 0);
}

/// Determines if the specified value represents negative infinity.
/// @param value The value to check
/// @returns True if @p value represents negative infinity, otherwise - false
/// @tparam T The type of the value checked by the function
template <typename T>
inline bool IsNegativeInfinity(const T& value)
{
    return (std::isinf(value) && value < 0);
}

/// Determines if the specified value falls into the range of values of type @p TTo and if it does casts it to the type @p TTo.
/// @param value The value to cast
/// @returns The value of type @p TTo equivalent to @p value
/// @throws OverflowException If the specified value does not fall into the range of values represented by the @p TTo type
/// @tparam TTo The type to which the specified value is to be cast
/// @tparam TFrom The type of the specified value
template<typename TTo, typename TFrom>
TTo CheckedCast(TFrom value)
{
    if (value < (std::numeric_limits<TTo>::min)() || value > (std::numeric_limits<TTo>::max)())
        throw System::OverflowException();
    return (TTo)value;
}

} // namespace System

#endif // _aspose_system_primitive_types_h_
