#ifndef _aspose_system_collections_dictionary_h_
#define _aspose_system_collections_dictionary_h_

#include "system/object.h"
#include "system/collections/base_dictionary.h"
#include "system/collections/keyvalue_collection.h"
#include "system/collections/iequality_comparer.h"
#include "system/cycles_detection.h"

#include <unordered_map>

namespace System {
namespace Collections {
namespace Generic {

    template<typename T, typename V> class Dictionary;

    template<typename T, typename V>
    class DictionaryPtr : public SharedPtr<Dictionary<T, V> >
    {
    public:

        DictionaryPtr() {}
        DictionaryPtr(const SharedPtr<Dictionary<T, V> >& obj) : SharedPtr<Dictionary<T, V> >(obj) { }

        template<class X>
        V& operator[] (const X& key) const
        {
            return (*(this->get()))[T(key)];
        }

        V& operator[] (const T& key) const
        {
            return (*(this->get()))[key];
        }
    };



    template<typename TKey, typename TValue>
    class Dictionary
        : virtual public System::Object
        , public BaseDictionary<std::unordered_map<TKey, TValue, EqualityComparerHashAdapter<TKey>, EqualityComparerAdapter<TKey>> >
    {
        typedef Dictionary<TKey, TValue> ThisType;
        typedef BaseDictionary<std::unordered_map<TKey, TValue, EqualityComparerHashAdapter<TKey>, EqualityComparerAdapter<TKey>> > BaseType;

        RTTI_INFO_TEMPLATE_CLASS(ThisType, System::BaseTypesInfo<System::Object>);

    public:
        typedef ICollection<TKey>   KeyCollection;
        typedef ICollection<TValue> ValueCollection;

        typedef std::unordered_map<TKey, TValue, EqualityComparerHashAdapter<TKey>, EqualityComparerAdapter<TKey>>  map_t;


        typedef SharedPtr< Dictionary<TKey, TValue> > Ptr;

        typedef KeyValuePair<TKey, TValue> KVPair;

        typedef SharedPtr< IEnumerable<KVPair> > IEnumerablePtr;
        typedef SharedPtr< IEnumerator<KVPair> > IEnumeratorPtr;

        Dictionary() {}

        Dictionary(const map_t& map)
            : BaseType(0, map) // 0 - use forwarding ctor
        {}

        Dictionary(int capacity)
            : BaseType(0) // 0 - use forwarding ctor, capacity ignored
        {}

        Dictionary(SharedPtr<IDictionary<TKey, TValue> > src)
            : BaseType(src.get())
        {
        }

        Dictionary(SharedPtr<IDictionary<TKey, TValue> > src, SharedPtr<IEqualityComparer<TKey> > comparer)
            : BaseType(src.get(), 8, EqualityComparerHashAdapter<TKey>(comparer), EqualityComparerAdapter<TKey>(comparer)) // 8 is a bucket count
        {
        }

        Dictionary(SharedPtr<IEqualityComparer<TKey> > comparer)
            : BaseType(0, 8, EqualityComparerHashAdapter<TKey>(comparer), EqualityComparerAdapter<TKey>(comparer)) // 0 - use forwarding ctor
        {
        }

        Dictionary(int capacity, SharedPtr<IEqualityComparer<TKey> > comparer)
            : Dictionary(comparer)
        {
        }

        class Enumerator : virtual public Object, public SimpleEnumerator<map_t, KVPair>
        {
            typedef typename Dictionary<TKey, TValue>::Enumerator EnumeratorType;
        public:
            Enumerator(Ptr dict) : SimpleEnumerator<map_t, KVPair>(dict, dict->m_map) { }
            RTTI_INFO_TEMPLATE_CLASS(EnumeratorType, System::BaseTypesInfo<System::Object>);
        };

        virtual IEnumeratorPtr GetEnumerator()
        {
            return MakeObject<Enumerator>(MakeSharedPtr(this));
        }

    protected:
        SharedPtr<KeyCollection> get_KeysInternal() const
        {
            return MakeObject<_KeyCollection<Dictionary<TKey, TValue>>>(MakeSharedPtr(this));
        }
        SharedPtr<ValueCollection> get_ValuesInternal() const
        {
            return MakeObject<_ValueCollection<Dictionary<TKey, TValue>>>(MakeSharedPtr(this));
        }

        DEFINE_GET_SHARED_MEMBERS(BaseType::m_map)

    public:
        virtual SharedPtr<KeyCollection> get_Keys() const { return get_KeysInternal(); }
        virtual SharedPtr<ValueCollection> get_Values() const { return get_ValuesInternal(); }

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            BaseType::DBG_for_each_member(visitor);

            visitor.add_self(this);
        }

        const char* DBG_class_name() const override { return "Dictionary<T>"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };
} // namespace Generic
} // namespace Collections
} // namespace System

namespace std
{
    template <class T>
    struct hash<System::SharedPtr<T> >
    {
        using argument_type = System::SharedPtr<T>;
        using result_type = std::size_t;

        std::size_t operator()(System::SharedPtr<T> const& val) const
        {
            if (val)
            {
                return val->GetHashCode();
            }
            return 0;
        }
    };

    template <class T>
    struct hash<System::WeakPtr<T> >
    {
        using argument_type = System::WeakPtr<T>;
        using result_type = std::size_t;

        std::size_t operator()(System::WeakPtr<T> const& val) const
        {
            if (auto ptr = val.lock())
            {
                return val->GetHashCode();
            }
            return 0;
        }
    };

}

#endif // _aspose_system_collections_dictionary_h_
