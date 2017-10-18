#pragma once
#ifndef _system_io_string_reader_h_
#define _system_io_string_reader_h_

#include <system/string.h>
#include <system/io/text_reader.h>
#include <system/array.h>

namespace System {

namespace IO {

class StringReader : public System::IO::TextReader
{
    typedef StringReader ThisType;
    typedef System::IO::TextReader BaseType;

    RTTI_INFO_DECL();

public:

    StringReader(const String &s);

    virtual void Close();
    virtual int Peek();
    virtual int Read();
    virtual int Read(ArrayPtr<wchar_t> buffer, int index, int count);
    virtual String ReadLine();
    virtual String ReadToEnd();

    virtual void Dispose();
    virtual void Dispose(bool disposing);

protected:

    static void ReaderClosed();

private:

    String _s;
    int _pos;
    int _length;
    bool _closed;

};

} // namespace IO
} // namespace System

#endif // _system_io_string_reader_h_

