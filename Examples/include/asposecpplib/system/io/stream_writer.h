/// @file system/io/stream_writer.h
#ifndef __StreamWriter_h__
#define __StreamWriter_h__

#include "system/io/text_writer.h"
#include "system/text/encoding.h"

#include "fwd.h"

namespace System { namespace IO {

    class Stream;
    /// Represents a writer that writes characters to a byte stream.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS StreamWriter : public TextWriter
    {
    public:
        /// @cond
        using TextWriter::Write;
        using TextWriter::WriteLine;
        /// @endcond

        /// Constructs an instance of StreamWriter object that writes characters to the specified underlying stream
        /// using UTF-8 encoding and a buffer with default size of 1024 bytes.
        /// @param stream The underlying stream to write characters to
        ASPOSECPP_SHARED_API StreamWriter(const SharedPtr<Stream>& stream);
        /// Constructs an instance of StreamWriter object that writes characters to the specified underlying stream
        /// using the specified encoding and a buffer with default size of 1024 bytes. 
        /// @param stream The underlying stream to write characters to
        /// @param encoding The encoding to use
        ASPOSECPP_SHARED_API StreamWriter(const SharedPtr<Stream>& stream, const EncodingPtr& encoding);
        /// Constructs an instance of StreamWriter object that writes characters to the specified underlying stream
        /// using the specified encoding and a buffer of the specified size. A parameter specifies whether the underlying
        /// stream should be closed when the StreamWriter object is disposed.
        /// @param stream The underlying stream to write characters to
        /// @param encoding The encoding to use
        /// @param buffer_size The minimum size of the buffer in bytes
        /// @param leave_open Specifies whether the underlying stream should be left open after the current StreamWriter object is disposed
        ASPOSECPP_SHARED_API StreamWriter(const SharedPtr<Stream>& stream, const EncodingPtr& encoding, int buffer_size, bool leave_open = false);

        /// Constructs an instance of StreamWriter object that writes characters to the specified file
        /// using UTF-8 encoding and a buffer with default size of 1024 bytes.
        /// @param path The path of the file to write characters to
        ASPOSECPP_SHARED_API StreamWriter(const String& path);
        /// Constructs an instance of StreamWriter object that writes characters to the specified file
        /// using the specified encoding and a buffer with default size of 1024 bytes. A parameter specifies 
        /// whether the data should be appened to the file or the file should be overwritten.
        /// @param path The path of the file to write characters to
        /// @param append Specifies whether the data should be appended to the specified file (true) or the file should 
        /// be overwritten (false)
        /// @param encoding The encoding to use
        ASPOSECPP_SHARED_API StreamWriter(const String& path, bool append, const EncodingPtr& encoding = System::Text::Encoding::get_UTF8Unmarked());
        /// Constructs an instance of StreamWriter object that writes characters to the specified file
        /// using the specified encoding and buffer size. A parameter specifies 
        /// whether the data should be appened to the file or the file should be overwritten.
        /// @param path The path of the file to write characters to
        /// @param append Specifies whether the data should be appended to the specified file (true) or the file should 
        /// be overwritten (false)
        /// @param encoding The encoding to use
        /// @param buffer_size The size of buffer to use
        ASPOSECPP_SHARED_API StreamWriter(const String& path, bool append, const EncodingPtr& encoding, int buffer_size);

        /// Destructor.
        ASPOSECPP_SHARED_API ~StreamWriter();

        /// Returns a value that indicates whether the StreamWriter will flush the data to the underlying
        /// stream every time method StreamWriter::Write is called.
        ASPOSECPP_SHARED_API bool get_AutoFlush() const;
        /// Returns a value that specifies whether the StreamWriter should flush the data to the underlying
        /// stream every time method StreamWriter::Write is called.
        ASPOSECPP_SHARED_API void set_AutoFlush(bool value);
        /// Returns a shared pointer to an object that represents the underlying stream.
        ASPOSECPP_SHARED_API SharedPtr<Stream> get_BaseStream() const;
        /// Returns the currently used encoding.
        ASPOSECPP_SHARED_API EncodingPtr get_Encoding() override;

        /// Writes the specified character to the stream.
        /// @param value The character to write
        ASPOSECPP_SHARED_API void Write(char_t value) override;
        /// Writes the specified string to the stream.
        /// @param value The string to write
        ASPOSECPP_SHARED_API void Write(const String &value) override;
        /// Writes the string representation of the specified object to the stream.
        /// @param obj The object to write
        ASPOSECPP_SHARED_API void Write(Object::ptr obj) override;

        /// Writes all characetrs from the specified array to the stream.
        /// @param buffer The array containing the characters to write
        ASPOSECPP_SHARED_API void Write(SharedPtr<Array<char_t>> buffer) override;
        /// Writes the specified subrange of UTF-16 characters from the specified character array to the stream.
        /// @param buffer The array containing the characters to write
        /// @param index A 0-based index of the elemnet in @p buffer at which the subrange to write begins
        /// @param count The number of characters in the subrange to write; -1 specifies that the subrange ends where @p buffer array ends 
        ASPOSECPP_SHARED_API void Write(SharedPtr<Array<char_t>> buffer, int index, int count) override;
        /// Writes the specified c-string to the stream.
        /// @param buffer The c-string to write
        ASPOSECPP_SHARED_API virtual void Write(char_t* buffer);

        /// Writes line terminator characters to the stream.
        ASPOSECPP_SHARED_API void WriteLine() override;
        /// Writes the specified string followed by the line-terminating characters to the stream.
        /// @param value The string to write
        ASPOSECPP_SHARED_API void WriteLine(const String &value) override;
        /// Writes the string representation of the specified object followed by the line-terminating characters to the stream.
        /// @param obj The object to write
        ASPOSECPP_SHARED_API void WriteLine(Object::ptr obj) override;
        /// Writes all characetrs from the specified array followed by the line-terminating characters to the stream.
        /// @param buffer The array containing the characters to write
        ASPOSECPP_SHARED_API void WriteLine(SharedPtr<Array<char_t>> buffer) override;
        /// Writes the specified subrange of UTF-16 characters from the specified character array followed by the line-terminating characters to the stream.
        /// @param buffer The array containing the characters to write
        /// @param index A 0-based index of the elemnet in @p buffer at which the subrange to write begins
        /// @param count The number of characters in the subrange to write; -1 specifies that the subrange ends where @p buffer array ends 
        ASPOSECPP_SHARED_API void WriteLine(SharedPtr<Array<char_t>> buffer, int index, int count) override;
        /// Writes the specified c-string followed by the line-terminating characters to the stream.
        /// @param buffer The c-string to write
        ASPOSECPP_SHARED_API virtual void WriteLine(char_t* buffer) { Write(buffer); WriteLine(); }

        /// Writes the string representation of the specified object to the stream.
        /// @param obj The object to write
        /// @tparam T The type of the object
        template <typename T>
        void Write(const System::SharedPtr<T>& obj)
        {
            Write(obj->ToString());
        }

        /// Writes the string representation of the specified object followed by the line-terminating characters to the stream.
        /// @param obj The object to write
        /// @tparam T The type of the object
        template <typename T>
        void WriteLine(const System::SharedPtr<T>& obj)
        {
            WriteLine(obj->ToString());
        }

        using TextWriter::Dispose;

        /// Closes the stream and releases aquired resources.
        ASPOSECPP_SHARED_API void Close() override;
        /// Flushes the content of the buffer to the underlying stream and then
        /// flushes the underlying stream.
        ASPOSECPP_SHARED_API void Flush() override;

    protected:
        /// Releases all resources used by the current object and closes the underlying stream.
        /// @param disposing Specifies whether the underlying stream should be closed.
        ASPOSECPP_SHARED_API void Dispose(bool disposing) override;

    private:
        /// Flushes the content of the buffer to the underlying stream and then
        /// flushes the underlying stream. Checks if the buffer pointer is not null.
        void FlushCore();
        /// Flushes the content of the buffer to the underlying stream and then
        /// flushes the underlying stream. Does not check if the buffer is not null.
        void FlushBytes();
        /// Decodes the content of @p m_decode_buffer.
        void Decode();
        /// Checks if the buffer pointer is not null. An if it is thorws ObjectDisposedException.
        void CheckState() const;

        /// Writes the specified subrange of UTF-16 characters from the specified character array to the stream.
        /// This method does not flush the stream and does not check if it is in a valid state.
        /// @param first the beginning of buffer to write
        /// @param last the ending of buffer to write
        void LowLevelWrite (const char_t* first, const char_t* last);
        void LowLevelWrite (std::vector<char_t>::const_iterator first, std::vector<char_t>::const_iterator last);

        /// Completes initialization of the current instance of StreamWriter class.
        /// @param encoding The encoding to use
        /// @param buffer_size The minimum size of the buffer in bytes
        void Initialize(const EncodingPtr& encoding, int buffer_size);

        /// Specifies whether the StreamWriter should flush the data to the underlying
        /// stream every time method StreamWriter::Write is called.
        bool m_flush{};
        /// Indicates if the preamble has already been written to the stream.
        bool m_preamble_done{};
        /// The byte buffer.
        ArrayPtr<uint8_t> m_byte_buf;
        /// The character characters.
        ArrayPtr<char_t> m_decode_buf;
        /// The current position within the byte buffer.
        int m_byte_pos{};
        /// The current position within the character buffer.
        int m_decode_pos{};
        /// Indicates whether the underlying stream should be left open after the current StreamWriter object is disposed.
        bool m_leave_open{};

        /// The underlying stream.
        SharedPtr<Stream> m_internal_stream;
        /// The encoding in which the characters have to be encoded before being written to the underlying stream.
        EncodingPtr m_internal_encoding;

    protected:
        /// Implements loop references detection mechanics for dictionary type.
        /// @return Data structure holding information on shared pointers owned by dictionary.
        ASPOSECPP_SHARED_API Object::shared_members_type GetSharedMembers() override;

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        ASPOSECPP_SHARED_API void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "StreamWriter"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };

}}

#endif
