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

class ASPOSECPP_SHARED_CLASS ZlibStream : public ZlibBaseStream
{
#ifdef ASPOSE_FOUNDATION_NS
    RTTI_INFO(Aspose::Foundation::Zip::ZlibStream, ::System::BaseTypesInfo<::Aspose::Foundation::Zip::ZlibBaseStream>);
#else
    RTTI_INFO(Aspose::Zip::ZlibStream, ::System::BaseTypesInfo<::Aspose::Zip::ZlibBaseStream>);
#endif


public:

    typedef System::SharedPtr<ZlibStream> Ptr;

    ASPOSECPP_SHARED_API ZlibStream(const System::IO::Stream::Ptr& stream, CompressionMode mode);
    ASPOSECPP_SHARED_API ZlibStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, bool leaveOpen);
    ASPOSECPP_SHARED_API ZlibStream(const System::IO::Stream::Ptr& stream, CompressionMode mode, CompressionLevel level, bool leaveOpen = false);

    ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;

    // The string will first be encoded using UTF8, then compressed.
    static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> CompressString(const System::String& s);

    static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> CompressBuffer(const System::ArrayPtr<uint8_t>& b);
    static ASPOSECPP_SHARED_API System::String UncompressString(const System::ArrayPtr<uint8_t>& compressed);
    static ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> UncompressBuffer(const System::ArrayPtr<uint8_t>& compressed);

};

#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_zlib_stream_h_

