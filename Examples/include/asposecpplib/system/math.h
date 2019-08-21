/// @file system/math.h
/// Contains the declaration of System::Math class.
#ifndef _aspose_system_math_h_
#define _aspose_system_math_h_

#include <system/primitive_types.h>
#include <system/decimal.h>

#include <cmath>
#include <type_traits>

#include <fwd.h>

namespace System
{
    /// Contains math functions.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    struct Math
    {
        /// The number Pi constant.
        static const double ASPOSECPP_SHARED_API PI; // 3.1415926535897931
        /// Natural logarithm's base.
        static const double ASPOSECPP_SHARED_API E;  // 2.7182818284590451
        
        /// Calculates the arccosine of the specifed value.
        /// @param d The value to calculate arccosine of
        /// @returns Arccosine of @p d
        static ASPOSECPP_SHARED_API double Acos(double d);
        /// Calculates the arcsine of the specifed value.
        /// @param d The value to calculate arcsine of
        /// @returns Arcsine of @p d
        static ASPOSECPP_SHARED_API double Asin(double d);
        /// Calculates the arctangen of the specifed value.
        /// @param d The value to calculate arctangen of
        /// @returns Arctangen of @p d
        static ASPOSECPP_SHARED_API double Atan(double d);
        /// Calculates the arctangen of the ration of the specifed values.
        /// @param y The point's y coordinate
        /// @param x The point's x coordinate
        /// @returns Arctangen of y/x
        static ASPOSECPP_SHARED_API double Atan2(double y, double x);
        /// Returns the smallest integral value that is greater than or equal to the specified value.
        /// @param d A decimal number
        /// @returns The smallest integral value that is greater than or equal to @p d
        static ASPOSECPP_SHARED_API Decimal Ceiling(Decimal d);
        /// Returns the smallest integral value that is greater than or equal to the specified value.
        /// @param a A double-precision floating point number
        /// @returns The smallest integral value that is greater than or equal to @p d
        static ASPOSECPP_SHARED_API double Ceiling(double a);
        /// Calculates the cosine of the specified value.
        /// @param d The value to calculate the cosine of
        /// @returns The cosine of @p d
        static ASPOSECPP_SHARED_API double Cos(double d);
        /// Calculates the hyperbolic cosine of the specified value.
        /// @param value The value to calculate the hyperbolic cosine of
        /// @returns The hyperbolic cosine of @p value
        static ASPOSECPP_SHARED_API double Cosh(double value);
        /// Returns the largest integral value that is less than or equal to the specified value.
        /// @param d A decimal number
        /// @returns The largest integral value that is less than or equal to @p d
        static ASPOSECPP_SHARED_API Decimal Floor(Decimal d);
        /// Returns the largest integral value that is less than or equal to the specified value.
        /// @param d A double-precision floatig point number
        /// @returns The largest integral value that is less than or equal to @p d
        static ASPOSECPP_SHARED_API double Floor(double d);
        /// Calculates the sine of the specified value.
        /// @param a The value to calculate the sine of
        /// @returns The sine of @p a
        static ASPOSECPP_SHARED_API double Sin(double a);
        /// Calculates the tangen of the specified value.
        /// @param a The value to calculate the tangen of
        /// @returns The tangen of @p a
        static ASPOSECPP_SHARED_API double Tan(double a);
        /// Calculates the hyperbolic sine of the specified value.
        /// @param value The value to calculate the hyperbolic sine of
        /// @returns The hyperbolic sine of @p value
        static ASPOSECPP_SHARED_API double Sinh(double value);
        /// Calculates the hyperbolic tangen of the specified value.
        /// @param value The value to calculate the hyperbolic tangen of
        /// @returns The hyperbolic tangen of @p value
        static ASPOSECPP_SHARED_API double Tanh(double value);
        /// Rounds the specified value to the nearest integral value.
        /// @param a The value to round
        /// @returns @p a rounded to the nearest integral value
        static ASPOSECPP_SHARED_API double Round(double a);
        /// Rounds the specified value to the nearest value with the specified number of fractional digits.
        /// @param value The value to round
        /// @param digits The number of fractional digits in the rounded value
        /// @returns The number with the specified number of digits nearest to @p value
        static ASPOSECPP_SHARED_API double Round(double value, int digits);
        /// Rounds the specified value to the nearest integral number.
        /// A parameter specifies the function's behavior if the specified value is equally close to two nearest numbers.
        /// @param value The value to round
        /// @param mode Specifies how to perform the rounding if @p value is equally close to two nearest numbers.
        /// @returns @p value rounded to the nearest integral value
        static ASPOSECPP_SHARED_API double Round(double value, MidpointRounding mode);
        /// Rounds the specified value to the nearest value with the specified number of fractional digits.
        /// A parameter specifies the function's behavior if the specified value is equally close to two nearest numbers.
        /// @param value The value to round
        /// @param digits The number of fractional digits in the rounded value
        /// @param mode Specifies how to perform the rounding if @p value is equally close to two nearest numbers.
        /// @returns The number with the specified number of digits nearest to @p value
        static ASPOSECPP_SHARED_API double Round(double value, int digits, MidpointRounding mode);
        /// Rounds the specified value to the nearest integral value.
        /// @param d The value to round
        /// @returns @p d rounded to the nearest integral value
        static ASPOSECPP_SHARED_API Decimal Round(Decimal d);
        /// Rounds the specified value to the nearest value with the specified number of fractional digits.
        /// @param value The value to round
        /// @param digits The number of fractional digits in the rounded value
        /// @returns The number with the specified number of digits nearest to @p value
        static ASPOSECPP_SHARED_API Decimal Round(Decimal value, int digits);
        /// Rounds the specified value to the nearest integral number.
        /// A parameter specifies the function's behavior if the specified value is equally close to two nearest numbers.
        /// @param d The value to round
        /// @param mode Specifies how to perform the rounding if @p value is equally close to two nearest numbers.
        /// @returns @p d rounded to the nearest integral value
        static ASPOSECPP_SHARED_API Decimal Round(Decimal d, MidpointRounding mode);
        /// Rounds the specified value to the nearest value with the specified number of fractional digits.
        /// A parameter specifies the function's behavior if the specified value is equally close to two nearest numbers.
        /// @param d The value to round
        /// @param digits The number of fractional digits in the rounded value
        /// @param mode Specifies how to perform the rounding if @p value is equally close to two nearest numbers.
        /// @returns The number with the specified number of digits nearest to @p value
        static ASPOSECPP_SHARED_API Decimal Round(Decimal d, int digits, MidpointRounding mode);
        /// Returns the Decimal object representing a value that has integral part equal to that 
        /// of the value represented by the specified Decimal object of the with all fractional digits discarded.
        /// @param d A decimal number
        /// @returns A Decimal object reprsenting a decimal value whose integral part is equal to that of the specified 
        /// value and fractional digits are all 0.
        static ASPOSECPP_SHARED_API Decimal Truncate(Decimal d);
        /// Returns a double-precision floating point value that has integral part equal to that 
        /// of the specified vaue with all fractional digits discarded.
        /// @param d A decimal number
        /// @returns A double-precision floating point value whose integral part is equal to that of the specified 
        /// value and fractional digits are all 0.
        static ASPOSECPP_SHARED_API double Truncate(double d);
        /// Returns the square root of the specified value.
        /// @param d A double-precision floating point value
        /// @returns The square root of @p d
        static ASPOSECPP_SHARED_API double Sqrt(double d);
        /// Returns the natural logarithm of the specified value.
        /// @param d A double-precision floating point value
        /// @returns The natural logarithm of @p d
        static ASPOSECPP_SHARED_API double Log(double d);
        /// Returns the base-10 logarithm of the specified value.
        /// @param d A double-precision floating point value
        /// @returns The base-10 logarithm of @p d
        static ASPOSECPP_SHARED_API double Log10(double d);
        /// Returns e constant raised to the specified power.
        /// @param d The power to raise e constant to
        /// @returns e constant raised to the power of @p d
        static ASPOSECPP_SHARED_API double Exp(double d);
        /// Returns the specified value raised to the specified power.
        /// @param x The value to raise to the specified power
        /// @param y The power to raise the specified value to
        /// @returns @p x raised to the power of @p y
        static ASPOSECPP_SHARED_API double Pow(double x, double y);
        /// Returns the remainder resulting from the division of a specified number by another specified number.
        /// @param x Dividend
        /// @param y Divisor
        /// @returns The remainder resulting from the division of a specified number by another specified number.
        static ASPOSECPP_SHARED_API double IEEERemainder(double x, double y);
        /// Returns the absolute value of the specified value
        /// @param value A value of arithmetic type
        /// @returns The absolute value of @p value
        /// @tparam T The type of the value accepted by the method as an argument
        template<class T>
        static T Abs(T value)
        {
            static_assert(std::is_arithmetic<T>::value, "Math::Abs template argument must be an arithmetic type.");

            return std::abs(value);
        }
        /// Returns the absolute value of a value represented by the specified Decimal object
        /// @param d A Decimal object
        /// @returns The Decimal object representing the absolute value of the value represented by @p value
        static inline Decimal Abs(const Decimal &d)
        {
            return d < 0 ? -d : d;
        }

        /// Returns the logarithm of the specified value in the specified base.
        /// @param a A double-precision floating point value
        /// @param newBase The base of the logarithm
        /// @returns The logarithm of @p a in the @p newBase base
        static ASPOSECPP_SHARED_API double Log(double a, double newBase);

        /// Determines the sign of the specified value.
        /// @param value The value to determine the sign of
        /// @returns -1 if @p value is less than 0; 0 if @p value is equal to 0; 1 if @p value is greater than 0
        /// @tparam T The type of the argument accepted by the method
        template<class T>
        static T Sign(T value)
        {
            static_assert(std::is_arithmetic<T>::value, "Math::Sign template argument must be an arithmetic type.");

            if (value < 0)
                return -1;
            else if (value > 0)
                return 1;
            else
                return 0;
        }
        //static int Sign(float value);
        /// Determines the sign of the specified value.
        /// @param value The value to determine the sign of
        /// @returns -1 if @p value is less than 0; 0 if @p value is equal to 0; 1 if @p value is greater than 0
        static ASPOSECPP_SHARED_API int Sign(double value);

        /// Returns the full product of two 32-bit integers.
        /// @param a The first multiplier
        /// @param b The second multiplier
        /// @returns The product of @p a and @p b
        static ASPOSECPP_SHARED_API int64_t BigMul(int a, int b);

        /// Calculates the quotient of two 32-bit integers and the remainder.
        /// @param a The divident
        /// @param b The divisor
        /// @param result The output parameter that contains the remainder resulting from division of @p a by @p b
        /// @returns The quotind of @p a and @p b
        static ASPOSECPP_SHARED_API int DivRem(int a, int b, int &result);
        /// Calculates the quotient of two 64-bit integers and the remainder.
        /// @param a The divident
        /// @param b The divisor
        /// @param result The output parameter that contains the remainder resulting from division of @p a by @p b
        /// @returns The quotind of @p a and @p b
        static ASPOSECPP_SHARED_API int64_t DivRem(int64_t a, int64_t b, int64_t &result);

    //  >= .Net 2.0
        //static float Round(float a);

    //  not a .Net
        /// Represents the positive infinity.
        static const double ASPOSECPP_SHARED_API PositiveInfinity;
        /// Represents the negative infinity.
        static const double ASPOSECPP_SHARED_API NegativeInfinity;
        /// Represents a not-a-number value.
        static const double ASPOSECPP_SHARED_API NaN;

        /// Calculates the remainder resulting from the division one specified value by another specified value.
        /// @param x The divident
        /// @param y The divisor
        /// @returns The reminder resulting from the division of @p x by @p y
        /// @tparam T The type of the method's arguments
        template<class T>
        static T Modulus(T x, T y)
        {
            return std::fmod(x,y);
        }

        /// Returns the smallest value out of two numeric ones specified.
        /// @tparam T0 Type of first value.
        /// @tparam T1 Type of second value.
        /// @param val1 First value.
        /// @param val2 Second value.
        /// @return Smallest value out of @p val1 and @p val2.
        template<class T0, class T1, class = typename std::enable_if<!std::is_same<T0, T1>::value, void>::type>
        static auto Min(T0 val1, T1 val2) -> decltype(val1 + val2)
        {
            return Min_<decltype(val1 + val2)>(val1, val2);
        }
        /// Returns the smallest value out of two numeric ones specified.
        /// @tparam T0 Type of first value.
        /// @tparam T1 Type of second value.
        /// @param val1 First value.
        /// @param val2 Second value.
        /// @return Smallest value out of @p val1 and @p val2.
        template<class T0, class T1, class = typename std::enable_if<std::is_same<T0, T1>::value, void>::type>
        static T0 Min(T0 val1, T1 val2)
        {
            return Min_<decltype(val1 + val2)>(val1, val2);
        }

        /// Returns the greatest value out of two numeric ones specified.
        /// @tparam T0 Type of first value.
        /// @tparam T1 Type of second value.
        /// @param val1 First value.
        /// @param val2 Second value.
        /// @return Greatest value out of @p val1 and @p val2.
        template<class T0, class T1, class = typename std::enable_if<!std::is_same<T0, T1>::value, void>::type>
        static auto Max(T0 val1, T1 val2)  -> decltype(val1 + val2)
        {
            using T = decltype(val1 + val2);
            return Max_<T>(static_cast<T>(val1), static_cast<T>(val2));
        }
        /// Returns the greatest value out of two numeric ones specified.
        /// @tparam T0 Type of first value.
        /// @tparam T1 Type of second value.
        /// @param val1 First value.
        /// @param val2 Second value.
        /// @return Greatest value out of @p val1 and @p val2.
        template<class T0, class T1, class = typename std::enable_if<std::is_same<T0, T1>::value, void>::type>
        static T0 Max(T0 val1, T1 val2)
        {
            return Max_<T0>(val1, static_cast<T0>(val2));
        }

    private:
        /// Returns the smallest value out of the two specified.
        /// @param val1 The first comparant
        /// @param val2 The second comparant
        /// @returns The smallest value out of @p val1 and @p val2
        /// @tparam The type of the arguments of the method
        template <class T>
        static T Min_(T val1, T val2)
        {
            return val1 <= val2 ? val1 : val2;
        }

        /// Returns the largest value out of the two specified.
        /// @param val1 The first comparant
        /// @param val2 The second comparant
        /// @returns The largest value out of @p val1 and @p val2
        /// @tparam The type of the arguments of the method
        template <class T>
        static T Max_(T val1, T val2)
        {
            return val1 >= val2 ? val1 : val2;
        }

        /// The maximum number of digits that are taken into account during rounding.
        enum { MaxRoundingDigits = 15 };

        static const double RoundPower10Double[];
        static const double DoubleRoundLimit; // 1e16d
        
        /// Rounds the specified value to the nearest value with the specified number of fractional digits.
        /// A parameter specifies the function's behavior if the specified value is equally close to two nearest numbers.
        /// @param value The value to round
        /// @param digits The number of fractional digits in the rounded value
        /// @param mode Specifies how to perform the rounding if @p value is equally close to two nearest numbers.
        /// @returns The number with the specified number of digits nearest to @p value
        static ASPOSECPP_SHARED_API double RoundImpl(double value, int digits, MidpointRounding mode);
    }; // class Math

    /// Returns the smallest single-precision floating point value out of the two specified.
    /// @param val1 The first comparant
    /// @param val2 The second comparant
    /// @returns The smallest value out of @p val1 and @p val2; or NaN if one of the operands is NaN
    template <>
    inline float Math::Min_(float val1, float val2)
    {
        if (val1 < val2)
            return val1;
        if (System::IsNaN<float>(val1))
            return val1;
        return val2;
    }

    /// Returns the smallest double-precision floating point value out of the two specified.
    /// @param val1 The first comparant
    /// @param val2 The second comparant
    /// @returns The smallest value out of @p val1 and @p val2; or NaN if one of the operands is NaN
    template <>
    inline double Math::Min_(double val1, double val2)
    {
        if (val1 < val2)
            return val1;
        if (System::IsNaN<double>(val1))
            return val1;
        return val2;
    }

    /// Returns the largest single-precision floating point value out of the two specified.
    /// @param val1 The first comparant
    /// @param val2 The second comparant
    /// @returns The largest value out of @p val1 and @p val2; or NaN if one of the operands is NaN
    template <>
    inline float Math::Max_(float val1, float val2)
    {
        if (val1 > val2)
            return val1;
        if (System::IsNaN<float>(val1))
            return val1;
        return val2;
    }

    /// Returns the largest double-precision floating point value out of the two specified.
    /// @param val1 The first comparant
    /// @param val2 The second comparant
    /// @returns The largest value out of @p val1 and @p val2; or NaN if one of the operands is NaN
    template <>
    inline double Math::Max_(double val1, double val2)
    {
        if (val1 > val2)
            return val1;
        if (System::IsNaN<double>(val1))
            return val1;
        return val2;
    }

} // namespace System

#endif // _math_h_
