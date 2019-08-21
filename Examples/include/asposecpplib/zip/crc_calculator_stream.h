#ifndef _aspose_zip_crc_calculator_stream_h_
#define _aspose_zip_crc_calculator_stream_h_

#include "zip/crc32.h"

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
#else
namespace Aspose { namespace Zip {
#endif

/// A Stream that calculates a CRC32 (a checksum) on all bytes read,
/// or on all bytes written.
///
/// This class can be used to verify the CRC of a ZipEntry when
/// reading from a stream, or to calculate a CRC when writing to a
/// stream.  The stream should be used to either read, or write, but
/// not both.  If you intermix reads and writes, the results are not
/// defined.

class ASPOSECPP_SHARED_CLASS CrcCalculatorStream : public System::IO::Stream
{
    ASPOSECPP_SHARED_RTTI_INFO_DECL();
    FRIEND_FUNCTION_System_MakeObject
public:

    ASPOSECPP_SHARED_API CrcCalculatorStream(const System::SharedPtr<System::IO::Stream>& stream);
    ASPOSECPP_SHARED_API CrcCalculatorStream(const System::SharedPtr<System::IO::Stream>& stream, bool leaveOpen);
    ASPOSECPP_SHARED_API CrcCalculatorStream(const System::SharedPtr<System::IO::Stream>& stream, int64_t length);
    ASPOSECPP_SHARED_API CrcCalculatorStream(const System::SharedPtr<System::IO::Stream>& stream, int64_t length, bool leaveOpen);


    virtual ASPOSECPP_SHARED_API ~CrcCalculatorStream();

    ASPOSECPP_SHARED_API int64_t get_TotalBytesSlurped() const;
    ASPOSECPP_SHARED_API int get_Crc() const;
    ASPOSECPP_SHARED_API bool get_LeaveOpen() const;
    ASPOSECPP_SHARED_API void set_LeaveOpen(bool value);
    ASPOSECPP_SHARED_API bool get_CanRead() ASPOSE_CONST override;
    ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;
    ASPOSECPP_SHARED_API bool get_CanWrite() ASPOSE_CONST override;
    ASPOSECPP_SHARED_API int64_t get_Length() ASPOSE_CONST override;
    ASPOSECPP_SHARED_API int64_t get_Position() ASPOSE_CONST override;
    ASPOSECPP_SHARED_API void set_Position(int64_t value) override;

    ASPOSECPP_SHARED_API int Read(System::ArrayPtr<uint8_t> buffer, int offset, int count) override;
    ASPOSECPP_SHARED_API void Write(System::ArrayPtr<uint8_t> buffer, int offset, int count) override;
    ASPOSECPP_SHARED_API void Flush() override;
    ASPOSECPP_SHARED_API int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) override;
    ASPOSECPP_SHARED_API void SetLength(int64_t value) override;
    ASPOSECPP_SHARED_API void Close() override;

private:

    void Init(const System::SharedPtr<System::IO::Stream>& stream, int64_t length, bool leaveOpen);

    static const int64_t s_unsetLengthLimit;
    System::SharedPtr<System::IO::Stream> m_innerStream;
    System::SharedPtr<CRC32> m_crc32;
    int64_t m_lengthLimit;
    bool m_leaveOpen;
};

#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_crc_calculator_stream_h_

