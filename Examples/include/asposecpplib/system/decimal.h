#ifndef _aspose_system_decimal_h_
#define _aspose_system_decimal_h_

#include <system/object.h>
#include <system/string.h>
#include <system/midpoint_rounding.h>
#include "system/globalization/number_style.h"

#include <string>
#include <limits>
#include <cmath>
#include <memory>
#include <array>


#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/multiprecision/cpp_dec_float.hpp>
#endif


namespace boost { namespace multiprecision {
    namespace backends {
        template <unsigned, class, class> class cpp_dec_float;
    }
    using backends::cpp_dec_float;
    ASPOSECPP_3RD_PARTY_ENUM(expression_template_option);
    template <class, expression_template_option> class number;
} }


namespace System {

#ifndef ASPOSE_CPP_DECIMAL_DIGITS
    #define ASPOSE_CPP_DECIMAL_DIGITS 29
#endif

namespace Detail {
    typedef boost::multiprecision::number<boost::multiprecision::cpp_dec_float<ASPOSE_CPP_DECIMAL_DIGITS, std::int32_t, void>, (boost::multiprecision::expression_template_option)1> decimal_number_type;

    struct decimal_size_equivalent {
        std::array<std::uint32_t, (ASPOSE_CPP_DECIMAL_DIGITS + 7) / 8 + 3> m_data;
        std::int32_t m_exponent;
        bool m_neg;
        enum { e1, e2, e3 } m_class;
        std::int32_t m_precision;
    };

    ASPOSECPP_3RD_PARTY_TYPE_HOLDER(decimal_number_type, number, sizeof(decimal_size_equivalent), std::uint32_t, DecimalHolder);
}

struct DecimalDotNetImpl;

class Decimal
{
public:
    typedef Detail::decimal_number_type number_type;    

    static const Decimal ASPOSECPP_SHARED_API MaxValue;
    static const Decimal ASPOSECPP_SHARED_API MinValue;
    static const Decimal ASPOSECPP_SHARED_API MinusOne;
    static const Decimal ASPOSECPP_SHARED_API One;
    static const Decimal ASPOSECPP_SHARED_API Zero;

    // ctors

    Decimal();

    Decimal(std::int8_t i);
    Decimal(std::int16_t i);
    Decimal(std::int32_t i);
    Decimal(std::int64_t i);
    Decimal(std::uint8_t i);
    Decimal(std::uint16_t i);
    Decimal(std::uint32_t i);
    Decimal(std::uint64_t i);

    Decimal(float f);
    Decimal(double d);

    Decimal(std::nullptr_t);
    Decimal(const std::string& str);
    Decimal(const String& str);
    Decimal(int32_t lo, int32_t mid, int32_t hi, bool isNegative, uint8_t scale);
    Decimal(const Decimal &d);
    ~Decimal();

    // operators

    Decimal& operator = (const Decimal &d);

    explicit operator std::int8_t() const;
    explicit operator std::int16_t() const;
    explicit operator std::int32_t() const;
    explicit operator std::int64_t() const;
    explicit operator std::uint8_t() const;
    explicit operator std::uint16_t() const;
    explicit operator std::uint32_t() const;
    explicit operator std::uint64_t() const;
    explicit operator float() const;
    explicit operator double() const;

    explicit operator bool() const;

    Decimal operator+(const Decimal& d) const;
    Decimal operator-(const Decimal& d) const;
    Decimal operator*(const Decimal& d) const;
    Decimal operator/(const Decimal& d) const;
    Decimal operator%(const Decimal& d) const;
    Decimal operator-() const;

    bool operator==(const Decimal& d) const;
    bool operator!=(const Decimal& d) const;
    bool operator==(std::nullptr_t) const;
    bool operator!=(std::nullptr_t) const;
    bool operator<(const Decimal& d) const;
    bool operator<=(const Decimal& d) const;
    bool operator>(const Decimal& d) const;
    bool operator>=(const Decimal& d) const;

    Decimal& operator++();
    Decimal& operator--();

    Decimal& operator+=(const Decimal& d);
    Decimal& operator-=(const Decimal& d);
    Decimal& operator*=(const Decimal& d);
    Decimal& operator/=(const Decimal& d);
    Decimal& operator%=(const Decimal& d);

    // methods

    bool Equals(const Decimal& d) const;
    int CompareTo(const Decimal& d) const;
    int GetHashCode() const;
    String ToString() const;

    // static methods

    static Decimal Round(Decimal d, MidpointRounding mode = MidpointRounding::ToEven);
    static Decimal Round(Decimal d, int digits, MidpointRounding mode = MidpointRounding::ToEven);

    static Decimal Truncate(Decimal d);

    static Decimal Ceiling(Decimal d);
    static Decimal Floor(Decimal d);

    static bool Equals(Decimal d1, Decimal d2) { return d1 == d2; }
    static int Compare(Decimal d1, Decimal d2) { return d1.CompareTo(d2); }

    static Decimal Parse(const String& str) { return Decimal(str); }
    static Decimal Parse(const String& s, System::Globalization::NumberStyles style);

    static const TypeInfo& Type()
    {
        return *static_holder<ThisTypeInfo>::GetValue();
    }

    std::string ToStdString() const;

    static System::ArrayPtr<int> GetBits(Decimal d);
    static void GetBytes(Decimal value, System::ArrayPtr<uint8_t> buffer);

    Decimal(const number_type& value);

protected:

    static void DecimalToDotNetImpl(Decimal value, DecimalDotNetImpl* impl);

    Detail::DecimalHolder m_value;

private:
    struct ThisTypeInfo : TypeInfoPtr
    {
        ThisTypeInfo()
        {
            ptr = std::make_unique<TypeInfo>(L"System::Decimal");
        }
    };

    template <class T>
    inline void EliminateRoundError()
    {
        // This intends to limit fractional error when converting from double or float to Decimal.
        // It is requires to put the behavior in line with original C# one which seems to consider only 15 digits for double when converting.
        typedef std::numeric_limits<T> limits;
        if (limits::is_integer)
            return;

        CutErroneousDigits(limits::digits10);
    }

    void CutErroneousDigits(int digits);
};

template <typename T, typename _ = typename std::enable_if<std::is_arithmetic<T>::value>::type>
Decimal operator+(const T& x, const Decimal& d) { return Decimal(x) + d; }

template <typename T, typename _ = typename std::enable_if<std::is_arithmetic<T>::value>::type>
Decimal operator-(const T& x, const Decimal& d) { return Decimal(x) - d; }

template <typename T, typename _ = typename std::enable_if<std::is_arithmetic<T>::value>::type>
Decimal operator*(const T& x, const Decimal& d) { return Decimal(x) * d; }

template <typename T, typename _ = typename std::enable_if<std::is_arithmetic<T>::value>::type>
Decimal operator/(const T& x, const Decimal& d) { return Decimal(x) / d; }

void PrintTo(const Decimal& d, ::std::ostream* os);

} // namespace System

namespace std
{
    template <>
    struct hash<System::Decimal>
    {
        std::size_t operator()(const System::Decimal& val) const
        {
            return val.GetHashCode();
        }
    };
}


#endif // _aspose_system_decimal_h_