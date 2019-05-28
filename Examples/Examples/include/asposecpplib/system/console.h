/// @file system/console.h
/// Contains declaration of System::Console and System::ConsoleOutput classes.
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
    
    /// Provides methods for outputting data to the standard output stream.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    class Console
    {
    public:
        /// Outputs the string representation of the specified object to the standard output stream.
        /// @param object Object to output
        /// @tparam T Type of the object to output
        template <class T>
        static void Write(const SharedPtr<T>& object)
        {
            if (object)
                Write(object->ToString());
        }

        /// Outputs the string representation of bool value to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void Write(bool value);
        /// Outputs the specified character value to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void Write(char_t value);
        /// Outputs the string representation of the specified character array to the standard output stream.
        /// @param buffer The array to output
        static ASPOSECPP_SHARED_API void Write(const SharedPtr<Array<char_t>>& buffer);
        /// Outputs the string representation of Decimal value to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void Write(Decimal value);
        /// Outputs the string representation of double-precision floating-point value to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void Write(double value);
        /// Outputs the string representation of single-precision floating-point value to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void Write(float value);
        /// Outputs the string representation of 32-bit integer value to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void Write(int32_t value);
        /// Outputs the string representation of 64-bit integer value to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void Write(int64_t value);
        /// Outputs the specified string object to the standard output stream.
        /// @param value The string object to output
        static ASPOSECPP_SHARED_API void Write(const String& value);
        /// Outputs the specified c-string to the standard output stream.
        /// @param value The c-string to output
        static ASPOSECPP_SHARED_API void Write(const char_t* value);
        /// Outputs the string representation of TypeInfo value to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void Write(const TypeInfo& value);
        /// Outputs the string representation of unsigned 32-bit integer value to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void Write(uint32_t value);
        /// Outputs the string representation of unsigned 64-bit integer value to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void Write(uint64_t value);
        /// Outputs the string representation of the specified range of the specified character array to the standard output stream.
        /// @param buffer The character array
        /// @param index The index in the array at which the range to output begins
        /// @param count The number of elements in the range to output
        static ASPOSECPP_SHARED_API void Write(const SharedPtr<Array<char_t>>& buffer, int32_t index, int32_t count);
        
        /// Outputs the string representation of the specified arguments formatted according to the specified format to the standard output stream.
        /// @param format The string format
        /// @param args The values to output
        /// @tparam The types of the values to output
        template<class... Args>
        static void Write(const String& format, const Args&... args)
        {
            Write(String::Format(format, args...));
        }

        /// Outputs the current line terminator to the standard output stream.
        static ASPOSECPP_SHARED_API void WriteLine();

        /// Outputs the string representation of the specified object followed by the current line terminator to the standard output stream.
        /// @param object Object to output
        /// @tparam T Type of the object to output
        template <class T>
        static void WriteLine(const SharedPtr<T>& object)
        {
            Write(object);
            WriteLine();
        }
        /// Outputs the string representation of bool value followed by the current line terminator to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void WriteLine(bool value);
        /// Outputs the specified character value followed by the current line terminator to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void WriteLine(char_t value);
        /// Outputs the string representation of the specified character array followed by the current line terminator to the standard output stream.
        /// @param buffer The array to output
        static ASPOSECPP_SHARED_API void WriteLine(const SharedPtr<Array<char_t>>& buffer);
        /// Outputs the string representation of Decimal value followed by the current line terminator to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void WriteLine(Decimal value);
        /// Outputs the string representation of double-precision floating-point value followed by the current line terminator to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void WriteLine(double value);
        /// Outputs the string representation of single-precision floating-point value followed by the current line terminator to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void WriteLine(float value);
        /// Outputs the string representation of 32-bit integer value followed by the current line terminator to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void WriteLine(int32_t value);
        /// Outputs the string representation of 64-bit integer value followed by the current line terminator to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void WriteLine(int64_t value);
        /// Outputs the specified string object followed by the current line terminator to the standard output stream.
        /// @param value The string object to output
        static ASPOSECPP_SHARED_API void WriteLine(const String& value);
        /// Outputs the specified c-string followed by the current line terminator to the standard output stream.
        /// @param value The c-string to output
        static ASPOSECPP_SHARED_API void WriteLine(const char_t * value);
        /// Outputs the string representation of TypeInfo value followed by the current line terminator to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void WriteLine(const TypeInfo& value);
        /// Outputs the string representation of unsigned 32-bit integer value followed by the current line terminator to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void WriteLine(uint32_t value);
        /// Outputs the string representation of unsigned 64-bit integer value followed by the current line terminator to the standard output stream.
        /// @param value The value to output
        static ASPOSECPP_SHARED_API void WriteLine(uint64_t value);
        /// Outputs the string representation of the specified range of the specified character array followed by the current line terminator to the standard output stream.
        /// @param buffer The character array
        /// @param index The index in the array at which the range to output begins
        /// @param count The number of elements in the range to output
        static ASPOSECPP_SHARED_API void WriteLine(const SharedPtr<Array<char_t>>& buffer, int index, int count);
        /// Outputs the string representation of the specified Exception object followed by the current line terminator to the standard output stream.
        /// @param e The value to output
        static ASPOSECPP_SHARED_API void WriteLine(const System::Exception &e);

        /// Outputs the string representation of the specified arguments formatted according to the specified format followed by the current line terminator to the standard output stream.
        /// @param format The string format
        /// @param args The values to output
        /// @tparam The types of the values to output
        template<class... Args>
        static void WriteLine(const String& format, const Args&... args)
        {
            WriteLine(String::Format(format, args...));
        }

        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        static void Beep()
        {
            throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }

        /// Returns a shared pointer pointing to the object that represents the standard output stream.
        static ASPOSECPP_SHARED_API SharedPtr<System::IO::TextWriter>& get_Out();
        /// Returns a shared pointer pointing to the object that represents the standard error stream.
        static ASPOSECPP_SHARED_API SharedPtr<System::IO::TextWriter>& get_Error();

        /// Assigns the specified object to the clss' Out property.
        /// @param value The TextWrite object to assign to the Out property
        static ASPOSECPP_SHARED_API void SetOut(const SharedPtr<System::IO::TextWriter>& value);
        
        /// Mutes or unmutes the standard output stream.
        /// @param muted Specifies if the standard output stream should be muted (true) or unmuted (false)
        static ASPOSECPP_SHARED_API void Mute(bool muted);

        /// NOT IMPLEMENTED.
        static ASPOSECPP_SHARED_API void ReadKey();

    private:
        /// Specifies muted or unmuted state of the standard output stream.
        static bool muted;
    }; // class Console

    /// Represents the standard output stream.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS ConsoleOutput : public System::IO::TextWriter
    {
    public:
        /// Always returns ASCII encoding.
        virtual ASPOSECPP_SHARED_API SharedPtr<System::Text::Encoding> get_Encoding();
        /// Outputs the string representation of the specified bool value to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void Write(bool value);
        /// Outputs the string representation of the specified object to the output stream represented by the current object.
        /// @param value The object to output
        virtual ASPOSECPP_SHARED_API void Write(SharedPtr<Object> value);
        /// Outputs the specified character value to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void Write(char_t value);
        /// Outputs the string representation of Decimal value to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void Write(Decimal value);
        /// Outputs the string representation of double-precision floating-point value to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void Write(double value);
        /// Outputs the string representation of 32-bit integer value to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void Write(int value);
        /// Outputs the string representation of 64-bit integer value to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void Write(int64_t value);
        /// Outputs the string representation of single-precision floating-point value to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void Write(float value);
        /// Outputs the specified string object to the output stream represented by the current object.
        /// @param value The string object to output
        virtual ASPOSECPP_SHARED_API void Write(const String &value);
        /// Outputs the string representation of unsigned 32-bit integer value to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void Write(uint32_t value);
        /// Outputs the string representation of unsigned 64-bit integer value to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void Write(uint64_t value);
        /// Outputs the string representation of the specified character array to the output stream represented by the current object.
        /// @param buffer The array to output
        virtual ASPOSECPP_SHARED_API void Write(SharedPtr<Array<char_t>> buffer);
        /// Outputs the string representation of a range of values of the specified character array to the output stream represented by the current object.
        /// @param buffer The array containing the values to output
        /// @param index The index at which the range of elements to output begins
        /// @param count The number of elements in the range of elements to output
        virtual ASPOSECPP_SHARED_API void Write(SharedPtr<Array<char_t>> buffer, int index, int count);

        /// Outputs the current line terminator to the output stream represented by the current object.
        virtual ASPOSECPP_SHARED_API void WriteLine();
        /// Outputs the string representation of the specified object followed by the current line terminator to the output stream represented by the current object.
        /// @param value The object to output
        virtual ASPOSECPP_SHARED_API void WriteLine(SharedPtr<Object> value);
        /// Outputs the string representation of the specified bool value followed by the current line terminator to the output stream represented by the current object.
        /// @param value The object to output
        virtual ASPOSECPP_SHARED_API void WriteLine(bool value);
        /// Outputs the specified character value followed by the current line terminator to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void WriteLine(char_t value);
        /// Outputs the string representation of Decimal value followed by the current line terminator to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void WriteLine(Decimal value);
        /// Outputs the string representation of double-precision floating-point value followed by the current line terminator to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void WriteLine(double value);
        /// Outputs the string representation of 32-bit integer value followed by the current line terminator to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void WriteLine(int value);
        /// Outputs the string representation of 64-bit integer value followed by the current line terminator to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void WriteLine(int64_t value);
        /// Outputs the string representation of single-precision floating-point value followed by the current line terminator to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void WriteLine(float value);
        /// Outputs the specified string object followed by the current line terminator to the output stream represented by the current object.
        /// @param value The string object to output
        virtual ASPOSECPP_SHARED_API void WriteLine(const String &value);
        /// Outputs the string representation of unsigned 32-bit integer value followed by the current line terminator to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void WriteLine(uint32_t value);
        /// Outputs the string representation of unsigned 64-bit integer value followed by the current line terminator to the output stream represented by the current object.
        /// @param value The value to output
        virtual ASPOSECPP_SHARED_API void WriteLine(uint64_t value);
        /// Outputs the string representation of the specified character array followed by the current line terminator to the output stream represented by the current object.
        /// @param buffer The array to output
        virtual ASPOSECPP_SHARED_API void WriteLine(SharedPtr<Array<char_t>> buffer);
        /// Outputs the string representation of a range of values of the specified character array followed by the current line terminator to the output stream represented by the current object.
        /// @param buffer The array containing the values to output
        /// @param index The index at which the range of elements to output begins
        /// @param count The number of elements in the range of elements to output
        virtual ASPOSECPP_SHARED_API void WriteLine(SharedPtr<Array<char_t>> buffer, int index, int count);

        /// Outputs the specified c-string to the output stream represented by the current object.
        /// @param value The c-string to output
        virtual ASPOSECPP_SHARED_API void Write(const char_t* value);
        /// Outputs the specified c-string followed by the current line terminator to the output stream represented by the current object.
        /// @param value The c-string to output
        virtual ASPOSECPP_SHARED_API void WriteLine(const char_t* value);
        /// Outputs the string representation of the specified TypeInfo object to the output stream represented by the current object.
        /// @param value The TypeInfo object to output
        virtual ASPOSECPP_SHARED_API void Write(const TypeInfo& value);
        /// Outputs the string representation of the specified TypeInfo object followed by the current line terminator to the output stream represented by the current object.
        /// @param value The TypeInfo object to output
        virtual ASPOSECPP_SHARED_API void WriteLine(const TypeInfo& value);
    };


} // namespace System

#endif // _aspose_system_console_h_
