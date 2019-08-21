/// @file system/text/string_builder.h
#ifndef _aspose_system_text_string_builder_h_
#define _aspose_system_text_string_builder_h_

#include <system/exceptions.h>
#include <system/string.h>
#include <system/array.h>
#include <system/enum.h>
#include <system/convert.h>

namespace System { namespace Text {

/// Buffer to accumulate string part by part.
/// This type can be allocated either in stack as value type or in heap using System::MakeObject() function.
/// Once the object is allocated, never mix up these two usecases: having SmartPtr pointers onto stack-allocated objects is strictly prohibited.
class ASPOSECPP_SHARED_CLASS StringBuilder: public Object
{
public:
    /// Constructor.
    ASPOSECPP_SHARED_API StringBuilder();
    /// Constructor.
    /// @param capacity Initial string capacity.
    ASPOSECPP_SHARED_API StringBuilder(int capacity);
    /// Constructor.
    /// @param str Initial value.
    ASPOSECPP_SHARED_API StringBuilder(const String& str);
    /// Constructor.
    /// @param value Initial value.
    /// @param capacity Initial string capacity.
    ASPOSECPP_SHARED_API StringBuilder(const String& value, int capacity);
    /// Constructor.
    /// @param value Initial value.
    /// @param startIndex Index of initial value slice beginning.
    /// @param length Initial value slice length.
    /// @param capacity Initial string capacity.
    ASPOSECPP_SHARED_API StringBuilder(const String& value, int startIndex, int length, int capacity);
    /// Destructor.
    ASPOSECPP_SHARED_API ~StringBuilder();

    /// Gets length of string currently in builder.
    /// @return Number of characters currently stored in builder.
    ASPOSECPP_SHARED_API int get_Length() const;
    /// Trunkates or extends string builder to specified length.
    /// @param len Length to set.
    ASPOSECPP_SHARED_API void set_Length(int len);
    /// Gets current capacity of string builder.
    /// @return Number of allocated characters.
    ASPOSECPP_SHARED_API int get_Capacity() const;

    /// Gets character at specified position.
    /// @param index Position in builder.
    /// @return Character at specified position.
    ASPOSECPP_SHARED_API char_t operator[](int index) const;
    /// Gets character at specified position.
    /// @param index Position in builder.
    /// @return Character at specified position.
    ASPOSECPP_SHARED_API char_t idx_get(int index) const;
    /// Sets character at specified position.
    /// @param index Position in builder.
    /// @param c Character to set.
    ASPOSECPP_SHARED_API void    idx_set(int index, char_t c);

    /// Adds character to builder.
    /// @param c Character value.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Append(char_t c);
    /// Adds characters to builder.
    /// @param c Character value.
    /// @param count How many times to repeat insertee character.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Append(char_t c, int count);
    /// Adds characters array to builder.
    /// @param arr Characters to add.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Append(const ArrayPtr<char_t>& arr);
    /// Adds characters array slice to builder.
    /// @param arr Characters to add.
    /// @param startIndex Slice beginning index.
    /// @param charCount Slice length.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Append(const ArrayPtr<char_t>& arr, int startIndex, int charCount);
    /// Adds string to builder.
    /// @param str String to add.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Append(const String& str);
    /// Adds string slice to builder.
    /// @param str String to add.
    /// @param startIndex Slice beginning index.
    /// @param charCount Slice length.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Append(const String& str, int startIndex, int charCount);
    /// Adds object's string representation to builder.
    /// @tparam T Object type.
    /// @param obj Object to serialize and add.
    /// @return This pointer.
    template <class T> StringBuilder* Append(const SharedPtr<T>& obj) { return Append(obj == nullptr ? String::Empty : obj->ToString()); }
    /// Adds builder's content to builder.
    /// @param builder Builder to add content from.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Append(const SharedPtr<StringBuilder>& builder);

    /// Adds floating point value to builder.
    /// @param f Value to serialize and add.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Append(float f);
    /// Adds floating point value to builder.
    /// @param df Value to serialize and add.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Append(double df);
    /// Adds integer value to builder.
    /// @param i Value to serialize and add.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Append(int i);
    /// Adds arithmetic value to builder.
    /// @tparam T Arithmetic type.
    /// @param value Value to serialize and add.
    /// @return This pointer.
    template<typename T>
    typename std::enable_if<std::is_arithmetic<T>::value, StringBuilder*>::type Append(T value)
    {
        Append(Convert::ToString(value));
        return this;
    }
    /// Adds enum value string representation to builder.
    /// @tparam E Enum type.
    /// @param e Value to serialize and add.
    /// @return This pointer.
    template<class E>
    typename std::enable_if< std::is_enum<E>::value, StringBuilder*>::type Append(E e)
    {
        // If you got error here it means that enum E was translated without metainformation
        // Add [CsToCppPorter.CppEnumEnableMetadata] attribute to fix the problem.
        return Append(Enum<E>::GetName(e));
    }

    /// Appends formated string to builder.
    /// @tparam TArgs Arguments type.
    /// @param format Format string.
    /// @param args Arguments to insert into format string positions.
    /// @return This pointer.
    template<class... TArgs>
    StringBuilder* AppendFormat(const String& format, const TArgs&... args)
    {
        return Append(String::Format(format, args...));
    }
    /// Appends formated string to builder.
    /// @tparam TArgs Arguments type.
    /// @param fp Format provider; ignored.
    /// @param format Format string.
    /// @param args Arguments to insert into format string positions.
    /// @return This pointer.
    template<class... TArgs>
    StringBuilder* AppendFormat(const SharedPtr<IFormatProvider> &fp, const String& format, const TArgs&... args)
    {
        return Append(String::Format(fp, format, args...));
    }

    /// Appends new line character to builder.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* AppendLine();
    /// Appends string followed by new line character to builder.
    /// @param str String to add.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* AppendLine(const String& str);

    /// Inserts string into builder's fixed position.
    /// @param startIndex Position to insert characters into.
    /// @param str String to insert.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Insert(int startIndex, const String& str);
    /// Inserts repeated string into builder's fixed position.
    /// @param index Position to insert characters into.
    /// @param value String to insert.
    /// @param count How many times to repeat @p value string.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Insert(int32_t index, const String& value, int32_t count);
    /// Inserts character into builder's fixed position.
    /// @param startIndex Position to insert characters into.
    /// @param ch Character to insert.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Insert(int startIndex, char_t ch);
    /// Inserts characters into builder's fixed position.
    /// @param index Position to insert characters into.
    /// @param chars Array to insert slice from.
    /// @param startIndex Array slice beginning index.
    /// @param charCount Array slice length.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Insert(int index, const System::ArrayPtr<char_t>& chars, int startIndex, int charCount);
    /// Inserts value into builder's fixed position.
    /// @tparam Parameter type.
    /// @param startIndex Position to insert characters into.
    /// @param value Value to format and insert.
    /// @return This pointer.
    template<typename T>
    typename std::enable_if<std::is_arithmetic<T>::value, StringBuilder*>::type Insert(int startIndex, T value)
    {
        Insert(startIndex, Convert::ToString(value));
        return this;
    }

    /// Replaces substring through the builder.
    /// @param oldString String to replace.
    /// @param newString Replacement string.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Replace(const String& oldString, const String& newString);
    /// Replaces substring through the builder's range.
    /// @param oldString String to replace.
    /// @param newString Replacement string.
    /// @param position Builder's replacement range beginning position.
    /// @param count Builder's replacement range length.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Replace(const String& oldString, const String& newString, int position, int count);
    /// Replaces character through the builder.
    /// @param oldChar Character to replace.
    /// @param newChar Replacement character.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Replace(char_t oldChar, char_t newChar);
    /// Replaces character through the builder's range.
    /// @param oldChar Character to replace.
    /// @param newChar Replacement character.
    /// @param startIndex Builder's replacement range beginning position.
    /// @param count Builder's replacement range length.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Replace(char_t oldChar, char_t newChar, int startIndex, int count);

    /// Removes fragment from builder.
    /// @param startIndex Deletion range beginning index.
    /// @param length Number of characters to remove.
    /// @return This pointer.
    ASPOSECPP_SHARED_API StringBuilder* Remove(int startIndex, int length);

    /// Gets string currently contained in builder.
    /// @return String representation of builder's data.
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;
    /// Gets substring currently contained in builder.
    /// @param startIndex Extraction range beginning index.
    /// @param length Number of characters to extract.
    /// @return String representation of builder's data subrange.
    ASPOSECPP_SHARED_API String ToString(int startIndex, int length) const;

    /// Copies builder's data into existing array positions.
    /// @param sourceIndex Index in builder to start copying from.
    /// @param destination Destination array.
    /// @param destinationIndex Index in destination array to start insertion at.
    /// @param count Number of characters to copy.
    ASPOSECPP_SHARED_API void CopyTo(int sourceIndex, System::ArrayPtr<char_t> const& destination, int destinationIndex, int count);

private:
    /// String to accumulate data in.
    System::Detail::UnicodeStringHolder m_storage;
    /// Checks if specific range exists in builder's data.
    /// @param index Range beginning index.
    /// @param count Range length in characters.
    /// @throw ArgumentOutOfRangeException If the range is not available in builder.
    void CheckBounds(int index, int count) const;
};

}}

#endif // _aspose_system_text_string_builder_h_
