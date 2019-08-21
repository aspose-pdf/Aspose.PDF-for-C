/// @file system/io/text_reader.h
#ifndef __TextReader_h__
#define __TextReader_h__

#include "system/string.h"
#include "system/array.h"
#include "system/idisposable.h"

namespace System { namespace IO {
    /// A base class for classes that represent readers that read sequences of characters from different sources.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS TextReader: public IDisposable
    {
        RTTI_INFO(System::IO::TextReader, ::System::BaseTypesInfo<System::IDisposable>)

    protected:
        /// Constructs a new instance of TextReader.
        TextReader(){};
        /// Releases all resources used by the current object and closes the undelying stream.
        /// @param disposing Specifies whether the undelying stream should be closed.
        virtual ASPOSECPP_SHARED_API void Dispose(bool disposing);

    public:
        /// Releases all resources used by the current object and closes the undelying stream.
        virtual void Dispose() override { Dispose(true); }
        /// Closes the stream and releases aquired resources.
        virtual void Close() { Dispose(true); }

        /// Reads a single character from the stream without changing the stream's read cursor.
        /// @returns Read character encoded with UTF-16 encoding; if the read character is represented by two codepoints in UTF-16 encoding
        /// then only the high surragate is returned; if no character was read -1 is returned
        virtual int Peek() { return -1; }
        /// Reads a single character from the stream.
        /// @returns Read character encoded with UTF-16 encoding; if the read character is represented by two codepoints in UTF-16 encoding
        /// then only the high surragate is returned.
        virtual int Read() { return -1; }
        /// Reads the specified number of characters from the stream and writes them to the specified character 
        /// array starting at the specified position.
        /// @param buffer The UTF-16 character array to write the characters read from the stream to
        /// @param index A 0-based index in @p buffer at which to start writing
        /// @param count The number of characters to read from the stream
        /// @returns The number of characters read from the stream
        virtual ASPOSECPP_SHARED_API int Read(ArrayPtr<char_t> buffer, int index, int count);
        /// Reads the specified maximum number of characters from the current text reader and writes the data to a buffer, 
        /// starting at the specified index.
        /// @param buffer A character buffer to write the read data to
        /// @param index A 0-based index in @p buffer to start writing at
        /// @param count The maximum number of characters to read
        /// @returns The actual number of characters read
        virtual ASPOSECPP_SHARED_API int ReadBlock(ArrayPtr<char_t> buffer, int index, int count);
        /// Reads characters from the stream until the end of the current line.
        /// @returns A string containing the read characters
        virtual ASPOSECPP_SHARED_API System::String ReadLine();
        /// Reads characters from the stream until the end of the stream.
        /// @returns A string containing the read characters
        virtual ASPOSECPP_SHARED_API System::String ReadToEnd();
    };

}}

#endif
