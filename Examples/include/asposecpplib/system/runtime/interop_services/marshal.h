#ifndef __Marshal_h__
#define __Marshal_h__

#include <memory.h>
#include <system/exception.h>
#include <fwd.h>
#include <cstdint>

namespace System { namespace Runtime { namespace InteropServices {

    class Marshal
    {
    public:
        //@ORIG: public static void Copy(IntPtr source, byte[] destination, int startIndex, int length);
        template<typename container>
        static void Copy(const IntPtr source, container& destination, int startIndex, int length) {
            memcpy(&destination->data()[0]+startIndex, (const void *)source, length*sizeof(typename container::ValueType));
        }

        template<typename container>
        static void Copy(const void * source, container& destination, int startIndex, int length) {
            memcpy(&destination->data()[0]+startIndex, source, length*sizeof(typename container::ValueType));
        }

        //@ORIG: public static void Copy(char[] source, int startIndex, IntPtr destination, int length);
        template<typename container>
        static void Copy(const container &source, int startIndex, void * destination, int length) {
            memcpy(destination, &source->data()[0]+startIndex, length*sizeof(typename container::ValueType));
        }
        template<typename container>
        static void Copy(const container &source, int startIndex, IntPtr destination, int length) {
            memcpy((void *)destination, &source->data()[0]+startIndex, length*sizeof(typename container::ValueType));
        }

        static void WriteByte(IntPtr ptr, int offset, uint8_t value)
        {
            *((uint8_t*)ptr + offset) = value;
        }

        static void WriteByte(IntPtr ptr, uint8_t value)
        {
            WriteByte(ptr, 0, value);
        }

        static uint8_t ReadByte(IntPtr ptr, int offset = 0)
        {
            return  *((uint8_t*)ptr + offset);
        }

        static int32_t GetHRForException(System::Exception exc)
        {
            return exc.get_HResult();
        }
    };

}}}

#endif
