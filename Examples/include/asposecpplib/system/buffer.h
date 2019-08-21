/// @file system/buffer.h
/// Contains declaration of System::Buffer class.
#ifndef _aspose_system_buffer_h_
#define _aspose_system_buffer_h_

#include "fwd.h"
#include "system/array.h"
#include "system/exceptions.h"

namespace System {

    /// Contains methods that manipulate raw byte arrays.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    class Buffer
    {
    public:

        /// Copies a specified number of bytes from source buffer to destination buffer.
        /// @param src Pointer to the source buffer
        /// @param srcOffset A byte offset in source buffer at which copying starts
        /// @param dst Pointer to the destination buffer
        /// @param dstOffset A byte offset in the destination buffer at which to start inserting data
        /// @param count The number of bytes to copy
        static ASPOSECPP_SHARED_API void BlockCopy(const uint8_t* src, int srcOffset, uint8_t* dst, int dstOffset, int count);

        /// Interprets two specified typed arrays as raw arrays of bytes and copies data from one of them to another. 
        /// @param src The source array
        /// @param srcOffset A byte offset in the tho source array at which copying starts
        /// @param dst Pointer to the destination buffer
        /// @param dstOffset A byte offset in the destination array at which to start inserting data
        /// @param count The number of bytes to copy
        /// @tparam TSrc The type of elements of the source array
        /// @tparam TDst The type of elements of the destination array
        template<typename TSrc, typename TDst>
        static void BlockCopy(const SharedPtr<Array<TSrc>>& src, int srcOffset, const SharedPtr<Array<TDst>>& dst, int dstOffset, int count)
        {
            static_assert(std::is_pod<TSrc>::value, "BlockCopy template argument must be a POD type.");
            static_assert(std::is_pod<TDst>::value, "BlockCopy template argument must be a POD type.");

            if (!src)
                throw ArgumentNullException(u"src");

            if (!dst)
                throw ArgumentNullException(u"dst");

            if (0 > srcOffset || 0 > dstOffset || 0 > count)
                throw ArgumentOutOfRangeException();

            if (_ByteLength(src) < srcOffset || _ByteLength(src) < srcOffset + count)
                throw ArgumentOutOfRangeException(u"src->Count() < srcOffset |+count|");

            if (_ByteLength(dst) < dstOffset || _ByteLength(dst) < dstOffset + count)
                throw ArgumentOutOfRangeException(u"dst->Count() < dstOffset |+count|");

            if (0 == count)
                return;

            _BlockCopy(src, srcOffset, dst, dstOffset, count);
        }

        /// Determines the number of bytes occupied by all elements of the specified array.
        /// @param array An array 
        /// @returns The number of bytes occupied by all elements of the specified array
        /// @tparam T The type of elements of the array
        template<class T>
        static int ByteLength(const SharedPtr<Array<T>>& array)
        {
            static_assert(std::is_pod<T>::value, "ByteLength template argument must be a POD type.");

            if (!array)
                throw ArgumentNullException(u"array");

            return _ByteLength(array);
        }

        /// Interprets the specified typed array as a raw byte array and retrieves the byte value at specified byte offset.
        /// @param array The target array
        /// @param index Zero-based offset of the byte to retrieve
        /// @returns The byte value at the specified index
        /// @tparam T The type of elements of the array
        template<typename T>
        static uint8_t GetByte(const SharedPtr<Array<T>>& array, int index)
        {
            static_assert(std::is_pod<T>::value, "GetByte template argument must be a POD type.");

            if( !array )
                throw ArgumentNullException(u"array");

            if (index < 0 || index >= _ByteLength(array) )
                throw ArgumentOutOfRangeException(u"index");

            return _GetByte<T>(array, index);
        }

        /// Interprets the specified typed array as a raw byte array and sets the specified byte value at specified byte offset.
        /// @param array The target array
        /// @param index Zero-based offset of the byte to set
        /// @param value The byte value to set
        /// @tparam T The type of elements of the array
        template<typename T>
        static void SetByte(const SharedPtr<Array<T>>& array, int index, uint8_t value)
        {
            static_assert(std::is_pod<T>::value, "SetByte template argument must be a POD type.");

            if( !array )
                throw ArgumentNullException(u"array");

            if (index < 0 || index >= _ByteLength(array) )
                throw ArgumentOutOfRangeException(u"index");

            return _SetByte<T>(array, index, value);
        }

    private:

        /// Determines the number of bytes occupied by all elements of the specified array.
        /// @param array An array 
        /// @returns The number of bytes occupied by all elements of the specified array
        /// @tparam T The type of elements of the array
        template<typename T>
        static int _ByteLength(const SharedPtr<Array<T>>& array)
        {
            return (int)(array->Count()*sizeof(T));
        }

        /// Interprets the specified typed array as a raw byte array and retrieves the byte value at specified byte offset.
        /// @param array The target array
        /// @param index Zero-based offset of the byte to retrieve
        /// @returns The byte value at the specified index
        /// @tparam T The type of elements of the array
        template<typename T>
        static uint8_t _GetByte(const SharedPtr<Array<T>>& array, int index)
        {
            return reinterpret_cast<const uint8_t*>(array->data_ptr())[index];
        }

        /// Interprets the specified typed array as a raw byte array and sets the specified byte value at specified byte offset.
        /// @param array The target array
        /// @param index Zero-based offset of the byte to set
        /// @param value The byte value to set
        /// @tparam T The type of elements of the array
        template<typename T>
        static void _SetByte(const SharedPtr<Array<T>>& array, int index, uint8_t value)
        {
            reinterpret_cast<uint8_t*>(array->data_ptr())[index] = value;
        }

        /// Interprets two specified typed arrays as raw arrays of bytes and copies data from one of them to another. 
        /// @param src The source array
        /// @param srcOffset A byte offset in the tho source array at which copying starts
        /// @param dst The destination array
        /// @param dstOffset A byte offset in the destination array at which to start inserting data
        /// @param count The number of bytes to copy
        /// @tparam TSrc The type of elements of the source array
        /// @tparam TDst The type of elements of the destination array
        template<typename TSrc, typename TDst>
        static void _BlockCopy(const SharedPtr<Array<TSrc>>& src, int srcOffset, const SharedPtr<Array<TDst>>& dst, int dstOffset, int count)
        {
            BlockCopy(reinterpret_cast<const uint8_t*>(src->data_ptr()), srcOffset,
                      reinterpret_cast<uint8_t*>(dst->data_ptr()), dstOffset, count);
        }
    };
}

#endif // _aspose_system_buffer_h_
