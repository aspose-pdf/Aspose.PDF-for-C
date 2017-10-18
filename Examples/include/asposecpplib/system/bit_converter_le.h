#ifndef __BitConverterLE_h__
#define __BitConverterLE_h__

#include "system/array.h"
#include "fwd.h"

namespace Mono { namespace Security {

    class BitConverterLE
    {
    private:
        static System::ArrayPtr<uint8_t> GetUShortBytes(const uint8_t *bytes);

        static System::ArrayPtr<uint8_t> GetUIntBytes(const uint8_t *bytes);

        static System::ArrayPtr<uint8_t> GetULongBytes(const uint8_t *bytes);

    public:
        static System::ArrayPtr<uint8_t> GetBytes(bool value);

#ifdef _WIN32
        static System::ArrayPtr<uint8_t> GetBytes(char_t value);
#endif
        static System::ArrayPtr<uint8_t> GetBytes(int16_t value);

        static System::ArrayPtr<uint8_t> GetBytes(int value);

        static System::ArrayPtr<uint8_t> GetBytes(int64_t value);

        static System::ArrayPtr<uint8_t> GetBytes(uint16_t value);

        static System::ArrayPtr<uint8_t> GetBytes(uint32_t value);

        static System::ArrayPtr<uint8_t> GetBytes(uint64_t value);

        static System::ArrayPtr<uint8_t> GetBytes(float value);

        static System::ArrayPtr<uint8_t> GetBytes(double value);

    private:
        static void UShortFromBytes(uint8_t* dst, const System::ArrayPtr<uint8_t> src, int startIndex);

        static void UIntFromBytes(uint8_t *dst, const System::ArrayPtr<uint8_t> src, int startIndex);

        static void ULongFromBytes(uint8_t *dst, const System::ArrayPtr<uint8_t> src, int startIndex);

    public:
        static bool ToBoolean(System::ArrayPtr<uint8_t> value, int startIndex);

        static char_t ToChar(System::ArrayPtr<uint8_t> value, int startIndex);

        static int16_t ToInt16(System::ArrayPtr<uint8_t> value, int startIndex);

        static int ToInt32(System::ArrayPtr<uint8_t> value, int startIndex);

        static int64_t ToInt64(System::ArrayPtr<uint8_t> value, int startIndex);

        static uint16_t ToUInt16(System::ArrayPtr<uint8_t> value, int startIndex);

        static uint32_t ToUInt32(System::ArrayPtr<uint8_t> value, int startIndex);

        static uint64_t ToUInt64(System::ArrayPtr<uint8_t> value, int startIndex);

        static float ToSingle(System::ArrayPtr<uint8_t> value, int startIndex);

        static double ToDouble(System::ArrayPtr<uint8_t> value, int startIndex);
    };

}}


#endif  //#ifndef __BITCONVERTERLE__
