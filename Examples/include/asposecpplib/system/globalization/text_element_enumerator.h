/// @file system/globalization/text_element_enumerator.h
#ifndef _aspose_system_globalization_text_element_enumerator_h_
#define _aspose_system_globalization_text_element_enumerator_h_

#include "system/string.h"
#include "system/details/icu_namespace.h"

#include <memory>

/// Begins an ICU namspace scope.
ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START {
    /// Forward declaration of BreakIterator ICU class.
    ASPOSECPP_3RD_PARTY_CLASS(BreakIterator);
}

namespace System { namespace Globalization {

/// Enumerator to iterate through string elements (characters).
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TextElementEnumerator : public Object
{
    /// Unhides constructor.
    FRIEND_FUNCTION_System_MakeObject;

public:
    /// Moves to the next element.
    /// @return True if successfully, false if hits the end.
    ASPOSECPP_SHARED_API bool MoveNext();
    /// Gets current element.
    /// @return Current element.
    ASPOSECPP_SHARED_API String GetTextElement();

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

    /// Constructor.
    /// @str String to iterate through.
    TextElementEnumerator(const String & str);
    
    /// String to iterate through.
    const String m_text_holder;
    /// Iterator object.
    std::unique_ptr<icu::BreakIterator> m_break_iterator;
    /// Type of current position in string.
    State m_state = State::None;
    /// Index in string.
    int32_t m_start_position = -1;

};

}} // System::Globalization

#endif // _aspose_system_globalization_text_element_enumerator_h_
