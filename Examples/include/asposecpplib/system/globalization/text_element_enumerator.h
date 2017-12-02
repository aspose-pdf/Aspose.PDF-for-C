#ifndef _aspose_system_globalization_text_element_enumerator_h_
#define _aspose_system_globalization_text_element_enumerator_h_

#include "system/string.h"
#include "system/details/icu_namespace.h"

#include <memory>

ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START {
ASPOSECPP_3RD_PARTY_CLASS(BreakIterator);
}

namespace System { namespace Globalization {

class TextElementEnumerator : public Object
{
    FRIEND_FUNCTION_System_MakeObject;

public:
    bool MoveNext();
    String GetTextElement();

private:
    enum class State { None = 0, Started, Finished };

    TextElementEnumerator(const String & str);
    
    const String m_text_holder;
    std::unique_ptr<icu::BreakIterator> m_break_iterator;

    State m_state = State::None;
    int32_t m_start_position = -1;

};

}} // System::Globalization

#endif // _aspose_system_globalization_text_element_enumerator_h_
