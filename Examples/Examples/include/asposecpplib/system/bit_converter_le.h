/// @file system/bit_converter_le.h
#ifndef __BitConverterLE_h__
#define __BitConverterLE_h__

#include "system/array.h"
#include "fwd.h"

namespace Mono { namespace Security {

    /// Bit converter implementation that works with little endian representation.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    class BitConverterLE
    {
    private:
        /// Reads bytes of 2 bytes long integer.
        /// @param bytes Bytes to read.
        /// @return Array with bytes read.
        static System::ArrayPtr<uint8_t> GetUShortBytes(const uint8_t *bytes);
        /// Reads bytes of 4 bytes long integer.
        /// @param bytes Bytes to read.
        /// @return Array with bytes read.
        static System::ArrayPtr<uint8_t> GetUIntBytes(const uint8_t *bytes);
        /// Reads bytes of 4 bytes long integer.
        /// @param bytes Bytes to read.
        /// @return Array with bytes read.
        static System::ArrayPtr<uint8_t> GetULongBytes(const uint8_t *bytes);

    public:
        /// Gets byte representation of boolean.
        /// @param value Value to get bytes from.
        /// @return Array containing bytes of @p value.
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(bool value);
        /// Gets byte representation of char.
        /// @param value Value to get bytes from.
        /// @return Array containing bytes of @p value.
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(char_t value);
        /// Gets byte representation of short int.
        /// @param value Value to get bytes from.
        /// @return Array containing bytes of @p value.
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(int16_t value);
        /// Gets byte representation of integer.
        /// @param value Value to get bytes from.
        /// @return Array containing bytes of @p value.
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(int value);
        /// Gets byte representation of long long.
        /// @param value Value to get bytes from.
        /// @return Array containing bytes of @p value.
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(int64_t value);
        /// Gets byte representation of unsigned short.
        /// @param value Value to get bytes from.
        /// @return Array containing bytes of @p value.
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(uint16_t value);
        /// Gets byte representation of unsigned integer.
        /// @param value Value to get bytes from.
        /// @return Array containing bytes of @p value.
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(uint32_t value);
        /// Gets byte representation of unsigned long long.
        /// @param value Value to get bytes from.
        /// @return Array containing bytes of @p value.
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(uint64_t value);
        /// Gets byte representation of single precision float.
        /// @param value Value to get bytes from.
        /// @return Array containing bytes of @p value.
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(float value);
        /// Gets byte representation of double precision float.
        /// @param value Value to get bytes from.
        /// @return Array containing bytes of @p value.
        static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetBytes(double value);

    private:
        /// Converts byte representation to short.
        /// @param dst Destination variable pointer.
        /// @param src Source array.
        /// @param startIndex Index in source array.
        static void UShortFromBytes(uint8_t* dst, const System::ArrayPtr<uint8_t>& src, int startIndex);
        /// Converts byte representation to integer.
        /// @param dst Destination variable pointer.
        /// @param src Source array.
        /// @param startIndex Index in source array.
        static void UIntFromBytes(uint8_t *dst, const System::ArrayPtr<uint8_t>& src, int startIndex);
        /// Converts byte representation to long long.
        /// @param dst Destination variable pointer.
        /// @param src Source array.
        /// @param startIndex Index in source array.
        static void ULongFromBytes(uint8_t *dst, const System::ArrayPtr<uint8_t>& src, int startIndex);

    public:
        /// Converts byte representation to boolean.
        /// @param value Input bytes array.
        /// @param startIndex Start index in input array.
        /// @return Converted value.
        static ASPOSECPP_SHARED_API bool ToBoolean(const System::ArrayPtr<uint8_t>& value, int startIndex);
        /// Converts byte representation to char.
        /// @param value Input bytes array.
        /// @param startIndex Start index in input array.
        /// @return Converted value.
        static ASPOSECPP_SHARED_API char_t ToChar(const System::ArrayPtr<uint8_t>& value, int startIndex);
        /// Converts byte representation to short.
        /// @param value Input bytes array.
        /// @param startIndex Start index in input array.
        /// @return Converted value.
        static ASPOSECPP_SHARED_API int16_t ToInt16(const System::ArrayPtr<uint8_t>& value, int startIndex);
        /// Converts byte representation to integer.
        /// @param value Input bytes array.
        /// @param startIndex Start index in input array.
        /// @return Converted value.
        static ASPOSECPP_SHARED_API int ToInt32(const System::ArrayPtr<uint8_t>& value, int startIndex);
        /// Converts byte representation to long long.
        /// @param value Input bytes array.
        /// @param startIndex Start index in input array.
        /// @return Converted value.
        static ASPOSECPP_SHARED_API int64_t ToInt64(const System::ArrayPtr<uint8_t>& value, int startIndex);
        /// Converts byte representation to unsigned short.
        /// @param value Input bytes array.
        /// @param startIndex Start index in input array.
        /// @return Converted value.
        static ASPOSECPP_SHARED_API uint16_t ToUInt16(const System::ArrayPtr<uint8_t>& value, int startIndex);
        /// Converts byte representation to unsigned integer.
        /// @param value Input bytes array.
        /// @param startIndex Start index in input array.
        /// @return Converted value.
        static ASPOSECPP_SHARED_API uint32_t ToUInt32(const System::ArrayPtr<uint8_t>& value, int startIndex);
        /// Converts byte representation to unsigned long long.
        /// @param value Input bytes array.
        /// @param startIndex Start index in input array.
        /// @return Converted value.
        static ASPOSECPP_SHARED_API uint64_t ToUInt64(const System::ArrayPtr<uint8_t>& value, int startIndex);
        /// Converts byte representation to single precision float.
        /// @param value Input bytes array.
        /// @param startIndex Start index in input array.
        /// @return Converted value.
        static ASPOSECPP_SHARED_API float ToSingle(const System::ArrayPtr<uint8_t>& value, int startIndex);
        /// Converts byte representation to double precision float.
        /// @param value Input bytes array.
        /// @param startIndex Start index in input array.
        /// @return Converted value.
        static ASPOSECPP_SHARED_API double ToDouble(const System::ArrayPtr<uint8_t>& value, int startIndex);
    };

}}


#endif  //#ifndef __BITCONVERTERLE__
