#ifndef _aspose_system_io_text_writer_h_
#define _aspose_system_io_text_writer_h_

#include "system/string.h"
#include "system/object.h"
#include "system/array.h"
#include "system/idisposable.h"
#include "system/exceptions.h"
#include "system/iformatprovider.h"

#include "fwd.h"

namespace System { class TypeInfo; }
namespace System { namespace IO {

class TextWriter : public IDisposable
{
    RTTI_INFO(System::IO::TextWriter, ::System::BaseTypesInfo<System::IDisposable>)

public:

    typedef System::SharedPtr<TextWriter> Ptr;

    virtual SharedPtr<System::Text::Encoding> get_Encoding() = 0;
    virtual const SharedPtr<IFormatProvider> get_FormatProvider() const;
    virtual const System::String get_NewLine() const;
    virtual void set_NewLine(const System::String &value);

    virtual ~TextWriter() {};

    String  get_NewLine();

    IFormatProviderPtr get_FormatProvider();

    virtual void Dispose() override { Dispose(true); }
    virtual void Close() { Dispose(true); }
    virtual void Flush() {}

    virtual void Write(SharedPtr<Object> value);
    virtual void Write(bool value);
    virtual void Write(wchar_t value);
    virtual void Write(Decimal value);
    virtual void Write(double value);
    virtual void Write(int value);
    virtual void Write(int64_t value);
    virtual void Write(float value);
    virtual void Write(const String &value);
    virtual void Write(uint32_t value);
    virtual void Write(uint64_t value);
    virtual void Write(SharedPtr<Array<wchar_t>> buffer);
    virtual void Write(SharedPtr<Array<wchar_t>> buffer, int index, int count);

    virtual void WriteLine();
    virtual void WriteLine(SharedPtr<Object> value);
    virtual void WriteLine(bool value);
    virtual void WriteLine(wchar_t value);
    virtual void WriteLine(Decimal value);
    virtual void WriteLine(double value);
    virtual void WriteLine(int value);
    virtual void WriteLine(int64_t value);
    virtual void WriteLine(float value);
    virtual void WriteLine(const String &value);
    virtual void WriteLine(uint32_t value);
    virtual void WriteLine(uint64_t value);
    virtual void WriteLine(SharedPtr<Array<wchar_t>> buffer);
    virtual void WriteLine(SharedPtr<Array<wchar_t>> buffer, int index, int count);

    virtual void Write(const wchar_t* value);
    virtual void WriteLine(const wchar_t* value);
    virtual void Write(const TypeInfo& value);
    virtual void WriteLine(const TypeInfo& value);

    template<class... TArgs>
    void Write(const String& format, const TArgs&... args)
    {
        Write(String::Format(format, args...));
    }

    template<class... TArgs>
    void WriteLine(const String& format, const TArgs&... args)
    {
        WriteLine( String::Format(format, args...));
    }

protected:
    virtual void Dispose(bool disposing) {}

    TextWriter();
    TextWriter(IFormatProviderPtr formatProvider);

    ArrayPtr<char_t>    CoreNewLine;
    IFormatProviderPtr  internalFormatProvider;
};

}} // namespace System::IO

#endif  // _aspose_system_io_text_writer_h_
