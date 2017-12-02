#ifndef _aspose_system_globalization_string_info_h_
#define _aspose_system_globalization_string_info_h_

#include "system/globalization/text_element_enumerator.h"

namespace System { namespace Globalization {

class StringInfo : public Object
{
public:
    static SharedPtr<TextElementEnumerator> GetTextElementEnumerator(const String& str);
};

}} // System::Globalization

#endif // _aspose_system_globalization_string_info_h_
