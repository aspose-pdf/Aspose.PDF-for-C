/// @file system/globalization/string_info.h
#pragma once

#include <system/array.h>
#include <system/globalization/text_element_enumerator.h>

namespace System { namespace Globalization {

class StringInfo;
/// StringInfo pointer type.
typedef SharedPtr<StringInfo> StringInfoPtr;

/// Splitter to iterate through string parts.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS StringInfo : public virtual Object
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::StringInfo, ::System::BaseTypesInfo<System::Object>)

    /// Enabling using constructors.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructor.
    ASPOSECPP_SHARED_API StringInfo();
    /// Constructor.
    /// @param value A string to initialize this StringInfo object,
    ASPOSECPP_SHARED_API StringInfo(const String& value);

public:
    StringInfo(const StringInfo&) = delete;
    StringInfo& operator=(const StringInfo&) = delete;

    /// Gets the value of the StringInfo object.
    /// @return String value.
    ASPOSECPP_SHARED_API String get_String() const;
    /// Sets the value of the StringInfo object.
    /// @param value String value.
    ASPOSECPP_SHARED_API void set_String(const String& value);
    /// Gets number of text items in StringInfo object.
    ASPOSECPP_SHARED_API int get_LengthInTextElements() const;

    /// Gets substring of text elements from the specified text element through the last text element.
    /// @param starting_text_element Index of a text element.
    /// @return Substring of text elements.
    ASPOSECPP_SHARED_API String SubstringByTextElements(int starting_text_element) const;
    /// Gets substring of text elements from the specified text element through the specified number of text elements.
    /// @param starting_text_element Index of a text element.
    /// @param length_in_text_elements Number of text elements.
    /// @return Substring of text elements.
    ASPOSECPP_SHARED_API String SubstringByTextElements(int starting_text_element, int length_in_text_elements) const;

    // Object methods
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> value) override;
    ASPOSECPP_SHARED_API int GetHashCode() const override;

    /// Gets first element in the specified string.
    /// @param str Input string.
    /// @return First text element.
    static ASPOSECPP_SHARED_API String GetNextTextElement(const String& str);
    /// Gets element at the specified index of the specified string.
    /// @param str Input string.
    /// @param index Start index.
    /// @return Text element at the specified index.
    static ASPOSECPP_SHARED_API String GetNextTextElement(const String& str, int index);
    /// Creates enumerator to iterate through string's characters.
    /// @param str String to iterate through.
    /// @return Newly created enumerator.
    static ASPOSECPP_SHARED_API SharedPtr<TextElementEnumerator> GetTextElementEnumerator(const String& str);
    /// Creates enumerator to iterate through string's characters starting at the specified index.
    /// @param str String to iterate through.
    /// @param index Start index.
    /// @return Newly created enumerator.
    static ASPOSECPP_SHARED_API SharedPtr<TextElementEnumerator> GetTextElementEnumerator(const String& str, int index);
    /// Gets indexes of the base characters, high surrogates and control characters.
    /// @param str Input string.
    /// @return Array of indexes.
    static ASPOSECPP_SHARED_API ArrayPtr<int> ParseCombiningCharacters(const String& str);

private:
    /// Value of the StringInfo object.
    String m_value;
    mutable ArrayPtr<int> m_indexes;

    ArrayPtr<int>& Indexes() const;
};

}} // System::Globalization
