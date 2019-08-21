/// @file system/decimal.h
/// Contains declarations of System::Decimal class.
#ifndef _aspose_system_decimal_h_
#define _aspose_system_decimal_h_

#include <system/object.h>
#include <system/string.h>
#include <system/midpoint_rounding.h>
#include <system/globalization/number_styles.h>
#include <system/globalization/culture_info.h>
#include <system/boxable_traits.h>
#include <system/type_code.h>

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
        /// Forward declaration of boost decimal implementation.
        template <unsigned, class, class> class cpp_dec_float;
    }
    using backends::cpp_dec_float;
    /// Forward declaration of boost enum.
    ASPOSECPP_3RD_PARTY_ENUM(expression_template_option);
    /// Forward declaration of boost class.
    template <class, expression_template_option> class number;
} }


namespace System {

#ifndef ASPOSE_CPP_DECIMAL_DIGITS
    /// The number of digits in the largest decimal number that can be reprsented by Decimal class. 
    #define ASPOSE_CPP_DECIMAL_DIGITS 29
#endif

class IFormatProvider;

namespace Detail {
    /// An alias for a type used to represent a decimal number.
    typedef boost::multiprecision::number<boost::multiprecision::cpp_dec_float<ASPOSE_CPP_DECIMAL_DIGITS, std::int32_t, void>, (boost::multiprecision::expression_template_option)1> decimal_number_type;
    /// A data type that has a size equivalent to the size of decimal_number_type.
    struct decimal_size_equivalent {
        /// Data.
        std::array<std::uint32_t, (ASPOSE_CPP_DECIMAL_DIGITS + 7) / 8 + 3> m_data;
        /// Exponent.
        std::int32_t m_exponent;
        /// Indicates if the value is neagtive.
        bool m_neg;
        /// Class.
        enum { e1, e2, e3 } m_class;
        /// Precision.
        std::int32_t m_precision;
    };

    /// Declaration of a wrapper type around @p decimal_number_type.
    ASPOSECPP_3RD_PARTY_TYPE_HOLDER(decimal_number_type, number, sizeof(decimal_size_equivalent), std::uint32_t, DecimalHolder);
}

struct DecimalDotNetImpl;

/// Represents a decimal number.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS Decimal
{
public:
    /// An alias for Detail::decimal_number_type.
    typedef Detail::decimal_number_type number_type;    

    /// Represents the largest number that can be represented by Decimal class.
    static const Decimal ASPOSECPP_SHARED_API MaxValue;
    /// Represents the smallest number that can be represented by Decimal class.
    static const Decimal ASPOSECPP_SHARED_API MinValue;
    /// Represents number -1.
    static const Decimal ASPOSECPP_SHARED_API MinusOne;
    /// Represets number 1.
    static const Decimal ASPOSECPP_SHARED_API One;
    /// Represents number 0.
    static const Decimal ASPOSECPP_SHARED_API Zero;

    // ctors
    /// Constructs an intsance that represents 0.
    ASPOSECPP_SHARED_API Decimal();
    /// Consstructs an instance that represents the specified value.
    /// @param i 8-bit integer value to be represented by the Decimal object being constructed
    ASPOSECPP_SHARED_API Decimal(std::int8_t i);
    /// Consstructs an instance that represents the specified value.
    /// @param i 16-bit integer value to be represented by the Decimal object being constructed
    ASPOSECPP_SHARED_API Decimal(std::int16_t i);
    /// Consstructs an instance that represents the specified value.
    /// @param i 32-bit integer value to be represented by the Decimal object being constructed
    ASPOSECPP_SHARED_API Decimal(std::int32_t i);
    /// Consstructs an instance that represents the specified value.
    /// @param i 64-bit integer value to be represented by the Decimal object being constructed
    ASPOSECPP_SHARED_API Decimal(std::int64_t i);
    /// Consstructs an instance that represents the specified value.
    /// @param i unsigned 8-bit integer value to be represented by the Decimal object being constructed
    ASPOSECPP_SHARED_API Decimal(std::uint8_t i);
    /// Consstructs an instance that represents the specified value.
    /// @param i unsigned 16-bit integer value to be represented by the Decimal object being constructed
    ASPOSECPP_SHARED_API Decimal(std::uint16_t i);
    /// Consstructs an instance that represents the specified value.
    /// @param i unsigned 32-bit integer value to be represented by the Decimal object being constructed
    ASPOSECPP_SHARED_API Decimal(std::uint32_t i);
    /// Consstructs an instance that represents the specified value.
    /// @param i unsigned 64-bit integer value to be represented by the Decimal object being constructed
    ASPOSECPP_SHARED_API Decimal(std::uint64_t i);

    /// Consstructs an instance that represents the specified value.
    /// @param f The single-precision floating-point value to be represented by the Decimal object being constructed
    ASPOSECPP_SHARED_API Decimal(float f);
    /// Consstructs an instance that represents the specified value.
    /// @param d The double-precision floating-point value to be represented by the Decimal object being constructed
    ASPOSECPP_SHARED_API Decimal(double d);

    /// Constructs an instance that represents a value whose string representation is specified as an instance of std::string class.
    ASPOSECPP_SHARED_API explicit Decimal(const std::string& str);
    /// Constructs a Decimal object from the specified from the specified components.
    /// @param lo The low 32 bits of the value
    /// @param mid The middel 32 bits of the value
    /// @param hi The high 32 bits of the value
    /// @param isNegative Specifies if the value is negative
    /// @param scale A power of 10 ranging from 0 to 28
    ASPOSECPP_SHARED_API Decimal(int32_t lo, int32_t mid, int32_t hi, bool isNegative, uint8_t scale);
    /// Constructs an instance of Decimal class that represents the same number as the specified Decimal object.
    /// @param d A Decimal object to copy the value from
    ASPOSECPP_SHARED_API Decimal(const Decimal &d);
    /// Constructs an instance of Decimal class from integer array containing a binary representation.
    /// @param bits A integer array containing a binary representation.
    ASPOSECPP_SHARED_API Decimal(ArrayPtr<int32_t> bits);
    /// Always throws ArgumentNullException.
    ASPOSECPP_SHARED_API Decimal(std::nullptr_t bits);
    /// Destructor
    ASPOSECPP_SHARED_API ~Decimal();

    // operators
    /// Assigns the value represented by the specified object to the current object.
    /// @param d Decimal object to copy the value from
    /// @returns The reference to the self
    ASPOSECPP_SHARED_API Decimal& operator = (const Decimal &d);

    /// Converts the value represented by the current object to 8-bit integer value.
    ASPOSECPP_SHARED_API explicit operator std::int8_t() const;
    /// Converts the value represented by the current object to 16-bit integer value.
    ASPOSECPP_SHARED_API explicit operator std::int16_t() const;
    /// Converts the value represented by the current object to 32-bit integer value.
    ASPOSECPP_SHARED_API explicit operator std::int32_t() const;
    /// Converts the value represented by the current object to 64-bit integer value.
    ASPOSECPP_SHARED_API explicit operator std::int64_t() const;
    /// Converts the value represented by the current object to unsigned 8-bit integer value.
    ASPOSECPP_SHARED_API explicit operator std::uint8_t() const;
    /// Converts the value represented by the current object to unsigned 16-bit integer value.
    ASPOSECPP_SHARED_API explicit operator std::uint16_t() const;
    /// Converts the value represented by the current object to unsigned 32-bit integer value.
    ASPOSECPP_SHARED_API explicit operator std::uint32_t() const;
    /// Converts the value represented by the current object to unsigned 64-bit integer value.
    ASPOSECPP_SHARED_API explicit operator std::uint64_t() const;
    /// Converts the value represented by the current object to single-precision floating-point value.
    ASPOSECPP_SHARED_API explicit operator float() const;
    /// Converts the value represented by the current object to double-precision floating-point value.
    ASPOSECPP_SHARED_API explicit operator double() const;
    
    /// Converts the value represented by the current object to a boolean value.
    /// @returns True if the value represented by the current object is not 0, otherwise - false
    ASPOSECPP_SHARED_API explicit operator bool() const;

    /// Returns a new instance of Decimal class that represents a value that is a sum of values represented by the current and specified objects.
    /// @param d The Decimal object representing the value to add
    /// @returns A new instance of Decimal class that represents a value that is a sum of values represented by the current and specified objects
    ASPOSECPP_SHARED_API Decimal operator+(const Decimal& d) const;
    /// Returns a new instance of Decimal class that represents a value that is the result of subtraction of the value represented by the specified object from the value represented by the current object.
    /// @param d The Decimal object representing the value to subtract
    /// @returns A new instance of Decimal class that represents a value that is the result of subtraction of the value represented by the specified object from the value represented by the current object
    ASPOSECPP_SHARED_API Decimal operator-(const Decimal& d) const;
    /// Returns a new instance of Decimal class that represents a value that is a result of multiplication of values represented by the current and specified objects.
    /// @param d The Decimal object representing the multiplier
    /// @returns A new instance of Decimal class that represents a value that is a result of multiplication of values represented by the current and specified objects
    ASPOSECPP_SHARED_API Decimal operator*(const Decimal& d) const;
    /// Returns a new instance of Decimal class that represents a value that is a result of division of the value represented by the current object by the value represented by the specified object.
    /// @param d The Decimal object representing the divisor
    /// @returns A new instance of Decimal class that represents a value that is a result of division of the value represented by the current object by the value represented by the specified object.
    ASPOSECPP_SHARED_API Decimal operator/(const Decimal& d) const;
    /// Returns a new instance of Decimal class that represents a value that is a result of modulo operation with the values represented by the curent and the specified objects.
    /// @param d The Decimal object representing the divisor
    /// @returns A new instance of Decimal class that represents a value that is a result of modulo operation with the values represented by the curent and the specified objects.
    ASPOSECPP_SHARED_API Decimal operator%(const Decimal& d) const;
    /// Returns a new instance of Decimal class that represents a value that results from negation of the value represented by the current object.
    ASPOSECPP_SHARED_API Decimal operator-() const;

    /// Determines if the values represented by the current object and the specified object are equal.
    /// @param d The Decimal object to compare the current object with
    /// @returns True if the value represented by the current and the specified objects are equal, otherwise - false
    ASPOSECPP_SHARED_API bool operator==(const Decimal& d) const;
    /// Determines if the values represented by the current object and the specified object are not equal.
    /// @param d The Decimal object to compare the current object with
    /// @returns True if the value represented by the current and the specified objects are not equal, otherwise - false
    ASPOSECPP_SHARED_API bool operator!=(const Decimal& d) const;
    /// Determines if the value represented by the current object is 0.
    /// @returns True if the value represented by the current object is 0, otherwise - false
    ASPOSECPP_SHARED_API bool operator==(std::nullptr_t) const;
    /// Determines if the value represented by the current object is different from 0.
    /// @returns True if the value represented by the current object is different from 0, otherwise - false
    ASPOSECPP_SHARED_API bool operator!=(std::nullptr_t) const;
    /// Determines if the value represented by the current object is less than the value represented by the specified object.
    /// @param d The Decimal object to compare the current object with
    /// @returns True if the value represented by the current object is less than the value represented by @p d, otherwise - false
    ASPOSECPP_SHARED_API bool operator<(const Decimal& d) const;
    /// Determines if the value represented by the current object is less than or equal to the value represented by the specified object.
    /// @param d The Decimal object to compare the current object with
    /// @returns True if the value represented by the current object is less than or equal to the value represented by @p d, otherwise - false
    ASPOSECPP_SHARED_API bool operator<=(const Decimal& d) const;
    /// Determines if the value represented by the current object is greater than the value represented by the specified object.
    /// @param d The Decimal object to compare the current object with
    /// @returns True if the value represented by the current object is greater than the value represented by @p d, otherwise - false
    ASPOSECPP_SHARED_API bool operator>(const Decimal& d) const;
    /// Determines if the value represented by the current object is greater than or equal to the value represented by the specified object.
    /// @param d The Decimal object to compare the current object with
    /// @returns True if the value represented by the current object is greater than or equal to the value represented by @p d, otherwise - false
    ASPOSECPP_SHARED_API bool operator>=(const Decimal& d) const;
    
    /// Increments the value represented by the current object.
    /// @returns The reference to the self
    ASPOSECPP_SHARED_API Decimal& operator++();
    /// Decrements the value represented by the current object.
    /// @returns The reference to the self
    ASPOSECPP_SHARED_API Decimal& operator--();

    /// Assigns to the current object a new value that is a sum of values represented by the current and specified objects.
    /// @param d The Decimal object representing the value to add
    /// @returns A reference to the self
    ASPOSECPP_SHARED_API Decimal& operator+=(const Decimal& d);
    /// Assigns to the current object a new value that is the result of subtraction of the value represented by the specified object from the value represented by the current object.
    /// @param d The Decimal object representing the value to subtract
    /// @returns A reference to the self
    ASPOSECPP_SHARED_API Decimal& operator-=(const Decimal& d);
    /// Assigns to the current object a new value that is the result of multiplication of values represented by the current and specified objects.
    /// @param d The Decimal object representing the multiplier
    /// @returns A reference to the self
    ASPOSECPP_SHARED_API Decimal& operator*=(const Decimal& d);
    /// Assigns to the current object a new value that is the result of division of the value represented by the current object by the value represented by the specified object.
    /// @param d The Decimal object representing the divisor
    /// @returns A reference to the self
    ASPOSECPP_SHARED_API Decimal& operator/=(const Decimal& d);
    /// Assigns to the current object a new value that is the result of modulo operation with the values represented by the curent and the specified objects.
    /// @param d The Decimal object representing the divisor
    /// @returns A reference to the self 
    ASPOSECPP_SHARED_API Decimal& operator%=(const Decimal& d);

    /// @cond
    ASPOSECPP_SHARED_API friend std::ostream& operator<<(std::ostream& os, const Decimal& d);
    /// @endcond

    // methods
    /// Determines if the values represented by the current object and the specified object are equal.
    /// @param d The Decimal object to compare the current object with
    /// @returns True if the value represented by the current and the specified objects are equal, otherwise - false
    ASPOSECPP_SHARED_API bool Equals(const Decimal& d) const;
    /// Determines if the values represented by the current object and the specified object are equal.
    /// @param obj The object to compare the current object with
    /// @returns True if the value represented by the current and the specified objects are equal, otherwise - false
    ASPOSECPP_SHARED_API bool Equals(const SharedPtr<Object>& obj) const;
    /// Determines if the value represented by the current object is less than, equal to or greater than the value represented by the specified object.
    /// @param d The comparand
    /// @returns -1 if the value represented by the current object is less than the value represented by @p d; 0 if the values are equal; 1 if the value represented by the current object is greater than the value represented by @p d
    ASPOSECPP_SHARED_API int CompareTo(const Decimal& d) const;
    /// Returns a hash code for the current object.
    ASPOSECPP_SHARED_API int GetHashCode() const;
    /// Returns the string representation of the value represented by the object.
    ASPOSECPP_SHARED_API String ToString() const;

    /// Converts current object to string using the culture-specific format information.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the current object.
    ASPOSECPP_SHARED_API String ToString(const SharedPtr<IFormatProvider>& provider) const;
    // Optimized function overloads
    ASPOSECPP_SHARED_API String ToString(const SharedPtr<Globalization::CultureInfo>& culture) const;
    ASPOSECPP_SHARED_API String ToString(const SharedPtr<Globalization::NumberFormatInfo>& nfi) const;
    String ToString(const Decimal& value, std::nullptr_t) const { return ToString(); }

    /// Converts current object to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the current object.
    ASPOSECPP_SHARED_API String ToString(const String& format, const SharedPtr<IFormatProvider>& provider) const;
    // Optimized function overloads
    ASPOSECPP_SHARED_API String ToString(const String& format, const SharedPtr<Globalization::CultureInfo>& culture) const;
    ASPOSECPP_SHARED_API String ToString(const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi) const;
    ASPOSECPP_SHARED_API String ToString(const String& format, std::nullptr_t = nullptr) const;

    // static methods
    /// Rounds the specified value to the nearest integral number.
    /// A parameter specifies the function's behavior if the specified value is equally close to two nearest numbers.
    /// @param d The value to round
    /// @param mode Specifies how to perform the rounding if @p value is equally close to two nearest numbers.
    /// @returns @p d rounded to the nearest integral value
    static ASPOSECPP_SHARED_API Decimal Round(Decimal d, MidpointRounding mode = MidpointRounding::ToEven);
    /// Rounds the specified value to the nearest value with the specified number of fractional digits.
    /// A parameter specifies the function's behavior if the specified value is equally close to two nearest numbers.
    /// @param d The value to round
    /// @param digits The number of fractional digits in the rounded value
    /// @param mode Specifies how to perform the rounding if @p value is equally close to two nearest numbers.
    /// @returns The number with the specified number of digits nearest to @p value
    static ASPOSECPP_SHARED_API Decimal Round(Decimal d, int digits, MidpointRounding mode = MidpointRounding::ToEven);
    /// Returns the Decimal object representing a value that has integral part equal to that 
    /// of the value represented by the specified Decimal object of the with all fractional digits discarded.
    /// @param d A decimal number
    /// @returns A Decimal object reprsenting a decimal value whose integral part is equal to that of the specified 
    /// value and fractional digits are all 0.
    static ASPOSECPP_SHARED_API Decimal Truncate(Decimal d);
    /// Returns the smallest integral value that is greater than or equal to the specified value.
    /// @param d A decimal number
    /// @returns The smallest integral value that is greater than or equal to @p d
    static ASPOSECPP_SHARED_API Decimal Ceiling(Decimal d);
    /// Returns the largest integral value that is less than or equal to the specified value.
    /// @param d A decimal number
    /// @returns The largest integral value that is less than or equal to @p d
    static ASPOSECPP_SHARED_API Decimal Floor(Decimal d);

    /// Determines if the values represented by the specified objects are equal.
    /// @param d1 The first comparand
    /// @param d2 The second comparand
    /// @returns True if the values represented by @p d1 and @p d2 are equal, otherwise - false
    static bool Equals(Decimal d1, Decimal d2) { return d1 == d2; }
    /// Determines if the value represented by the first Decimal object is less than, equal to or greater than the value represented by the second Decimal object.
    /// @param d1 The first comparand
    /// @param d2 The second comparand
    /// @returns -1 if the value represented by @p d1 is less than the value represented by @p d2; 0 if the values are equal; 1 if the value represented by @p d1 is greater than the value represented by @p d2
    static int Compare(Decimal d1, Decimal d2) { return d1.CompareTo(d2); }
    /// Converts the string representation of a decimal number into an equivalent instance of Decimal class.
    /// @param s The string representation of a number
    /// @returns A new instance of Decimal class repsenting a value equivalent to that represented by the specified string.
    static ASPOSECPP_SHARED_API Decimal Parse(const String& s);
    /// Converts the string representation of a decimal number into an equivalent instance of Decimal class using the specified style.
    /// @param s The string representation of a decimal value to convert
    /// @param styles A bitwise combination of the enumeration values that provides additional information about @p s, about style elements that may be present in @p s, or about the conversion from @p s to a Decimal object
    /// @returns A new instance of Decimal class repsenting a value equivalent to that represented by the specified string
    static ASPOSECPP_SHARED_API Decimal Parse(const String& s, Globalization::NumberStyles styles);
    /// Converts the string representation of a decimal number into an equivalent instance of Decimal class using the specified format provider.
    /// @param s The string representation of a decimal value to convert
    /// @param provider Format provider
    /// @returns A new instance of Decimal class repsenting a value equivalent to that represented by the specified string
    static ASPOSECPP_SHARED_API Decimal Parse(const String& s, const SharedPtr<IFormatProvider>& provider);
    /// Converts the string representation of a decimal number into an equivalent instance of Decimal class using the specified style and format provider.
    /// @param s The string representation of a decimal value to convert
    /// @param styles A bitwise combination of the enumeration values that provides additional information about @p s, about style elements that may be present in @p s, or about the conversion from @p s to a Decimal object
    /// @param provider Format provider
    /// @returns A new instance of Decimal class repsenting a value equivalent to that represented by the specified string
    static ASPOSECPP_SHARED_API Decimal Parse(const String& s, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    /// Converts the specified string containing the string representation of a number to the equivalent Decimal value.
    /// @param value The string to convert
    /// @param result The reference to a Decimal variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Decimal& result);
    /// Converts the specified string containing the string representation of a number to the equivalent Decimal value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @param result An output argument; contains the result of conversion
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider, Decimal& result);

    /// Returns a reference to the TypeInfo object representing the Decimal class' type information.
    static const TypeInfo& Type()
    {
        return *static_holder<ThisTypeInfo>::GetValue();
    }

    /// Returns an instance of std::string that contains the string representation of the value represented by the object.
    ASPOSECPP_SHARED_API std::string ToStdString() const;
    /// Converts the specified Decimal object into the binary representation of the value it represents.
    /// @param d The Decimal object to convert
    /// @returns An array whos elements represent distinct bits of the binary representation of the value represented by @p d
    static ASPOSECPP_SHARED_API System::ArrayPtr<int> GetBits(Decimal d);
    /// Convert the specified Decimal value to an array of bytes.
    /// @param value The Decimal value to convert
    /// @param buffer The output parameter that, if the conversion succeeds, contains the result of conversion
    /// when the method returns.
    static ASPOSECPP_SHARED_API void GetBytes(Decimal value, const System::ArrayPtr<uint8_t>& buffer);
    /// Constructs an instance of Decimal class representing the specified value.
    /// @param value A constant reference to the value to be represented by the object being constructed
    ASPOSECPP_SHARED_API Decimal(const number_type& value);
    /// Convert the specified Decimal value to the equivalent OLE currency value.
    /// NOT IMPLEMENTED.
    static ASPOSECPP_SHARED_API int64_t ToOACurrency(Decimal value);
    /// Convert the specified OLE currency value to the equivalent Decimal value.
    /// NOT IMPLEMENTED.
    static ASPOSECPP_SHARED_API Decimal FromOACurrency(int64_t currency);
    /// Gets object type code.
    TypeCode GetTypeCode() const { return TypeCode::Decimal; }
    
    /// Adds two specified Decimal values.
    /// @param d1 First value.
    /// @param d2 Decond value.
    /// @return The sum of @p d1 and @p d2.
    static Decimal Add(Decimal d1, Decimal d2) { return d1 + d2; }
    /// Subtracts one specified Decimal value from another.
    /// @param d1 The minuend.
    /// @param d2 The subtrahend.
    /// @return The result of subtracting @p d2 from @p d1.
    static Decimal Subtract(Decimal d1, Decimal d2) { return d1 - d2; }
    /// Divides two specified Decimal values.
    /// @param d1 The dividend.
    /// @param d2 The divisor.
    /// @return The result of dividing @p d1 by @p d2.
    static Decimal Divide(Decimal d1, Decimal d2) { return d1 / d2; }
    /// Computes the remainder after dividing two Decimal values.
    /// @param d1 The dividend.
    /// @param d2 The divisor.
    /// @return The remainder after dividing @p d1 by @p d2.
    static Decimal Remainder(Decimal d1, Decimal d2) { return d1 % d2; }
    /// Multiplies two specified Decimal values.
    /// @param d1 The multiplicand.
    /// @param d2 The multiplier.
    /// @return The result of multiplying @p d1 and @p d2.
    static Decimal Multiply(Decimal d1, Decimal d2) { return d1 * d2; }
    /// Returns a new instance of Decimal class that represents a value that results from negation of the value represented by the specified object.
    static Decimal Negate(Decimal d) { return -d; }

    /// Converts the Decimal value to unsigned 8-bit integer value.
    static uint8_t ToByte(Decimal value) { return static_cast<uint8_t>(value); }
    /// Converts the Decimal value to signed 8-bit integer value.
    static int8_t ToSByte(Decimal value) { return static_cast<int8_t>(value); }
    /// Converts the Decimal value to unsigned 16-bit integer value.
    static uint16_t ToUInt16(Decimal value) { return static_cast<uint16_t>(value); }
    /// Converts the Decimal value to signed 16-bit integer value.
    static int16_t ToInt16(Decimal value) { return static_cast<int16_t>(value); }
    /// Converts the Decimal value to unsigned 32-bit integer value.
    static uint32_t ToUInt32(Decimal value) { return static_cast<uint32_t>(value); }
    /// Converts the Decimal value to signed 32-bit integer value.
    static int32_t ToInt32(Decimal value) { return static_cast<int32_t>(value); }
    /// Converts the Decimal value to unsigned 64-bit integer value.
    static uint64_t ToUInt64(Decimal value) { return static_cast<uint64_t>(value); }
    /// Converts the Decimal value to signed 64-bit integer value.
    static int64_t ToInt64(Decimal value) { return static_cast<int64_t>(value); }
    /// Converts the Decimal value to single precision floating-point number.
    static float ToSingle(Decimal value) { return static_cast<float>(value); }
    /// Converts the Decimal value to double precision floating-point number.
    static double ToDouble(Decimal value) { return static_cast<double>(value); }

    /// Returns the string representation of the value represented by the object. For internal use.
    String ToStringInternal() const;

protected:
    /// Converts Decimal value to equivalent C#-styled representation.
    /// @param value Input value.
    /// @param impl Pointer to output variable.
    static ASPOSECPP_SHARED_API void DecimalToDotNetImpl(Decimal value, DecimalDotNetImpl* impl);
    /// The value represented by the current object.
    Detail::DecimalHolder m_value;

private:
    /// Represents a pointer to TypeInfo object that contains information about this class.
    struct ThisTypeInfo : TypeInfoPtr
    {
        /// Constructs an instance of ThisTypeInfo class.
        ThisTypeInfo()
        {
            ptr = std::make_unique<TypeInfo>(u"System::Decimal");
        }
    };

    /// Helper method.
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

    /// Helper method.
    void CutErroneousDigits(int digits);

    /// Helper method.
    void DecimalInternal(int32_t lo, int32_t mid, int32_t hi, bool isNegative, uint8_t scale);
};

/// Returns a new instance of Decimal class that represents a value that is a sum of the specified value and the value represented by the specified Decimal object.
/// @param x The first summand
/// @param d The constant reference to the Decimal object representing the second summand
/// @returns A new instance of Decimal class that represents a value that is a sum of @p x and the value represented by the @p d.
template <typename T, typename _ = typename std::enable_if<std::is_arithmetic<T>::value>::type>
Decimal operator+(const T& x, const Decimal& d) { return Decimal(x) + d; }

/// Returns a new instance of Decimal class that represents a value that is the result of subtraction of the value represented by the specified Decimal object from the specified value.
/// @param x The value to subtract from
/// @param d The Decimal object representing the subtracted value
/// @returns A new instance of Decimal class that represents a value that is the result of subtraction of the value represented by @p d from @p x.
template <typename T, typename _ = typename std::enable_if<std::is_arithmetic<T>::value>::type>
Decimal operator-(const T& x, const Decimal& d) { return Decimal(x) - d; }

/// Returns a new instance of Decimal class that represents a value that is a result of multiplication of the specified value and the value represented by the specified Decimal object.
/// @param x The first multiplier
/// @param d The Decimal object representing the second multiplier
/// @returns A new instance of Decimal class that represents a value that is a result of multiplication of @p x and the value represented by @p d.
template <typename T, typename _ = typename std::enable_if<std::is_arithmetic<T>::value>::type>
Decimal operator*(const T& x, const Decimal& d) { return Decimal(x) * d; }

/// Returns a new instance of Decimal class that represents a value that is a result of division of the specified value and the value represented by the specified Decimal object.
/// @param x The value to divide
/// @param d The Decimal object representing the divisor
/// @returns A new instance of Decimal class that represents a value that is a result of division of @p x by the value represented by @p d.
template <typename T, typename _ = typename std::enable_if<std::is_arithmetic<T>::value>::type>
Decimal operator/(const T& x, const Decimal& d) { return Decimal(x) / d; }

/// Writes the value represented by the specified object to the specified output stream.
/// @param d The Decimal object to print to the stream
/// @param os The stream to print the specified object to
ASPOSECPP_SHARED_API void PrintTo(const Decimal& d, ::std::ostream* os);


/// IsBoxable<T> specialization for Decimal.
template<> struct IsBoxable<Decimal> : std::true_type {};

} // namespace System

namespace std
{
    /// Hashing implementation for Decimal class.
    template <>
    struct hash<System::Decimal>
    {
        /// Hasher algorithm which calls into actual GetHashCode() implementation.
        /// @param val Decimal object to hash
        std::size_t operator()(const System::Decimal& val) const
        {
            return static_cast<std::size_t>(val.GetHashCode());
        }
    };
}


#endif // _aspose_system_decimal_h_
