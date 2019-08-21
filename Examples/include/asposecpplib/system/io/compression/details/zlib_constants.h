/// @file system/io/compression/details/zlib_constants.h
#pragma once

namespace Aspose { namespace Zip {

/// A bunch of constants used in the Zlib interface.
enum class ZlibConstants : int
{
    Z_BUF_ERROR = -5,
    Z_DATA_ERROR = -3,
    Z_STREAM_ERROR = -2,
    Z_OK = 0,
    Z_STREAM_END = 1,
    Z_NEED_DICT = 2,
    WindowBitsMax = 15,
    WindowBitsDefault = WindowBitsMax,
    WorkingBufferSizeDefault = 8192,
    WorkingBufferSizeMin = 128
};

}} // namespace Aspose::Zip
