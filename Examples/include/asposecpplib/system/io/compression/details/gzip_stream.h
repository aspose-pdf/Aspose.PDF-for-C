/// @file system/io/compression/details/gzip_stream.h
#pragma once

#include <system/io/stream.h>
#include <system/date_time.h>

#include <system/io/compression/details/zlib_compression_flags.h>
#include <system/io/compression/details/flush_type.h>
#include <system/io/compression/details/zlib_base_stream.h>

namespace Aspose { namespace Zip {

/// A class for compressing and decompressing GZIP streams.
class ASPOSECPP_SHARED_CLASS GZipStream : public ZlibBaseStream
{
    /// RTTI information.
    RTTI_INFO(Aspose::Zip::GZipStream, ::System::BaseTypesInfo<::Aspose::Zip::ZlibBaseStream>);

public:
    /// Pointer size.
    typedef System::SharedPtr<GZipStream> Ptr;

    /// Constructor. Closes the stream after being processed.
    /// @param stream Stream to be processed.
    /// @param mode Direction (compression or decompression).
    ASPOSECPP_SHARED_API GZipStream(const System::IO::Stream::Ptr& stream, CompressionMode mode);
    /// Constructor.
    /// @param stream Stream to be processed.
    /// @param mode Direction (compression or decompression).
    /// @param leaveOpen Whether to close stream (false) or not (true) after processing.
    ASPOSECPP_SHARED_API GZipStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, bool leaveOpen);
    /// Constructor.
    /// @param stream Stream to be processed.
    /// @param mode Direction (compression or decompression).
    /// @param level Compression mode to be applied.
    /// @param leaveOpen Whether to close stream (false) or not (true) after processing.
    ASPOSECPP_SHARED_API GZipStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, CompressionLevel level, bool leaveOpen = false);

    /// Checks whether the stream can seek.
    /// @return Always returns false.
    ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;

    /// Gets gzip comment.
    /// @return Comment from gzip.
    ASPOSECPP_SHARED_API System::String get_Comment() const;
    /// Sets gzip comment.
    /// @param value Comment for gzip.
    ASPOSECPP_SHARED_API void set_Comment(const System::String& value);

    /// Gets gzip filename.
    /// @return Name of file being processed.
    ASPOSECPP_SHARED_API System::String get_FileName() const;
    /// Sets gzip filename.
    /// @param value Name of gzip file.
    ASPOSECPP_SHARED_API void set_FileName(const System::String& value);

    /// Gets gzip modification time.
    /// @return Gzip modification timestamp.
    ASPOSECPP_SHARED_API System::DateTime get_LastModified() const;
    /// Sets gzip modification time.
    /// @param value Gzip modification timestamp.
    ASPOSECPP_SHARED_API void set_LastModified(const System::DateTime& value);

    /// Gets CRC32 value for the stream.
    /// @return CRC32 value.
    ASPOSECPP_SHARED_API int get_Crc32();

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

protected:
    /// Custom coded update handler.
    ASPOSECPP_SHARED_API void OnUpdateCodec(const ZlibCodec::Ptr& current_codec, const ZlibCodec::Ptr& new_codec) override;
};

}} // namespace Aspose::Zip
