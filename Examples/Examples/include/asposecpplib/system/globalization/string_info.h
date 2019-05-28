/// @file system/globalization/string_info.h
#ifndef _aspose_system_globalization_string_info_h_
#define _aspose_system_globalization_string_info_h_

#include "system/globalization/text_element_enumerator.h"

namespace System { namespace Globalization {

/// Splitter to iterate through string parts.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS StringInfo : public Object
{
public:
    /// Creates enumerator to iterate through string's characters.
    /// @param str String to iterate through.
    /// @return Newly created enumerator.
    static ASPOSECPP_SHARED_API SharedPtr<TextElementEnumerator> GetTextElementEnumerator(const String& str);
};

}} // System::Globalization

#endif // _aspose_system_globalization_string_info_h_
