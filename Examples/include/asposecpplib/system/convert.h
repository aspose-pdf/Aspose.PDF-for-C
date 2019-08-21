/// @file system/convert.h
/// Contains declarations of System::Convert class.
#pragma once

#include "system/object.h"
#include "system/shared_ptr.h"
#include "fwd.h"
#include "system/primitive_types.h"
#include "system/math.h"
#include "system/exceptions.h"
#include "system/array.h"
#include "system/char.h"
#include "system/decimal.h"
#include "system/date_time.h"
#include "system/globalization/number_styles.h"
#include "system/iformatprovider.h"
#include "system/type_code.h"
#include "system/boolean.h"
#include <type_traits>

namespace System {

class Guid;

namespace Globalization {
    class CultureInfo;
    class DateTimeFormatInfo;
    class NumberFormatInfo;
}

/// Enumeration containing values that represent different formats of base-64 encoded data.
enum class Base64FormattingOptions
{
    /// No formatting
    None = 0,
    /// Insert line breaks after every 76th character
    InsertLineBreaks = 1,
};

/// The structure that contains methods performing conversion of values of one type to the values of another type.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
struct Convert
{
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    static ASPOSECPP_SHARED_API SharedPtr<Object> ChangeType(const SharedPtr<Object>& value, const TypeInfo& conversion_type);

    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    template<typename T>
    static
    std::enable_if_t<!IsSmartPtr<T>::value, bool>
    IsDBNull(const T&)
    {
        throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }

    /// NOT IMPLEMENTED
    /// Fake implementation, checks if value is nullptr
    template<typename T>
    static bool IsDBNull(const SharedPtr<T>& value)
    {
        return value == nullptr;
    }

    // ---------- Base64 Conversions ----------

    /// Base-64 encodes a range of elements in the specified byte array and stores the encoded data as an array of Unicode characters.
    /// @param in_array The array of bytes containing the range of elements to encode
    /// @param offset_in An index of an element in the input array at which the range to encode begins
    /// @param length The length of the range of elements to encode
    /// @param out_array A constant reference to the output array to which the resulting data is to be put
    /// @param offset_out An index in the output array at which to start putting the resulting data
    /// @param insert_line_breaks Specifies whether the line break characters are to be inserted in the output array after every 76 base-64 characters
    /// @returns The number of characters written to the output array
    static ASPOSECPP_SHARED_API int ToBase64CharArray(const ArrayPtr<uint8_t>& in_array, int offset_in, int length, const ArrayPtr<char16_t>& out_array, int offset_out, bool insert_line_breaks = false);
    
    /// Base-64 encodes elements in the specified byte array and returns the encoded data as a string.
    /// @param in_array The array of bytes to encode
    /// @param insert_line_breaks Specifies whether line break characters are to be inserted in the output string after every 76 base-64 characters
    /// @returns The string containing the base-64 encoded representation of the input array
    static ASPOSECPP_SHARED_API String ToBase64String(const ArrayPtr<uint8_t>& in_array, bool insert_line_breaks = false);

    /// Base-64 encodes a range of elements in the specified byte array and returns the encoded data as a string.
    /// @param in_array The array of bytes containing the range of elements to encode
    /// @param offset_in An index of an element in the input array at which the range to encode begins
    /// @param length The length of the range of elements to encode
    /// @param insert_line_breaks Specifies whether line break characters are to be inserted in the output string after every 76 base-64 characters
    /// @returns The string containing the base-64 encoded representation of the range of elements of the input array
    static ASPOSECPP_SHARED_API String ToBase64String(const ArrayPtr<uint8_t>& in_array, int offset_in, int length, bool insert_line_breaks = false);

    /// Base-64 encodes a range of elements in the specified byte array and stores the encoded data as an array of Unicode characters.
    /// @param in_array The array of bytes containing the range of elements to encode
    /// @param offset_in An index of an element in the input array at which the range to encode begins
    /// @param length The length of the range of elements to encode
    /// @param out_array A constant reference to the output array to which the resulting data is to be put
    /// @param offset_out An index in the output array at which to start putting the resulting data
    /// @param options Specifies formatting options of base-64 encoded data
    /// @returns The number of characters written to the output array
    static ASPOSECPP_SHARED_API int ToBase64CharArray(const ArrayPtr<uint8_t>& in_array, int offset_in, int length, const ArrayPtr<char_t>& out_array, int offset_out, Base64FormattingOptions options);

    /// Base-64 encodes elements in the specified byte array and returns the encoded data as a string.
    /// @param in_array The array of bytes to encode
    /// @param options Specifies formatting options of base-64 encoded data
    /// @returns The string containing the base-64 encoded representation of the input array
    static ASPOSECPP_SHARED_API String ToBase64String(const ArrayPtr<uint8_t>& in_array, Base64FormattingOptions options);

    /// Base-64 encodes a range of elements in the specified byte array and returns the encoded data as a string.
    /// @param in_array The array of bytes containing the range of elements to encode
    /// @param offset_in An index of an element in the input array at which the range to encode begins
    /// @param length The length of the range of elements to encode
    /// @param options Specifies formatting options of base-64 encoded data
    /// @returns The string containing the base-64 encoded representation of the range of elements of the input array
    static ASPOSECPP_SHARED_API String ToBase64String(const ArrayPtr<uint8_t>& in_array, int offset_in, int length, Base64FormattingOptions options);

    /// Decodes base-64 encoded data represented as a range in the array of Unicode characters.
    /// @param in_array The array containing the data to decode
    /// @param offset The position in the input array at which the range to decode begins
    /// @param length The length of the range to decode
    /// @returns A byte-array containing the decoded data
    static ASPOSECPP_SHARED_API ArrayPtr<uint8_t> FromBase64CharArray(const ArrayPtr<char_t>& in_array, int offset, int length);

    /// Decodes base-64 encoded data represented as a string.
    /// @param s The string containing the base-64 encoded data to decode
    /// @returns A byte-array containing the decoded data
    static ASPOSECPP_SHARED_API ArrayPtr<uint8_t> FromBase64String(const String& s);

    // ---------- Boolean Conversions ----------

    /// Returns the specified boolean value.
    static constexpr bool ToBoolean(bool value) { return value; }
    /// Converts the specified 8-bit unsigned integer to an equivalent boolean value.
    static constexpr bool ToBoolean(uint8_t value) { return value != 0; }
    /// Converts the specified 8-bit signed integer to an equivalent boolean value.
    static constexpr bool ToBoolean(int8_t value) { return value != 0; }
    /// Converts the specified 16-bit unsigned integer to an equivalent boolean value.
    static constexpr bool ToBoolean(uint16_t value) { return value != 0; }
    /// Converts the specified 16-bit signed integer to an equivalent boolean value.
    static constexpr bool ToBoolean(int16_t value) { return value != 0; }
    /// Converts the specified 32-bit unsigned integer to an equivalent boolean value.
    static constexpr bool ToBoolean(uint32_t value) { return value != 0; }
    /// Converts the specified 32-bit signed integer to an equivalent boolean value.
    static constexpr bool ToBoolean(int32_t value) { return value != 0; }
    /// Converts the specified 64-bit unsigned integer to an equivalent boolean value.
    static constexpr bool ToBoolean(uint64_t value) { return value != 0; }
    /// Converts the specified 64-bit signed integer to an equivalent boolean value.
    static constexpr bool ToBoolean(int64_t value) { return value != 0; }
    /// Converts the specified float number to an equivalent boolean value.
    static constexpr bool ToBoolean(float value) { return value != 0; }
    /// Converts the specified double number to an equivalent boolean value.
    static constexpr bool ToBoolean(double value) { return value != 0; }
    /// Converts the specified decimal number to an equivalent boolean value.
    static bool ToBoolean(const Decimal& value) { return static_cast<bool>(value); }
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API bool ToBoolean(char_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API bool ToBoolean(DateTime value);

    /// Converts the specified null-string to the equivalent boolean value.
    /// @returns False.
    static constexpr bool ToBoolean(std::nullptr_t) { return false; }

    /// Converts the specified c-string to the value of bool type.
    /// @param value The c-string to convert
    /// @returns True if the specified c-string is equal to "True" and false if the specified c-string is equal to "False".
    /// @throws FormatException If the specified c-string is not equal to "True" or "False".
    static bool ToBoolean(const char_t* value) { return ToBoolean(String(value)); }

    /// Converts the specified string to the value of bool type.
    /// @param value The string to convert
    /// @returns True if the specified c-string is equal to "True" and false if the specified string is equal to "False".
    /// @throws FormatException If the specified string is not equal to "True" or "False".
    static ASPOSECPP_SHARED_API bool ToBoolean(const String& value);

    /// Converts the specified string to the value of bool type.
    /// @param value The string to convert
    /// @returns True if the specified c-string is equal to "True" and false if the specified string is equal to "False".
    /// @throws FormatException If the specified string is not equal to "True" or "False".
    static bool ToBoolean(const String& value, const SharedPtr<IFormatProvider>&) { return ToBoolean(value); }

    // ---------- Byte Conversions ----------
  
    /// Converts the specified boolean value to an equivalent 8-bit unsigned integer.
    static constexpr uint8_t ToByte(bool value) { return value ? 1 : 0; }
    /// Returns the specified 8-bit unsigned integer.
    static constexpr uint8_t ToByte(uint8_t value) { return value; }
    /// Converts the specified 8-bit signed integer to an equivalent 8-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint8_t ToByte(int8_t value);
    /// Converts the specified 16-bit unsigned integer to an equivalent 8-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint8_t ToByte(uint16_t value);
    /// Converts the specified 16-bit signed integer to an equivalent 8-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint8_t ToByte(int16_t value);
    /// Converts the specified 32-bit unsigned integer to an equivalent 8-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint8_t ToByte(uint32_t value);
    /// Converts the specified 32-bit signed integer to an equivalent 8-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint8_t ToByte(int32_t value);
    /// Converts the specified 64-bit unsigned integer to an equivalent 8-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint8_t ToByte(uint64_t value);
    /// Converts the specified 64-bit signed integer to an equivalent 8-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint8_t ToByte(int64_t value);
    /// Converts the specified float number to an equivalent 8-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint8_t ToByte(float value);
    /// Converts the specified double number to an equivalent 8-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint8_t ToByte(double value);
    /// Converts the specified decimal number to an equivalent 8-bit unsigned integer.
    static uint8_t ToByte(const Decimal& value) { return static_cast<uint8_t>(value); }
    /// Converts the specified unicode character to an equivalent 8-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint8_t ToByte(char_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API uint8_t ToByte(DateTime value);

    /// Converts the specified null-string to the equivalent unsigned 8-bit integer value.
    /// @returns Zero.
    static constexpr uint8_t ToByte(std::nullptr_t) { return 0; }

    /// Converts the specified c-string containing the string representation of a number to the equivalent unsigned 8-bit integer value.
    /// @param value The c-string to convert
    /// @returns The unsigned 8-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than UINT8_MAX or is a negative number
    static uint8_t ToByte(const char_t* value) { return ToByte(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 8-bit integer value.
    /// @param value The string to convert
    /// @returns The unsigned 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT8_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value);

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent unsigned 8-bit integer value.
    /// @param value The string to convert
    /// @param from_base The base of the number represented by the string
    /// @returns The unsigned 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT8_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value, int from_base);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 8-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The unsigned 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT8_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static uint8_t ToByte(const String& value, std::nullptr_t) { return ToByte(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 8-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The unsigned 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT8_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    // ---------- SByte Conversions ----------

    /// Converts the specified boolean value to an equivalent 8-bit signed integer.
    static constexpr int8_t ToSByte(bool value) { return value ? 1 : 0; }
    /// Converts the specified 8-bit unsigned integer to an equivalent 8-bit signed integer.
    static ASPOSECPP_SHARED_API int8_t ToSByte(uint8_t value);
    /// Returns the specified 8-bit signed integer.
    static constexpr int8_t ToSByte(int8_t value) { return value; }
    /// Converts the specified 16-bit unsigned integer to an equivalent 8-bit signed integer.
    static ASPOSECPP_SHARED_API int8_t ToSByte(uint16_t value);
    /// Converts the specified 16-bit signed integer to an equivalent 8-bit signed integer.
    static ASPOSECPP_SHARED_API int8_t ToSByte(int16_t value);
    /// Converts the specified 32-bit unsigned integer to an equivalent 8-bit signed integer.
    static ASPOSECPP_SHARED_API int8_t ToSByte(uint32_t value);
    /// Converts the specified 32-bit signed integer to an equivalent 8-bit signed integer.
    static ASPOSECPP_SHARED_API int8_t ToSByte(int32_t value);
    /// Converts the specified 64-bit unsigned integer to an equivalent 8-bit signed integer.
    static ASPOSECPP_SHARED_API int8_t ToSByte(uint64_t value);
    /// Converts the specified 64-bit signed integer to an equivalent 8-bit signed integer.
    static ASPOSECPP_SHARED_API int8_t ToSByte(int64_t value);
    /// Converts the specified float number to an equivalent 8-bit signed integer.
    static ASPOSECPP_SHARED_API int8_t ToSByte(float value);
    /// Converts the specified double number to an equivalent 8-bit signed integer.
    static ASPOSECPP_SHARED_API int8_t ToSByte(double value);
    /// Converts the specified decimal number to an equivalent 8-bit signed integer.
    static int8_t ToSByte(const Decimal& value) { return static_cast<int8_t>(value); }
    /// Converts the specified unicode character to an equivalent 8-bit signed integer.
    static ASPOSECPP_SHARED_API int8_t ToSByte(char_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API int8_t ToSByte(DateTime value);

    /// Converts the specified null-string to the equivalent 8-bit integer value.
    /// @returns Zero.
    static constexpr int8_t ToSByte(std::nullptr_t) { return 0; }

    /// Converts the specified c-string containing the string representation of a number to the equivalent 8-bit integer value.
    /// @param value The c-string to convert
    /// @returns The 8-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than INT8_MAX or less that INT8_MIN
    static int8_t ToSByte(const char_t* value) { return ToSByte(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent 8-bit integer value.
    /// @param value The string to convert
    /// @returns The 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT8_MAX or less than INT8_MIN
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value);

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent 8-bit integer value.
    /// @param value The string to convert
    /// @param from_base The base of the number represented by the string
    /// @returns The 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT8_MAX or less than INT8_MIN
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value, int from_base);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 8-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT8_MAX or less than INT8_MIN
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static int8_t ToSByte(const String& value, std::nullptr_t) { return ToSByte(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent 8-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The unsigned 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT8_MAX or is less than INT8_MIN
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    // ---------- Char Conversions ----------

    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API char_t ToChar(bool value);
    /// Converts the specified 8-bit unsigned integer to an equivalent unicode character.
    static constexpr char_t ToChar(uint8_t value) { return value; }
    /// Converts the specified 8-bit signed integer to an equivalent unicode character.
    static ASPOSECPP_SHARED_API char_t ToChar(int8_t value);
    /// Converts the specified 16-bit unsigned integer to an equivalent unicode character.
    static constexpr char_t ToChar(uint16_t value) { return value; }
    /// Converts the specified 16-bit signed integer to an equivalent unicode character.
    static ASPOSECPP_SHARED_API char_t ToChar(int16_t value);
    /// Converts the specified 32-bit unsigned integer to an equivalent unicode character.
    static ASPOSECPP_SHARED_API char_t ToChar(uint32_t value);
    /// Converts the specified 32-bit signed integer to an equivalent unicode character.
    static ASPOSECPP_SHARED_API char_t ToChar(int32_t value);
    /// Converts the specified 64-bit unsigned integer to an equivalent unicode character.
    static ASPOSECPP_SHARED_API char_t ToChar(uint64_t value);
    /// Converts the specified 64-bit signed integer to an equivalent unicode character.
    static ASPOSECPP_SHARED_API char_t ToChar(int64_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API char_t ToChar(float value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API char_t ToChar(double value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API char_t ToChar(const Decimal& value);
    /// Returns the specified unicode character.
    static constexpr char_t ToChar(char_t value) { return value; }
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API char_t ToChar(DateTime value);

    /// Converts the first and the only character of the specified c-string to a char_t value.
    /// @param value The c-string to convert; it is expected that the c-string be exactly 1 character long.
    /// @returns The first and the only character of the specified c-string if it is exactly 1 characetr long, otherwise - 0
    static char_t ToChar(const char_t* value) { return ToChar(String(value)); }
    
    /// Converts the first and the only character of the specified string to a char_t value.
    /// @param value The string to convert; it is expected that the string be exactly 1 character long
    /// @returns The first and the only character of the specified string if it is exactly 1 characetr long, otherwise - 0
    static char_t ToChar(const String& value) { return Char::Parse(value); }

    /// Converts the first and the only character of the specified string to a char_t value.
    /// @param value The string to convert; it is expected that the string be exactly 1 character long
    /// @returns The first and the only character of the specified string if it is exactly 1 characetr long, otherwise - 0
    static char_t ToChar(const String& value, const SharedPtr<IFormatProvider>&) { return ToChar(value); }

    // ---------- Int16 Conversions ----------

    /// Converts the specified boolean value to an equivalent 16-bit signed integer.
    static constexpr int16_t ToInt16(bool value) { return value ? 1 : 0; }
    /// Converts the specified 8-bit unsigned integer to an equivalent 16-bit signed integer.
    static constexpr int16_t ToInt16(uint8_t value) { return value; }
    /// Converts the specified 8-bit signed integer to an equivalent 16-bit signed integer.
    static constexpr int16_t ToInt16(int8_t value) { return value; }
    /// Converts the specified 16-bit unsigned integer to an equivalent 16-bit signed integer.
    static ASPOSECPP_SHARED_API int16_t ToInt16(uint16_t value);
    /// Returns the specified 16-bit signed integer.
    static constexpr int16_t ToInt16(int16_t value) { return value; }
    /// Converts the specified 32-bit unsigned integer to an equivalent 16-bit signed integer.
    static ASPOSECPP_SHARED_API int16_t ToInt16(uint32_t value);
    /// Converts the specified 32-bit signed integer to an equivalent 16-bit signed integer.
    static ASPOSECPP_SHARED_API int16_t ToInt16(int32_t value);
    /// Converts the specified 64-bit unsigned integer to an equivalent 16-bit signed integer.
    static ASPOSECPP_SHARED_API int16_t ToInt16(uint64_t value);
    /// Converts the specified 64-bit signed integer to an equivalent 16-bit signed integer.
    static ASPOSECPP_SHARED_API int16_t ToInt16(int64_t value);
    /// Converts the specified float number to an equivalent 16-bit signed integer.
    static ASPOSECPP_SHARED_API int16_t ToInt16(float value);
    /// Converts the specified double number to an equivalent 16-bit signed integer.
    static ASPOSECPP_SHARED_API int16_t ToInt16(double value);
    /// Converts the specified decimal number to an equivalent 16-bit signed integer.
    static int16_t ToInt16(const Decimal& value) { return static_cast<int16_t>(value); }
    /// Converts the specified unicode character to an equivalent 16-bit signed integer.
    static ASPOSECPP_SHARED_API int16_t ToInt16(char_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API int16_t ToInt16(DateTime value);

    /// Converts the specified null-string to the equivalent 16-bit integer value.
    /// @returns Zero.
    static constexpr int16_t ToInt16(std::nullptr_t) { return 0; }

    /// Converts the specified c-string containing the string representation of a number to the equivalent 16-bit integer value.
    /// @param value The c-string to convert
    /// @returns The 16-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than INT16_MAX or less that INT16_MIN
    static int16_t ToInt16(const char_t* value) { return ToInt16(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit integer value.
    /// @param value The string to convert
    /// @returns The 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT16_MAX or less than INT16_MIN
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value);

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent 16-bit integer value.
    /// @param value The string to convert
    /// @param from_base The base of the number represented by the string
    /// @returns The 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT16_MAX or less than INT16_MIN
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value, int from_base);

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT16_MAX or less than INT16_MIN
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static int16_t ToInt16(const String& value, std::nullptr_t) { return ToInt16(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT16_MAX or is less than INT16_MIN
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    // ---------- UInt16 Conversions ----------

    /// Converts the specified boolean value to an equivalent 16-bit unsigned integer.
    static constexpr uint16_t ToUInt16(bool value) { return value ? 1 : 0; }
    /// Converts the specified 8-bit unsigned integer to an equivalent 16-bit unsigned integer.
    static constexpr uint16_t ToUInt16(uint8_t value) { return value; }
    /// Converts the specified 8-bit signed integer to an equivalent 16-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(int8_t value);
    /// Returns the specified 16-bit unsigned integer.
    static constexpr uint16_t ToUInt16(uint16_t value) { return value; }
    /// Converts the specified 16-bit signed integer to an equivalent 16-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(int16_t value);
    /// Converts the specified 32-bit unsigned integer to an equivalent 16-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(uint32_t value);
    /// Converts the specified 32-bit signed integer to an equivalent 16-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(int32_t value);
    /// Converts the specified 64-bit unsigned integer to an equivalent 16-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(uint64_t value);
    /// Converts the specified 64-bit signed integer to an equivalent 16-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(int64_t value);
    /// Converts the specified float number to an equivalent 16-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(float value);
    /// Converts the specified double number to an equivalent 16-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(double value);
    /// Converts the specified decimal number to an equivalent 16-bit unsigned integer.
    static uint16_t ToUInt16(const Decimal& value) { return static_cast<uint16_t>(value); }
    /// Converts the specified unicode character to an equivalent 16-bit unsigned integer.
    static constexpr uint16_t ToUInt16(char_t value) { return value; }
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(DateTime value);

    /// Converts the specified null-string to the equivalent unsigned 16-bit integer value.
    /// @returns Zero.
    static constexpr uint16_t ToUInt16(std::nullptr_t) { return 0; }

    /// Converts the specified c-string containing the string representation of a number to the equivalent unsigned 16-bit integer value.
    /// @param value The c-string to convert
    /// @returns The unsigned 16-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than UINT16_MAX or is a negative number
    static uint16_t ToUInt16(const char_t* value) { return ToUInt16(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 16-bit integer value.
    /// @param value The string to convert
    /// @returns The unsigned 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT16_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value);

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent unsigned 16-bit integer value.
    /// @param value The string to convert
    /// @param from_base The base of the number represented by the string
    /// @returns The unsigned 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT16_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value, int from_base);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 16-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The unsigned 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT16_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static uint16_t ToUInt16(const String& value, std::nullptr_t) { return ToUInt16(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 16-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The unsigned 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT16_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    // ---------- Int32 Conversions ----------

    /// Converts the specified boolean value to an equivalent 32-bit signed integer.
    static constexpr int ToInt32(bool value) { return value ? 1 : 0; }
    /// Converts the specified 8-bit unsigned integer to an equivalent 32-bit signed integer.
    static constexpr int ToInt32(uint8_t value) { return value; }
    /// Converts the specified 8-bit signed integer to an equivalent 32-bit signed integer.
    static constexpr int ToInt32(int8_t value) { return value; }
    /// Converts the specified 16-bit unsigned integer to an equivalent 32-bit signed integer.
    static constexpr int ToInt32(uint16_t value) { return value; }
    /// Converts the specified 16-bit signed integer to an equivalent 32-bit signed integer.
    static constexpr int ToInt32(int16_t value) { return value; }
    /// Converts the specified 32-bit unsigned integer to an equivalent 32-bit signed integer.
    static ASPOSECPP_SHARED_API int ToInt32(uint32_t value);
    /// Returns the specified 32-bit signed integer.
    static constexpr int ToInt32(int32_t value) { return value; }
    /// Converts the specified 64-bit unsigned integer to an equivalent 32-bit signed integer.
    static ASPOSECPP_SHARED_API int ToInt32(uint64_t value);
    /// Converts the specified 64-bit signed integer to an equivalent 32-bit signed integer.
    static ASPOSECPP_SHARED_API int ToInt32(int64_t value);
    /// Converts the specified float number to an equivalent 32-bit signed integer.
    static ASPOSECPP_SHARED_API int ToInt32(float value);
    /// Converts the specified double number to an equivalent 32-bit signed integer.
    static ASPOSECPP_SHARED_API int ToInt32(double value);
    /// Converts the specified decimal number to an equivalent 32-bit signed integer.
    static int ToInt32(const Decimal& value) { return static_cast<int32_t>(value); }
    /// Converts the specified unicode character to an equivalent 32-bit signed integer.
    static constexpr int ToInt32(char_t value) { return value; }
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API int ToInt32(DateTime value);

    /// Converts the specified null-string to the equivalent 32-bit integer value.
    /// @returns Zero.
    static constexpr int ToInt32(std::nullptr_t) { return 0; }

    /// Converts the specified c-string containing the string representation of a number to the equivalent 32-bit integer value.
    /// @param value The c-string to convert
    /// @returns The 32-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than INT16_MAX or less that INT32_MIN
    static int ToInt32(const char_t* value) { return ToInt32(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent 32-bit integer value.
    /// @param value The string to convert
    /// @returns The 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT32_MAX or less than INT32_MIN
    static ASPOSECPP_SHARED_API int ToInt32(const String& value);

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent 32-bit integer value.
    /// @param value The string to convert
    /// @param from_base The base of the number represented by the string
    /// @returns The 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT32_MAX or less than INT32_MIN
    static ASPOSECPP_SHARED_API int ToInt32(const String& value, int from_base);

    /// Converts the specified string containing the string representation of a number to the equivalent 32-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT32_MAX or less than INT32_MIN
    static ASPOSECPP_SHARED_API int ToInt32(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API int ToInt32(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API int ToInt32(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static int ToInt32(const String& value, std::nullptr_t) { return ToInt32(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent 32-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT32_MAX or is less than INT32_MIN
    static ASPOSECPP_SHARED_API int ToInt32(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API int ToInt32(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API int ToInt32(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API int ToInt32(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    // ---------- UInt32 Conversions ----------

    /// Converts the specified boolean value to an equivalent 32-bit unsigned integer.
    static constexpr uint32_t ToUInt32(bool value) { return value ? 1 : 0; }
    /// Converts the specified 8-bit unsigned integer to an equivalent 32-bit unsigned integer.
    static constexpr uint32_t ToUInt32(uint8_t value) { return value; }
    /// Converts the specified 8-bit signed integer to an equivalent 32-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(int8_t value);
    /// Converts the specified 16-bit unsigned integer to an equivalent 32-bit unsigned integer.
    static constexpr uint32_t ToUInt32(uint16_t value) { return value; }
    /// Converts the specified 16-bit signed integer to an equivalent 32-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(int16_t value);
    /// Returns the specified 32-bit unsigned integer.
    static constexpr uint32_t ToUInt32(uint32_t value) { return value; }
    /// Converts the specified 32-bit signed integer to an equivalent 32-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(int32_t value);
    /// Converts the specified 64-bit unsigned integer to an equivalent 32-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(uint64_t value);
    /// Converts the specified 64-bit signed integer to an equivalent 32-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(int64_t value);
    /// Converts the specified float number to an equivalent 32-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(float value);
    /// Converts the specified double number to an equivalent 32-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(double value);
    /// Converts the specified decimal number to an equivalent 32-bit unsigned integer.
    static uint32_t ToUInt32(const Decimal& value) { return static_cast<uint32_t>(value); }
    /// Converts the specified unicode character to an equivalent 32-bit unsigned integer.
    static constexpr uint32_t ToUInt32(char_t value) { return value; }
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(DateTime value);
    
    /// Converts the specified null-string to the equivalent unsigned 32-bit integer value.
    /// @returns Zero.
    static constexpr uint32_t ToUInt32(std::nullptr_t) { return 0; }

    /// Converts the specified c-string containing the string representation of a number to the equivalent unsigned 32-bit integer value.
    /// @param value The c-string to convert
    /// @returns The unsigned 32-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than UINT32_MAX or is a negative number
    static uint32_t ToUInt32(const char_t* value) { return ToUInt32(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 32-bit integer value.
    /// @param value The string to convert
    /// @returns The unsigned 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT32_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value);

        /// Converts the specified string containing the string representation of a number in the specified base to the equivalent unsigned 32-bit integer value.
    /// @param value The string to convert
    /// @param from_base The base of the number represented by the string
    /// @returns The unsigned 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT32_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value, int from_base);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 32-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The unsigned 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT32_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static uint32_t ToUInt32(const String& value, std::nullptr_t) { return ToUInt32(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 32-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The unsigned 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT32_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    // ---------- Int64 Conversions ----------

    /// Converts the specified boolean value to an equivalent 64-bit signed integer.
    static constexpr int64_t ToInt64(bool value) { return value ? 1 : 0; }
    /// Converts the specified 8-bit unsigned integer to an equivalent 64-bit signed integer.
    static constexpr int64_t ToInt64(uint8_t value) { return value; }
    /// Converts the specified 8-bit signed integer to an equivalent 64-bit signed integer.
    static constexpr int64_t ToInt64(int8_t value) { return value; }
    /// Converts the specified 16-bit unsigned integer to an equivalent 64-bit signed integer.
    static constexpr int64_t ToInt64(uint16_t value) { return value; }
    /// Converts the specified 16-bit signed integer to an equivalent 64-bit signed integer.
    static constexpr int64_t ToInt64(int16_t value) { return value; }
    /// Converts the specified 32-bit unsigned integer to an equivalent 64-bit signed integer.
    static constexpr int64_t ToInt64(uint32_t value) { return value; }
    /// Converts the specified 32-bit signed integer to an equivalent 64-bit signed integer.
    static constexpr int64_t ToInt64(int32_t value) { return value; }
    /// Converts the specified 64-bit unsigned integer to an equivalent 64-bit signed integer.
    static ASPOSECPP_SHARED_API int64_t ToInt64(uint64_t value);
    /// Returns the specified 64-bit signed integer.
    static constexpr int64_t ToInt64(int64_t value) { return value; }
    /// Converts the specified float number to an equivalent 64-bit signed integer.
    static ASPOSECPP_SHARED_API int64_t ToInt64(float value);
    /// Converts the specified double number to an equivalent 64-bit signed integer.
    static ASPOSECPP_SHARED_API int64_t ToInt64(double value);
    /// Converts the specified decimal number to an equivalent 64-bit signed integer.
    static int64_t ToInt64(const Decimal& value) { return static_cast<int64_t>(value); }
    /// Converts the specified unicode character to an equivalent 64-bit signed integer.
    static constexpr int64_t ToInt64(char_t value) { return value; }
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API int64_t ToInt64(DateTime value);

    /// Converts the specified null-string to the equivalent int 64-bit integer value.
    /// @returns Zero.
    static constexpr int64_t ToInt64(std::nullptr_t) { return 0; }

    /// Converts the specified c-string containing the string representation of a number to the equivalent 64-bit integer value.
    /// @param value The c-string to convert
    /// @returns The 64-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than INT16_MAX or less that INT64_MIN
    static int64_t ToInt64(const char_t* value) { return ToInt64(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent 64-bit integer value.
    /// @param value The string to convert
    /// @returns The 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT64_MAX or less than INT64_MIN
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value);

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent 64-bit integer value.
    /// @param value The string to convert
    /// @param from_base The base of the number represented by the string
    /// @returns The 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT64_MAX or less than INT64_MIN
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value, int from_base);

    /// Converts the specified string containing the string representation of a number to the equivalent 64-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT64_MAX or less than INT64_MIN
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static int64_t ToInt64(const String& value, std::nullptr_t) { return ToInt64(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent 64-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT64_MAX or is less than INT64_MIN
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    // ---------- UInt64 Conversions ----------

    /// Converts the specified boolean value to an equivalent 64-bit unsigned integer.
    static constexpr uint64_t ToUInt64(bool value) { return value ? 1 : 0; }
    /// Converts the specified 8-bit unsigned integer to an equivalent 64-bit unsigned integer.
    static constexpr uint64_t ToUInt64(uint8_t value) { return value; }
    /// Converts the specified 8-bit signed integer to an equivalent 64-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(int8_t value);
    /// Converts the specified 16-bit unsigned integer to an equivalent 64-bit unsigned integer.
    static constexpr uint64_t ToUInt64(uint16_t value) { return value; }
    /// Converts the specified 16-bit signed integer to an equivalent 64-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(int16_t value);
    /// Converts the specified 32-bit unsigned integer to an equivalent 64-bit unsigned integer.
    static constexpr uint64_t ToUInt64(uint32_t value) { return value; }
    /// Converts the specified 32-bit signed integer to an equivalent 64-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(int32_t value);
    /// Returns the specified 64-bit unsigned integer.
    static constexpr uint64_t ToUInt64(uint64_t value) { return value; }
    /// Converts the specified 64-bit signed integer to an equivalent 64-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(int64_t value);
    /// Converts the specified float number to an equivalent 64-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(float value);
    /// Converts the specified double number to an equivalent 64-bit unsigned integer.
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(double value);
    /// Converts the specified decimal number to an equivalent 64-bit unsigned integer.
    static uint64_t ToUInt64(const Decimal& value) { return static_cast<uint64_t>(value); }
    /// Converts the specified unicode character to an equivalent 64-bit unsigned integer.
    static constexpr uint64_t ToUInt64(char_t value) { return value; }
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(DateTime value);

    /// Converts the specified null-string to the equivalent unsigned 64-bit integer value.
    /// @returns Zero.
    static constexpr uint64_t ToUInt64(std::nullptr_t) { return 0; }

    /// Converts the specified c-string containing the string representation of a number to the equivalent unsigned 64-bit integer value.
    /// @param value The c-string to convert
    /// @returns The unsigned 64-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than UINT64_MAX or is a negative number
    static uint64_t ToUInt64(const char_t* value) { return ToUInt64(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 64-bit integer value.
    /// @param value The string to convert
    /// @returns The unsigned 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT64_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value);

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent unsigned 64-bit integer value.
    /// @param value The string to convert
    /// @param from_base The base of the number represented by the string
    /// @returns The unsigned 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT64_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value, int from_base);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 64-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The unsigned 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT64_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static uint64_t ToUInt64(const String& value, std::nullptr_t) { return ToUInt64(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 64-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The unsigned 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT64_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    // ---------- Single Conversions ----------

    /// Converts the specified boolean value to an equivalent single-precision floating-point number.
    static constexpr float ToSingle(bool value) { return value ? 1.f : 0.f; }
    /// Converts the specified 8-bit unsigned integer to an equivalent single-precision floating-point number.
    static constexpr float ToSingle(uint8_t value) { return static_cast<float>(value); }
    /// Converts the specified 8-bit signed integer to an equivalent single-precision floating-point number.
    static constexpr float ToSingle(int8_t value) { return static_cast<float>(value); }
    /// Converts the specified 16-bit unsigned integer to an equivalent single-precision floating-point number.
    static constexpr float ToSingle(uint16_t value) { return static_cast<float>(value); }
    /// Converts the specified 16-bit signed integer to an equivalent single-precision floating-point number.
    static constexpr float ToSingle(int16_t value) { return static_cast<float>(value); }
    /// Converts the specified 32-bit unsigned integer to an equivalent single-precision floating-point number.
    static constexpr float ToSingle(uint32_t value) { return static_cast<float>(value); }
    /// Converts the specified 32-bit signed integer to an equivalent single-precision floating-point number.
    static constexpr float ToSingle(int32_t value) { return static_cast<float>(value); }
    /// Converts the specified 64-bit unsigned integer to an equivalent single-precision floating-point number.
    static constexpr float ToSingle(uint64_t value) { return static_cast<float>(value); }
    /// Converts the specified 64-bit signed integer to an equivalent single-precision floating-point number.
    static constexpr float ToSingle(int64_t value) { return static_cast<float>(value); }
    /// Returns the specified float number.
    static constexpr float ToSingle(float value) { return value; }
    /// Converts the specified double-precision number to an equivalent single-precision floating-point number.
    static constexpr float ToSingle(double value) { return static_cast<float>(value); }
    /// Converts the specified decimal number to an equivalent single-precision floating-point number.
    static float ToSingle(const Decimal& value) { return static_cast<float>(value); }
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API float ToSingle(char_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API float ToSingle(DateTime value);

    /// Converts the specified null-string to the equivalent single-precision floating-point value.
    /// @returns Zero.
    static constexpr float ToSingle(std::nullptr_t) { return 0; }

    /// Converts the specified c-string containing the string representation of a number to the equivalent single-precision floating-point value.
    /// @param value The c-string to convert
    /// @returns The single-precision floating-point value equal to the number represented by the specified c-string
    static float ToSingle(const char_t* value) { return ToSingle(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent single-precision floating-point value.
    /// @param value The string to convert
    /// @returns The single-precision floating-point value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API float ToSingle(const String& value);

    /// Converts the specified string containing the string representation of a number to the equivalent single-precision floating-point value using the provided formatting information.
    /// @param value The string to convert
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The single-precision floating-point value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API float ToSingle(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API float ToSingle(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API float ToSingle(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static float ToSingle(const String& value, std::nullptr_t) { return ToSingle(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent single-precision floating-point value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The single-precision floating-point value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API float ToSingle(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API float ToSingle(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API float ToSingle(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API float ToSingle(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    // ---------- Double Conversions ----------

    /// Converts the specified boolean value to an equivalent double-precision floating-point number.
    static constexpr double ToDouble(bool value) { return value ? 1 : 0; }
    /// Converts the specified 8-bit unsigned integer to an equivalent double-precision floating-point number.
    static constexpr double ToDouble(uint8_t value) { return static_cast<double>(value); }
    /// Converts the specified 8-bit signed integer to an equivalent double-precision floating-point number.
    static constexpr double ToDouble(int8_t value) { return static_cast<double>(value); }
    /// Converts the specified 16-bit unsigned integer to an equivalent double-precision floating-point number.
    static constexpr double ToDouble(uint16_t value) { return static_cast<double>(value); }
    /// Converts the specified 16-bit signed integer to an equivalent double-precision floating-point number.
    static constexpr double ToDouble(int16_t value) { return static_cast<double>(value); }
    /// Converts the specified 32-bit unsigned integer to an equivalent double-precision floating-point number.
    static constexpr double ToDouble(uint32_t value) { return static_cast<double>(value); }
    /// Converts the specified 32-bit signed integer to an equivalent double-precision floating-point number.
    static constexpr double ToDouble(int32_t value) { return static_cast<double>(value); }
    /// Converts the specified 64-bit unsigned integer to an equivalent double-precision floating-point number.
    static constexpr double ToDouble(uint64_t value) { return static_cast<double>(value); }
    /// Converts the specified 64-bit signed integer to an equivalent double-precision floating-point number.
    static constexpr double ToDouble(int64_t value) { return static_cast<double>(value); }
    /// Converts the specified single-precision number to an equivalent double-precision floating-point number.
    static constexpr double ToDouble(float value) { return value; }
    /// Returns the specified double number.
    static constexpr double ToDouble(double value) { return value; }
    /// Converts the specified decimal number to an equivalent double-precision floating-point number.
    static double ToDouble(const Decimal& value) { return static_cast<double>(value); }
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API double ToDouble(char_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API double ToDouble(DateTime value);

    /// Converts the specified null-string to the equivalent double-precision floating-point value.
    /// @returns Zero.
    static constexpr double ToDouble(std::nullptr_t) { return 0; }

    /// Converts the specified c-string containing the string representation of a number to the equivalent double-precision floating-point value.
    /// @param value The c-string to convert
    /// @returns The double-precision floating-point value equal to the number represented by the specified c-string
    static double ToDouble(const char_t* value) { return ToDouble(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value.
    /// @param value The string to convert
    /// @returns The double-precision floating-point value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API double ToDouble(const String& value);

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value using the provided formatting information.
    /// @param value The string to convert
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The double-precision floating-point value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API double ToDouble(const String& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API double ToDouble(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API double ToDouble(const String& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static double ToDouble(const String& value, std::nullptr_t) { return ToDouble(value); }

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The double-precision floating-point value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API double ToDouble(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API double ToDouble(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API double ToDouble(const String& value, Globalization::NumberStyles styles, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API double ToDouble(const String& value, Globalization::NumberStyles styles, std::nullptr_t = nullptr);

    // ---------- Decimal Conversions ----------

    /// Converts the specified boolean value to an equivalent decimal number.
    static Decimal ToDecimal(bool value) { return value ? 1 : 0; }
    /// Converts the specified 8-bit unsigned integer to an equivalent decimal number.
    static Decimal ToDecimal(uint8_t value) { return Decimal(value); }
    /// Converts the specified 8-bit signed integer to an equivalent decimal number.
    static Decimal ToDecimal(int8_t value) { return Decimal(value); }
    /// Converts the specified 16-bit unsigned integer to an equivalent decimal number.
    static Decimal ToDecimal(uint16_t value) { return Decimal(value); }
    /// Converts the specified 16-bit signed integer to an equivalent decimal number.
    static Decimal ToDecimal(int16_t value) { return Decimal(value); }
    /// Converts the specified 32-bit unsigned integer to an equivalent decimal number.
    static Decimal ToDecimal(uint32_t value) { return Decimal(value); }
    /// Converts the specified 32-bit signed integer to an equivalent decimal number.
    static Decimal ToDecimal(int32_t value) { return Decimal(value); }
    /// Converts the specified 64-bit unsigned integer to an equivalent decimal number.
    static Decimal ToDecimal(uint64_t value) { return Decimal(value); }
    /// Converts the specified 64-bit signed integer to an equivalent decimal number.
    static Decimal ToDecimal(int64_t value) { return Decimal(value); }
    /// Converts the specified float number to an equivalent decimal number.
    static Decimal ToDecimal(float value) { return Decimal(value); }
    /// Converts the specified double number to an equivalent decimal number.
    static Decimal ToDecimal(double value) { return Decimal(value); }
    /// Returns the specified decimal number.
    static Decimal ToDecimal(const Decimal& value) { return value; }
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API Decimal ToDecimal(char_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API Decimal ToDecimal(DateTime value);

    /// Converts the specified null-string to the equivalent Decimal value.
    /// @returns Zero.
    static Decimal ToDecimal(std::nullptr_t) { return Decimal::Zero; }

    /// Converts the specified c-string containing the string representation of a number to the equivalent Decimal value.
    /// @param value The c-string to convert
    /// @returns The Decimal value equal to the number represented by the specified c-string
    static Decimal ToDecimal(const char_t* value) { return ToDecimal(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent Decimal value.
    /// @param value The string to convert
    /// @returns The Decimal value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API Decimal ToDecimal(const String& value);

    /// Converts the specified string containing the string representation of a number to the equivalent Decimal value using the provided formatting information.
    /// @param value The string to convert
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The Decimal value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API Decimal ToDecimal(const String& value, const SharedPtr<IFormatProvider>& provider);

    /// Converts the specified string containing the string representation of a number to the equivalent Decimal value using the specified number styles and formatting information.
    /// @param value The string to convert
    /// @param styles A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param provider A pointer to an object that contains the string format information
    /// @returns The Decimal value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API Decimal ToDecimal(const String& value, Globalization::NumberStyles styles, const SharedPtr<IFormatProvider>& provider);

    // ---------- DateTime Conversions ----------

    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(bool value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(uint8_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(int8_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(uint16_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(int16_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(uint32_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(int32_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(uint64_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(int64_t value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(float value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(double value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(const Decimal& value);
    /// Conversion is not supported. Always throws InvalidCastException.
    static ASPOSECPP_SHARED_API DateTime ToDateTime(char_t value);
    /// Returns the specified date and time.
    static constexpr DateTime ToDateTime(DateTime value) { return value; }

    /// Converts the specified string to an instance of DateTime class.
    /// @param value The string to convert
    /// @returns An instance of DateTime class representing the date and time information represented by the specified string 
    static ASPOSECPP_SHARED_API DateTime ToDateTime(const String& value);

    /// Converts the specified string to an instance of DateTime class using the provided formatting information.
    /// @param value The string to convert
    /// @param fp A pointer to an object that contains the string format information
    /// @returns An instance of DateTime class representing the date and time information represented by the specified string 
    static ASPOSECPP_SHARED_API DateTime ToDateTime(const String& value, const SharedPtr<IFormatProvider>& fp);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API DateTime ToDateTime(const String& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API DateTime ToDateTime(const String& value, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi);
    static DateTime ToDateTime(const String& value, std::nullptr_t) { return ToDateTime(value); }

    // ---------- String Conversions ----------

    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(int8_t value);
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(uint8_t value);
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(int16_t value);
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(uint16_t value);
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(int32_t value);
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(uint32_t value);
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(int64_t value);
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(uint64_t value);
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(float value);
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(double value);
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(const Decimal& value);
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(DateTime value);

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(int8_t value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(int8_t value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(int8_t value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static String ToString(int8_t value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(uint8_t value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(uint8_t value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(uint8_t value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static String ToString(uint8_t value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(int16_t value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(int16_t value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(int16_t value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static String ToString(int16_t value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(uint16_t value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(uint16_t value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(uint16_t value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static String ToString(uint16_t value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(int32_t value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(int32_t value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(int32_t value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static String ToString(int32_t value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(uint32_t value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(uint32_t value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(uint32_t value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static String ToString(uint32_t value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(int64_t value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(int64_t value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(int64_t value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static String ToString(int64_t value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(uint64_t value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(uint64_t value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(uint64_t value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static String ToString(uint64_t value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(float value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(float value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(float value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static String ToString(float value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(double value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(double value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(double value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static String ToString(double value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(const Decimal& value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(const Decimal& value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(const Decimal& value, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static String ToString(const Decimal& value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to string using the culture-specific format information.
    /// @param value The value to convert.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(DateTime value, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(DateTime value, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(DateTime value, const SharedPtr<Globalization::DateTimeFormatInfo>& dtfi);
    static String ToString(DateTime value, std::nullptr_t) { return ToString(value); }

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(int8_t value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(int8_t value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(int8_t value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(int8_t value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(uint8_t value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(uint8_t value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(uint8_t value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(uint8_t value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(int16_t value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(int16_t value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(int16_t value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(int16_t value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(uint16_t value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(uint16_t value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(uint16_t value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(uint16_t value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(int32_t value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(int32_t value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(int32_t value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(int32_t value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(uint32_t value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(uint32_t value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(uint32_t value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(uint32_t value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(int64_t value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(int64_t value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(int64_t value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(int64_t value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(uint64_t value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(uint64_t value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(uint64_t value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(uint64_t value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(float value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(float value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(float value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(float value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(double value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(double value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(double value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(double value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(const Decimal& value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(const Decimal& value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(const Decimal& value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(const Decimal& value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert.
    /// @param format The string format.
    /// @param provider The IFormatProvider object providing the culture-specific format information.
    /// @returns The string representation of the specified value.
    static ASPOSECPP_SHARED_API String ToString(DateTime value, const String& format, const SharedPtr<IFormatProvider>& provider);
    // Optimized function overloads
    static ASPOSECPP_SHARED_API String ToString(DateTime value, const String& format, const SharedPtr<Globalization::CultureInfo>& culture);
    static ASPOSECPP_SHARED_API String ToString(DateTime value, const String& format, const SharedPtr<Globalization::NumberFormatInfo>& nfi);
    static ASPOSECPP_SHARED_API String ToString(DateTime value, const String& format, std::nullptr_t = nullptr);

    /// Converts the specified value to string.
    /// @param value The value to convert
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(const Guid& value);

    /// Converts the specified value to string using the specified string format.
    /// @param value The value to convert
    /// @param format The string format.
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(const Guid& value, const String& format);

    /// Converts the specified array of unicode characters to string.
    /// @param value The array to convert.
    /// @returns The string representation of the specified array.
    /// @tparam N The size of the array.
    template <size_t N>
    static String ToString(const char_t(&value)[N], std::nullptr_t = nullptr)
    {
        return String(value, N - 1);
    }
    /// Converts the specified array of unicode characters to string using the specified culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The array to convert.
    /// @returns The string representation of the specified array.
    /// @tparam N The size of the array.
    template <size_t N>
    static String ToString(const char_t(&value)[N], const SharedPtr<IFormatProvider>&)
    {
        return String(value, N - 1);
    }
    template <size_t N>
    static String ToString(const char_t(&value)[N], const SharedPtr<Globalization::CultureInfo>&)
    {
        return String(value, N - 1);
    }

    /// Returns the specified value; no conversion is performed.
    static String ToString(const String& value, std::nullptr_t = nullptr)
    {
        return value;
    }
    /// Returns the specified value; no conversion is performed.
    static String ToString(const String& value, const SharedPtr<IFormatProvider>&)
    {
        return value;
    }
    /// Returns the specified value; no conversion is performed.
    static String ToString(const String& value, const SharedPtr<Globalization::CultureInfo>&)
    {
        return value;
    }
    /// Returns the specified value; no conversion is performed.
    static String ToString(const String& value, const SharedPtr<Globalization::NumberFormatInfo>&)
    {
        return value;
    }

    /// Returns the specified value; no conversion is performed.
    static String ToString(char_t value, std::nullptr_t = nullptr)
    {
        return String(value, 1);
    }
    /// Returns the specified value; no conversion is performed.
    static String ToString(char_t value, const SharedPtr<IFormatProvider>&)
    {
        return String(value, 1);
    }
    /// Returns the specified value; no conversion is performed.
    static String ToString(char_t value, const SharedPtr<Globalization::CultureInfo>&)
    {
        return String(value, 1);
    }
    /// Returns the specified value; no conversion is performed.
    static String ToString(char_t value, const String& /*format*/, const SharedPtr<IFormatProvider>&)
    {
        return String(value, 1);
    }
    /// Returns the specified value; no conversion is performed.
    static String ToString(char_t value, const String& /*format*/, const SharedPtr<Globalization::CultureInfo>&)
    {
        return String(value, 1);
    }
    /// Returns the specified value; no conversion is performed.
    static String ToString(char_t value, const String& /*format*/, std::nullptr_t)
    {
        return String(value, 1);
    }

    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static String ToString(bool value, std::nullptr_t = nullptr)
    {
        return value ? Boolean::TrueString : Boolean::FalseString;
    }
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static String ToString(bool value, const SharedPtr<IFormatProvider>&)
    {
        return ToString(value);
    }
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static String ToString(bool value, const SharedPtr<Globalization::CultureInfo>&)
    {
        return ToString(value);
    }
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static String ToString(bool value, const SharedPtr<Globalization::NumberFormatInfo>&)
    {
        return ToString(value);
    }
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static String ToString(bool value, const String&, const SharedPtr<IFormatProvider>&)
    {
        return ToString(value);
    }
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static String ToString(bool value, const String&, const SharedPtr<Globalization::CultureInfo>&)
    {
        return ToString(value);
    }
    /// Converts the specified value to its string representation.
    /// @param value The value to convert.
    /// @returns The string representation of the specified value
    static String ToString(bool value, const String&, std::nullptr_t)
    {
        return ToString(value);
    }

    /// Converts the specified integer value to its string representation in the specified base.
    /// @param value The value to convert
    /// @param to_base The base in which the specified value is to be represented
    /// @returns The string representation of the specified value in the specified base
    static ASPOSECPP_SHARED_API String ToString(int8_t value, int to_base);

    /// Converts the specified integer value to its string representation in the specified base.
    /// @param value The value to convert
    /// @param to_base The base in which the specified value is to be represented
    /// @returns The string representation of the specified value in the specified base
    static ASPOSECPP_SHARED_API String ToString(int16_t value, int to_base);

    /// Converts the specified integer value to its string representation in the specified base.
    /// @param value The value to convert
    /// @param to_base The base in which the specified value is to be represented
    /// @returns The string representation of the specified value in the specified base
    static ASPOSECPP_SHARED_API String ToString(int32_t value, int to_base);

    /// Converts the specified integer value to its string representation in the specified base.
    /// @param value The value to convert
    /// @param to_base The base in which the specified value is to be represented
    /// @returns The string representation of the specified value in the specified base
    static ASPOSECPP_SHARED_API String ToString(int64_t value, int to_base);

    // Helper functions for C#-like integral promotions
    static String ToString(uint8_t value, int to_base) { return ToString(static_cast<int16_t>(value), to_base); }
    static String ToString(uint16_t value, int to_base) { return ToString(static_cast<int32_t>(value), to_base); }
    static String ToString(uint32_t value, int to_base) { return ToString(static_cast<int64_t>(value), to_base); }

    // ---------- Enum Conversions ----------

    template <typename Enum, typename = typename std::enable_if<std::is_enum<Enum>::value>::type>
    static uint8_t ToByte(Enum value)
    {
        return ToByte(static_cast<typename std::underlying_type<Enum>::type>(value));
    }

    template <typename Enum, typename = typename std::enable_if<std::is_enum<Enum>::value>::type>
    static int8_t ToSByte(Enum value)
    {
        return ToSByte(static_cast<typename std::underlying_type<Enum>::type>(value));
    }

    template <typename Enum, typename = typename std::enable_if<std::is_enum<Enum>::value>::type>
    static uint16_t ToUInt16(Enum value)
    {
        return ToUInt16(static_cast<typename std::underlying_type<Enum>::type>(value));
    }

    template <typename Enum, typename = typename std::enable_if<std::is_enum<Enum>::value>::type>
    static int16_t ToInt16(Enum value)
    {
        return ToInt16(static_cast<typename std::underlying_type<Enum>::type>(value));
    }

    template <typename Enum, typename = typename std::enable_if<std::is_enum<Enum>::value>::type>
    static uint32_t ToUInt32(Enum value)
    {
        return ToUInt32(static_cast<typename std::underlying_type<Enum>::type>(value));
    }

    template <typename Enum, typename = typename std::enable_if<std::is_enum<Enum>::value>::type>
    static int32_t ToInt32(Enum value)
    {
        return ToInt32(static_cast<typename std::underlying_type<Enum>::type>(value));
    }

    template <typename Enum, typename = typename std::enable_if<std::is_enum<Enum>::value>::type>
    static uint64_t ToUInt64(Enum value)
    {
        return ToUInt64(static_cast<typename std::underlying_type<Enum>::type>(value));
    }

    template <typename Enum, typename = typename std::enable_if<std::is_enum<Enum>::value>::type>
    static int64_t ToInt64(Enum value)
    {
        return ToInt64(static_cast<typename std::underlying_type<Enum>::type>(value));
    }

    // ---------- Boxed Conversions ----------

    /// Converts the specified boxed value to equivalent boolean value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns An boolean value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API bool ToBoolean(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to equivalent unsigned 8-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns An unsigned 8-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API uint8_t ToByte(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to equivalent 8-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns An 8-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API int8_t ToSByte(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to equivalent unicode character.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns An unicode character equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API char_t ToChar(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to equivalent unsigned 16-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns An unsigned 16-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to equivalent 16-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns A 16-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API int16_t ToInt16(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to equivalent unsigned 32-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns An unsigned 32-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to equivalent 32-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns A 32-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API int ToInt32(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to equivalent unsigned 64-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns An unsigned 64-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to equivalent 64-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns A 64-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API int64_t ToInt64(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to single-precision floating-point value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns A single-precision floating-point value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API float ToSingle(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to double-precision floating-point value. If the type of boxed value is String, the specified string format is used during conversion.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns A double-precision floating-point value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API double ToDouble(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to equivalent Decimal value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns A Decimal value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API Decimal ToDecimal(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to equivalent DateTime value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns A DateTime value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API DateTime ToDateTime(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    /// Converts the specified boxed value to its string representation. If the type of boxed value is String, the specified string format is used during conversion.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param provider The string format to be used if the type of the boxed value is String
    /// @returns A string representing the specified boxed value
    static ASPOSECPP_SHARED_API String ToString(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& provider = nullptr);

    // ---------------------------------------
    /// Returns a TypeCode value representing the type of the specified boxed value.
    /// @param obj The shared pointer to the object boxing the value the type of which is to be returned
    /// @returns The value representing the type of the boxed value
    static ASPOSECPP_SHARED_API TypeCode GetTypeCode(const SharedPtr<Object>& obj);
}; // class Convert

} // namespace System
