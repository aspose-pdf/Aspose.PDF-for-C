/// @file system/io/text_writer.h
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
/// A base class for classes that represent writers that writes sequences of characters to different destinations.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TextWriter : public IDisposable
{
    RTTI_INFO(System::IO::TextWriter, ::System::BaseTypesInfo<System::IDisposable>)

public:
    /// An alias for a shared pointer to this class.
    typedef System::SharedPtr<TextWriter> Ptr;
    /// Returns the currently used encoding.
    virtual ASPOSECPP_SHARED_API SharedPtr<System::Text::Encoding> get_Encoding() = 0;
    /// Returns the currently used IFormatProvider object.
    virtual ASPOSECPP_SHARED_API const SharedPtr<IFormatProvider> get_FormatProvider() const;
    /// Returns a line terminator string.
    virtual ASPOSECPP_SHARED_API const System::String get_NewLine() const;
    /// Sets a line terminator string.
    /// @param value A value to set
    virtual ASPOSECPP_SHARED_API void set_NewLine(const System::String &value);
    /// Destructor.
    virtual ~TextWriter() {};
    /// Returns a line terminator string.
    ASPOSECPP_SHARED_API String  get_NewLine();
    /// Returns the currently used IFormatProvider object.
    ASPOSECPP_SHARED_API IFormatProviderPtr get_FormatProvider();
    /// Releases all resources used by the current object and closes the undelying stream.
    virtual void Dispose() override { Dispose(true); }
    /// Closes the stream and releases aquired resources.
    virtual void Close() { Dispose(true); }
    /// Flushes the content of the buffer to the underlying stream.
    virtual void Flush() {}

    /// Writes the string representation of the specified object to the stream.
    /// @param value The object to write
    virtual ASPOSECPP_SHARED_API void Write(SharedPtr<Object> value);
    /// Writes the string representation of the specified boolean value to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void Write(bool value);
    /// Writes the specified character to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void Write(char_t value);
    /// Writes the string representation of the specified Decimal object to the stream.
    /// @param value The object to write
    virtual ASPOSECPP_SHARED_API void Write(Decimal value);
    /// Writes the string representation of the specified double-precision floating point value to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void Write(double value);
    /// Writes the string representation of the specified 32-bit integer value to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void Write(int value);
    /// Writes the string representation of the specified 64-bit integer value to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void Write(int64_t value);
    /// Writes the string representation of the specified single-precision floating point value to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void Write(float value);
    /// Writes the specified string to the stream.
    /// @param value The string to write
    virtual ASPOSECPP_SHARED_API void Write(const String &value);
    /// Writes the string representation of the specified unsigned 32-bit integer value to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void Write(uint32_t value);
    /// Writes the string representation of the specified unsigned 64-bit integer value to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void Write(uint64_t value);
    /// Writes all characetrs from the specified array to the stream.
    /// @param buffer The array containing the characters to write
    virtual ASPOSECPP_SHARED_API void Write(SharedPtr<Array<char_t>> buffer);
    /// Writes the specified subrange of UTF-16 characters from the specified character array to the stream.
    /// @param buffer The array containing the characters to write
    /// @param index A 0-based index of the elemnet in @p buffer at which the subrange to write begins
    /// @param count The number of characters in the subrange to write; -1 specifies that the subrange ends where @p buffer array ends 
    virtual ASPOSECPP_SHARED_API void Write(SharedPtr<Array<char_t>> buffer, int index, int count);

    /// Writes line terminator characters to the stream.
    virtual ASPOSECPP_SHARED_API void WriteLine();
    /// Writes the string representation of the specified object followed by the line-terminating characters to the stream.
    /// @param value The object to write
    virtual ASPOSECPP_SHARED_API void WriteLine(SharedPtr<Object> value);
    /// Writes the string representation of the specified boolean value followed by the line-terminating characters to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void WriteLine(bool value);
    /// Writes the specified character followed by the line-terminating characters to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void WriteLine(char_t value);
    /// Writes the string representation of the specified Decimal object followed by the line-terminating characters to the stream.
    /// @param value The object to write
    virtual ASPOSECPP_SHARED_API void WriteLine(Decimal value);
    /// Writes the string representation of the specified double-precision floating point value followed by the line-terminating characters to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void WriteLine(double value);
    /// Writes the string representation of the specified 32-bit integer value followed by the line-terminating characters to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void WriteLine(int value);
    /// Writes the string representation of the specified 64-bit integer value followed by the line-terminating characters to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void WriteLine(int64_t value);
    /// Writes the string representation of the specified single-precision floating point value followed by the line-terminating characters to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void WriteLine(float value);
    /// Writes the specified string followed by the line-terminating characters to the stream.
    /// @param value The string to write
    virtual ASPOSECPP_SHARED_API void WriteLine(const String &value);
    /// Writes the string representation of the specified unsigned 32-bit integer value followed by the line-terminating characters to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void WriteLine(uint32_t value);
    /// Writes the string representation of the specified unsigned 64-bit integer value followed by the line-terminating characters to the stream.
    /// @param value The value to write
    virtual ASPOSECPP_SHARED_API void WriteLine(uint64_t value);
    /// Writes all characetrs from the specified array followed by the line-terminating characters to the stream.
    /// @param buffer The array containing the characters to write
    virtual ASPOSECPP_SHARED_API void WriteLine(SharedPtr<Array<char_t>> buffer);
    /// Writes the specified subrange of UTF-16 characters from the specified character array followed by the line-terminating characters to the stream.
    /// @param buffer The array containing the characters to write
    /// @param index A 0-based index of the elemnet in @p buffer at which the subrange to write begins
    /// @param count The number of characters in the subrange to write; -1 specifies that the subrange ends where @p buffer array ends 
    virtual ASPOSECPP_SHARED_API void WriteLine(SharedPtr<Array<char_t>> buffer, int index, int count);
    /// Writes the specified c-string to the stream.
    /// @param value The c-string to write
    virtual ASPOSECPP_SHARED_API void Write(const char_t* value);
    /// Writes the specified c-string followed by the line-terminating characters to the stream.
    /// @param value The c-string to write
    virtual ASPOSECPP_SHARED_API void WriteLine(const char_t* value);
    /// Writes the string representation of the specified TypeInfo object to the stream.
    /// @param value The object to write
    virtual ASPOSECPP_SHARED_API void Write(const TypeInfo& value);
    /// Writes the string representation of the specified TypeInfo object followed by the line-terminating characters to the stream.
    /// @param value The object to write
    virtual ASPOSECPP_SHARED_API void WriteLine(const TypeInfo& value);

    /// Writes the specified values formatted according to the specified format to the stream.
    /// @param format The string format
    /// @param args The values to write 
    /// @tparam TArgs The list of types of values to write
    template<class... TArgs>
    void Write(const String& format, const TArgs&... args)
    {
        Write(String::Format(format, args...));
    }

    /// Writes the specified values formatted according to the specified format followed by the line-terminating characetrs to the stream.
    /// @param format The string format
    /// @param args The values to write 
    /// @tparam TArgs The list of types of values to write
    template<class... TArgs>
    void WriteLine(const String& format, const TArgs&... args)
    {
        WriteLine( String::Format(format, args...));
    }

protected:
    /// Releases all resources used by the current object and closes the undelying stream.
    /// @param disposing Specifies whether the undelying stream should be closed.
    virtual ASPOSECPP_SHARED_API void Dispose(bool disposing);

    /// Constructs a new intstance of TextWriter class that uses IFormatProvider object from
    /// the invariant culture.
    ASPOSECPP_SHARED_API TextWriter();
    /// Constructs a new intstance of TextWriter class that uses the specified IFormatProvider object.
    /// @param formatProvider The format provider object to use
    ASPOSECPP_SHARED_API TextWriter(IFormatProviderPtr formatProvider);

    /// The line terminator string.
    ArrayPtr<char_t>    CoreNewLine;
    /// IFormatProvider used by the current object.
    IFormatProviderPtr  internalFormatProvider;
};

}} // namespace System::IO

#endif  // _aspose_system_io_text_writer_h_
