/// @file system/io/string_reader.h
#pragma once
#ifndef _system_io_string_reader_h_
#define _system_io_string_reader_h_

#include <system/string.h>
#include <system/io/text_reader.h>
#include <system/array.h>

namespace System {

namespace IO {
/// Represents a reader that reads characters from a string.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS StringReader : public System::IO::TextReader
{
    typedef StringReader ThisType;
    typedef System::IO::TextReader BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Constructs a new instance of StringReader class that reads characters from
    /// the specified string.
    /// @param s The underlying string
    ASPOSECPP_SHARED_API StringReader(const String &s);

    /// Closes the stream.
    virtual ASPOSECPP_SHARED_API void Close() override;
    /// Reads a single character from the stream without changing the stream's position.
    /// @returns A read character or -1 if no character has been read
    virtual ASPOSECPP_SHARED_API int Peek() override;
    /// Reads a single character from the stream.
    /// @returns A read character or -1 if no character has been read
    virtual ASPOSECPP_SHARED_API int Read() override;
    /// Reads the specified number of characters from the stream to the specified character 
    /// array starting at the specified position.
    /// @param buffer The character array to write the characters read from the stream to
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

    /// Does nothing.
    virtual ASPOSECPP_SHARED_API void Dispose() override;
    /// Does nothing.
    virtual ASPOSECPP_SHARED_API void Dispose(bool disposing) override;

protected:
    /// Throws ObjectDisposedException
    static ASPOSECPP_SHARED_API void ReaderClosed();

private:
    /// The underlying string.
    String _s;
    /// The current position of the stream.
    int _pos;
    /// The stram's length.
    int _length;
    /// Indicates if the stream has been closed.
    bool _closed;

};

} // namespace IO
} // namespace System

#endif // _system_io_string_reader_h_

