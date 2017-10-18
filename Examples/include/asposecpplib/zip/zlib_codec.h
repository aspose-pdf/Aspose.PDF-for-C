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

class ZlibCodec final : public ::System::Object
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

    ZlibCodec();
    ZlibCodec(CompressionMode mode);

    // properties

    System::ByteArrayPtr get_InputBuffer() const;
    void set_InputBuffer(const System::ByteArrayPtr& value);

    System::ByteArrayPtr get_OutputBuffer() const;
    void set_OutputBuffer(const System::ByteArrayPtr& value);

    int get_NextIn() const;
    void set_NextIn(int value);

    int get_AvailableBytesIn() const;
    void set_AvailableBytesIn(int value);

    int64_t get_TotalBytesIn() const;

    int get_NextOut() const;
    void set_NextOut(int value);

    int get_AvailableBytesOut() const;
    void set_AvailableBytesOut(int value);

    int64_t get_TotalBytesOut() const;

    System::String get_Message() const;

    int64_t get_Adler32() const;

    // GZip header

    System::String get_GzComment() const;
    System::String get_GzFileName() const;

    void set_GzComment(const System::String& value);
    void set_GzFileName(const System::String& value);

    System::DateTime get_GzTime() const;
    void set_GzTime(const System::DateTime& value);

    // methods

#if 0
    int InitializeInflate(bool expectRfc1950Header = true);
    int InitializeInflate(int windowBits, bool expectRfc1950Header = true);
#else
    int InitializeInflate();
    int InitializeInflate(int windowBits);
#endif
    int Inflate(FlushType flush);
    int EndInflate();
    int SyncInflate();

    int InitializeDeflate();
    int InitializeDeflate(CompressionLevel level);
#if 0
    int InitializeDeflate(CompressionLevel level, bool wantRfc1950Header);
    int InitializeDeflate(CompressionLevel level, int windowBits, bool wantRfc1950Header = true);
#else
    int InitializeDeflate(CompressionLevel level, int windowBits);
#endif
    int Deflate(FlushType flush);
    int EndDeflate();
    void ResetDeflate();
    int SetDeflateParams(CompressionLevel level, CompressionStrategy strategy);
    int SetDictionary(const System::ByteArrayPtr& dictionary);

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

