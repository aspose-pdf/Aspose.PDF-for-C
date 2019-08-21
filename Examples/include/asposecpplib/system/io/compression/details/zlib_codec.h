/// @file system/io/compression/details/zlib_codec.h
#pragma once

#include <system/string.h>
#include <system/array.h>
#include <system/date_time.h>

#include <system/io/compression/details/zlib_compression_flags.h>
#include <system/io/compression/details/flush_type.h>

namespace Aspose { namespace Zip {

class ZlibBaseStream;

/// Encoder and Decoder for ZLIB and DEFLATE (IETF RFC1950 and RFC1951).
class ASPOSECPP_SHARED_CLASS ZlibCodec final : public ::System::Object
{
    /// RTTI information.
    RTTI_INFO(Aspose::Zip::ZlibCodec, ::System::BaseTypesInfo<::System::Object>);

    friend class ZlibBaseStream;

public:
    /// Pointer type.
    typedef System::SharedPtr<ZlibCodec> Ptr;

    /// Compression level.
    CompressionLevel CompressLevel;
    /// Flavor bits.
    int WindowBits;
    /// Strategy.
    CompressionStrategy Strategy;

    /// Constructor. Does not inflation or deflation initialization.
    ASPOSECPP_SHARED_API ZlibCodec();
    /// Constructor.
    /// @param mode Codec mode.
    ASPOSECPP_SHARED_API ZlibCodec(CompressionMode mode);

    // properties

    /// Gets input buffer.
    /// @return Codec input buffer.
    ASPOSECPP_SHARED_API System::ByteArrayPtr get_InputBuffer() const;
    /// Sets input buffer.
    /// @param value Codec input buffer.
    ASPOSECPP_SHARED_API void set_InputBuffer(const System::ByteArrayPtr& value);

    /// Gets output buffer.
    /// @return Codec output buffer.
    ASPOSECPP_SHARED_API System::ByteArrayPtr get_OutputBuffer() const;
    /// Sets output buffer.
    /// @param value Codec output buffer.
    ASPOSECPP_SHARED_API void set_OutputBuffer(const System::ByteArrayPtr& value);

    /// Peeks next value from input.
    /// @return Next value in the input stream.
    ASPOSECPP_SHARED_API int get_NextIn() const;
    /// Sets next value in the input stream.
    /// @param value Value to be set into input stream.
    ASPOSECPP_SHARED_API void set_NextIn(int value);

    /// Gets number of available bytes in the input.
    /// @return Number of input bytes available.
    ASPOSECPP_SHARED_API int get_AvailableBytesIn() const;
    /// Sets number of available bytes in the input.
    /// @param value Number of input bytes available.
    ASPOSECPP_SHARED_API void set_AvailableBytesIn(int value);

    /// Gets total number of bytes in the input.
    /// @return Total number of input bytes.
    ASPOSECPP_SHARED_API int64_t get_TotalBytesIn() const;

    /// Peeks next value from output.
    /// @return Next value in the output stream.
    ASPOSECPP_SHARED_API int get_NextOut() const;
    /// Sets next value to output.
    /// @param value Next value for the output stream.
    ASPOSECPP_SHARED_API void set_NextOut(int value);

    /// Gets number of available bytes in the output.
    /// @return Number of output bytes available.
    ASPOSECPP_SHARED_API int get_AvailableBytesOut() const;
    /// Sets number of available bytes in the output.
    /// @param value Number of output bytes available.
    ASPOSECPP_SHARED_API void set_AvailableBytesOut(int value);

    /// Gets total number of bytes in the output.
    /// @return Total number of output bytes.
    ASPOSECPP_SHARED_API int64_t get_TotalBytesOut() const;

    /// Gets message associated with the stream.
    /// @return Message set for the stream.
    ASPOSECPP_SHARED_API System::String get_Message() const;

    /// Gets Adler-32 hash value for the stream.
    /// @return Hash value.
    ASPOSECPP_SHARED_API int64_t get_Adler32() const;

    // GZip header

    /// Gets gzip comment.
    /// @return Comment from gzip.
    ASPOSECPP_SHARED_API System::String get_GzComment() const;
    /// Gets gzip filename.
    /// @return Name of file being processed.
    ASPOSECPP_SHARED_API System::String get_GzFileName() const;

    /// Sets gzip comment.
    /// @param value Comment for gzip.
    ASPOSECPP_SHARED_API void set_GzComment(const System::String& value);
    /// Sets gzip filename.
    /// @param value Name of gzip file.
    ASPOSECPP_SHARED_API void set_GzFileName(const System::String& value);

    /// Gets gzip modification time.
    /// @return Gzip modification timestamp.
    ASPOSECPP_SHARED_API System::DateTime get_GzTime() const;
    /// Sets gzip modification time.
    /// @param value Gzip modification timestamp.
    ASPOSECPP_SHARED_API void set_GzTime(const System::DateTime& value);

    // methods

#if 0
    ASPOSECPP_SHARED_API int InitializeInflate(bool expectRfc1950Header = true);
    ASPOSECPP_SHARED_API int InitializeInflate(int windowBits, bool expectRfc1950Header = true);
#else
    /// Initiates inflation.
    ASPOSECPP_SHARED_API int InitializeInflate();
    /// Initiates inflation.
    /// @param windowBits Flavor bits.
    ASPOSECPP_SHARED_API int InitializeInflate(int windowBits);
#endif
    /// Inflates the stream.
    /// @param flush Flush mode.
    ASPOSECPP_SHARED_API int Inflate(FlushType flush);
    /// Ends inflation.
    ASPOSECPP_SHARED_API int EndInflate();
    /// Syncronizes inflation.
    ASPOSECPP_SHARED_API int SyncInflate();

    /// Initiates deflation.
    ASPOSECPP_SHARED_API int InitializeDeflate();
    /// Initiates deflation.
    /// @param level Compression level.
    ASPOSECPP_SHARED_API int InitializeDeflate(CompressionLevel level);
#if 0
    ASPOSECPP_SHARED_API int InitializeDeflate(CompressionLevel level, bool wantRfc1950Header);
    ASPOSECPP_SHARED_API int InitializeDeflate(CompressionLevel level, int windowBits, bool wantRfc1950Header = true);
#else
    /// Initiates deflation.
    /// @param level Compression level.
    /// @param windowBits Flavor bits.
    ASPOSECPP_SHARED_API int InitializeDeflate(CompressionLevel level, int windowBits);
#endif
    /// Deflates the stream.
    /// @param flush Flush mode.
    ASPOSECPP_SHARED_API int Deflate(FlushType flush);
    /// Ends deflation process.
    ASPOSECPP_SHARED_API int EndDeflate();
    /// Resets deflation state.
    ASPOSECPP_SHARED_API void ResetDeflate();
    /// Sets deflation paraeters.
    /// @param level Compression level.
    /// @param strategy Strategy to be used.
    ASPOSECPP_SHARED_API int SetDeflateParams(CompressionLevel level, CompressionStrategy strategy);
    /// Sets the dictionary.
    /// @param dictionary Dictionary to be used by deflation algorithm.
    ASPOSECPP_SHARED_API int SetDictionary(const System::ByteArrayPtr& dictionary);

private:
    /// Codec mode.
    enum class ZType { None, Inflate, Deflate };
    /// Stream type.
    ZType m_strmType;
    /// Input buffer.
    System::ByteArrayPtr m_inputBuffer;
    /// Output buffer.
    System::ByteArrayPtr m_outputBuffer;
    /// Gzip stream in zlib format.
    std::shared_ptr<void> m_zstrm;
    /// Gzip header in zlib format.
    std::shared_ptr<void> m_gzhdr;
    /// Comment length limit.
    static const size_t s_comment_read_max = 1024;
    /// Comment in zlib format.
    std::vector<uint8_t> m_gzComment;
    /// Name length format.
    static const size_t s_name_read_max = 1024;
    /// Name in zlib format.
    std::vector<uint8_t> m_gzName;
    /// Gzip timestamp.
    time_t m_gzTime;
};

}} // namespace Aspose::Zip
