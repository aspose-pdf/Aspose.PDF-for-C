#ifndef _aspose_system_console_h_
#define _aspose_system_console_h_

#include <fwd.h>
#include <system/decimal.h>
#include <system/string.h>
#include <system/object.h>
#include <system/io/text_writer.h>
#include <iostream>

namespace System {

    class ConsoleOutput;
    class Exception;
    class TypeInfo;

    class Console
    {
    public:
        template <class T>
        static void Write(SharedPtr<T> object)
        {
            if (object)
                Write(object->ToString());
        }
        static void Write(bool value);
        static void Write(wchar_t value);
        static void Write(SharedPtr<Array<wchar_t>> buffer);
        static void Write(Decimal value);
        static void Write(double value);
        static void Write(float value);
        static void Write(int32_t value);
        static void Write(int64_t value);
        static void Write(const String& value);
        static void Write(const wchar_t* value);
        static void Write(const TypeInfo& value);
        static void Write(uint32_t value);
        static void Write(uint64_t value);
        static void Write(SharedPtr<Array<wchar_t>> buffer, int32_t index, int32_t count);

        template<class... Args>
        static void Write(const String& format, const Args&... args)
        {
            Write(String::Format(format, args...));
        }

        static void WriteLine();

        template <class T>
        static void WriteLine(SharedPtr<T> object)
        {
            Write(object);
            WriteLine();
        }
        static void WriteLine(bool value);
        static void WriteLine(wchar_t value);
        static void WriteLine(SharedPtr<Array<wchar_t>> buffer);
        static void WriteLine(Decimal value);
        static void WriteLine(double value);
        static void WriteLine(float value);
        static void WriteLine(int32_t value);
        static void WriteLine(int64_t value);
        static void WriteLine(const String& value);
        static void WriteLine(const wchar_t * value);
        static void WriteLine(const TypeInfo& value);
        static void WriteLine(uint32_t value);
        static void WriteLine(uint64_t value);
        static void WriteLine(SharedPtr<Array<wchar_t>> buffer, int index, int count);
        static void WriteLine(const System::Exception &e);

        template<class... Args>
        static void WriteLine(const String& format, const Args&... args)
        {
            WriteLine(String::Format(format, args...));
        }

        static void Beep()
        {
            throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }

        static SharedPtr<System::IO::TextWriter>& get_Out();
        static SharedPtr<System::IO::TextWriter>& get_Error();

        static void SetOut(SharedPtr<System::IO::TextWriter> value);

        static void Mute(bool muted);

        // just stub 
        static void ReadKey();

    private:
        static bool muted;
    }; // class Console

    class ConsoleOutput : public System::IO::TextWriter
    {
    public:
        virtual SharedPtr<System::Text::Encoding> get_Encoding();

        virtual void Write(bool value);
        virtual void Write(SharedPtr<Object> value);
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
    };


} // namespace System

#endif // _aspose_system_console_h_
