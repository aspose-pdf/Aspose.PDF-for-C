#ifndef _aspose_system_collections_sorted_dictionary_h_
#define _aspose_system_collections_sorted_dictionary_h_

#include "system/object.h"
#include "system/collections/base_dictionary.h"
#include "system/collections/keyvalue_collection.h"
#include "system/cycles_detection.h"

#include <map>

namespace System {
namespace Collections {
namespace Generic {

    template<typename T, typename V> class SortedDictionary;

    template<typename TKey, typename TValue>
    class SortedDictionary
        : virtual public System::Object
        , public BaseDictionary<std::map<TKey, TValue, ComparerAdapter<TKey> > >
    {
        typedef SortedDictionary<TKey, TValue> _ThisType;
        typedef BaseDictionary<std::map<TKey, TValue, ComparerAdapter<TKey> > > _BaseType;
        RTTI_INFO_TEMPLATE_CLASS(_ThisType, System::BaseTypesInfo<_BaseType>);

    public:
        typedef ICollection<TKey>   KeyCollection;
        typedef ICollection<TValue> ValueCollection;

        typedef std::map<TKey, TValue, ComparerAdapter<TKey> > map_t;

        typedef SortedDictionary<TKey, TValue> this_t;
        typedef SharedPtr<this_t> Ptr;

        typedef KeyValuePair<TKey, TValue> KVPair;

        typedef SharedPtr< IEnumerable<KVPair> > IEnumerablePtr;
        typedef SharedPtr< IEnumerator<KVPair> > IEnumeratorPtr;


        SortedDictionary() {}

        SortedDictionary(SharedPtr<IComparer<TKey> > comparer)
            : _BaseType(0, ComparerAdapter<TKey>(comparer))
        {}

        SortedDictionary(SharedPtr<IDictionary<TKey, TValue> > src)
            : _BaseType(src.get())
        {
        }

        class Enumerator : virtual public Object, public SimpleEnumerator<map_t, KVPair>
        {
        public:
            Enumerator(Ptr dict) : SimpleEnumerator<map_t, KVPair>(dict, dict->m_map) { }
            typedef typename SortedDictionary<TKey, TValue>::Enumerator EnumeratorType;
            RTTI_INFO_TEMPLATE_CLASS(Enumerator, System::BaseTypesInfo<System::Object>);
        };

        IEnumeratorPtr GetEnumerator() override
        {
            return MakeObject<Enumerator>(MakeSharedPtr(this));
        }

    protected:
        SharedPtr<KeyCollection> get_KeysInternal() const override
        {
            return MakeObject<_KeyCollection<SortedDictionary<TKey, TValue>>>(MakeSharedPtr(this));
        }

        SharedPtr<ValueCollection> get_ValuesInternal() const override
        {
            return MakeObject<_ValueCollection<SortedDictionary<TKey, TValue>>>(MakeSharedPtr(this));
        }

        DEFINE_GET_SHARED_MEMBERS(_BaseType::m_map)
    };

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_sorted_dictionary_h_
