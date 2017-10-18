#ifndef _aspose_system_math_h_
#define _aspose_system_math_h_

#include <system/primitive_types.h>
#include <system/decimal.h>

#include <cmath>
#include <type_traits>

#include <fwd.h>

namespace System
{
    struct Math
    {
        static const double ASPOSECPP_SHARED_API PI; // 3.1415926535897931
        static const double ASPOSECPP_SHARED_API E;  // 2.7182818284590451

        static double Acos(double d);
        static double Asin(double d);
        static double Atan(double d);
        static double Atan2(double y, double x);
        static Decimal Ceiling(Decimal d);
        static double Ceiling(double a);
        static double Cos(double d);
        static double Cosh(double value);
        static Decimal Floor(Decimal d);
        static double Floor(double d);
        static double Sin(double a);
        static double Tan(double a);
        static double Sinh(double value);
        static double Tanh(double value);
        static double Round(double a);
        static double Round(double value, int digits);
        static double Round(double value, MidpointRounding mode);
        static double Round(double value, int digits, MidpointRounding mode);
        static Decimal Round(Decimal d);
        static Decimal Round(Decimal value, int digits);
        static Decimal Round(Decimal d, MidpointRounding mode);
        static Decimal Round(Decimal d, int digits, MidpointRounding mode);
        static Decimal Truncate(Decimal d);
        static double Truncate(double d);
        static double Sqrt(double d);
        static double Log(double d);
        static double Log10(double d);
        static double Exp(double d);
        static double Pow(double x, double y);
        static double IEEERemainder(double x, double y);

        template<class T>
        static T Abs(T value)
        {
            static_assert(std::is_arithmetic<T>::value, "Math::Abs template argument must be an arithmetic type.");

            return std::abs(value);
        }
        static inline Decimal Abs(const Decimal &d)
        {
            return d < 0 ? -d : d;
        }

        static double Log(double a, double newBase);

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
        static int Sign(double value);

        static int64_t BigMul(int a, int b);

        static int DivRem(int a, int b, int &result);
        static int64_t DivRem(int64_t a, int64_t b, int64_t &result);

    //  >= .Net 2.0
        //static float Round(float a);

    //  not a .Net
        static const double ASPOSECPP_SHARED_API PositiveInfinity;
        static const double ASPOSECPP_SHARED_API NegativeInfinity;
        static const double ASPOSECPP_SHARED_API NaN;

        template<class T>
        static T Modulus(T x, T y)
        {
            return std::fmod(x,y);
        }

        template<class T0, class T1>
        static auto Min(T0 val1, T1 val2) -> decltype(val1 + val2)
        {
            return Min_<decltype(val1 + val2)>(val1, val2);
        }

        template<class T0, class T1>
        static auto Max(T0 val1, T1 val2)  -> decltype(val1 + val2)
        {
            return Max_<decltype(val1 + val2)>(val1, val2);
        }

    private:

        template <class T>
        static T Min_(T val1, T val2)
        {
            return val1 <= val2 ? val1 : val2;
        }

        template <class T>
        static T Max_(T val1, T val2)
        {
            return val1 >= val2 ? val1 : val2;
        }

        enum { MaxRoundingDigits = 15 };

        static const double RoundPower10Double[];
        static const double DoubleRoundLimit; // 1e16d

        static double RoundImpl(double value, int digits, MidpointRounding mode);
    }; // class Math


    template <>
    inline float Math::Min_(float val1, float val2)
    {
        if (val1 < val2)
            return val1;
        if (System::IsNaN<float>(val1))
            return val1;
        return val2;
    }

    template <>
    inline double Math::Min_(double val1, double val2)
    {
        if (val1 < val2)
            return val1;
        if (System::IsNaN<double>(val1))
            return val1;
        return val2;
    }

    template <>
    inline float Math::Max_(float val1, float val2)
    {
        if (val1 > val2)
            return val1;
        if (System::IsNaN<float>(val1))
            return val1;
        return val2;
    }

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
