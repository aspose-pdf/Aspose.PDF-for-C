/// @file system/io/binary_reader.h
#ifndef __BinaryReader_h__
#define __BinaryReader_h__

#include "system/array.h"
#include "system/string.h"
#include "system/idisposable.h"
#include "system/decimal.h"
#include "fwd.h"

namespace System {
    namespace IO {
        class Stream;
    }
    namespace Text {
        class Encoding;
        class Decoder;
    }
}

namespace System { namespace IO {
    /// Represents a reader that reads primitive data types as binary data in particular encoding.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS BinaryReader: public IDisposable
    {
        RTTI_INFO(System::IO::BinaryReader, ::System::BaseTypesInfo<System::IDisposable>)
    private:
        /// The input stream.
        SharedPtr<Stream> m_stream;
        /// Internal buffer.
        ArrayPtr<uint8_t> m_buffer;
        /// Decoder associated with the encoding in the input data.
        SharedPtr<Text::Decoder> decoder;
        /// Temporary buffer to which the character data is read.
        ArrayPtr<char_t> charBuffer;
        /// Temporary buffer to which the bytes to be decoded are read.
        ArrayPtr<uint8_t> charByteBuffer;

        //
        // 128 chars should cover most strings in one grab.
        enum {
            /// Max buffer size.
            MaxBufferSize = 128
        };

        /// Indicates whether the current object has been disposed.
        bool m_disposed;
        /// Indicates whether the input stream should be closed when the current object 
        /// is disposed.
        const bool leave_open;
        /// Pointer to ICU's UConverter object used by the @p decoder object associated with encodig
        /// of the data provided by the input stream @p m_stream.
        void * m_native_converter;
        /// Indicates if the underlying stream is a MemoryStream.
        bool m_isMemoryStream;

    public:
        /// Constructs an instance of BinaryReader class that reads data from the specified stream using
        /// UTF-8 encoding.
        /// @param input The input stream
        ASPOSECPP_SHARED_API BinaryReader(const SharedPtr<Stream>& input);
        /// Constructs an instance of BinaryReader class that reads data from the specified stream using the
        /// specified encoding.
        /// @param input The input stream
        /// @param encoding The encoding to use
        ASPOSECPP_SHARED_API BinaryReader(const SharedPtr<Stream>& input, const SharedPtr<Text::Encoding>& encoding);
        /// Constructs an instance of BinaryReader class that reads data from the specified stream using the
        /// specified encoding.
        /// @param input The input stream
        /// @param encoding The encoding to use
        /// @param leaveOpen Specifies whether the stream @p input should be left open (true) after the current object
        /// has been disposed or not (false)
        ASPOSECPP_SHARED_API BinaryReader(const SharedPtr<Stream>& input, const SharedPtr<Text::Encoding>& encoding, bool leaveOpen);

        /// Returns the input stream.
        virtual ASPOSECPP_SHARED_API SharedPtr<Stream> get_BaseStream();

        /// Closes the current BinaryReader object and the underlying input stream.
        virtual ASPOSECPP_SHARED_API void Close();

    private:
        /// Releases all resources used by the current object and closes the undelying stream.
        /// @param disposing Specifies whether the undelying stream should be closed.
        void Dispose(bool disposing);

    public:
        /// Destructor.
        virtual ASPOSECPP_SHARED_API ~BinaryReader();

    protected:
        /// Reads the specified number of bytes from the input stream to the intrenal buffer.
        /// @param numBytes The number of bytes to read
        virtual ASPOSECPP_SHARED_API void FillBuffer(int numBytes);

    public:
        /// Reads a single character from the input stream without changing the stream's read cursor.
        /// @returns Read character encoded with UTF-16 encoding; if the read character is represented by two codepoints in UTF-16 encoding
        /// then only the high surragate is returned; if no character was read -1 is returned
        virtual ASPOSECPP_SHARED_API int PeekChar();

        /// Reads a single character from the input stream.
        /// @returns Read character encoded with UTF-16 encoding; if the read character is represented by two codepoints in UTF-16 encoding
        /// then only the high surragate is returned.
        virtual ASPOSECPP_SHARED_API int Read();
        
        /// Reads the specified number of bytes from the input stream and writes them to the specified byte array.
        /// @param buffer The byte array to write the read bytes to
        /// @param index A 0-based position in @p buffer to start writing at
        /// @param count The number of bytes to read
        /// @returns The number of bytes read
        virtual ASPOSECPP_SHARED_API int Read(ArrayPtr<uint8_t> buffer, int index, int count);

        /// Reads the specified number of characters from the input stream, converts them
        /// to UTF-16 encoding and writes the resulting UTF-16 characters to the specified character array starting at the specified position.
        /// @param buffer The UTF-16 character array to write the characters read from the input stream to
        /// @param index A 0-based index in @p buffer at which to start writing
        /// @param count The number of characters to read from the stream
        /// @returns The number of characters read from the input stream
        virtual ASPOSECPP_SHARED_API int Read(ArrayPtr<char_t> buffer, int index, int count);

    private:
        /// Reads the specified number of characters from the input stream, converts them
        /// to UTF-16 encoding and writes the resulting UTF-16 characters to the specified character array starting at the specified position.
        /// @param buffer The UTF-16 character array to write the characters read from the stream to
        /// @param index A 0-based index in @p buffer at which to start writing
        /// @param count The number of characters to read from the stream
        /// @param bytes_read The output argumnet; contains the number of bytes read from the input stream
        /// @returns The number of characters read from the input stream
        ASPOSECPP_SHARED_API int ReadCharBytes(const ArrayPtr<char_t>& buffer, int index, int count, int &bytes_read);

    protected:
        /// Reads integer value encoded in 7-bit (8th bit used as overflow park).
        /// @return Integer value that was read.
        ASPOSECPP_SHARED_API int Read7BitEncodedInt();

    public:
        /// Reads a single byte from the input stream and returns its boolean representation.
        /// @returns True if the read byte is not equal to 0, otherwise - false
        virtual ASPOSECPP_SHARED_API bool ReadBoolean();

        /// Reads a single byte from the input stream.
        /// @returns The byte read
        virtual ASPOSECPP_SHARED_API uint8_t ReadByte();

        /// Reads the specified number of bytes from the input stream.
        /// @param count The number of bytes to read
        /// @returns A byte array containing the read bytes
        virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> ReadBytes(int count);

        /// Reads a single character from the input stream.
        /// @returns A character read; if the read character is represented by two codepoints in UTF-16 encoding
        /// then only the high surragate is returned.
        virtual ASPOSECPP_SHARED_API char_t ReadChar();

        /// Reads the specified number of characters from the input stream and returns them in UTF-16 ecoding.
        /// @param count The number of characters to read from the input stream
        /// @returns An array containing the read characters
        virtual ASPOSECPP_SHARED_API ArrayPtr<char_t> ReadChars(int count);

        //virtual decimal ReadDecimal();
        /// Reads 8 bytes from the input stream and returns them as a double-precision floating point value.
        /// @returns A double-precision floating point value read
        virtual ASPOSECPP_SHARED_API double ReadDouble();

        /// Reads 2 bytes from the input stream and returns them as a 16-bit integer value.
        /// @returns A 16-bit integer value read
        virtual ASPOSECPP_SHARED_API int16_t ReadInt16();

        /// Reads 4 bytes from the input stream and returns them as a 32-bit integer value.
        /// @returns A 132-bit integer value read
        virtual ASPOSECPP_SHARED_API int ReadInt32();

        /// Reads 8 bytes from the input stream and returns them as a 64-bit integer value.
        /// @returns A 64-bit integer value read
        virtual ASPOSECPP_SHARED_API int64_t ReadInt64();

    //C# TO C++ CONVERTER NOTE: The following .NET attribute has no direct equivalent in native C++:
    //ORIGINAL LINE: [CLSCompliant(false)] public virtual sbyte ReadSByte()
        /// Reads a single byte from the input stream and returns it as a signed 8-bit integer value.
        /// @returns A signed 8-bit integer value read
        virtual ASPOSECPP_SHARED_API int8_t ReadSByte();
        /// Reads a string from the current stream. The string is prefixed with the length, encoded as an integer seven bits at a time.
        /// @returns The read string
        virtual ASPOSECPP_SHARED_API String ReadString();
        /// Reads 4 bytes from the input stream and returns them as a single-precision floating point value.
        /// @returns A single-precision floating point value read
        virtual ASPOSECPP_SHARED_API float ReadSingle();
        /// Reads 2 bytes from the input stream and returns them as an unsigned 16-bit integer value.
        /// @returns An unsigned 16-bit integer value read
        virtual ASPOSECPP_SHARED_API uint16_t ReadUInt16();
        /// Reads 4 bytes from the input stream and returns them as an unsigned 32-bit integer value.
        /// @returns An unsigned 32-bit integer value read
        virtual ASPOSECPP_SHARED_API uint32_t ReadUInt32();
        /// Reads 8 bytes from the input stream and returns them as an unsigned 64-bit integer value.
        /// @returns An unsigned 64-bit integer value read
        virtual ASPOSECPP_SHARED_API uint64_t ReadUInt64();
        /// NOT IMPLEMENTED
        /// @throws NotImplementedException always
        virtual ASPOSECPP_SHARED_API Decimal ReadDecimal();
        /// Releases all resources used by the current object and closes the undelying stream.
        virtual ASPOSECPP_SHARED_API void Dispose() override;

    private:
        /// Ensures that internal buffer's (m_buffer) length is at least @p length bytes long, growing it if necessary.
        /// @param length The expected length
        void CheckBuffer(int length);

    private:
        /// Initializes the current object.
        void InitializeInstanceFields();
    };

}}


#endif  //#ifndef __BINARYREADER__
