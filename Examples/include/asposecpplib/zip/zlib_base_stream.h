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
class ASPOSECPP_SHARED_CLASS ZlibBaseStream : public System::IO::Stream
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

    virtual ASPOSECPP_SHARED_API ~ZlibBaseStream();

    virtual ASPOSECPP_SHARED_API FlushType get_FlushMode() const;
    virtual ASPOSECPP_SHARED_API void set_FlushMode(FlushType value);

    virtual ASPOSECPP_SHARED_API int get_BufferSize();
    virtual ASPOSECPP_SHARED_API void set_BufferSize(int value);

    virtual ASPOSECPP_SHARED_API CompressionStrategy get_Strategy() const;
    virtual ASPOSECPP_SHARED_API void set_Strategy(CompressionStrategy value);

    virtual ASPOSECPP_SHARED_API int64_t get_TotalIn();
    virtual ASPOSECPP_SHARED_API int64_t get_TotalOut();

    ASPOSECPP_SHARED_API bool get_CanRead() ASPOSE_CONST override;
    ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;
    ASPOSECPP_SHARED_API bool get_CanWrite() ASPOSE_CONST override;

    ASPOSECPP_SHARED_API int64_t get_Length() ASPOSE_CONST override;

    ASPOSECPP_SHARED_API int64_t get_Position() ASPOSE_CONST override;
    ASPOSECPP_SHARED_API void set_Position(int64_t value) override;

    ASPOSECPP_SHARED_API void Close() override;
    ASPOSECPP_SHARED_API void Flush() override;
    ASPOSECPP_SHARED_API int Read(System::ByteArrayPtr buffer, int offset, int count) override;
    ASPOSECPP_SHARED_API int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) override;
    ASPOSECPP_SHARED_API void SetLength(int64_t value) override;
    ASPOSECPP_SHARED_API void Write(System::ByteArrayPtr buffer, int offset, int count) override;

    static ASPOSECPP_SHARED_API int FlavorToWinBits(ZlibStreamFlavor flavor);

protected:


    ASPOSECPP_SHARED_API ZlibBaseStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, CompressionLevel level, ZlibStreamFlavor flavor, bool leaveOpen, bool initNow = true);

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
    static ASPOSECPP_SHARED_API System::ByteArrayPtr CompressString(const System::String& str, ZlibStreamFlavor flavor);

    static ASPOSECPP_SHARED_API System::ByteArrayPtr CompressBuffer(const System::ByteArrayPtr& buffer, ZlibStreamFlavor flavor);

    static ASPOSECPP_SHARED_API System::String UncompressString(const System::ByteArrayPtr& compressed, ZlibStreamFlavor flavor);

    static ASPOSECPP_SHARED_API System::ByteArrayPtr UncompressBuffer(const System::ByteArrayPtr& compressed, ZlibStreamFlavor flavor);

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
