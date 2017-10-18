#ifndef _aspose_system_collections_specialized_string_dictionary_h
#define _aspose_system_collections_specialized_string_dictionary_h

#include <system/collections/dictionary.h>

namespace System { namespace Collections { namespace Specialized {

    class StringDictionary : public System::Collections::Generic::Dictionary<String, String>
    {
    public:
        virtual String idx_get(const String& key) const override
        {
            return const_cast<StringDictionary*>(this)->m_map[key];
        }
    };

}}} // namespace System::Collections::Specialized

#endif // _aspose_system_collections_specialized_string_dictionary_h