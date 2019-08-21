/// @file system/convert.h
/// Contains declarations of System::Convert class.
#ifndef _aspose_system_convert_h_
#define _aspose_system_convert_h_

#include "system/object.h"
#include "system/shared_ptr.h"
#include "fwd.h"
#include "system/primitive_types.h"
#include "system/math.h"
#include "system/exceptions.h"
#include "system/array.h"
#include "system/decimal.h"
#include "system/date_time.h"
#include "system/globalization/number_style.h"
#include "system/globalization/culture_info.h"
#include "system/iformatprovider.h"
#include "system/guid.h"
#include "system/type_code.h"

#include <bitset>
#include <iostream>
#include <iomanip>
#include <cwctype>
#include <type_traits>

#include "globalization/convert_impl.h"

/// Declares a static method that accepts a value of type @p from as an argument and returns a value of type @p type.
#define ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type, from) \
    static ASPOSECPP_SHARED_API type To##name(from value);

/// Declares several methods such that each of them accepts a value of a primitive type and returns a value of type @p type_. 
#define ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(name, type_) \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, char); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, unsigned char); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, short); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, unsigned short); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, int); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, unsigned int); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, long); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, unsigned long); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, long long); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, unsigned long long); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, float); \
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2(name, type_, double); \
    template <typename Enum, typename = typename std::enable_if<std::is_enum<Enum>::value, int>::type> static type_ To##name(Enum value) \
    { \
        return To##name(static_cast<typename std::underlying_type<Enum>::type>(value)); \
    }


namespace System
{
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
    static ASPOSECPP_SHARED_API SharedPtr<Object> ChangeType(const SharedPtr<Object>& value, const TypeInfo& conversionType);

    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    template<typename T>
    static
    std::enable_if_t<!IsSmartPtr<T>::value, bool>
    IsDBNull(const T&)
    {
        throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
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
    /// @param inArray The array of bytes containing the range of elements to encode
    /// @param offsetIn An index of an element in the input array at which the range to encode begins
    /// @param length The length of the range of elements to encode
    /// @param outArray A constant reference to the output array to which the resulting data is to be put
    /// @param offsetOut An index in the output array at which to start putting the resulting data
    /// @param insertLineBreaks Specifies whether the line break characters are to be inserted in the output array after every 76 base-64 characters
    /// @returns The number of characters written to the output array
    static ASPOSECPP_SHARED_API int ToBase64CharArray(const ArrayPtr<uint8_t>& inArray, int offsetIn, int length, const ArrayPtr<char16_t>& outArray, int offsetOut, bool insertLineBreaks = false);
    
    /// Base-64 encodes elements in the specified byte array and returns the encoded data as a string.
    /// @param inArray The array of bytes to encode
    /// @param insertLineBreaks Specifies whether line break characters are to be inserted in the output string after every 76 base-64 characters
    /// @returns The string containing the base-64 encoded representation of the input array
    static ASPOSECPP_SHARED_API String ToBase64String(const ArrayPtr<uint8_t>& inArray, bool insertLineBreaks = false);

    /// Base-64 encodes a range of elements in the specified byte array and returns the encoded data as a string.
    /// @param inArray The array of bytes containing the range of elements to encode
    /// @param offsetIn An index of an element in the input array at which the range to encode begins
    /// @param length The length of the range of elements to encode
    /// @param insertLineBreaks Specifies whether line break characters are to be inserted in the output string after every 76 base-64 characters
    /// @returns The string containing the base-64 encoded representation of the range of elements of the input array
    static ASPOSECPP_SHARED_API String ToBase64String(const ArrayPtr<uint8_t>& inArray, int offsetIn, int length, bool insertLineBreaks = false);

    /// Base-64 encodes a range of elements in the specified byte array and stores the encoded data as an array of Unicode characters.
    /// @param inArray The array of bytes containing the range of elements to encode
    /// @param offsetIn An index of an element in the input array at which the range to encode begins
    /// @param length The length of the range of elements to encode
    /// @param outArray A constant reference to the output array to which the resulting data is to be put
    /// @param offsetOut An index in the output array at which to start putting the resulting data
    /// @param options Specifies formatting options of base-64 encoded data
    /// @returns The number of characters written to the output array
    static ASPOSECPP_SHARED_API int ToBase64CharArray(const ArrayPtr<uint8_t>& inArray, int offsetIn, int length, const ArrayPtr<char_t>& outArray, int offsetOut, Base64FormattingOptions options);

    /// Base-64 encodes elements in the specified byte array and returns the encoded data as a string.
    /// @param inArray The array of bytes to encode
    /// @param options Specifies formatting options of base-64 encoded data
    /// @returns The string containing the base-64 encoded representation of the input array
    static ASPOSECPP_SHARED_API String ToBase64String(const ArrayPtr<uint8_t>& inArray, Base64FormattingOptions options);

    /// Base-64 encodes a range of elements in the specified byte array and returns the encoded data as a string.
    /// @param inArray The array of bytes containing the range of elements to encode
    /// @param offsetIn An index of an element in the input array at which the range to encode begins
    /// @param length The length of the range of elements to encode
    /// @param options Specifies formatting options of base-64 encoded data
    /// @returns The string containing the base-64 encoded representation of the range of elements of the input array
    static ASPOSECPP_SHARED_API String ToBase64String(const ArrayPtr<uint8_t>& inArray, int offsetIn, int length, Base64FormattingOptions options);

    /// Decodes base-64 encoded data represented as a range in the array of Unicode characters.
    /// @param inArray The array containing the data to decode
    /// @param offset The position in the input array at which the range to decode begins
    /// @param length The length of the range to decode
    /// @returns A byte-array containing the decoded data
    static ASPOSECPP_SHARED_API ArrayPtr<uint8_t> FromBase64CharArray(const ArrayPtr<char_t>& inArray, int offset, int length);

    /// Decodes base-64 encoded data represented as a string.
    /// @param s The string containing the base-64 encoded data to decode
    /// @returns A byte-array containing the decoded data
    static ASPOSECPP_SHARED_API ArrayPtr<uint8_t> FromBase64String(const String& s);

    // ---------- Boolean Conversions ----------

    /// Template method that converts the value of the specified type to the value of bool type.
    /// @param value The value to convert
    /// @returns True if the specified value is not equal to 0, otherwise - false
    /// @tparam T The type of the value to convert 
    template <typename T>
    static bool ToBoolean(T value) { return value != 0; }

    /// Returns the specified bool value.
    /// @param value The value to return
    /// @returns The specified value
    static ASPOSECPP_SHARED_API bool ToBoolean(bool value);

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

    /// Converts the specified value to the value of bool type.
    /// @param value The value to convert
    /// @returns True if the specified value is not equal to 0, otherwise - false
    /// @tparam T The type of the value to convert 
    static ASPOSECPP_SHARED_API bool ToBoolean(const Decimal& value);

    /// The template method that converts the specified instance of SharedPtr<> to the value of bool type.
    /// @param value The value to convert
    /// @returns True if the specified shared pointer value is not a null-pointer, otherwise - false
    /// @tparam U The type of the value pointed to by the specified shared pointer
    template <typename U>
    static bool ToBoolean(const SharedPtr<U>& value) { return value != 0; }

    // ---------- Byte Conversions ----------
    /// Converts the specified string containing the string representation of a number 
    /// to the equivalent unsigned 8-bit integer value by invoking the proper overload 
    /// of Convert::ToByte() method
    /// @param value The string to convert
    /// @param args The arguments passed to the corresponding overload of ToByte() method
    /// @returns The unsigned 8-bit integer value equal to the number represented by the specified string
    /// @tparam Args The types of all arguments passed to the method except the first argument
    template <class... Args>
    static uint8_t ToByteNative(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToByte(value, args...);
    }

    /// Declaration of methods that convert values of primitive types to an unsigned 8-bit integer value.
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Byte, uint8_t);

    /// Converts the specified bool value to the unsigned 8-bit integer value.
    /// @param value The value to convert
    /// @returns 1 if the specified value is true, otherwise - 0
    static ASPOSECPP_SHARED_API uint8_t ToByte(bool value);

    /// Converts the specified Decimal value to the unsigned 8-bit integer value.
    /// @param value The value to convert
    /// @returns The unsigned 8-bit integer value equivalent to the specified Decimal value
    static ASPOSECPP_SHARED_API uint8_t ToByte(const Decimal& value);

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
    /// @param fromBase The base of the number represented by the string
    /// @returns The unsigned 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT8_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value, int fromBase);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 8-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The unsigned 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT8_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value, const SharedPtr<IFormatProvider>& fp);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 8-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The unsigned 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT8_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint8_t ToByte(const String& value, Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    /// Converts the specified string containing the string representation of a number 
    /// to the equivalent 8-bit integer value by invoking the proper overload 
    /// of Convert::SToByte() method
    /// @param value The string to convert
    /// @param args The arguments passed to the corresponding overload of ToSByte() method
    /// @returns The 8-bit integer value equal to the number represented by the specified string
    /// @tparam Args The types of all arguments passed to the method except the first argument
    template <class... Args>
    static int8_t ToSByteNative(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToSByte(value, args...);
    }

    /// Declaration of methods that convert values of primitive types to a 8-bit integer value.
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(SByte, int8_t);

    /// Converts the specified bool value to the 8-bit integer value.
    /// @param value The value to convert
    /// @returns 1 if the specified value is true, otherwise - 0
    static ASPOSECPP_SHARED_API int8_t ToSByte(bool value);

    /// Converts the specified Decimal value to the 8-bit integer value.
    /// @param value The value to convert
    /// @returns The 8-bit integer value equivalent to the specified Decimal value
    static ASPOSECPP_SHARED_API int8_t ToSByte(const Decimal& value);

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
    /// @param fromBase The base of the number represented by the string
    /// @returns The 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT8_MAX or less than INT8_MIN
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value, int fromBase);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 8-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT8_MAX or less than INT8_MIN
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value, const SharedPtr<IFormatProvider>& fp);

    /// Converts the specified string containing the string representation of a number to the equivalent 8-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The unsigned 8-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT8_MAX or is less than INT8_MIN
    static ASPOSECPP_SHARED_API int8_t ToSByte(const String& value, Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    // ---------- Char Conversions ----------

    /// Declaration of methods that convert values of primitive types to a char.
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Char, char_t);

    /// Template method that converts the value of the specified type to the value of char_t type.
    /// @param value The value to convert
    /// @returns Char representation of value passed.
    /// @tparam T The type of the value to convert 
    template <typename T>
    static inline char_t ToChar(T value, const System::SharedPtr<IFormatProvider>&)
    {
        return ToChar(value);
    }

    /// Converts the first and the only character of the specified c-string to a char_t value.
    /// @param value The c-string to convert; it is expected that the c-string be exactly 1 character long.
    /// @returns The first and the only character of the specified c-string if it is exactly 1 characetr long, otherwise - 0
    static char_t ToChar(const char_t* value) { return ToChar(String(value)); }

    /// Converts the first and the only character of the specified string to a char_t value.
    /// @param value The string to convert; it is expected that the string be exactly 1 character long
    /// @returns The first and the only character of the specified string if it is exactly 1 characetr long, otherwise - 0
    static ASPOSECPP_SHARED_API char_t ToChar(const String& value);

    // ---------- Int16 Conversions ----------
    /// Converts the specified string containing the string representation of a number 
    /// to the equivalent 16-bit integer value by invoking the proper overload 
    /// of Convert::ToInt16() method
    /// @param value The string to convert
    /// @param args The arguments passed to the corresponding overload of ToInt16() method
    /// @returns The 16-bit integer value equal to the number represented by the specified string
    /// @tparam Args The types of all arguments passed to the method except the first argument
    template <class... Args>
    static int16_t ToInt16Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToInt16(value, args...);
    }

    /// Declaration of methods that convert values of primitive types to a 16-bit integer value.
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Int16, int16_t);

    /// Converts the specified bool value to the 16-bit integer value.
    /// @param value The value to convert
    /// @returns 1 if the specified value is true, otherwise - 0
    static ASPOSECPP_SHARED_API int16_t ToInt16(bool value);

    /// Converts the specified c-string containing the string representation of a number to the equivalent 16-bit integer value.
    /// @param value The c-string to convert
    /// @returns The 16-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than INT16_MAX or less that INT16_MIN
    static int16_t ToInt16(const char_t* value) { return ToInt16(String(value)); }

    /// Converts the specified Decimal value to the 16-bit integer value.
    /// @param value The value to convert
    /// @returns The 16-bit integer value equivalent to the specified Decimal value
    static ASPOSECPP_SHARED_API int16_t ToInt16(const Decimal &value);

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit integer value.
    /// @param value The string to convert
    /// @returns The 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT16_MAX or less than INT16_MIN
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value);

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent 16-bit integer value.
    /// @param value The string to convert
    /// @param fromBase The base of the number represented by the string
    /// @returns The 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT16_MAX or less than INT16_MIN
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value, int fromBase);

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT16_MAX or less than INT16_MIN
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value, const SharedPtr<IFormatProvider>& fp);

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT16_MAX or is less than INT16_MIN
    static ASPOSECPP_SHARED_API int16_t ToInt16(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    /// Converts the specified string containing the string representation of a number 
    /// to the equivalent unsigned 86-bit integer value by invoking the proper overload 
    /// of Convert::UInt16() method
    /// @param value The string to convert
    /// @param args The arguments passed to the corresponding overload of ToUInt16() method
    /// @returns The unsigned 16-bit integer value equal to the number represented by the specified string
    /// @tparam Args The types of all arguments passed to the method except the first argument
    template <class... Args>
    static uint16_t ToUInt16Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToUInt16(value, args...);
    }

    /// Declaration of methods that convert values of primitive types to an unsigned 16-bit integer value.
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(UInt16, uint16_t);

    /// Converts the specified bool value to the unsigned 16-bit integer value.
    /// @param value The value to convert
    /// @returns 1 if the specified value is true, otherwise - 0
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(bool value);

    /// Converts the specified c-string containing the string representation of a number to the equivalent unsigned 16-bit integer value.
    /// @param value The c-string to convert
    /// @returns The unsigned 16-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than UINT16_MAX or is a negative number
    static uint16_t ToUInt16(const char_t* value) { return ToUInt16(String(value)); }

    /// Converts the specified Decimal value to the unsigned 16-bit integer value.
    /// @param value The value to convert
    /// @returns The unsigned 16-bit integer value equivalent to the specified Decimal value
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const Decimal &value);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 16-bit integer value.
    /// @param value The string to convert
    /// @returns The unsigned 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT16_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value);

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent unsigned 16-bit integer value.
    /// @param value The string to convert
    /// @param fromBase The base of the number represented by the string
    /// @returns The unsigned 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT16_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value, int fromBase);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 16-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The unsigned 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT16_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value, const SharedPtr<IFormatProvider>& fp);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 16-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The unsigned 16-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT16_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    // ---------- Int32 Conversions ----------
    /// Converts the specified string containing the string representation of a number 
    /// to the equivalent 32-bit integer value by invoking the proper overload 
    /// of Convert::ToInt32() method
    /// @param value The string to convert
    /// @param args The arguments passed to the corresponding overload of ToInt32() method
    /// @returns The 32-bit integer value equal to the number represented by the specified string
    /// @tparam Args The types of all arguments passed to the method except the first argument
    template <class... Args>
    static int ToInt32Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToInt32(value, args...);
    }

    /// Declaration of methods that convert values of primitive types to a 32-bit integer value.
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Int32, int);

    /// Converts the specified value to the 32-bit integer value.
    /// @param value The value to convert
    /// @returns A 32-bit integer value equivalent to the specified value
    /// @tparam T The type of the value to convert
    template <typename T>
    static int ToInt32(T value, const SharedPtr<IFormatProvider>&)
    {
        return ToInt32(value);
    }

    /// Converts the specified bool value to the 32-bit integer value.
    /// @param value The value to convert
    /// @returns 1 if the specified value is true, otherwise - 0
    static ASPOSECPP_SHARED_API int ToInt32(bool value);

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

    /// Converts the specified Decimal value to the 32-bit integer value.
    /// @param value The value to convert
    /// @returns The 32-bit integer value equivalent to the specified Decimal value
    static ASPOSECPP_SHARED_API int ToInt32(const Decimal &value);

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent 32-bit integer value.
    /// @param value The string to convert
    /// @param fromBase The base of the number represented by the string
    /// @returns The 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT32_MAX or less than INT32_MIN
    static ASPOSECPP_SHARED_API int ToInt32(const String& value, int fromBase);

    /// Converts the specified string containing the string representation of a number to the equivalent 32-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT32_MAX or less than INT32_MIN
    static ASPOSECPP_SHARED_API int ToInt32(const String& value, const SharedPtr<IFormatProvider>& fp);

    /// Converts the specified string containing the string representation of a number to the equivalent 32-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT32_MAX or is less than INT32_MIN
    static ASPOSECPP_SHARED_API int ToInt32(const String& value, Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    // ---------- UInt32 Conversions ----------
    /// Converts the specified string containing the string representation of a number 
    /// to the equivalent unsigned 32-bit integer value by invoking the proper overload 
    /// of Convert::ToUInt32() method
    /// @param value The string to convert
    /// @param args The arguments passed to the corresponding overload of ToUInt32() method
    /// @returns The unsigned 32-bit integer value equal to the number represented by the specified string
    /// @tparam Args The types of all arguments passed to the method except the first argument
    template <class... Args>
    static uint32_t ToUInt32Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToUInt32(value, args...);
    }

    /// Declaration of methods that convert values of primitive types to an unsigned 32-bit integer value.
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(UInt32, uint32_t);

    /// Converts the specified bool value to the unsigned 32-bit integer value.
    /// @param value The value to convert
    /// @returns 1 if the specified value is true, otherwise - 0
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(bool value);

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
    /// @param fromBase The base of the number represented by the string
    /// @returns The unsigned 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT32_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value, int fromBase);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 32-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The unsigned 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT32_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value, const SharedPtr<IFormatProvider>& fp);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 32-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The unsigned 32-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT32_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    // ---------- TryParse Conversions ----------
    /// Converts the specified string containing the string representation of a number to the equivalent 8-bit integer value.
    /// @param value The string to convert
    /// @param result The reference to a 8-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, int8_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent 8-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @param result The reference to a 8-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, int8_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 8-bit integer value.
    /// @param value The string to convert
    /// @param result The reference to an unsigned 8-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, uint8_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 8-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @param result The reference to an unsigned 8-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, uint8_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent 32-bit integer value.
    /// @param value The string to convert
    /// @param result The reference to a 32-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, int32_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent 32-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @param result The reference to a 32-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, int32_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 32-bit integer value.
    /// @param value The string to convert
    /// @param result The reference to an unsigned 32-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, uint32_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 32-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @param result The reference to an unsigned 32-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, uint32_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit integer value.
    /// @param value The string to convert
    /// @param result The reference to a 16-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, int16_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent 16-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @param result The reference to a 16-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, int16_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 16-bit integer value.
    /// @param value The string to convert
    /// @param result The reference to an unsigned 16-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, uint16_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 16-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @param result The reference to an unsigned 16-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, uint16_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent 64-bit integer value.
    /// @param value The string to convert
    /// @param result The reference to a 64-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, int64_t &result);

    /// Converts the specified string containing the string representation of a number to the equivalent 64-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @param result The reference to a 64-bit integer variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, int64_t &result);

    /// Converts the specified string to a value of bool type.
    /// @param value The string to convert
    /// @param result The reference to a bool variable where the result of the conversion is put; the result is true if the specified string is equal to "True" and false if the specified string is equal to "False"
    /// @returns True if the specified string is equal either to "True" or "False", otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, bool& result);

    /// Converts the specified string containing the string representation of a number to the equivalent Decimal value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @param result An output argument; contains the result of conversion
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp, Decimal &result);

    // ---------- Int64 Conversions ----------
    /// Declaration of methods that convert values of primitive types to a 64-bit integer value.
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Int64, int64_t);

    /// Converts the specified string containing the string representation of a number 
    /// to the equivalent 64-bit integer value by invoking the proper overload 
    /// of Convert::ToInt64() method
    /// @param value The string to convert
    /// @param args The arguments passed to the corresponding overload of ToInt64() method
    /// @returns The 64-bit integer value equal to the number represented by the specified string
    /// @tparam Args The types of all arguments passed to the method except the first argument
    template <class... Args>
    static int64_t ToInt64Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToInt64(value, args...);
    }

    /// Converts the specified bool value to the 64-bit integer value.
    /// @param value The value to convert
    /// @returns 1 if the specified value is true, otherwise - 0
    static ASPOSECPP_SHARED_API int64_t ToInt64(bool value);

    /// Converts the specified c-string containing the string representation of a number to the equivalent 64-bit integer value.
    /// @param value The c-string to convert
    /// @returns The 64-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than INT16_MAX or less that INT64_MIN
    static int64_t ToInt64(const char_t* value) { return ToInt64(String(value)); }

    /// Converts the specified Decimal value to the 64-bit integer value.
    /// @param value The value to convert
    /// @returns The 64-bit integer value equivalent to the specified Decimal value
    static ASPOSECPP_SHARED_API int64_t ToInt64(const Decimal &value);

    /// Converts the specified string containing the string representation of a number to the equivalent 64-bit integer value.
    /// @param value The string to convert
    /// @returns The 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT64_MAX or less than INT64_MIN
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value);

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent 64-bit integer value.
    /// @param value The string to convert
    /// @param fromBase The base of the number represented by the string
    /// @returns The 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT64_MAX or less than INT64_MIN
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value, int fromBase);

    /// Converts the specified string containing the string representation of a number to the equivalent 64-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT64_MAX or less than INT64_MIN
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value, const SharedPtr<IFormatProvider>& fp);

    /// Converts the specified string containing the string representation of a number to the equivalent 64-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than INT64_MAX or is less than INT64_MIN
    static ASPOSECPP_SHARED_API int64_t ToInt64(const String& value, Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    /// Converts the specified string containing the string representation of a number 
    /// to the equivalent unsigned 64-bit integer value by invoking the proper overload 
    /// of Convert::ToUInt64() method
    /// @param value The string to convert
    /// @param args The arguments passed to the corresponding overload of ToUInt64() method
    /// @returns The unsigned 64-bit integer value equal to the number represented by the specified string
    /// @tparam Args The types of all arguments passed to the method except the first argument
    template <class... Args>
    static uint64_t ToUInt64Native(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToUInt64(value, args...);
    }

    /// Declaration of methods that convert values of primitive types to an unsigned 64-bit integer value.
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(UInt64, uint64_t);

    /// Converts the specified bool value to the unsigned 64-bit integer value.
    /// @param value The value to convert
    /// @returns 1 if the specified value is true, otherwise - 0
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(bool value);

    /// Converts the specified c-string containing the string representation of a number to the equivalent unsigned 64-bit integer value.
    /// @param value The c-string to convert
    /// @returns The unsigned 64-bit integer value equal to the number represented by the specified c-string
    /// @throws FormatException If the specified c-string does not represent a number
    /// @throws OverflowException If the number represented by the specified c-string is greater than UINT64_MAX or is a negative number
    static uint64_t ToUInt64(const char_t* value) { return ToUInt64(String(value)); }

    /// Converts the specified string containing the string representation of a number in the specified base to the equivalent unsigned 64-bit integer value.
    /// @param value The string to convert
    /// @param fromBase The base of the number represented by the string
    /// @returns The unsigned 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT64_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value, int fromBase = 10);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 64-bit integer value using the provided formatting information.
    /// @param value The string to convert
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The unsigned 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT64_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value, const SharedPtr<IFormatProvider>& fp);

    /// Converts the specified string containing the string representation of a number to the equivalent unsigned 64-bit integer value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The unsigned 64-bit integer value equal to the number represented by the specified string
    /// @throws FormatException If the specified string does not represent a number
    /// @throws OverflowException If the number represented by the specified string is greater than UINT64_MAX or is a negative number
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const String& value, Globalization::NumberStyles style, SharedPtr<IFormatProvider> fp = nullptr);

    // ---------- Decimal Conversions ----------
    /// Converts the specified string containing the string representation of a number 
    /// to the Decimal object representing equivalent value by invoking the proper overload 
    /// of Convert::ToDecimal() method
    /// @param value The string to convert
    /// @param args The arguments passed to the corresponding overload of ToDecimal() method
    /// @returns An instance of Decimal class representing value equivalent to the number represented by the specified string
    /// @tparam Args The types of all arguments passed to the method except the first argument
    template <class... Args>
    static Decimal ToDecimalNative(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToDecimal(value, args...);
    }

    /// Template method that converts the value of the specified type to the value of Decimal type.
    /// @param value The value to convert
    /// @returns Decimal value equivalent to the specified value
    /// @tparam T The type of the value to convert
    template <typename T>
    static Decimal ToDecimal(T value) { return Decimal(value); }

    /// Converts the specified bool value to the Decimal value.
    /// @param value The value to convert
    /// @returns 1 if the specified value is true, otherwise - 0
    static ASPOSECPP_SHARED_API Decimal ToDecimal(bool value);

    /// Converts the specified c-string containing the string representation of a number to the equivalent Decimal value.
    /// @param value The c-string to convert
    /// @returns The Decimal value equal to the number represented by the specified c-string
    static Decimal ToDecimal(const char_t* value) { return ToDecimal(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent Decimal value.
    /// @param value The string to convert
    /// @returns The Decimal value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API Decimal ToDecimal(const String& value);

    /// Converts the specified string containing the string representation of a number to the equivalent Decimal value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The Decimal value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API Decimal ToDecimal(const String& value, Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    /// Converts the specified string containing the string representation of a number to the equivalent Decimal value using the provided formatting information.
    /// @param value The string to convert
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The Decimal value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API Decimal ToDecimal(const String& value, SharedPtr<System::IFormatProvider> fp);

    /// Converts the specified string containing the string representation of a number to the equivalent Decimal value.
    /// @param value The string to convert
    /// @param result The reference to a Decimal variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, Decimal& result);

    // ---------- Single Conversions ----------
    /// Converts the specified string containing the string representation of a number 
    /// to the equivalent single-precision floating point value by invoking the proper overload 
    /// of Convert::ToSingle() method
    /// @param value The string to convert
    /// @param args The arguments passed to the corresponding overload of ToSingle() method
    /// @returns The single-precision floating point value equal to the number represented by the specified string
    /// @tparam Args The types of all arguments passed to the method except the first argument
    template <class... Args>
    static float ToSingleNative(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToSingle(value, args...);
    }

    /// Declaration of methods that convert values of primitive types to a single-precision floating point value.
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Single, float);

    /// Converts the specified Decimal value to the single-precision floating-point value.
    /// @param value The value to convert
    /// @returns The single-precision floating-point value equivalent to the specified Decimal value
    static ASPOSECPP_SHARED_API float ToSingle(const Decimal& value);

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
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The single-precision floating-point value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API float ToSingle(const String& value, const SharedPtr<IFormatProvider>& fp);

    /// Converts the specified string containing the string representation of a number to the equivalent single-precision floating-point value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The single-precision floating-point value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API float ToSingle(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    /// Converts the specified string containing the string representation of a number to the equivalent single-precision floating-point value.
    /// @param value The string to convert
    /// @param result The reference to a single-precision floating-point variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, float &result);

    /// Converts the specified string containing the string representation of a number to the equivalent single-precision floating-point value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @param result The reference to a single-precision floating-point variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, System::Globalization::NumberStyles style, SharedPtr<IFormatProvider> fp, float &result);

    // ---------- Double Conversions ----------
    /// Converts the specified string containing the string representation of a number 
    /// to the equivalent double-precision floating point value by invoking the proper overload 
    /// of Convert::ToDouble() method
    /// @param value The string to convert
    /// @param args The arguments passed to the corresponding overload of ToDouble() method
    /// @returns The double-precision floating point value equal to the number represented by the specified string
    /// @tparam Args The types of all arguments passed to the method except the first argument
    template <class... Args>
    static double ToDoubleNative(const String& value, Args... args)
    {
        if (value.IsNull()) return 0;
        return ToDouble(value, args...);
    }

    /// Declaration of methods that convert values of primitive types to a double-precision floating point value.
    ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO(Double, double);

    /// Converts the specified Decimal value to the double-precision floating-point value.
    /// @param value The value to convert
    /// @returns The double-precision floating-point value equivalent to the specified Decimal value
    static ASPOSECPP_SHARED_API double ToDouble(const Decimal& value);

    /// Converts the specified c-string containing the string representation of a number to the equivalent double-precision floating-point value.
    /// @param value The c-string to convert
    /// @returns The double-precision floating-point value equal to the number represented by the specified c-string
    static double ToDouble(const char_t* value) { return ToDouble(String(value)); }

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value.
    /// @param value The string to convert
    /// @returns The double-precision floating-point value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API double ToDouble(const String& value);

    //parameter fp can be SharedPtr<CultureInfo>, SharedPtr<NumberFormatInfo>
    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value using the provided formatting information.
    /// @param value The string to convert
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The double-precision floating-point value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API double ToDouble(const String& value, const SharedPtr<IFormatProvider>& fp);

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @returns The double-precision floating-point value equal to the number represented by the specified string
    static ASPOSECPP_SHARED_API double ToDouble(const String& value, System::Globalization::NumberStyles style, const SharedPtr<IFormatProvider>& fp = nullptr);

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value.
    /// @param value The string to convert
    /// @param result The reference to a double-precision floating-point variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, double &result);

    /// Converts the specified string containing the string representation of a number to the equivalent double-precision floating-point value using the provided formatting information and number style.
    /// @param value The string to convert
    /// @param style A bitwise combination of values of NumberStyles enum that specifies the permitted style of the string representation of a number
    /// @param fp A pointer to an object that contains the string format information
    /// @param result The reference to a double-precision floating-point variable where the result of the conversion is put
    /// @returns True if the conversion succeeded, otherwise - false
    static ASPOSECPP_SHARED_API bool TryParse(const String& value, System::Globalization::NumberStyles style, SharedPtr<IFormatProvider> fp, double &result);

    // ---------- String Conversions ----------
    /// Converts the specified value to its string representation using the specified string format 
    /// and culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The value to convert
    /// @param format The string format
    /// @param fp The IFormatProvider object providing the culture-specific format information
    /// @returns The string representation of the specified value
    /// @tparam T The type of the value to convert
    template <typename T>
    static String ToString(T value, const String& format = String::Empty, const SharedPtr<IFormatProvider>& fp = nullptr);
    
    /// Converts the specified array of unicode characters to string using the specified culture-specific format information provided by the specified IFormatProvider object.
    /// @param value The array to convert
    /// @param fp The IFormatProvider object providing the culture-specific format information
    /// @returns The string representation of the specified array
    /// @tparam N The size of the array
    template <size_t N>
    static String ToString(const char_t (&value)[N], const SharedPtr<IFormatProvider>& fp = nullptr)
    {
        return String(value, N - 1);
    }

    /// Converts the specified value to string using the specified string format.
    /// @param value The value to convert
    /// @param fp An object containing the information about the string format
    /// @returns The string representation of the specified value
    /// @tparam T The type of the value to convert
    template <typename T>
    static String ToString(T value, const SharedPtr<IFormatProvider>& fp);

    /// Converts the specified value to string.
    /// @param value The value to convert
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(const DateTime& value);

    /// Converts the specified value to string using the specified string format.
    /// @param value The value to convert
    /// @param fp An object containing the information about the string format
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(const Decimal& value, const SharedPtr<IFormatProvider>& fp = nullptr);

    /// Converts the specified value to string.
    /// @param value The value to convert
    /// @returns The string representation of the specified value
    static ASPOSECPP_SHARED_API String ToString(const Guid& value);

    /// Returns the specified value; no conversion is performed.
    static ASPOSECPP_SHARED_API String ToString(const String& value, const SharedPtr<IFormatProvider>& fp = nullptr);

    /// Converts the specified integer value to its string representation in the specified base.
    /// @param value The value to convert
    /// @param toBase The base in which the specified value is to be represented
    /// @returns The string representation of the specified value in the specified base
    /// @tparam T The typ of the value to convert
    template <typename T>
    static String ToString(T value, int toBase)
    {
        switch (toBase)
        {
            case 2: return stream_converter_bin<T>(value);
            case 8: return stream_converter_octhex<T>(value, true);
            case 10: return ToString<T>(value);
            case 16: return stream_converter_octhex<T>(value, false);
        default: 
            throw ArgumentException(u"Invalid Base");
        }
    }

    // ---------- DateTime Conversions ----------
    /// Converts the specified string to an instance of DateTime class.
    /// @param value The string to convert
    /// @returns An instance of DateTime class representing the date and time information represented by the specified string 
    static ASPOSECPP_SHARED_API DateTime ToDateTime(const String& value);

    // ---------- Boxed Conversions ----------

    /// Converts the specified boxed value to double-precision floating-point value. If the type of boxed value is String, the specified string format is used during conversion.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param fp The string format to be used if the type of the boxed value is String
    /// @returns A double-precision floating-point value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API double ToDouble(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& fp = nullptr);

    /// Converts the specified boxed value to equivalent Decimal value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @returns A Decimal value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API Decimal ToDecimal(const SharedPtr<Object>& obj);

    /// Converts the specified boxed value to single-precision floating-point value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @returns A single-precision floating-point value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API float ToSingle(const SharedPtr<Object>& obj);

    /// Converts the specified boxed value to equivalent 32-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @returns A 32-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API int ToInt32(const SharedPtr<Object>& obj);

    /// Converts the specified boxed value to equivalent unsigned 32-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @returns An unsigned 32-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API uint32_t ToUInt32(const SharedPtr<Object>& obj);

    /// Converts the specified boxed value to equivalent 16-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @returns A 16-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API int16_t ToInt16(const SharedPtr<Object>& obj);

    /// Converts the specified boxed value to equivalent unsigned 16-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @returns An unsigned 16-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API uint16_t ToUInt16(const SharedPtr<Object>& obj);

    /// Converts the specified boxed value to equivalent 64-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @returns A 64-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API int64_t ToInt64(const SharedPtr<Object>& obj);

    /// Converts the specified boxed value to equivalent unsigned 64-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @returns An unsigned 64-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API uint64_t ToUInt64(const SharedPtr<Object>& obj);

    /// Converts the specified boxed value to equivalent unsigned 8-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @returns An unsigned 8-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API uint8_t ToByte(const SharedPtr<Object>& obj);

    /// Converts the specified boxed value to equivalent 8-bit integer value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @returns An 8-bit integer value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API int8_t ToSByte(const SharedPtr<Object>& obj);

    /// Converts the specified boxed value to equivalent DateTime value.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @returns A DateTime value equivalent to the specified boxed value
    static ASPOSECPP_SHARED_API DateTime ToDateTime(const SharedPtr<Object>& obj);

    /// Converts the specified boxed value to its string representation. If the type of boxed value is String, the specified string format is used during conversion.
    /// @param obj The shared pointer to the object boxing the value to convert
    /// @param fp The string format to be used if the type of the boxed value is String
    /// @returns A string representing the specified boxed value
    static ASPOSECPP_SHARED_API String ToString(const SharedPtr<Object>& obj, const SharedPtr<IFormatProvider>& fp = nullptr);

    // ---------------------------------------
    /// Returns a TypeCode value representing the type of the specified boxed value.
    /// @param obj The shared pointer to the object boxing the value the type of which is to be returned
    /// @returns The value representing the type of the boxed value
    static ASPOSECPP_SHARED_API TypeCode GetTypeCode(const SharedPtr<Object>& obj);


    /// Converts the specified int value to its string representation. Specialized implementation to increase performance.
    /// @param value The value to convert
    /// @returns The string representing the specified int value
    static ASPOSECPP_SHARED_API String ToString(int value);

protected:
    /// The string representation of bool value 'true'.
    static const String ASPOSECPP_SHARED_API s_trueString;
    /// The string representation of bool value 'false'.
    static const String ASPOSECPP_SHARED_API s_falseString;

    // base64

    /// Base-64 encodes a sequence of bytes and returns the encoded data as a string.
    /// @param data The pointer to the beginning of the buffer containing the bytes to encode
    /// @param size The number of bytes in the buffer to encode
    /// @param linebreaks Specifies whether the line break characters are to be inserted in the output string after every 76 base-64 characters
    /// @returns The string containing the base-64 encoded bytes from the specified buffer
    static ASPOSECPP_SHARED_API std::string to_base64(const uint8_t* data, size_t size, bool linebreaks);
    
    /// Decodes base-64 encoded data represented as vector of char16_t bytes.
    /// @param first The beginning of range with base-64 encoded data
    /// @param last The ending of range with base-64 encoded data
    /// @param out The output parameter; the decoded bytes are stored in the specified vector
    /// @returns The number of bytes decoded 
    static ASPOSECPP_SHARED_API int32_t from_base64(const char_t * first, const char_t* last, std::vector<uint8_t>& out);

    // numeric
    /// A helper method that performs type conversion.
    /// @param value The value to convert
    /// @returns The value of type @p Target equivalent to the specified value
    /// @tparam Target The target type
    /// @tparam Source The source type
    template <typename Target, typename Source>
    static Target numeric_cast_wrap(Source value);
    
    /// A helper method that converts a single-precision floating point value to a value of type @p Target.
    /// @param value The value to convert
    /// @returns The value of type @p Target equivalent to the specified value
    /// @tparam Target The target type
    template <typename Target>
    static Target numeric_cast_wrap(float value);
    
    /// A helper method that converts a double-precision floating point value to a value of type @p Target.
    /// @param value The value to convert
    /// @returns The value of type @p Target equivalent to the specified value
    /// @tparam Target The target type
    template <typename Target>
    static Target numeric_cast_wrap(double value);

    // numeric cast helper
    /// Helper structs that provides methods that convert a value of type @p Source to equivalent value of type @p Target.
    template<typename Target, typename Source, bool is_enum = std::is_enum<Source>::value>
    struct NumericCastHelper;

    /// Helper structs that provides methods that convert an enumeration value of type @p Source to equivalent value of type @p Target.
    template<typename Target, typename Source>
    struct NumericCastHelper<Target, Source, true>;

    // from string

    /// Converts the string representation of a number in the specified base to 64-bit integer value.
    /// @param value The string to convert
    /// @param fromBase The base in which the number is represented 
    /// @returns A 64-bit integer equivalent to the number represented by the specified string
    static ASPOSECPP_SHARED_API int64_t string_to_int64(const String& value, int fromBase);

    /// Converts the string representation of a number in the specified base to unsigned 64-bit integer value.
    /// @param value The string to convert
    /// @param fromBase The base in which the number is represented 
    /// @returns An unsigned 64-bit integer equivalent to the number represented by the specified string
    static ASPOSECPP_SHARED_API uint64_t string_to_uint64(const String& value, int fromBase);

    // to string
    /// Converts the specified value to a string representation of this value in binary notation.
    /// @param value The value to convert
    /// @param tooct_or_tohex Specifies if the value has to be represented in octal (true) or hexadecimal notation (false).
    /// @param len The length of resulting string; all non-significant positions in the resulting string representation of a number 
    /// are filled with zeroes.
    /// @returns A string reprsentation of the specified value in the specified notation.
    /// @tparam Source The type of the value to convert
    template <typename Source>
    static String stream_converter_octhex(Source value, bool tooct_or_tohex, int len = 0)
    {
        std::wstringstream ss;
        ss << (tooct_or_tohex ? std::oct : std::hex);
        if (len > 0)
        {
            ss << std::setfill(L'0');
            ss << std::setw(len);
        }
        ss << value;
        return String(ss.str());
    }
    
    /// Converts the specified value to a string representation of this value in binary notation.
    /// @param value The value to convert
    /// @returns A string reprsentation of the specified value in binary notation.
    /// @tparam Source The type of the value to convert
    template <typename Source>
    static String stream_converter_bin(Source value)
    {
        std::u16string rv;
        for (int i = static_cast<int>(sizeof(Source)) - 1; i >= 0; --i)
        {
            uint8_t b = *(reinterpret_cast<uint8_t*>(&value) + i);
            for (int j = 0; j < 8; j++)
            {
                if ((b & 0x80) == 0x80)
                    rv += u'1';
                else if (rv.size() > 0)
                    rv += u'0';

                b <<= 1;
            }
        }

        return String(rv);
    }

}; // class Convert


#undef ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO_2
#undef ASPOSE_SYSTEM_CONVERT_DECLARE_STATIC_TO


/// Implementation.
template <typename T>
inline String Convert::ToString(T value, const String& format, const SharedPtr<IFormatProvider>& fp)
{
    return System::Globalization::Details::ToString(value, format, fp);
}

/// Implementation.
template <typename T>
inline String Convert::ToString(T value, const SharedPtr<IFormatProvider>& fp)
{
    return System::Globalization::Details::ToString(value, String::Empty, fp);
}

/// Implementation of the specialization for char_t as the type of the value to convert.
template <>
inline String Convert::ToString<char_t>(char_t value, const String& format, const SharedPtr<IFormatProvider>& provider)
{
    return String(value, 1);
}

/// Implementation of the specialization for char_t as the type of the value to convert.
template <>
inline String Convert::ToString<char_t>(char_t value, const SharedPtr<IFormatProvider>& provider)
{
    return String(value, 1);
}

/// Implementation of the specialization for bool as the type of the value to convert.
template <>
inline String Convert::ToString<bool>(bool value, const String& format, const SharedPtr<IFormatProvider>& provider)
{
    return value ? s_trueString : s_falseString;
}

/// Implementation of the specialization for bool as the type of the value to convert.
template <>
inline String Convert::ToString<bool>(bool value, const SharedPtr<IFormatProvider>& provider)
{
    return value ? s_trueString : s_falseString;
}

/// Implementation of the specialization for DateTime as the type of the value to convert.
template <>
inline String Convert::ToString<DateTime>(DateTime value, const System::SharedPtr<System::IFormatProvider>& provider)
{
    return value.ToString(provider);
}

/// Implementation of the specialization for DateTime as the type of the value to convert.
template <>
inline String Convert::ToString<DateTime>(DateTime value, const System::String& format, const System::SharedPtr<System::IFormatProvider>& provider)
{
    return value.ToString(format, provider);
}

} // namespace System

#endif // _aspose_system_convert_h_
