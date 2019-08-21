/// @file system/io/compression/details/crc32.h
#pragma once

#include <system/object.h>
#include <system/io/stream.h>
#include <system/io/seekorigin.h>
#include <system/array.h>

namespace Aspose { namespace Zip {

/// Calculates a 32bit Cyclic Redundancy Checksum (CRC) using the same polynomial used by Zip.
class ASPOSECPP_SHARED_CLASS CRC32 : public System::Object
{
    /// RTTI information
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Pointer type
    typedef System::SharedPtr<CRC32> Ptr;

    /// Gets number of total bytes read.
    /// @return Number of bytes read.
    ASPOSECPP_SHARED_API size_t get_TotalBytesRead() const;
    /// Gets calculated CRC.
    /// Calculated CRC value.
    ASPOSECPP_SHARED_API int get_Crc32Result() const;

    /// Constructor.
    ASPOSECPP_SHARED_API CRC32();

    /// Returns the CRC32 for the specified stream.
    /// @param input Stream to read bytes from.
    /// @return CRC for the bytes read from stream passed.
    ASPOSECPP_SHARED_API int GetCrc32(const System::IO::Stream::Ptr& input);

    /// Returns the CRC32 for the specified stream, and writes the input into the output stream.
    /// @param input Input stream.
    /// @param output Output stream.
    /// @return CRC for the bytes copied from input stream to output stream.
    ASPOSECPP_SHARED_API int GetCrc32AndCopy(const System::IO::Stream::Ptr& input, const System::IO::Stream::Ptr& output);

    /// Get the CRC32 for the given(word, byte) combo.This is a computation defined by PKzip.
    /// @param W Word argument.
    /// @param B Byte argument.
    ASPOSECPP_SHARED_API int ComputeCrc32(int W, uint8_t B);

    /// Update the value for the running CRC32 using the given block of bytes.
    /// This is useful when using the CRC32() class in a Stream.
    /// @param block Bytes to calculate CRC for.
    /// @param offset Offset inside array given.
    /// @param count Number of bytes to be read.
    ASPOSECPP_SHARED_API void SlurpBlock(const System::ArrayPtr<uint8_t>& block, int offset, int count);

    /// Return the CRC32 for the given byte. This a computation defined by PKzip
    /// @param prevCrc32 Value of CRC calculated before byte given.
    /// @param c Next byte.
    /// @return Updated CRC value.
    static ASPOSECPP_SHARED_API uint32_t Crc32Byte(uint32_t prevCrc32, uint8_t c);

private:
    /// CRC value.
    uint32_t m_crc;
    /// Number of bytes read.
    size_t m_read;

    /// Buffer size to be used.
    static const size_t s_stream_buf_size;
};

}} // namespace Aspose::Zip
