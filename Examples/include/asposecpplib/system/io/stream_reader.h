/// @file system/io/stream_reader.h
#ifndef __StreamReader_h__
#define __StreamReader_h__

#include "system/io/text_reader.h"
#include "system/text/string_builder.h"
#include "system/string.h"

#include "fwd.h"
#include <mutex>

namespace System { namespace IO {

    //fw
    class Stream;

    /// Represents a reader that reads characters from a byte stream.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS StreamReader : public TextReader
    {
    public:
        /// Constructs an instance of StreamReader object that reads characters from the specified underlying stream
        /// using UTF-8 encoding and a buffer with default size of 1024 bytes.
        /// @param stream The underlying stream to read characters from
        ASPOSECPP_SHARED_API StreamReader(const SharedPtr<Stream>& stream);
        /// Constructs an instance of StreamReader object that reads characters from the specified underlying stream
        /// using UTF-8 encoding and a buffer with default size of 1024 bytes. A parameter specifies if byte order mark detection should be enabled.
        /// @param stream The underlying stream to read characters from
        /// @param detectEncodingFromByteOrderMarks True to look for byte order marks at the beginning of the stream, otherwise - false
        ASPOSECPP_SHARED_API StreamReader(const SharedPtr<Stream>& stream, bool detectEncodingFromByteOrderMarks);
        /// Constructs an instance of StreamReader object that reads characters from the specified underlying stream
        /// using the specified encoding and a buffer with default size of 1024 bytes. 
        /// @param stream The underlying stream to read characters from
        /// @param encoding The encoding to use
        ASPOSECPP_SHARED_API StreamReader(const SharedPtr<Stream>& stream, const EncodingPtr& encoding);
        /// Constructs an instance of StreamReader object that reads characters from the specified underlying stream
        /// using the specified encoding and a buffer with default size of 1024 bytes. A parameter specifies if byte order mark detection should be enabled.
        /// @param stream The underlying stream to read characters from
        /// @param encoding The encoding to use
        /// @param detectEncodingFromByteOrderMarks True to look for byte order marks at the beginning of the stream, otherwise - false
        ASPOSECPP_SHARED_API StreamReader(const SharedPtr<Stream>& stream, const EncodingPtr& encoding, bool detectEncodingFromByteOrderMarks);
        /// Constructs an instance of StreamReader object that reads characters from the specified underlying stream
        /// using the specified encoding and a buffer of the specified size. A parameter specifies if byte order mark detection should be enabled.
        /// @param stream The underlying stream to read characters from
        /// @param encoding The encoding to use
        /// @param detectEncodingFromByteOrderMarks True to look for byte order marks at the beginning of the stream, otherwise - false
        /// @param bufferSize The minimum size of the buffer in bytes
        ASPOSECPP_SHARED_API StreamReader(const SharedPtr<Stream>& stream, const EncodingPtr& encoding, bool detectEncodingFromByteOrderMarks, int bufferSize);

        /// Constructs an instance of StreamReader object that reads characters from the specified file
        /// using UTF-8 encoding and a buffer with default size of 4096 bytes.
        /// @param path The path of the file to read characters from
        ASPOSECPP_SHARED_API StreamReader(const System::String & path);
        /// Constructs an instance of StreamReader object that reads characters from the specified file
        /// using UTF-8 encoding and a buffer with default size of 4096 bytes. A parameter specifies if byte order mark detection should be enabled.
        /// @param path The path of the file to read characters from
        /// @param detectEncodingFromByteOrderMarks True to look for byte order marks at the beginning of the file, otherwise - false
        ASPOSECPP_SHARED_API StreamReader(const System::String & path, bool detectEncodingFromByteOrderMarks);
        /// Constructs an instance of StreamReader object that reads characters from the specified file
        /// using the specified encoding and a buffer with default size of 4096 bytes. 
        /// @param path The path of the file to read characters from
        /// @param encoding The encoding to use
        ASPOSECPP_SHARED_API StreamReader(const System::String & path, const EncodingPtr& encoding);
        /// Constructs an instance of StreamReader object that reads characters from the specified underlying stream
        /// using the specified encoding and a buffer with default size of 4096 bytes. A parameter specifies if byte order mark detection should be enabled.
        /// @param path The path of the file to read characters from
        /// @param encoding The encoding to use
        /// @param detectEncodingFromByteOrderMarks True to look for byte order marks at the beginning of the file, otherwise - false
        ASPOSECPP_SHARED_API StreamReader(const System::String & path, const EncodingPtr& encoding, bool detectEncodingFromByteOrderMarks);
        /// Constructs an instance of StreamReader object that reads characters from the specified file
        /// using the specified encoding and a buffer of the specified size. A parameter specifies if byte order mark detection should be enabled.
        /// @param path The path of the file to read characters from
        /// @param encoding The encoding to use
        /// @param detectEncodingFromByteOrderMarks True to look for byte order marks at the beginning of the file, otherwise - false
        /// @param bufferSize The minimum size of the buffer in bytes
        ASPOSECPP_SHARED_API StreamReader(const System::String & path, const EncodingPtr& encoding, bool detectEncodingFromByteOrderMarks, int bufferSize);

        /// Destructor.
        ASPOSECPP_SHARED_API ~StreamReader();

    private:
        /// Initializes a current object with the specified encoding, byte order marks detection option and 
        /// buffer size.
        /// @param encoding The encoding to use
        /// @param detectEncodingFromByteOrderMarks True to look for byte order marks at the beginning of the underlying file or stream, otherwise - false
        /// @param bufferSize The minimum size of the buffer in bytes 
        void Init(const EncodingPtr& encoding, bool detectEncodingFromByteOrderMarks, int bufferSize);

    public:
        using TextReader::Dispose;

        /// Reads a single character from the stream without changing the stream's read cursor.
        /// @returns Read character encoded with UTF-16 encoding; if the read character is represented by two codepoints in UTF-16 encoding
        /// then only the high surragate is returned; if no character was read -1 is returned
        virtual ASPOSECPP_SHARED_API int Peek() override;
        /// Reads a single character from the stream.
        /// @returns Read character encoded with UTF-16 encoding; if the read character is represented by two codepoints in UTF-16 encoding
        /// then only the high surragate is returned.
        virtual ASPOSECPP_SHARED_API int Read() override;
        /// Reads the specified number of characters from the stream, converts them
        /// to UTF-16 encoding and writes the resulting UTF-16 characters to the specified character array starting at the specified position.
        /// @param buffer The UTF-16 character array to write the characters read from the stream to
        /// @param index A 0-based index in @p buffer at which to start writing
        /// @param count The number of characters to read from the stream
        /// @returns The number of characters read from the stream
        virtual ASPOSECPP_SHARED_API int Read(ArrayPtr<char_t> buffer, int index, int count) override;
        /// Reads characters from the stream until the end of the current line.
        /// @returns A string containing the read characters
        virtual ASPOSECPP_SHARED_API String ReadLine() override;
        /// Reads characters from the stream until the end of the stream.
        /// @returns A string containing the read characters
        virtual ASPOSECPP_SHARED_API String ReadToEnd() override;
        /// Closes the current and underlying streams.
        virtual ASPOSECPP_SHARED_API void Close() override;

        /// Returns a value that indicates if the end of of stream has been reached.
        ASPOSECPP_SHARED_API bool get_EndOfStream();
        /// Returns the currently used encoding.
        EncodingPtr get_CurrentEncoding() { return encoding; }
        /// Returns a shared pointer to an object that represents the underlying stream.
        SharedPtr<Stream> get_BaseStream() const { return base_stream; }

    protected:
        /// Releases all resources used by the current object and closes the undelying stream.
        /// @param disposing Specifies whether the undelying stream should be closed.
        ASPOSECPP_SHARED_API void Dispose(bool disposing) override;

    private:
        /// Reads data from the stream to the buffer and then calls ReadBufferCore().
        /// @returns The size of the decoded data in bytes
        int ReadBuffer();
        /// Reads and decodes data from the buffer.
        /// @param cbEncoded The number of encoded bytes in the buffer
        /// @returns The size of the decoded data in bytes
        int ReadBufferCore(int cbEncoded);

        /// Performs auto-detection of the encoding, as well as skipping over
        /// byte marks at the beginning of a stream.
        int DoChecks(int count);
        /// The underlying stream.
        SharedPtr<Stream> base_stream;

        /// The input buffer.
        ArrayPtr<uint8_t> input_buffer;

        /// The input buffer ready for recycling.
        static ArrayPtr<uint8_t> input_buffer_recycle;
        /// Mutex used to protect @p input_buffer_recycle variable.
        std::mutex               input_buffer_recycle_lock;

        /// The decoded buffer from the above input buffer.
        ArrayPtr<char_t> decoded_buffer;
        /// The decoded buffer ready for recycling.
        static ArrayPtr<char_t> decoded_buffer_recycle;

        /// The used encoding.
        EncodingPtr encoding;
        /// A decoder associated with the used encoding.
        DecoderPtr decoder;
        /// A StringBuilder object used to combine parts of read strings.
        Text::StringBuilder line_builder;

        /// The number of decoded bytes in @p decoded_buffer.
        int decoded_count;

        /// The current position in @p decoded_buffer.
        int pos;

        // The input buffer size.
        int buffer_size;
        
        /// Indicates whether and which checks should be done.
        int do_checks;
        /// Indicates if the read operation may block.
        bool mayBlock;
        /// Indicates if Carriage Return symbol has been found. 
        bool foundCR;
        /// Returns the position of the next EOL character sequence in the stream.
        int FindNextEOL();

        /// Default buffer size if the underlying data source is a stream.
        static const int DefaultBufferSize = 1024;
        /// Default buffer if the underlying data source is a file.
        static const int DefaultFileBufferSize = 4096;
        /// Minimum buffer size.
        static const int MinimumBufferSize = 128;

    protected:
        virtual ASPOSECPP_SHARED_API Object::shared_members_type GetSharedMembers() override;

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        ASPOSECPP_SHARED_API void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "StreamReader"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };

}}

#endif
