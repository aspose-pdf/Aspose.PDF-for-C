#ifndef _aspose_zip_crc32__h_
#define _aspose_zip_crc32__h_

#include <system/object.h>
#include <system/io/stream.h>
#include <system/io/seekorigin.h>
#include <system/array.h>

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
#else
namespace Aspose { namespace Zip {
#endif

/// Calculates a 32bit Cyclic Redundancy Checksum (CRC) using the same polynomial used by Zip.

class CRC32 : public System::Object
{
    RTTI_INFO_DECL();

public:

    typedef System::SharedPtr<CRC32> Ptr;

    size_t get_TotalBytesRead() const;
    int get_Crc32Result() const;

    CRC32();

    /// Returns the CRC32 for the specified stream.
    int GetCrc32(const System::IO::Stream::Ptr& input);

    /// Returns the CRC32 for the specified stream, and writes the input into the output stream.
    int GetCrc32AndCopy(const System::IO::Stream::Ptr& input, const System::IO::Stream::Ptr& output);

    /// Get the CRC32 for the given(word, byte) combo.This is a computation defined by PKzip.
    int ComputeCrc32(int W, uint8_t B);

    /// Update the value for the running CRC32 using the given block of bytes.
    /// This is useful when using the CRC32() class in a Stream.
    void SlurpBlock(const System::ArrayPtr<uint8_t>& block, int offset, int count);

private:

    uint32_t m_crc;
    size_t m_read;

    static const size_t s_stream_buf_size;
};

#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_crc32__h_

