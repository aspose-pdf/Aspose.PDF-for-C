#ifndef _aspose_system_primitive_types_h_
#define _aspose_system_primitive_types_h_

#include <system/exceptions.h>
#include <system/get_hash_code.h>//do not remove. porter includes primitive_types.h on using System::GetHashCode(...)
#include <limits>
#include <cmath>

namespace System
{
    template <typename TA, typename TB>
    inline bool Equals(const TA& a, const TB& b)
    {
        return a == b;
    }

    // Although two floating point NaNs are defined by IEC 60559:1989 to always compare as unequal, the contract for System.Object.Equals,
    // requires that overrides must satisfy the requirements for an equivalence operator. Therefore, System.Double.Equals and System.Single.Equals
    // return True when comparing two NaNs, while the equality operator returns False in that case, as required by the standard.
    template<>
    inline bool Equals<float, float>(const float& a, const float& b)
    {
        return (std::isnan(a) && std::isnan(b)) ? true : a == b;
    }

    template<>
    inline bool Equals<double, double>(const double& a, const double& b)
    {
        return (std::isnan(a) && std::isnan(b)) ? true : a == b;
    }

    template <typename TA, typename TB>
    inline int Compare(const TA& a, const TB& b)
    {
        return (a < b) ? -1 : ((b < a) ? 1 : 0);
    }

    template <typename T>
    inline bool IsNaN(const T& value)
    {
        return std::isnan(value);
    }

    template <typename T>
    inline bool IsInfinity(const T& value)
    {
        return std::isinf(value);
    }

    template <typename T>
    inline bool IsPositiveInfinity(const T& value)
    {
        return (std::isinf(value) && value > 0);
    }

    template <typename T>
    inline bool IsNegativeInfinity(const T& value)
    {
        return (std::isinf(value) && value < 0);
    }

    template<typename TTo, typename TFrom>
    TTo CheckedCast(TFrom value)
    {
        if (value < std::numeric_limits<TTo>::min() || value > std::numeric_limits<TTo>::max())
            throw System::OverflowException();
        return (TTo)value;
    }

} // namespace System

#endif // _aspose_system_primitive_types_h_
