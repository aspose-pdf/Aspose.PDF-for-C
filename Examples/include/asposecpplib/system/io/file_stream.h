/// @file system/io/file_stream.h
#ifndef _aspose_io_file_stream_h_
#define _aspose_io_file_stream_h_

#include <fstream>
#include "system/io/stream.h"
#include "system/io/file.h"
#include "system/io/file_mode.h"
#include "system/io/file_access.h"
#include "system/io/file_share.h"
#include "system/io/file_options.h"
#include "system/reflection.h"

namespace System { namespace IO {
/// Represents a file stream supporting synchronous and asynchronous read and write operations.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS FileStream : public Stream
{
    RTTI_INFO(System::IO::FileStream, ::System::BaseTypesInfo<System::IO::Stream>);
public:
    /// Default value of the number of bytes bufferred during read and write operations.
    static int const ASPOSECPP_SHARED_API DefaultBufferSize;
    /// Constructs a new instance of FileStream class and initializes it with the 
    /// specified parameters.
    /// @param path The path of the file to open
    /// @param mode Specifies the mode in which to open the flie
    /// @param access The requested access type
    /// @param share The type of access that other FileStream objects have to the opened file
    /// @param bufferSize The number of bytes bufferred during read and write operations
    /// @param options Additional options
    ASPOSECPP_SHARED_API FileStream(const String& path, FileMode mode,
               FileAccess access = FileAccess::ReadWrite,
               FileShare share = FileShare::Read,
               int bufferSize = DefaultBufferSize,
               FileOptions options = FileOptions::SequentialScan);
    /// Destructor.
    ASPOSECPP_SHARED_API ~FileStream();
    /// Determines if the stream is readable.
    /// @returns True if the stream is readable; otherwise - false
    ASPOSECPP_SHARED_API bool get_CanRead() ASPOSE_CONST override;
    /// Determines if the stream supports seeking.
    /// @returns True if the stream supports seeking; otherwise - false
    ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;
    /// Determines if the stream is writable.
    /// @returns True if the stream is writable; otherwise - false
    ASPOSECPP_SHARED_API bool get_CanWrite() ASPOSE_CONST override;
    /// Returns the length of the stream in bytes.
    ASPOSECPP_SHARED_API int64_t get_Length() ASPOSE_CONST override;
    /// Returns the name of the file encapsulated by the current FileStream object.
    ASPOSECPP_SHARED_API String get_Name() ASPOSE_CONST;
    /// Flushes the stream and then sets the stream's position.
    /// @param value The byte offset to set the stream's position to
    ASPOSECPP_SHARED_API void set_Position(int64_t value) override;
    /// Returns the current position of the stream.
    ASPOSECPP_SHARED_API int64_t get_Position() ASPOSE_CONST override;
    /// Closes the current BinaryReader object and the underlying input stream.
    ASPOSECPP_SHARED_API void Close() override;
    /// Clears this stream's buffers and writes all buffered data to the underlying file.
    ASPOSECPP_SHARED_API void Flush() override;
    /// Clears this stream's buffers and writes all buffered data to the underlying file.
    /// Synonym for method Flush().
    /// @param flushToDisk IGNORED
    ASPOSECPP_SHARED_API void Flush(bool flushToDisk);

    /// Reads a single byte from the stream and returns a 32-bit integer value
    /// equivalent to the value of the read byte.
    ASPOSECPP_SHARED_API int ReadByte() override;
    /// Reads the specified number of bytes from the stream and writes them to the specified byte array.
    /// @param buffer The byte array to write the read bytes to
    /// @param offset A 0-based position in @p buffer to start writing at
    /// @param count The number of bytes to read
    /// @returns The number of bytes read
    ASPOSECPP_SHARED_API int Read(ArrayPtr<uint8_t> buffer, int offset, int count) override;
    /// Sets the position of the stream represented by the current object.
    /// @param offset The byte offset relative to a position specified by @p origin
    /// @param origin Specifies the position from which and the direction toward which the offset is calculated
    /// @returns The new position of the stream
    ASPOSECPP_SHARED_API int64_t Seek(int64_t offset, SeekOrigin origin) override;
    /// Sets the length of the stream represented by the current object.
    /// @param value The length in bytes to set
    ASPOSECPP_SHARED_API void SetLength(int64_t value) override;
    /// Writes the specified unsigned 8-bit integer value to the stream.
    /// @param value The value to write
    ASPOSECPP_SHARED_API void WriteByte(uint8_t value) override;
    /// Writes the specified subrange of bytes from the specified byte array to the stream.
    /// @param buffer The array containing the bytes to write
    /// @param offset A 0-based index of the elemnet in @p buffer at which the subrange to write begins
    /// @param count The number of elements in the subrange to write
    ASPOSECPP_SHARED_API void Write(ArrayPtr<uint8_t> buffer, int offset, int count) override;

private:
    /// Indicates if the stream supports seeking.
    bool m_can_seek = true;
    /// Indicates if the stream is readable.
    bool m_can_read;
    /// Indicates if the stream is writable.
    bool m_can_write;

    /// The underlying file stream.
    std::fstream m_fstream;
    /// A path to the underlying file.
    String m_fs_path;
    /// The mode in which the file is open.
    std::ios_base::openmode m_fs_mode;
    /// File protection flag.
    int m_fs_protection;
    /// Indictate the state of the read buffer. True means it may not be empty.
    bool m_reading = false;
    /// Indictate the state of the write buffer. True means it may not be empty.
    bool m_writing = false;

    /// Opens an STD file stream in the specified mode.
    /// @param mode The mode to open the stream in
    void Open(std::ios_base::openmode mode);
    /// Closes the current BinaryReader object and the underlying input stream.
    void CloseImpl();

    /// Flushes the read buffer.
    void FlushRead();
    /// Flushes the write buffer.
    void FlushWrite();

#ifndef _WIN32
    int m_fd = -1;
    bool TryLockFile(const std::string& filename);
#endif
};

}}

#endif //_aspose_io_file_stream_h_
