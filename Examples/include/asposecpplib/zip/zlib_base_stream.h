#ifndef _aspose_zip_zlib_base_stream_h_
#define _aspose_zip_zlib_base_stream_h_

#include <system/io/stream.h>
#include <system/io/seekorigin.h>
#include <array>

#include "zip/zlib_codec.h"
#include "zip/zlib_constants.h"
#include "zip/crc32.h"

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
#else
namespace Aspose { namespace Zip {
#endif

// internal class
class ZlibBaseStream : public System::IO::Stream
{
#ifdef ASPOSE_FOUNDATION_NS
    RTTI_INFO(Aspose::Foundation::Zip::ZlibBaseStream, ::System::BaseTypesInfo<System::IO::Stream>);
#else
    RTTI_INFO(Aspose::Zip::ZlibBaseStream, ::System::BaseTypesInfo<System::IO::Stream>);
#endif

public:

    typedef System::SharedPtr<ZlibBaseStream> Ptr;

    ZlibBaseStream() = delete;
    ZlibBaseStream(const ZlibBaseStream&) = delete;

    virtual ~ZlibBaseStream();

    virtual FlushType get_FlushMode() const;
    virtual void set_FlushMode(FlushType value);

    virtual int get_BufferSize();
    virtual void set_BufferSize(int value);

    virtual CompressionStrategy get_Strategy() const;
    virtual void set_Strategy(CompressionStrategy value);

    virtual int64_t get_TotalIn();
    virtual int64_t get_TotalOut();

    bool get_CanRead() ASPOSE_CONST override;
    bool get_CanSeek() ASPOSE_CONST override;
    bool get_CanWrite() ASPOSE_CONST override;

    int64_t get_Length() ASPOSE_CONST override;

    int64_t get_Position() ASPOSE_CONST override;
    void set_Position(int64_t value) override;

    void Close() override;
    void Flush() override;
    int Read(System::ByteArrayPtr buffer, int offset, int count) override;
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) override;
    void SetLength(int64_t value) override;
    void Write(System::ByteArrayPtr buffer, int offset, int count) override;

    static int FlavorToWinBits(ZlibStreamFlavor flavor);

protected:


    ZlibBaseStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, CompressionLevel level, ZlibStreamFlavor flavor, bool leaveOpen, bool initNow = true);

    ZlibCodec::Ptr m_codec;

    System::IO::Stream::Ptr m_stream;
    CompressionMode m_mode;
    CompressionLevel m_level;
    ZlibStreamFlavor m_flavor;
    bool m_leaveOpen;

    FlushType m_flushType;
    CompressionStrategy m_strategy;

    CRC32::Ptr m_crc32;

    int m_bufferSize;
    System::ByteArrayPtr m_buffer;

    // The string will first be encoded using UTF8, then compressed.
    static System::ByteArrayPtr CompressString(const System::String& str, ZlibStreamFlavor flavor);

    static System::ByteArrayPtr CompressBuffer(const System::ByteArrayPtr& buffer, ZlibStreamFlavor flavor);

    static System::String UncompressString(const System::ByteArrayPtr& compressed, ZlibStreamFlavor flavor);

    static System::ByteArrayPtr UncompressBuffer(const System::ByteArrayPtr& compressed, ZlibStreamFlavor flavor);

    virtual void OnUpdateCodec(const ZlibCodec::Ptr& current_codec, const ZlibCodec::Ptr& new_codec) {}

private:

    void UpdateCodec();
    void Init();
    void SoftFinish() const /*noexcept*/;

};

#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_zlib_base_stream_h_
