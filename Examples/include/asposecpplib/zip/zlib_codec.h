#ifndef _aspose_zip_zlib_codec_h_
#define _aspose_zip_zlib_codec_h_

#include <system/string.h>
#include <system/array.h>
#include <system/date_time.h>

#include "zip/zlib_compression_flags.h"
#include "zip/flush_type.h"

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
#else
namespace Aspose { namespace Zip {
#endif

// Encoder and Decoder for ZLIB and DEFLATE (IETF RFC1950 and RFC1951).

class ZlibBaseStream;

class ASPOSECPP_SHARED_CLASS ZlibCodec final : public ::System::Object
{
#ifdef ASPOSE_FOUNDATION_NS
RTTI_INFO(Aspose::Foundation::Zip::ZlibCodec, ::System::BaseTypesInfo<::System::Object>);
#else
RTTI_INFO(Aspose::Zip::ZlibCodec, ::System::BaseTypesInfo<::System::Object>);
#endif

    friend class ZlibBaseStream;

public:

    typedef System::SharedPtr<ZlibCodec> Ptr;

    CompressionLevel CompressLevel;
    int WindowBits;
    CompressionStrategy Strategy;

    ASPOSECPP_SHARED_API ZlibCodec();
    ASPOSECPP_SHARED_API ZlibCodec(CompressionMode mode);

    // properties

    ASPOSECPP_SHARED_API System::ByteArrayPtr get_InputBuffer() const;
    ASPOSECPP_SHARED_API void set_InputBuffer(const System::ByteArrayPtr& value);

    ASPOSECPP_SHARED_API System::ByteArrayPtr get_OutputBuffer() const;
    ASPOSECPP_SHARED_API void set_OutputBuffer(const System::ByteArrayPtr& value);

    ASPOSECPP_SHARED_API int get_NextIn() const;
    ASPOSECPP_SHARED_API void set_NextIn(int value);

    ASPOSECPP_SHARED_API int get_AvailableBytesIn() const;
    ASPOSECPP_SHARED_API void set_AvailableBytesIn(int value);

    ASPOSECPP_SHARED_API int64_t get_TotalBytesIn() const;

    ASPOSECPP_SHARED_API int get_NextOut() const;
    ASPOSECPP_SHARED_API void set_NextOut(int value);

    ASPOSECPP_SHARED_API int get_AvailableBytesOut() const;
    ASPOSECPP_SHARED_API void set_AvailableBytesOut(int value);

    ASPOSECPP_SHARED_API int64_t get_TotalBytesOut() const;

    ASPOSECPP_SHARED_API System::String get_Message() const;

    ASPOSECPP_SHARED_API int64_t get_Adler32() const;

    // GZip header

    ASPOSECPP_SHARED_API System::String get_GzComment() const;
    ASPOSECPP_SHARED_API System::String get_GzFileName() const;

    ASPOSECPP_SHARED_API void set_GzComment(const System::String& value);
    ASPOSECPP_SHARED_API void set_GzFileName(const System::String& value);

    ASPOSECPP_SHARED_API System::DateTime get_GzTime() const;
    ASPOSECPP_SHARED_API void set_GzTime(const System::DateTime& value);

    // methods

#if 0
    ASPOSECPP_SHARED_API int InitializeInflate(bool expectRfc1950Header = true);
    ASPOSECPP_SHARED_API int InitializeInflate(int windowBits, bool expectRfc1950Header = true);
#else
    ASPOSECPP_SHARED_API int InitializeInflate();
    ASPOSECPP_SHARED_API int InitializeInflate(int windowBits);
#endif
    ASPOSECPP_SHARED_API int Inflate(FlushType flush);
    ASPOSECPP_SHARED_API int EndInflate();
    ASPOSECPP_SHARED_API int SyncInflate();

    ASPOSECPP_SHARED_API int InitializeDeflate();
    ASPOSECPP_SHARED_API int InitializeDeflate(CompressionLevel level);
#if 0
    ASPOSECPP_SHARED_API int InitializeDeflate(CompressionLevel level, bool wantRfc1950Header);
    ASPOSECPP_SHARED_API int InitializeDeflate(CompressionLevel level, int windowBits, bool wantRfc1950Header = true);
#else
    ASPOSECPP_SHARED_API int InitializeDeflate(CompressionLevel level, int windowBits);
#endif
    ASPOSECPP_SHARED_API int Deflate(FlushType flush);
    ASPOSECPP_SHARED_API int EndDeflate();
    ASPOSECPP_SHARED_API void ResetDeflate();
    ASPOSECPP_SHARED_API int SetDeflateParams(CompressionLevel level, CompressionStrategy strategy);
    ASPOSECPP_SHARED_API int SetDictionary(const System::ByteArrayPtr& dictionary);

private:

    enum class ZType { None, Inflate, Deflate };
    ZType m_strmType;

    System::ByteArrayPtr m_inputBuffer;
    System::ByteArrayPtr m_outputBuffer;

    std::shared_ptr<void> m_zstrm;
    std::shared_ptr<void> m_gzhdr;

    static const size_t s_comment_read_max = 1024;
    std::vector<uint8_t> m_gzComment;

    static const size_t s_name_read_max = 1024;
    std::vector<uint8_t> m_gzName;

    time_t m_gzTime;
};

#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_zlib_codec_h_

