/// @file system/io/binary_writer.h
#ifndef __binary_writer_h__
#define __binary_writer_h__

#include "system/idisposable.h"
#include "system/text/encoding.h"
#include "system/io/seekorigin.h"
#include "system/io/stream.h"
#include "system/array.h"
#include "system/decimal.h"
#include "fwd.h"

namespace System { namespace IO {
    /// Represents a writer that writes values of primitive types to a byte stream.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS BinaryWriter: public IDisposable
    {
        RTTI_INFO(System::IO::BinaryWriter, ::System::BaseTypesInfo<System::IDisposable>)

    public:
        /// Constructs an instance of BinaryWriter class that writes data to the specified stream using the
        /// specified encoding.
        /// @param stream The output stream
        /// @param encoding The encoding to use
        /// @param leaveopen Specifies whether the stream @p stream should be left open (true) after the current object
        /// has been disposed or not (false)
        ASPOSECPP_SHARED_API BinaryWriter(StreamPtr stream, EncodingPtr encoding = System::Text::Encoding::get_UTF8Unmarked(), bool leaveopen = false);
        /// Destructor.
        ASPOSECPP_SHARED_API ~BinaryWriter();
        
        /// Returns the output stream.
        ASPOSECPP_SHARED_API StreamPtr get_BaseStream();
        /// Flushes the output stream. 
        ASPOSECPP_SHARED_API void Flush();
        /// Closes the current BinaryWriter object and the underlying output stream.
        ASPOSECPP_SHARED_API void Close();
        /// Releases all resources used by the current object and closes the undelying stream.
        ASPOSECPP_SHARED_API void Dispose() override;
        /// Sets the position of the stream represented by the current object.
        /// @param offset The byte offset relative to a position specified by @p origin
        /// @param origin Specifies the position from which and the direction toward which the offset is calculated
        /// @returns The new position of the stream
        ASPOSECPP_SHARED_API int64_t Seek(int offset, System::IO::SeekOrigin origin = System::IO::SeekOrigin::Begin);
        /// Writes the specified unsigned 8-bit integer value to the output stream.
        /// @param value The value to write
        virtual ASPOSECPP_SHARED_API void Write(uint8_t value);
        /// Writes the specified subrange of bytes from the specified byte array to the output stream.
        /// @param buffer The array containing the bytes to write
        /// @param index A 0-based index of the elemnet in @p buffer at which the subrange to write begins
        /// @param count The number of elements in the subrange to write; -1 specifies that the subrange ends where @p buffer array ends 
        virtual ASPOSECPP_SHARED_API void Write(const ArrayPtr<uint8_t>& buffer, int index = 0, int count = -1);
        /// Writes the specified subrange of UTF-16 characters from the specified character array to the output stream.
        /// @param buffer The array containing the characters to write
        /// @param index A 0-based index of the elemnet in @p buffer at which the subrange to write begins
        /// @param count The number of characters in the subrange to write; -1 specifies that the subrange ends where @p buffer array ends 
        virtual ASPOSECPP_SHARED_API void Write(const ArrayPtr<char_t>& buffer, int index = 0, int count = -1);
        /// Writes single byte with a value of 0 if @p value is 'true' and 1 if @p value is 'false' to the
        /// output stream.
        /// @param value The boolean value specifying the byte value to write to the output stream
        virtual ASPOSECPP_SHARED_API void Write(bool value);
        /// Writes the specified 16-bit integer value to the output stream.
        /// @param value The value to write
        virtual ASPOSECPP_SHARED_API void Write(int16_t value);
        /// Writes the specified 32-bit integer value to the output stream.
        /// @param value The value to write
        virtual ASPOSECPP_SHARED_API void Write(int value);
        /// Writes the specified 64-bit integer value to the output stream.
        /// @param value The value to write
        virtual ASPOSECPP_SHARED_API void Write(int64_t value);
        /// Writes the specified unsigned 16-bit integer value to the output stream.
        /// @param value The value to write
        virtual ASPOSECPP_SHARED_API void Write(uint16_t value);
        /// Writes the specified unsigned 32-bit integer value to the output stream.
        /// @param value The value to write
        virtual ASPOSECPP_SHARED_API void Write(uint32_t value);
        /// Writes the specified unsigned 64-bit integer value to the output stream.
        /// @param value The value to write
        virtual ASPOSECPP_SHARED_API void Write(uint64_t value);
        /// Writes the specified single-precision floating point value to the output stream.
        /// @param value The value to write
        virtual ASPOSECPP_SHARED_API void Write(float value);
        /// Writes the specified double-precision floating point value to the output stream.
        /// @param value The value to write
        virtual ASPOSECPP_SHARED_API void Write(double value);
        /// Writes the byte representation of the specified Decimal value to the output stream.
        /// @param value The value to write
        virtual ASPOSECPP_SHARED_API void Write(Decimal value);

    protected:
        /// Releases all resources used by the current object and closes the undelying stream.
        /// @param disposing Specifies whether the undelying stream should be closed.
        ASPOSECPP_SHARED_API void Dispose(bool disposing);

    private:
        /// The output stream.
        StreamPtr m_stream;
        /// The encoding used to encode character data before writing to the output stream.
        EncodingPtr m_encoding;
        /// Internal buffer.
        ArrayPtr<uint8_t> m_buffer;
        /// Indicates whether the output stream should be closed when the current object 
        /// is disposed.
        bool m_leaveopen;

    };

    /// An alias for a shared pointer to this class.
    typedef SharedPtr<BinaryWriter> BinaryWriterPtr;

}}

#endif
