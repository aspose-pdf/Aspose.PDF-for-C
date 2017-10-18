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

class CrcCalculatorStream : public System::IO::Stream
{
    RTTI_INFO_DECL();
    FRIEND_FUNCTION_System_MakeObject
public:

    CrcCalculatorStream(const System::SharedPtr<System::IO::Stream>& stream);
    CrcCalculatorStream(const System::SharedPtr<System::IO::Stream>& stream, bool leaveOpen);
    CrcCalculatorStream(const System::SharedPtr<System::IO::Stream>& stream, int64_t length);
    CrcCalculatorStream(const System::SharedPtr<System::IO::Stream>& stream, int64_t length, bool leaveOpen);


    virtual ~CrcCalculatorStream();

    int64_t get_TotalBytesSlurped() const;
    int get_Crc() const;
    bool get_LeaveOpen() const;
    void set_LeaveOpen(bool value);
    bool get_CanRead() ASPOSE_CONST override;
    bool get_CanSeek() ASPOSE_CONST override;
    bool get_CanWrite() ASPOSE_CONST override;
    int64_t get_Length() ASPOSE_CONST override;
    int64_t get_Position() ASPOSE_CONST override;
    void set_Position(int64_t value) override;

    int Read(System::ArrayPtr<uint8_t> buffer, int offset, int count) override;
    void Write(System::ArrayPtr<uint8_t> buffer, int offset, int count) override;
    void Flush() override;
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) override;
    void SetLength(int64_t value) override;
    void Close() override;

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

