/// @file security/cryptography/crypto_stream.h
#ifndef _aspose_system_security_crypto_stream_h_
#define _aspose_system_security_crypto_stream_h_

#include "system/io/stream.h"
#include "system/collections/list.h"
#include "i_crypto_transform.h"
#include "crypto_stream_mode.h"

namespace System{ namespace Security{ namespace Cryptography{

/// Stream implementation that wraps existing stream with a cryptographic function.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS CryptoStream : public System::IO::Stream
{
public:
    /// Constructor.
    /// @param stream Stream to wrap.
    /// @param transform Transformation function to process data with when sending/reading it to/from stream.
    /// @param mode Stream direction.
    ASPOSECPP_SHARED_API CryptoStream(const SharedPtr<System::IO::Stream>& stream, const SharedPtr<ICryptoTransform>& transform, CryptoStreamMode mode);

    /// Reads data from stream.
    /// @param buffer Destination data buffer.
    /// @param offset Offset in destination buffer.
    /// @param count Number of bytes to read.
    /// @return Number of bytes being read actually.
    ASPOSECPP_SHARED_API int Read(ArrayPtr<uint8_t> buffer, int offset, int count) override;
    /// Writes data to stream.
    /// @param buffer Source data buffer.
    /// @param offset Offset in source buffer.
    /// @param count Number of bytes to write.
    /// @return Number of bytes being read actually.
    ASPOSECPP_SHARED_API void Write(ArrayPtr<uint8_t> buffer, int offset, int count) override;
    /// Closes connection.
    ASPOSECPP_SHARED_API void Close() override;
    /// Seeks position in stream. Not supported.
    /// @throw NotSupportedException Unconditionally as operation is not supported.
    ASPOSECPP_SHARED_API int64_t Seek(int64_t offset, IO::SeekOrigin origin) override;
    /// Seeks size of stream. Not supported.
    /// @throw NotSupportedException Unconditionally as operation is not supported.
    ASPOSECPP_SHARED_API void SetLength(int64_t value) override;
    /// Empties buffer into wrapped stream. Does nothing as transform algorithm can be still waiting for more data.
    ASPOSECPP_SHARED_API void Flush() override;
    /// Seeks position in stream. Not supported.
    /// @throw NotSupportedException Unconditionally as operation is not supported.
    ASPOSECPP_SHARED_API void set_Position(int64_t value) override;
    /// Gets current position in stream. Not supported.
    /// @throw NotSupportedException Unconditionally as operation is not supported.
    ASPOSECPP_SHARED_API int64_t get_Position() ASPOSE_CONST override;
    /// Gets length of stream. Not supported.
    /// @throw NotSupportedException Unconditionally as operation is not supported.
    ASPOSECPP_SHARED_API int64_t get_Length() ASPOSE_CONST override;
    /// Checks if stream is readable.
    /// @return True if stream was created with CryptoStreamMode::Read, false otherwise.
    ASPOSECPP_SHARED_API bool get_CanRead() ASPOSE_CONST override;
    /// Checks if stream is seekable.
    /// @return Always returns false.
    ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;
    /// Checks if stream is writable.
    /// @return True if stream was created with CryptoStreamMode::Write, false otherwise.
    ASPOSECPP_SHARED_API bool get_CanWrite() ASPOSE_CONST override;

private:
    /// Writes the data which is still in the buffer to stream so nothing gets lost. Is called before the stream is closed.
    void WriteAll();

    /// Stream mode.
    CryptoStreamMode m_mode;
    /// Transformation algorithm.
    System::SharedPtr<ICryptoTransform> m_transform;
    /// Wrapped stream.
    System::SharedPtr<System::IO::Stream> m_stream;
    /// Stream readability sign.
    bool m_can_read;
    /// Stream writability sign.
    bool m_can_write;
    /// Buffer of data not yet processed by transformation algorithm.
    System::SharedPtr<System::Collections::Generic::List<uint8_t>> m_write_buffer;
};

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // _aspose_system_security_crypto_stream_h_

