#ifndef _aspose_zip_gzip_stream_h_
#define _aspose_zip_gzip_stream_h_

#include <system/io/stream.h>
#include <system/date_time.h>

#include "zip/zlib_compression_flags.h"
#include "zip/flush_type.h"
#include "zip/zlib_base_stream.h"

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
#else
namespace Aspose { namespace Zip {
#endif

// A class for compressing and decompressing GZIP streams.

class GZipStream : public ZlibBaseStream
{
#ifdef ASPOSE_FOUNDATION_NS
    RTTI_INFO(Aspose::Foundation::Zip::GZipStream, ::System::BaseTypesInfo<::Aspose::Foundation::Zip::ZlibBaseStream>);
#else
    RTTI_INFO(Aspose::Zip::GZipStream, ::System::BaseTypesInfo<::Aspose::Zip::ZlibBaseStream>);
#endif


public:

    typedef System::SharedPtr<GZipStream> Ptr;

    GZipStream(const System::IO::Stream::Ptr& stream, CompressionMode mode);
    GZipStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, bool leaveOpen);
    GZipStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, CompressionLevel level, bool leaveOpen = false);

    bool get_CanSeek() ASPOSE_CONST override;

    System::String get_Comment() const;
    void set_Comment(const System::String& value);

    System::String get_FileName() const;
    void set_FileName(const System::String& value);

    System::DateTime get_LastModified() const;
    void set_LastModified(const System::DateTime& value);

    int get_Crc32();

    static System::ArrayPtr<uint8_t> CompressString(const System::String& s);
    static System::ArrayPtr<uint8_t> CompressBuffer(const System::ArrayPtr<uint8_t>& b);
    static System::String UncompressString(const System::ArrayPtr<uint8_t>& compressed);
    static System::ArrayPtr<uint8_t> UncompressBuffer(const System::ArrayPtr<uint8_t>& compressed);

protected:
    void OnUpdateCodec(const ZlibCodec::Ptr& current_codec, const ZlibCodec::Ptr& new_codec) override;
};

#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_gzip_stream_h_

