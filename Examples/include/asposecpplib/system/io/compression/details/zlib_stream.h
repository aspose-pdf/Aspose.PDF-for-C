/// @file system/io/compression/details/zlib_stream.h
#pragma once

#include <system/io/stream.h>

#include <system/io/compression/details/zlib_compression_flags.h>
#include <system/io/compression/details/flush_type.h>
#include <system/io/compression/details/zlib_base_stream.h>

namespace Aspose { namespace Zip {

/// Represents a Zlib stream for compression or decompression.
class ASPOSECPP_SHARED_CLASS ZlibStream : public ZlibBaseStream
{
    /// RTTI information.
    RTTI_INFO(Aspose::Zip::ZlibStream, ::System::BaseTypesInfo<::Aspose::Zip::ZlibBaseStream>);

public:
    /// Pointer type.
    typedef System::SharedPtr<ZlibStream> Ptr;

    /// Constructor. Closes the stream after being processed.
    /// @param stream Stream to be processed.
    /// @param mode Direction (compression or decompression).
    ASPOSECPP_SHARED_API ZlibStream(const System::IO::Stream::Ptr& stream, CompressionMode mode);
    /// Constructor.
    /// @param stream Stream to be processed.
    /// @param mode Direction (compression or decompression).
    /// @param leaveOpen Whether to close stream (false) or not (true) after processing.
    ASPOSECPP_SHARED_API ZlibStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, bool leaveOpen);
    /// Constructor.
    /// @param stream Stream to be processed.
    /// @param mode Direction (compression or decompression).
    /// @param level Compression mode to be applied.
    /// @param leaveOpen Whether to close stream (false) or not (true) after processing.
    ASPOSECPP_SHARED_API ZlibStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, CompressionLevel level, bool leaveOpen = false);

    /// Checks whether the stream can seek.
    /// @return Always returns false.
    ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;

    /// Compresses the string after being compressed to UTF8.
    /// @param s String to compress.
    /// @return Compressed string in byte format.
    static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> CompressString(const System::String& s);
    /// Compresses byte sequence.
    /// @param b Bytes to compress.
    /// @return Compressed data.
    static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> CompressBuffer(const System::ArrayPtr<uint8_t>& b);
    /// Uncompresses the string which is encoded in UTF8 and compressed.
    /// @param compressed Data to uncompress.
    /// @return Uncompressed string.
    static ASPOSECPP_SHARED_API System::String UncompressString(const System::ArrayPtr<uint8_t>& compressed);
    /// Uncompresses byte sequence.
    /// @param compressed Data to uncompress.
    /// @return Uncompressed data.
    static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> UncompressBuffer(const System::ArrayPtr<uint8_t>& compressed);


};

}} // namespace Aspose::Zip
