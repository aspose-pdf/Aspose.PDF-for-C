/// @file system/io/buffered_stream.h
#ifndef __BufferedStream_h__
#define __BufferedStream_h__

#include "system/io/stream.h"
#include "system/reflection.h"

namespace System { namespace IO {
    /// Adds a buffering layer on top of another stream.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS BufferedStream : public Stream
    {
        RTTI_INFO(System::IO::BufferedStream, ::System::BaseTypesInfo<System::IO::Stream>);
    public:
        /// Constructs an BufferedStream object that wraps the specified stream and uses a 4096 bytes long buffer.
        /// @param stream The underlying Stream object
        ASPOSECPP_SHARED_API BufferedStream(const SharedPtr<Stream>& stream);
        /// Constructs an BufferedStream object that wraps the specified stream and uses a buffer of the specified size.
        /// @param stream The underlying Stream object
        /// @param bufferSize The size of the buffer in bytes
        ASPOSECPP_SHARED_API BufferedStream(const SharedPtr<Stream>& stream, int bufferSize);
        /// Destructor.
        virtual ASPOSECPP_SHARED_API ~BufferedStream();

    public: //Stream impl.
        /// Reads a single byte from the underlying stream and returns a 32-bit integer value
        /// equivalent to the value of the read byte.
        virtual ASPOSECPP_SHARED_API int ReadByte() override;
        /// Writes the specified unsigned 8-bit integer value to the underlying stream.
        /// @param value The value to write
        virtual ASPOSECPP_SHARED_API void WriteByte(uint8_t value) override;
        /// Reads the specified number of bytes from the underlying stream and writes them to the specified byte array.
        /// @param buffer The byte array to write the read bytes to
        /// @param offset A 0-based position in @p buffer to start writing at
        /// @param count The number of bytes to read
        /// @returns The number of bytes read
        virtual ASPOSECPP_SHARED_API int Read(ArrayPtr<uint8_t> buffer, int offset, int count) override;
        /// Writes the specified subrange of bytes from the specified byte array to the underlying stream.
        /// @param buffer The array containing the bytes to write
        /// @param offset A 0-based index of the elemnet in @p buffer at which the subrange to write begins
        /// @param count The number of elements in the subrange to write
        virtual ASPOSECPP_SHARED_API void Write(ArrayPtr<uint8_t> buffer, int offset, int count) override;
        /// Sets the position of the stream represented by the current object.
        /// @param offset The byte offset relative to a position specified by @p origin
        /// @param origin Specifies the position from which and the direction toward which the offset is calculated
        /// @returns The new position of the stream
        virtual ASPOSECPP_SHARED_API int64_t Seek(int64_t offset, SeekOrigin origin) override;
        /// Sets the length of the stream represented by the current object.
        /// @param value The length in bytes to set
        virtual ASPOSECPP_SHARED_API void SetLength(int64_t value) override;
        /// Writes the content of the buffer to the underlying stream.
        virtual ASPOSECPP_SHARED_API void Flush() override;

    public: //Stream impl.
        /// Flushes the buffer to the underlying stream and then sets the stream's position.
        /// @param value The byte offset to set the stream's position to
        virtual ASPOSECPP_SHARED_API void set_Position(int64_t value) override;
        /// Returns the current position of the stream.
        virtual ASPOSECPP_SHARED_API int64_t get_Position() ASPOSE_CONST override;
        /// Returns the length of the stream.
        virtual ASPOSECPP_SHARED_API int64_t get_Length() ASPOSE_CONST override;
        /// Determines if the stream is readable.
        /// @returns True if the stream is readable; otherwise - false
        virtual ASPOSECPP_SHARED_API bool get_CanRead() ASPOSE_CONST override;
        /// Determines if the stream supports seeking.
        /// @returns True if the stream supports seeking; otherwise - false
        virtual ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;
        /// Determines if the stream is writable.
        /// @returns True if the stream is writable; otherwise - false
        virtual ASPOSECPP_SHARED_API bool get_CanWrite() ASPOSE_CONST override;

    private:
        /// The underlying stream.
        SharedPtr<Stream> m_stream;
        /// The buffer.
        ArrayPtr<uint8_t> m_buffer;
        /// The current position within the buffer.
        int m_buffer_pos;
        /// Read-ahead buffer.
        int m_buffer_read_ahead;
        /// Read buffer.
        bool m_buffer_reading;
    };

}}

#endif
