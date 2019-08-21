/// @file system/io/compression/details/zlib_compression_flags.h
#pragma once

#include <system/string.h>
#include <system/exceptions.h>

namespace Aspose { namespace Zip {

/// The compression level to be used when using a DeflateStream or ZlibStream with CompressionMode.Compress.
enum class CompressionLevel
{
    None = 0,
    Level0 = 0,
    BestSpeed = 1,
    Level1 = 1,
    Level2 = 2,
    Level3 = 3,
    Level4 = 4,
    Level5 = 5,
    Default = 6,
    Level6 = 6,
    Level7 = 7,
    Level8 = 8,
    BestCompression = 9,
    Level9 = 9
};

/// Describes options for how the compression algorithm is executed.  Different strategies
/// work better on different sorts of data.  The strategy parameter can affect the compression
/// ratio and the speed of compression but not the correctness of the compresssion.
enum class CompressionStrategy
{
    Default = 0,
    Filtered = 1,
    HuffmanOnly = 2,
    Rle = 3,
    Fixed = 4
};

/// An enum to specify the direction of transcoding - whether to compress or decompress.
enum class CompressionMode
{
    Compress = 0,
    Decompress = 1
};

/// Zlib-specific flavor bits.
enum class ZlibStreamFlavor
{
    DEFLATE = -15,   // 1951,
    ZLIB = 15,       // 1950,
    GZIP = ZLIB + 16 // 1952
};

}} // namespace Aspose::Zip
