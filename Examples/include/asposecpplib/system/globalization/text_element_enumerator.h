/// @file system/globalization/text_element_enumerator.h
#pragma once

#include <system/string.h>
#include <system/details/icu_namespace.h>

#include <memory>

/// Begins an ICU namspace scope.
ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START {
    /// Forward declaration of BreakIterator ICU class.
    ASPOSECPP_3RD_PARTY_CLASS(BreakIterator);
}

namespace System { namespace Globalization {

class TextElementEnumerator;
/// TextElementEnumerator pointer type.
typedef SharedPtr<TextElementEnumerator> TextElementEnumeratorPtr;

/// Enumerator to iterate through string elements (characters).
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TextElementEnumerator 
    : public virtual Object
    // , public Collections::IEnumerator (Not implemented)
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::TextElementEnumerator, ::System::BaseTypesInfo<System::Object>)

    /// Unhides constructor.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructor.
    /// @param str String to iterate through.
    /// @param start_index Start index.
    ASPOSECPP_SHARED_API TextElementEnumerator(const String& str, int start_index = 0, bool use_string_aliasing = false);

public:
    TextElementEnumerator(const TextElementEnumerator&) = delete;
    TextElementEnumerator& operator=(const TextElementEnumerator&) = delete;

    /// Gets the current text element.
    /// @return Object containing the current text element.
    ASPOSECPP_SHARED_API SharedPtr<Object> get_Current() const;
    /// Gets index of the current text element.
    /// @return Index of the current text element.
    ASPOSECPP_SHARED_API int get_ElementIndex() const;

    /// Moves to the next element.
    /// @return True if successfully, false if hits the end.
    ASPOSECPP_SHARED_API bool MoveNext();
    /// Gets current element.
    /// @return Current element.
    ASPOSECPP_SHARED_API String GetTextElement() const;
    /// Sets enumerator to initial position.
    ASPOSECPP_SHARED_API void Reset();

private:
    /// Enumerator state.
    enum class State
    { 
        /// Before first element.
        None = 0, 
        /// On valid element.
        Started, 
        /// After last element.
        Finished 
    };
    
    /// Original string to iterate through.
    String m_string;
    /// Start index.
    const int m_start_index;
    /// Slice of original string starting from m_start_index.
    String m_string_slice;
    /// Iterator object.
    std::unique_ptr<icu::BreakIterator> m_break_iterator;
    /// Type of current position in string.
    State m_state;
    /// Current element index in string.
    int m_element_position;

    /// Gets current iterator position.
    int CurrentIteratorPosition() const;

    /// Create string readonly alias.
    static void CreateStringAlias(const String& str, String& alias, int start_index);
};

}} // System::Globalization
