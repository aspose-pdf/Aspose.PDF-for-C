#ifndef _aspose_zip_zlib_stream_h_
#define _aspose_zip_zlib_stream_h_

#include <system/io/stream.h>

#include "zip/zlib_compression_flags.h"
#include "zip/flush_type.h"
#include "zip/zlib_base_stream.h"

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
#else
namespace Aspose { namespace Zip {
#endif

/// Represents a Zlib stream for compression or decompression.

class ZlibStream : public ZlibBaseStream
{
#ifdef ASPOSE_FOUNDATION_NS
    RTTI_INFO(Aspose::Foundation::Zip::ZlibStream, ::System::BaseTypesInfo<::Aspose::Foundation::Zip::ZlibBaseStream>);
#else
    RTTI_INFO(Aspose::Zip::ZlibStream, ::System::BaseTypesInfo<::Aspose::Zip::ZlibBaseStream>);
#endif


public:

    typedef System::SharedPtr<ZlibStream> Ptr;

    ZlibStream(const System::IO::Stream::Ptr& stream, CompressionMode mode);
    ZlibStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, bool leaveOpen);
    ZlibStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, CompressionLevel level, bool leaveOpen = false);

    bool get_CanSeek() ASPOSE_CONST override;

    // The string will first be encoded using UTF8, then compressed.
    static System::ArrayPtr<uint8_t> CompressString(const System::String& s);

    static System::ArrayPtr<uint8_t> CompressBuffer(const System::ArrayPtr<uint8_t>& b);
    static System::String UncompressString(const System::ArrayPtr<uint8_t>& compressed);
    static System::ArrayPtr<uint8_t> UncompressBuffer(const System::ArrayPtr<uint8_t>& compressed);

};

#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_zlib_stream_h_

