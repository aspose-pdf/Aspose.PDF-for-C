/// @file system/collections/specialized/string_dictionary.h
#ifndef _aspose_system_collections_specialized_string_dictionary_h
#define _aspose_system_collections_specialized_string_dictionary_h

#include <system/collections/dictionary.h>

namespace System { namespace Collections { namespace Specialized {

/// String to string dictionary.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS StringDictionary : public System::Collections::Generic::Dictionary<String, String>
{
public:
    /// Gets value at specific key.
    /// @param key Key to look at.
    /// @return Copy of value at specified position, either existing or newly created.
    virtual String idx_get(const String& key) const override
    {
        return const_cast<StringDictionary*>(this)->m_map[key];
    }
};

}}} // namespace System::Collections::Specialized

#endif // _aspose_system_collections_specialized_string_dictionary_h
