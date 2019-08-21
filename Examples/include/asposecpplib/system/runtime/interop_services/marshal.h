/// @file system/runtime/interop_services/marshal.h
#ifndef __aspose_system_marshal_h__
#define __aspose_system_marshal_h__

#include <memory.h>
#include <system/exception.h>
#include <fwd.h>
#include <cstdint>

namespace System { namespace Security { class SecureString; }}

namespace System { namespace Runtime { namespace InteropServices {

/// Provides marshalling implementation.
/// For compatibility with ported code only, as no managed code is supported on C++ side.
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
class Marshal
{
public:
    /// Implements public static void Copy(IntPtr source, byte[] destination, int startIndex, int length) semantics.
    /// @tparam container Destination container type.
    /// @param source Source data pointer.
    /// @param destination Container to copy data into.
    /// @param startIndex Source start index.
    /// @param length Number of elements to copy.
    template<typename container>
    static void Copy(const IntPtr source, container& destination, int startIndex, int length) {
        memcpy(&destination->data()[0]+startIndex, (const void *)source, length*sizeof(typename container::ValueType));
    }
    /// Implements public static void Copy(IntPtr source, byte[] destination, int startIndex, int length) semantics.
    /// @tparam container Destination container type.
    /// @param source Source data pointer.
    /// @param destination Container to copy data into.
    /// @param startIndex Source start index.
    /// @param length Number of elements to copy.
    template<typename container>
    static void Copy(const void * source, container& destination, int startIndex, int length) {
        memcpy(&destination->data()[0]+startIndex, source, length*sizeof(typename container::ValueType));
    }

    /// Implements public static void Copy(char[] source, int startIndex, IntPtr destination, int length).
    /// @tparam container Source container type.
    /// @param source Source data pointer.
    /// @param startIndex Source start index.
    /// @param destination Destination data pointer.
    /// @param length Number of elements to copy.
    template<typename container>
    static void Copy(const container &source, int startIndex, void * destination, int length) {
        memcpy(destination, &source->data()[0]+startIndex, length*sizeof(typename container::ValueType));
    }
    /// Implements public static void Copy(char[] source, int startIndex, IntPtr destination, int length).
    /// @tparam container Source container type.
    /// @param source Source data pointer.
    /// @param startIndex Source start index.
    /// @param destination Destination data pointer.
    /// @param length Number of elements to copy.
    template<typename container>
    static void Copy(const container &source, int startIndex, IntPtr destination, int length) {
        memcpy((void *)destination, &source->data()[0]+startIndex, length*sizeof(typename container::ValueType));
    }

    /// Writes byte to memory.
    /// @param ptr Memory buffer.
    /// @param offset Offset to memory buffer.
    /// @param value to write.
    static void WriteByte(IntPtr ptr, int offset, uint8_t value)
    {
        *((uint8_t*)ptr + offset) = value;
    }
    /// Writes byte to memory.
    /// @param ptr Memory buffer.
    /// @param value to write.
    static void WriteByte(IntPtr ptr, uint8_t value)
    {
        WriteByte(ptr, 0, value);
    }

    /// Writes short to memory.
    /// @param ptr Memory buffer.
    /// @param offset Offset to memory buffer.
    /// @param value to write.
    static void WriteInt16(IntPtr ptr, int offset, int16_t value)
    {
        *((int16_t*)((uint8_t*)ptr + offset)) = value;
    }

    /// Writes int to memory.
    /// @param ptr Memory buffer.
    /// @param offset Offset to memory buffer.
    /// @param value to write.
    static void WriteInt32(IntPtr ptr, int offset, int32_t value)
    {
        *((int32_t*)((uint8_t*)ptr + offset)) = value;
    }

    /// Writes long to memory.
    /// @param ptr Memory buffer.
    /// @param offset Offset to memory buffer.
    /// @param value to write.
    static void WriteInt64(IntPtr ptr, int offset, int64_t value)
    {
        *((int64_t*)((uint8_t*)ptr + offset)) = value;
    }

    /// Reads byte from memory.
    /// @param ptr Memory buffer.
    /// @param offset Offset to memory buffer.
    /// @return Read value.
    static uint8_t ReadByte(IntPtr ptr, int offset = 0)
    {
        return  *((uint8_t*)ptr + offset);
    }
    /// Reads short from memory.
    /// @param ptr Memory buffer.
    /// @param offset Offset to memory buffer.
    /// @return Read value.
    static int16_t ReadInt16(IntPtr ptr, int offset = 0)
    {
        return  *((int16_t*)((uint8_t*)ptr + offset));
    }
    /// Reads int from memory.
    /// @param ptr Memory buffer.
    /// @param offset Offset to memory buffer.
    /// @return Read value.
    static int32_t ReadInt32(IntPtr ptr, int offset = 0)
    {
        return  *((int32_t*)((uint8_t*)ptr + offset));
    }
        
    /// Gets HResult from exception.
    /// @param exc Exception to get HResult for.
    /// @return HResult value.
    static int32_t GetHRForException(System::Exception exc)
    {
        return exc.get_HResult();
    }

    /// Copies contents of specified secure string into unmanaged memory, converting into ANSI format.
    /// @param s Secure string.
    /// @return The address in unmanaged memory.
    static ASPOSECPP_SHARED_API IntPtr SecureStringToGlobalAllocAnsi(const SharedPtr<Security::SecureString>& s);

    /// Copies contents of specified secure string into unmanaged memory.
    /// @param s Secure string.
    /// @return The address in unmanaged memory.
    static ASPOSECPP_SHARED_API IntPtr SecureStringToGlobalAllocUnicode(const SharedPtr<Security::SecureString>& s);

    /// Allocates unmanaged memory.
    /// @param bytes_count Required number of bytes.
    /// @return Pointer to the allocated memory.
    static ASPOSECPP_SHARED_API IntPtr AllocHGlobal(int32_t bytes_count);

    /// Allocates unmanaged memory.
    /// @param bytes_count Required number of bytes.
    /// @return Pointer to the allocated memory.
    static ASPOSECPP_SHARED_API IntPtr AllocHGlobal(IntPtr bytes_count);

    /// Frees unmanaged memory.
    /// @param address Pointer to the allocated memory.
    static ASPOSECPP_SHARED_API void FreeHGlobal(IntPtr address);

    /// Frees unmanaged string pointer that was allocated using the SecureStringToGlobalAllocAnsi method.
    /// @param s Pointer to the unmanaged string.
    static ASPOSECPP_SHARED_API void ZeroFreeGlobalAllocAnsi(IntPtr s);

    /// Frees unmanaged string pointer that was allocated using the SecureStringToGlobalAllocUnicode method.
    /// @param s Pointer to the unmanaged string.
    static ASPOSECPP_SHARED_API void ZeroFreeGlobalAllocUnicode(IntPtr s);

    /// Copies the contents of a specified string into unmanaged memory.
    /// @param s A string to be copied.
    /// @return The address, in unmanaged memory.
    static ASPOSECPP_SHARED_API IntPtr StringToHGlobalAnsi(const String& s);

    /// Copies the contents of a specified string into unmanaged memory.
    /// @param s A string to be copied.
    /// @return The address, in unmanaged memory.
    static ASPOSECPP_SHARED_API IntPtr StringToHGlobalUni(const String& s);

    /// Copies the contents of a specified string into unmanaged memory, converting to ANSI format if required.
    /// @param s A string to be copied.
    /// @return The address, in unmanaged memory.
    static ASPOSECPP_SHARED_API IntPtr StringToHGlobalAuto(const String& s);

    /// Creates a managed String from an unmanaged zero-terminated UTF8-string.
    /// @param ptr Pointer to the unmanaged string.
    /// @return A managed string.
    static ASPOSECPP_SHARED_API String PtrToStringAnsi(IntPtr ptr);

    /// Creates a managed String from an unmanaged UTF8-string.
    /// @param ptr Pointer to the unmanaged string.
    /// @param length Length of the unmanaged string.
    /// @return A managed string.
    static ASPOSECPP_SHARED_API String PtrToStringAnsi(IntPtr ptr, int length);

    /// Creates a managed String from an unmanaged zero-terminated string.
    /// @param ptr Pointer to the unmanaged string.
    /// @return A managed string.
    static ASPOSECPP_SHARED_API String PtrToStringAuto(IntPtr ptr);

    /// Creates a managed String from an unmanaged string.
    /// @param ptr Pointer to the unmanaged string.
    /// @param length Length of the unmanaged string.
    /// @return A managed string.
    static ASPOSECPP_SHARED_API String PtrToStringAuto(IntPtr ptr, int length);

    /// Creates a managed String from an unmanaged zero-terminated unicode string.
    /// @param ptr Pointer to the unmanaged string.
    /// @return A managed string.
    static ASPOSECPP_SHARED_API String PtrToStringUni(IntPtr ptr);

    /// Creates a managed String from an unmanaged unicode string.
    /// @param ptr Pointer to the unmanaged string.
    /// @param length Length of the unmanaged string.
    /// @return A managed string.
    static ASPOSECPP_SHARED_API String PtrToStringUni(IntPtr ptr, int length);

    /// Creates a managed String from an unmanaged zero-terminated UTF8-string.
    /// @param ptr Pointer to the unmanaged string.
    /// @return A managed string.
    static ASPOSECPP_SHARED_API String PtrToStringUTF8(IntPtr ptr);

    /// Creates a managed String from an unmanaged UTF8-string.
    /// @param ptr Pointer to the unmanaged string.
    /// @param length Length of the unmanaged string.
    /// @return A managed string.
    static ASPOSECPP_SHARED_API String PtrToStringUTF8(IntPtr ptr, int length);
};

}}} // namespace System::Runtime::InteropServices

#endif
