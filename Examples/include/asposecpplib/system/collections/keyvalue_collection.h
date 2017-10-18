#ifndef _aspose_system_colllections_keyvalue_collection_h_
#define _aspose_system_colllections_keyvalue_collection_h_

#include <system/collections/base_enumerator.h>
#include <system/collections/base_kv_collection.h>

namespace System { namespace Collections { namespace Generic {

    template <typename Dict>
    class _KeyCollection : public BaseKVCollection<Dict, typename Dict::map_t::key_type>
    {
    public:

        typedef typename Dict::map_t::key_type TKey;

        _KeyCollection(const typename Dict::Ptr& dict) : BaseKVCollection<Dict, typename Dict::map_t::key_type>(dict) {}

        // IEnumerable

        class Enumerator : public BaseEnumerator<typename Dict::map_t, TKey>
        {
        public:
            Enumerator(const typename Dict::Ptr& dict) : BaseEnumerator<typename Dict::map_t, TKey>(dict, dict->data()) { }
            virtual TKey get_Current() ASPOSE_CONST { return this->IsValid() ? this->m_it->first : TKey(); }
        };

        virtual SharedPtr<IEnumerator<TKey> > GetEnumerator() { return MakeObject<Enumerator>(this->m_dict); }

        // IList

        virtual TKey idx_get(int index) const { throw System::InvalidOperationException(); }
    };


    template <typename Dict>
    class _ValueCollection : public BaseKVCollection<Dict, typename Dict::map_t::mapped_type>
    {
    public:

        typedef typename Dict::map_t::mapped_type TValue;

        _ValueCollection(const typename Dict::Ptr& dict) : BaseKVCollection<Dict, typename Dict::map_t::mapped_type>(dict) {}

        // IEnumerable

        class Enumerator : public BaseEnumerator<typename Dict::map_t, TValue>
        {
        public:
            Enumerator(const typename Dict::Ptr& dict) : BaseEnumerator<typename Dict::map_t, TValue>(dict, dict->data()) { }
            virtual TValue get_Current() ASPOSE_CONST { return this->IsValid() ? this->m_it->second : TValue(); }
        };

        virtual SharedPtr<IEnumerator<TValue> > GetEnumerator() { return MakeObject<Enumerator>(this->m_dict); }

        // IList

        virtual TValue idx_get(int index) const { throw System::InvalidOperationException(); }
    };

}}} // namespace System::Collections::Generic

#endif // _aspose_system_colllections_keyvalue_collection_h_
