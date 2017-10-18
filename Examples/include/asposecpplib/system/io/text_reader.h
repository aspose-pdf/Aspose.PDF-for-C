#ifndef __TextReader_h__
#define __TextReader_h__

#include "system/string.h"
#include "system/array.h"
#include "system/idisposable.h"

namespace System { namespace IO {

    class TextReader: public IDisposable
    {
        RTTI_INFO(System::IO::TextReader, ::System::BaseTypesInfo<System::IDisposable>)

    protected:
        TextReader(){};
        virtual void Dispose(bool disposing) {}

    public:
        virtual void Dispose() override { Dispose(true); }
        virtual void Close() { Dispose(true); }
        virtual int Peek() { return -1; }
        virtual int Read() { return -1; }
        virtual int Read(ArrayPtr<char_t> buffer, int index, int count);
        virtual int ReadBlock(ArrayPtr<char_t> buffer, int index, int count);
        virtual System::String ReadLine();
        virtual System::String ReadToEnd();
    };

}}

#endif
