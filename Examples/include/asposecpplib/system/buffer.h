#ifndef __Buffer_h__
#define __Buffer_h__

#include "fwd.h"
#include "system/array.h"
#include "system/exceptions.h"

namespace System {

    class Buffer
    {
    public:

        static void BlockCopy(const uint8_t* src, int srcOffset, uint8_t* dst, int dstOffset, int count);

        template<typename TSrc, typename TDst>
        static void BlockCopy(SharedPtr<Array<TSrc>> src, int srcOffset, SharedPtr<Array<TDst>> dst, int dstOffset, int count)
        {
            static_assert(std::is_pod<TSrc>::value, "BlockCopy template argument must be a POD type.");
            static_assert(std::is_pod<TDst>::value, "BlockCopy template argument must be a POD type.");

            if (!src)
                throw ArgumentNullException(L"src");

            if (!dst)
                throw ArgumentNullException(L"dst");

            if (0 > srcOffset || 0 > dstOffset || 0 > count)
                throw ArgumentOutOfRangeException();

            if (_ByteLength(src) < srcOffset || _ByteLength(src) < srcOffset + count)
                throw ArgumentOutOfRangeException(L"src->Count() < srcOffset |+count|");

            if (_ByteLength(dst) < dstOffset || _ByteLength(dst) < dstOffset + count)
                throw ArgumentOutOfRangeException(L"dst->Count() < dstOffset |+count|");

            if (0 == count)
                return;

            _BlockCopy(src, srcOffset, dst, dstOffset, count);
        }

        template<class T>
        static int ByteLength(const SharedPtr<Array<T>>& array)
        {
            static_assert(std::is_pod<T>::value, "ByteLength template argument must be a POD type.");

            if (!array)
                throw ArgumentNullException(L"array");

            return _ByteLength(array);
        }

        template<typename T>
        static uint8_t GetByte(const SharedPtr<Array<T>>& array, int index)
        {
            static_assert(std::is_pod<T>::value, "GetByte template argument must be a POD type.");

            if( !array )
                throw ArgumentNullException(L"array");

            if (index < 0 || index >= _ByteLength(array) )
                throw ArgumentOutOfRangeException(L"index");

            return _GetByte<T>(array, index);
        }

        template<typename T>
        static void SetByte(const SharedPtr<Array<T>>& array, int index, uint8_t value)
        {
            static_assert(std::is_pod<T>::value, "SetByte template argument must be a POD type.");

            if( !array )
                throw ArgumentNullException(L"array");

            if (index < 0 || index >= _ByteLength(array) )
                throw ArgumentOutOfRangeException(L"index");

            return _SetByte<T>(array, index, value);
        }

        // used when sizeof(wchar_t) == 4 for simulation array indexing like in case of sizeof(wchar_t) == 2

        static uint8_t WcharByte(const wchar_t* arr, size_t i);
        static uint8_t& WcharByteRef(wchar_t* arr, size_t i);

    private:

        template<typename T>
        static int _ByteLength(const SharedPtr<Array<T>>& array)
        {
            return (int)(array->Count()*sizeof(T));
        }

        template<typename T>
        static uint8_t _GetByte(const SharedPtr<Array<T>>& array, int index)
        {
            return reinterpret_cast<const uint8_t*>(array->data_ptr())[index];
        }

        template<typename T>
        static void _SetByte(const SharedPtr<Array<T>>& array, int index, uint8_t value)
        {
            reinterpret_cast<uint8_t*>(array->data_ptr())[index] = value;
        }

        template<typename TSrc, typename TDst>
        static void _BlockCopy(const SharedPtr<Array<TSrc>>& src, int srcOffset, SharedPtr<Array<TDst>>& dst, int dstOffset, int count)
        {
            BlockCopy(reinterpret_cast<const uint8_t*>(src->data_ptr()), srcOffset,
                      reinterpret_cast<uint8_t*>(dst->data_ptr()), dstOffset, count);
        }

        // specialisations for wchar_t (used when sizeof(wchar_t) == 4)

        static void _BlockCopy(const SharedPtr<Array<wchar_t>>& src, int srcOffset, SharedPtr<Array<wchar_t>>& dst, int dstOffset, int count)
        {
            const wchar_t* src_bytes = src->data_ptr();
            wchar_t* dst_bytes = dst->data_ptr();

            std::vector<uint8_t> tmp(count);
            for (size_t i = size_t(srcOffset), j = 0; i < size_t(srcOffset + count); ++i, ++j)
            {
                tmp[j] = WcharByte(src_bytes, i);
            }

            for (size_t i = size_t(dstOffset), j = 0; i < size_t(dstOffset + count); ++i, ++j)
            {
                WcharByteRef(dst_bytes, i) = tmp[j];
            }
        }

        template<typename TSrc>
        static void _BlockCopy(const SharedPtr<Array<TSrc>>& src, int srcOffset, SharedPtr<Array<wchar_t>>& dst, int dstOffset, int count)
        {
            const uint8_t* src_bytes = reinterpret_cast<const uint8_t*>(&src->data()[srcOffset]);

            for (size_t i = size_t(dstOffset), j = 0; i < size_t(dstOffset + count); ++i, ++j)
            {
                WcharByteRef(&dst->data()[0], i) = src_bytes[j];
            }
        }

        template<typename TDst>
        static void _BlockCopy(const SharedPtr<Array<wchar_t>>& src, int srcOffset, SharedPtr<Array<TDst>>& dst, int dstOffset, int count)
        {
            uint8_t* dst_bytes = reinterpret_cast<uint8_t*>(&dst->data()[dstOffset]);

            for (size_t i = size_t(srcOffset), j = 0; i < size_t(srcOffset + count); ++i, ++j)
            {
                dst_bytes[j] = WcharByte(src->data_ptr(), i);
            }
        }
    };

    // specialisations for wchar_t (used when sizeof(wchar_t) == 4)

    template<> int Buffer::_ByteLength<wchar_t>(const SharedPtr<Array<wchar_t>>& array);
    template<> uint8_t Buffer::_GetByte<wchar_t>(const SharedPtr<Array<wchar_t>>& array, int index);
    template<> void Buffer::_SetByte<wchar_t>(const SharedPtr<Array<wchar_t>>& array, int index, uint8_t value);
}

#endif
