#ifndef _aspose_system_security_crypto_stream_h_
#define _aspose_system_security_crypto_stream_h_

#include "system/io/stream.h"
#include "system/collections/list.h"
#include "i_crypto_transform.h"
#include "crypto_stream_mode.h"

namespace System{ namespace Security{ namespace Cryptography{

class CryptoStream : public System::IO::Stream
{
public:
    CryptoStream(SharedPtr<System::IO::Stream> stream, SharedPtr<ICryptoTransform> transform, CryptoStreamMode mode);

    int Read(ArrayPtr<uint8_t> buffer, int offset, int count) override;
    void Write(ArrayPtr<uint8_t> buffer, int offset, int count) override;
    void Close() override;
    int64_t Seek(int64_t offset, IO::SeekOrigin origin) override;
    void SetLength(int64_t value) override;
    void Flush() override;
    void set_Position(int64_t value) override;
    int64_t get_Position() ASPOSE_CONST override;
    int64_t get_Length() ASPOSE_CONST override;
    bool get_CanRead() ASPOSE_CONST override;
    bool get_CanSeek() ASPOSE_CONST override;
    bool get_CanWrite() ASPOSE_CONST override;

private:
    void WriteAll();

    CryptoStreamMode m_mode;
    System::SharedPtr<ICryptoTransform> m_transform;
    System::SharedPtr<System::IO::Stream> m_stream;
    bool m_can_read;
    bool m_can_write;
    System::SharedPtr<System::Collections::Generic::List<uint8_t>> m_write_buffer;
};

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // _aspose_system_security_crypto_stream_h_

