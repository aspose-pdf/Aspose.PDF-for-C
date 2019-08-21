/// @file system/io/memory_stream.h
#ifndef _aspose_system_io_memory_stream_h_
#define _aspose_system_io_memory_stream_h_

#include "system/io/stream.h"
#include "system/array.h"
#include "system/reflection.h"

#include "fwd.h"

namespace System { namespace IO {
    class BinaryReader;
    /// Represents a stream that reads from and writes to memory.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS MemoryStream : public Stream
    {
        RTTI_INFO(System::IO::MemoryStream, ::System::BaseTypesInfo<System::IO::Stream>);
    public:
        /// @cond
        friend System::IO::BinaryReader;
        /// @endcond
        /// An alias for a shared pointer to the self.
        typedef System::SharedPtr<System::IO::MemoryStream> Ptr;

        /// Constructs a new instance of the MemoryStream class with initial capacity equal to 0.
        ASPOSECPP_SHARED_API MemoryStream();
        /// Constructs a new instance of the MemoryStream class that represents a stream based on a memory buffer of the specified size.
        /// @param capacity_ The size in bytes of a memory buffer associated with the stream represented by the object being created 
        ASPOSECPP_SHARED_API MemoryStream(int capacity_);
        /// Constructs a new instance of the MemoryStream class that represents a memory stream which is connected to the specified memory buffer. A parameter specifies if the stream is writable.
        /// @param content A byte array to be used as a memory buffer on which the stream represented by the object being created will be based
        /// @param writable Specifies if the stream should be writable
        ASPOSECPP_SHARED_API MemoryStream(const ArrayPtr<uint8_t>& content, bool writable = true);
        /// Constructs a new instance of the MemoryStream class that represents a memory stream which is connected to a segment of the specified memory buffer starting at the specified index and including the
        /// specified number of elements. Parameters specifies if the stream is writable and if method GetBytes() can be called
        /// @param content A byte array a segment of which is to be used as a memory buffer on which the stream represented by the object being created will be based
        /// @param index A 0-based index of the element in @p content at which the segment begins
        /// @param count The number of elements of @p content included in the segment
        /// @param writable Specifies if the stream should be writable
        /// @param publiclyVisible Specifies if the underlying memory buffer should be made available to the caller of method GetByte()
        ASPOSECPP_SHARED_API MemoryStream(const ArrayPtr<uint8_t>& content, int index, int count, bool writable = true, bool publiclyVisible = true);

        /// Sets the capacity of the underlying memory buffer.
        /// @param value The new capacity in bytes to set
        ASPOSECPP_SHARED_API void set_Capacity(int value);
        /// Returns the current capacity of the underlying memory buffer.
        ASPOSECPP_SHARED_API int get_Capacity();

        /// Returns a copy of underlying memory buffer as an array of bytes.
        virtual ASPOSECPP_SHARED_API const ArrayPtr<uint8_t> ToArray() const;

        // Stream impl.
        /// Reads a single byte from the stream and returns a 32-bit integer value
        /// equivalent to the value of the read byte.
        ASPOSECPP_SHARED_API int ReadByte() override;
        /// Writes the specified unsigned 8-bit integer value to the stream.
        /// @param value The value to write
        ASPOSECPP_SHARED_API void WriteByte(uint8_t value) override;
        /// Reads the specified number of bytes from the stream and writes them to the specified byte array.
        /// @param buffer The byte array to write the read bytes to
        /// @param offset A 0-based position in @p buffer to start writing at
        /// @param count The number of bytes to read
        /// @returns The number of bytes read
        ASPOSECPP_SHARED_API int Read(ArrayPtr<uint8_t> buffer, int offset, int count) override;
        /// Writes the specified subrange of bytes from the specified byte array to the stream.
        /// @param buffer The array containing the bytes to write
        /// @param offset A 0-based index of the elemnet in @p buffer at which the subrange to write begins
        /// @param count The number of elements in the subrange to write
        ASPOSECPP_SHARED_API void Write(ArrayPtr<uint8_t> buffer, int offset, int count) override;
        /// Sets the position of the stream represented by the current object.
        /// @param offset The byte offset relative to a position specified by @p origin
        /// @param origin Specifies the position from which and the direction toward which the offset is calculated
        /// @returns The new position of the stream
        ASPOSECPP_SHARED_API int64_t Seek(int64_t offset, SeekOrigin origin) override;

        ASPOSECPP_SHARED_API void SetLength(int64_t value) override;
        /// Does nothing.
        ASPOSECPP_SHARED_API void Flush() override;

        /// Writes the content of the underlying buffer to the specified stream.
        /// @param stream The stream to write to
        virtual ASPOSECPP_SHARED_API void WriteTo(SharedPtr<Stream> stream);
        /// Returns a pointer to the underlying buffer.
        virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetBuffer();

        /// Sets the stream's position.
        /// @param value The byte offset to set the stream's position to
        ASPOSECPP_SHARED_API void set_Position(int64_t value) override;
        /// Returns the current position of the stream.
        ASPOSECPP_SHARED_API int64_t get_Position() ASPOSE_CONST override;
        /// Returns the length of the stream in bytes.
        ASPOSECPP_SHARED_API int64_t get_Length() ASPOSE_CONST override;
        /// Determines if the stream is readable.
        /// @returns True if the stream is readable; otherwise - false
        ASPOSECPP_SHARED_API bool get_CanRead() ASPOSE_CONST override;
        /// Determines if the stream supports seeking.
        /// @returns True if the stream supports seeking; otherwise - false
        ASPOSECPP_SHARED_API bool get_CanSeek() ASPOSE_CONST override;
        /// Determines if the stream is writable.
        /// @returns True if the stream is writable; otherwise - false
        ASPOSECPP_SHARED_API bool get_CanWrite() ASPOSE_CONST override;

        /// Closes the stream.
        virtual ASPOSECPP_SHARED_API void Close() override;

    private:
        /// Does nothing.
        void CheckIfClosedThrowDisposed() const;
        /// Expands the underlying buffer to the specified size.
        /// @param newSize The new size of the underlying memory buffer
        void Expand (int newSize);
        /// Calculates the new capacity of the buffer.
        /// @param minimum Specifies the minimum capacity of the buffer
        /// @returns The new capacity of the buffer
        int  CalculateNewCapacity (int minimum);

        // PERF: Internal functions for fast direct access of MemoryStream buffer (cf. BinaryReader for usage) 
        /// Returns a pointer to the underlying buffer without checking the value of @p _publiclyVisible variable.
        System::ArrayPtr<uint8_t> InternalGetBuffer();
        /// Returns the current stream position.
        int32_t InternalGetPosition() const;
        /// Emulates reading of the specified number of bytes from the stream. Changes the stream's position
        /// accordingly but the data is not read from the stream.
        /// @param count The number of bytes to copy
        /// @returns The value that indicates the number of bytes that would be read from the stream 
        /// if the actual reading of @p count bytes was performed
        int32_t InternalEmulateRead(int32_t count);

        /// The underlying memory buffer.
        ArrayPtr<uint8_t> internalBuffer;
        /// Indicates if the current stream can be expanded.
        bool expandable;
        /// Indicates if the current stream is readable.
        bool m_readable = true;
        /// Indicates if the current stream is seekable.
        bool m_seekable = true;
        /// Indicates if the current stream is writable.
        bool m_writable;
        /// The underlying buffer's size in bytes.
        int capacity;
        /// The current stream's position.
        int position;
        /// Stream's length.
        int length;
        /// An index in @p internalBuffer at which the memory buffer segment on which the current stream is based begins. 
        int initialIndex;
        /// The number of bytes in the end of the underlying memory buffer that are invalidated after decreasing its size.
        int dirty_bytes;
        /// Indicates if the underlying memory buffer should be made available to the caller of method GetByte().
        bool _publiclyVisible;

    protected:
        /// Implements loop reference lookup for enumerator object.
        virtual ASPOSECPP_SHARED_API Object::shared_members_type GetSharedMembers() override;

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            visitor.add_self(this);
        }

        const char* DBG_class_name() const override { return "MemoryStream"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };

}}

#endif // _aspose_system_io_memory_stream_h_
