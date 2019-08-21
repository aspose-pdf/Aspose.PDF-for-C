/// @file system/io/compression/details/zlib_base_stream.h
#pragma once

#include <system/io/stream.h>
#include <system/io/seekorigin.h>
#include <array>

#include <system/io/compression/details/zlib_codec.h>
#include <system/io/compression/details/zlib_constants.h>
#include <system/io/compression/details/crc32.h>

namespace Aspose { namespace Zip {

/// internal class to implement compression and decompression using Zlib library.
class ASPOSECPP_SHARED_CLASS ZlibBaseStream : public System::IO::Stream
{
    /// RTTI information.
    RTTI_INFO(Aspose::Zip::ZlibBaseStream, ::System::BaseTypesInfo<System::IO::Stream>);

public:
    /// Pointer type.
    typedef System::SharedPtr<ZlibBaseStream> Ptr;

    ZlibBaseStream() = delete;
    ZlibBaseStream(const ZlibBaseStream&) = delete;

    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~ZlibBaseStream();

    /// Gets flush mode.
    /// @return Flush mode set for the stream.
    virtual ASPOSECPP_SHARED_API FlushType get_FlushMode() const;
    /// Sets flush mode.
    /// @param value Flush mode to be set for the stream.
    virtual ASPOSECPP_SHARED_API void set_FlushMode(FlushType value);

    /// Gets buffer size.
    /// @return Buffer size set for the stream.
    virtual ASPOSECPP_SHARED_API int get_BufferSize();
    /// Sets Buffer size.
    /// @param value Buffer size to be set for the stream.
    virtual ASPOSECPP_SHARED_API void set_BufferSize(int value);

    /// Gets compression strategy.
    /// @return Compression strategy set for the stream.
    virtual ASPOSECPP_SHARED_API CompressionStrategy get_Strategy() const;
    /// Sets compression strategy.
    /// @param value Compression strategy to be set for the stream.
    virtual ASPOSECPP_SHARED_API void set_Strategy(CompressionStrategy value);

    /// Gets number of totally written bytes.
    /// @return Number of bytes gone into the stream.
    virtual ASPOSECPP_SHARED_API int64_t get_TotalIn();
    /// Gets number of totally read bytes.
    /// @return Number of bytes gone from the stream.
    virtual ASPOSECPP_SHARED_API int64_t get_TotalOut();

    /// Checks whether the stream is readable.
    /// @return True for decompression stream, false for compression stream.
    ASPOSECPP_SHARED_API bool get_CanRead() ASPOSE_CONST override;
    /// Checks whether the stream is seekable.
    /// @return Always returns false.
    ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;
    /// Checks whether the stream is writeable.
    /// @return False for decompression stream, true for compression stream.
    ASPOSECPP_SHARED_API bool get_CanWrite() ASPOSE_CONST override;

    /// Returns stream length.
    /// @return Underlying stream length.
    ASPOSECPP_SHARED_API int64_t get_Length() ASPOSE_CONST override;

    /// Gets position in the stream.
    /// @return Number of bytes read or written, dependent on stream direction.
    ASPOSECPP_SHARED_API int64_t get_Position() ASPOSE_CONST override;
    /// Sets position in the stream. Unsupported operation.
    /// @throw InvalidOperationException.
    ASPOSECPP_SHARED_API void set_Position(int64_t value) override;

    /// Closes the stream.
    ASPOSECPP_SHARED_API void Close() override;
    /// Flushes the stream.
    ASPOSECPP_SHARED_API void Flush() override;
    /// Reads from stream. Only allowed for decompression stream.
    /// @param buffer Buffer to read into.
    /// @param offset Offset in the buffer.
    /// @param count Number of bytes to be read.
    ASPOSECPP_SHARED_API int Read(System::ByteArrayPtr buffer, int offset, int count) override;
    /// Seeks through the stream. Unsupported operation.
    /// @param offset Number of bytes to seek by.
    /// @param origin Seek mode.
    /// @throw InvalidOperationException.
    ASPOSECPP_SHARED_API int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) override;
    /// Sets stream length.
    /// @param value Length to be set for the stream.
    ASPOSECPP_SHARED_API void SetLength(int64_t value) override;
    /// Reads from stream. Only allowed for compression stream.
    /// @param buffer Buffer to read from.
    /// @param offset Offset in the buffer.
    /// @param count Number of bytes to be written.
    ASPOSECPP_SHARED_API void Write(System::ByteArrayPtr buffer, int offset, int count) override;

    /// Converts ZlibStreamFlavor to Windows bitmask.
    /// @param flavor Flavor value.
    /// @return Flavor value converted into 32-bit signed integer.
    static ASPOSECPP_SHARED_API int FlavorToWinBits(ZlibStreamFlavor flavor);

protected:
    /// Constructor.
    ASPOSECPP_SHARED_API ZlibBaseStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, CompressionLevel level, ZlibStreamFlavor flavor, bool leaveOpen, bool initNow = true);

    /// Codec used by stream.
    ZlibCodec::Ptr m_codec;
    /// Underlying stream.
    Stream::Ptr m_stream;
    /// Mode.
    CompressionMode m_mode;
    /// Compression level.
    CompressionLevel m_level;
    /// Zlib stream flavor.
    ZlibStreamFlavor m_flavor;
    /// Whether to close underlying stream on finish.
    bool m_leaveOpen;
    /// Flush type.
    FlushType m_flushType;
    /// Strategy.
    CompressionStrategy m_strategy;
    /// CRC value
    CRC32::Ptr m_crc32;
    /// Buffer size
    int m_bufferSize;
    /// Buffer
    System::ByteArrayPtr m_buffer;

    /// Compresses the string after being compressed to UTF8.
    /// @param str String to compress.
    /// @param flavor Flavor to be used.
    /// @return Compressed string in byte format.
    static ASPOSECPP_SHARED_API System::ByteArrayPtr CompressString(const System::String& str, ZlibStreamFlavor flavor);
    /// Compresses byte sequence.
    /// @param buffer Bytes to compress.
    /// @param flavor Flavor to be used.
    /// @return Compressed data.
    static ASPOSECPP_SHARED_API System::ByteArrayPtr CompressBuffer(const System::ByteArrayPtr& buffer, ZlibStreamFlavor flavor);
    /// Uncompresses the string which is encoded in UTF8 and compressed.
    /// @param compressed Data to uncompress.
    /// @param flavor Flavor to be used.
    /// @return Uncompressed string.
    static ASPOSECPP_SHARED_API System::String UncompressString(const System::ByteArrayPtr& compressed, ZlibStreamFlavor flavor);
    /// Uncompresses byte sequence.
    /// @param compressed Data to uncompress.
    /// @param flavor Flavor to be used.
    /// @return Uncompressed data.
    static ASPOSECPP_SHARED_API System::ByteArrayPtr UncompressBuffer(const System::ByteArrayPtr& compressed, ZlibStreamFlavor flavor);
    /// Handler to be called when codec is updated.
    virtual void OnUpdateCodec(const ZlibCodec::Ptr& current_codec, const ZlibCodec::Ptr& new_codec) {}

private:
    /// Internal codec update routine.
    void UpdateCodec();
    /// Internal initialization routine.
    void Init();
    /// Internal finalization routine.
    void SoftFinish() const /*noexcept*/;

};

}} // namespace Aspose::Zip
