/// @file system/bit_converter.h
/// Contains declaration of System::BitConverter class.
#ifndef __BitConverter_h__
#define __BitConverter_h__

#include "system/string.h"
#include "system/array.h"
#include "fwd.h"

namespace System {

    /// Contains methods that perform conversions of sequence of bytes to a value type and vice-versa.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    class BitConverter
    {
    private:
        /// Reads the first 2 bytes from the specified buffer and puts them into newly created Array object in the same order
        /// (if the endianness of the current system is 'little endian') or in reverse order (if the endianness of the current system is 'big endian').
        /// @param bytes A pointer to the beginnig of the buffer from which the bytes are read
        /// @returns A new Array object representing an array containing the two bytes read from the specified buffer
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetUShortBytes(const uint8_t *bytes);
        /// Reads the first 4 bytes from the specified buffer and puts them into newly created Array object in the same order
        /// (if the endianness of the current system is 'little endian') or in reverse order (if the endianness of the current system is 'big endian').
        /// @param bytes A pointer to the beginnig of the buffer from which the bytes are read
        /// @returns A new Array object representing an array containing the two bytes read from the specified buffer
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetUIntBytes(const uint8_t *bytes);
        /// Reads the first 8 bytes from the specified buffer and puts them into newly created Array object in the same order
        /// (if the endianness of the current system is 'little endian') or in reverse order (if the endianness of the current system is 'big endian').
        /// @param bytes A pointer to the beginnig of the buffer from which the bytes are read
        /// @returns A new Array object representing an array containing the two bytes read from the specified buffer
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetULongBytes(const uint8_t *bytes);

    public:
        /// Indicates the endianness of the current architecture.
        /// @returns true if the architecture is little endian, false otherwise
        static ASPOSECPP_SHARED_API bool _IsLittleEndian();

        /// Indicates the endianness of the current architecture.
        /// true if the architecture is little endian, false otherwise
        static const ASPOSECPP_SHARED_API bool IsLittleEndian;

        /// Converts the specified boolean value into an array of bytes.
        /// @param value A boolean value to convert
        /// @returns 1-byte array representing specified value
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(bool value);

        /// Converts the specified char_t value into an array of bytes.
        /// @param value A char_t value to convert
        /// @returns 2-byte array representing specified value
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(char_t value);

        /// Converts the specified 16-bit integer value into an array of bytes.
        /// @param value A 16-bit integer value to convert
        /// @returns 2-byte array representing specified value
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(int16_t value);

        /// Converts the specified 32-bit integer value into an array of bytes.
        /// @param value A 32-bit integer value to convert
        /// @returns 4-byte array representing specified value
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(int value);

        /// Converts the specified 64-bit integer value into an array of bytes.
        /// @param value A 64-bit integer value to convert
        /// @returns 8-byte array representing specified value
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(int64_t value);

        /// Converts the specified unsigned 16-bit integer value into an array of bytes.
        /// @param value An unsigned 16-bit integer value to convert
        /// @returns 2-byte array representing specified value
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(uint16_t value);

        /// Converts the specified unsigned 32-bit integer value into an array of bytes.
        /// @param value An unsigned 32-bit integer value to convert
        /// @returns 4-byte array representing specified value
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(uint32_t value);

        /// Converts the specified unsigned 64-bit integer value into an array of bytes.
        /// @param value An unsigned 64-bit integer value to convert
        /// @returns 8-byte array representing specified value
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(uint64_t value);

        /// Converts the specified single-precision floating-point value into an array of bytes.
        /// @param value A floating-point value to convert
        /// @returns 4-byte array representing specified value
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(float value);

        /// Converts the specified double-precision floating-point value into an array of bytes.
        /// @param value A floating-point value to convert
        /// @returns 8-byte array representing specified value
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(double value);

    private:
        /// Reads 2 consequent elements from the specified byte array starting from the specified index
        /// and writes them to the specified buffer in direct order (if the endianness of the
        /// current system is 'little endian') or in reverse order (if the endianness of the
        /// current system is 'big endian').
        /// @param dst The destination buffer
        /// @param src The byte array from which the elements are read
        /// @param startIndex The index from which reading from the array begins
        static void UShortFromBytes(uint8_t* dst, const System::ArrayPtr<uint8_t>& src, int startIndex);
        /// Reads 4 consequent elements from the specified byte array starting from the specified index
        /// and writes them to the specified buffer in direct order (if the endianness of the
        /// current system is 'little endian') or in reverse order (if the endianness of the
        /// current system is 'big endian').
        /// @param dst The destination buffer
        /// @param src The byte array from which the elements are read
        /// @param startIndex The index from which reading from the array begins
        static void UIntFromBytes(uint8_t *dst, const System::ArrayPtr<uint8_t>& src, int startIndex);
        /// Reads 8 consequent elements from the specified byte array starting from the specified index
        /// and writes them to the specified buffer in direct order (if the endianness of the
        /// current system is 'little endian') or in reverse order (if the endianness of the
        /// current system is 'big endian').
        /// @param dst The destination buffer
        /// @param src The byte array from which the elements are read
        /// @param startIndex The index from which reading from the array begins
        static void ULongFromBytes(uint8_t *dst, const System::ArrayPtr<uint8_t>& src, int startIndex);

    public:
        /// Converts one byte from the specified array starting at the specified index to boolean value
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the array at which to start taking bytes for conversion
        /// @returns Boolean value resulting from conversion
        static ASPOSECPP_SHARED_API bool ToBoolean(const System::ArrayPtr<uint8_t>& value, int startIndex);

        /// Converts two bytes from the specified array starting at the specified index to char_t value
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the array at which to start taking bytes for conversion
        /// @returns char_t value resulting from conversion
        static ASPOSECPP_SHARED_API char_t ToChar(const System::ArrayPtr<uint8_t>& value, int startIndex);

        /// Converts two bytes from the specified array starting at the specified index to 16-bit integer value
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the array at which to start taking bytes for conversion
        /// @returns 16-bit integer value resulting from conversion
        static ASPOSECPP_SHARED_API int16_t ToInt16(const System::ArrayPtr<uint8_t>& value, int startIndex);

        /// Converts four bytes from the specified array starting at the specified index to 32-bit integer value
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the array at which to start taking bytes for conversion
        /// @returns 32-bit integer value resulting from conversion
        static ASPOSECPP_SHARED_API int ToInt32(const System::ArrayPtr<uint8_t>& value, int startIndex);

        /// Converts eight bytes from the specified array starting at the specified index to 64-bit integer value
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the array at which to start taking bytes for conversion
        /// @returns 64-bit integer value resulting from conversion
        static ASPOSECPP_SHARED_API int64_t ToInt64(const System::ArrayPtr<uint8_t>& value, int startIndex);

        /// Converts two bytes from the specified array starting at the specified index to unsigned 16-bit integer value
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the array at which to start taking bytes for conversion
        /// @returns Unsigned 16-bit integer value resulting from conversion
        static ASPOSECPP_SHARED_API uint16_t ToUInt16(const System::ArrayPtr<uint8_t>& value, int startIndex);

        /// Converts four bytes from the specified array starting at the specified index to unsigned 32-bit integer value
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the array at which to start taking bytes for conversion
        /// @returns Unsigned 32-bit integer value resulting from conversion
        static ASPOSECPP_SHARED_API uint32_t ToUInt32(const System::ArrayPtr<uint8_t>& value, int startIndex);

        /// Converts eight bytes from the specified array starting at the specified index to unsigned 64-bit integer value
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the array at which to start taking bytes for conversion
        /// @returns Unsigned 64-bit integer value resulting from conversion
        static ASPOSECPP_SHARED_API uint64_t ToUInt64(const System::ArrayPtr<uint8_t>& value, int startIndex);

        /// Converts four bytes from the specified array starting at the specified index to single-precision floating point value
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the array at which to start taking bytes for conversion
        /// @returns Single-precision floating-point value resulting from conversion
        static ASPOSECPP_SHARED_API float ToSingle(const System::ArrayPtr<uint8_t>& value, int startIndex);

        /// Converts eight bytes from the specified array starting at the specified index to double-precision floating point value
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the array at which to start taking bytes for conversion
        /// @returns Double-precision floating-point value resulting from conversion
        static ASPOSECPP_SHARED_API double ToDouble(const System::ArrayPtr<uint8_t>& value, int startIndex);

        /// Converts all values of the specified byte array into their hexadecimal string representation. Case of letters to use in hexadecimal notation and
        /// separator inserted between each pair of neighbouring bytes are specified through corresponding arguments.
        /// @param value Array that contains bytes to convert
        /// @param upercase Specifies the case of letters to use in resulting hexadecimal representation
        /// @param separator A string used as a separator inserted between each pair of neighbouring bytes in the resulting string
        /// @returns String containing hexadecimal representation of the specified byte array
        static ASPOSECPP_SHARED_API String ToString(const ArrayPtr<uint8_t>& value, bool upercase = true, const String& separator = u"-");

        /// Converts values of the specified byte array into their hexadecimal string representation starting at specified index.
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the specified array at which to start converting
        /// @returns String containing hexadecimal representation of the specified range of elements of the specified array
        static ASPOSECPP_SHARED_API String ToString(const ArrayPtr<uint8_t>& value, int startIndex);

        /// Converts a range of values of the specified byte array into their hexadecimal string representation.
        /// @param value Array that contains bytes to convert
        /// @param startIndex Index in the specified array at which the range of the byte array elements to corvert begins
        /// @param length The length of the range the byte array elements to convert
        /// @returns String containing hexadecimal representation of the specified range of elements of the specified array
        static ASPOSECPP_SHARED_API String ToString(const ArrayPtr<uint8_t>& value, int startIndex, int length);

        /// Returns a 64-bit integer value whose binary representation is equal to binary representation of the specified
        /// double-precision floating point value.
        /// @param value The double-precision floating point value
        /// @returns 64-bit integer value whose binary representation is equal to that of the specified value
        static ASPOSECPP_SHARED_API int64_t DoubleToInt64Bits(double value);

        /// Returns a double-precision floating point value whose value is equivalent to value
        /// @param value 64-bit integer value whose binary representation is equal to that of the specified value
        /// @returns The double-precision floating point value
        static ASPOSECPP_SHARED_API double Int64BitsToDouble(int64_t value);
    };

}

#endif
