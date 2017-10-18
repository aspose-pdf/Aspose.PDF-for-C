#ifndef _aspose_system_collections_sorted_list_h_
#define _aspose_system_collections_sorted_list_h_

#include "system/object.h"
#include "system/collections/ilist.h"
#include "system/collections/icomparer.h"
#include "system/collections/base_dictionary.h"
#include "system/collections/keyvalue_list.h"
#include "system/exceptions.h"
#include "system/cycles_detection.h"

#include <vector>
#include <utility>
#include <algorithm>

namespace System {
namespace Collections {
namespace Generic {
    namespace Detail {
        template <typename Key, typename Mapped, typename Comparer>
        class FlatMap
        {
        public:
            typedef Key key_type;
            typedef Mapped mapped_type;
            typedef std::pair<key_type, mapped_type> value_type;
            typedef Comparer comparer_type;

            typedef std::vector<value_type> vector_type;

            typedef typename vector_type::iterator iterator;
            typedef typename vector_type::const_iterator const_iterator;

            typedef typename vector_type::size_type size_type;

            FlatMap() {}
            FlatMap(const comparer_type &cmp) : m_comparer(cmp) {}

            iterator begin() { return m_data.begin(); }
            iterator end() { return m_data.end(); }
            const_iterator begin() const { return m_data.begin(); }
            const_iterator end() const { return m_data.end(); }

            mapped_type& operator [] (const key_type &key)
            {
                const iterator position = std::lower_bound(begin(), end(), key, m_comparer);
                if (position != end() && !m_comparer(key, position->first))
                    return position->second;

                return m_data.insert(position, value_type(key, mapped_type()))->second;
            }

            iterator erase(const_iterator position) 
            { 
                return m_data.erase(position); 
            }
            std::pair<iterator, bool> insert(const value_type &pair)
            {
                const iterator position = std::lower_bound(begin(), end(), pair, m_comparer);
                if (position != end() && !m_comparer(pair.first, position->first))
                    return std::make_pair(position, false);

                return std::make_pair(m_data.insert(position, pair), true);
            }
            iterator find(const key_type &key)
            {
                const iterator position = std::lower_bound(begin(), end(), key, m_comparer);
                if (position == end() || m_comparer(key, position->first))
                    return end();
                else
                    return position;
            }
            const_iterator find(const key_type &key) const
            {
                const const_iterator position = std::lower_bound(begin(), end(), key, m_comparer);
                if (position == end() || m_comparer(key, position->first))
                    return end();
                else
                    return position;
            }
            size_type count(const key_type &key) const
            {
                const const_iterator position = std::lower_bound(begin(), end(), key, m_comparer);
                if (position == end() || m_comparer(key, position->first))
                    return 0;
                else
                    return 1;
            }

            void clear()
            {
                m_data.clear();
            }
            size_type size() const
            {
                return m_data.size();
            }

            bool operator == (const FlatMap &other) const
            {
                return size() == other.size() && std::equal(begin(), end(), other.begin());
            }

        private:
            class value_type_comparer {
            public:
                inline value_type_comparer() {}
                inline value_type_comparer(const comparer_type &cmp) : m_comparer(cmp) {}
                template <class P, class Q>
                inline bool operator () (const P &a, const Q &b) const
                {
                    return m_comparer(getKey(a), getKey(b));
                }
            private:
                static inline const key_type& getKey(const key_type &key) { return key; }
                static inline const key_type& getKey(const value_type &pair) { return pair.first; }
                comparer_type m_comparer;
            };

            vector_type m_data;
            value_type_comparer m_comparer;
        };
    }


    template<typename T, typename V> class SortedList;

    template<typename TKey, typename TValue>
    class SortedList
        : public BaseDictionary<Detail::FlatMap<TKey, TValue, ComparerAdapter<TKey> > >
    {
        typedef SortedList<TKey, TValue> _ThisType;
        typedef BaseDictionary<Detail::FlatMap<TKey, TValue, ComparerAdapter<TKey> > > _BaseType;
        RTTI_INFO_TEMPLATE_CLASS(_ThisType, System::BaseTypesInfo<_BaseType>);

    public:
        typedef ICollection<TKey>   KeyCollection;
        typedef ICollection<TValue> ValueCollection;

        typedef Detail::FlatMap<TKey, TValue, ComparerAdapter<TKey> > map_t;

        typedef SortedList<TKey, TValue> this_t;
        typedef SharedPtr<this_t> Ptr;

        typedef KeyValuePair<TKey, TValue> KVPair;

        typedef SharedPtr< IEnumerable<KVPair> > IEnumerablePtr;
        typedef SharedPtr< IEnumerator<KVPair> > IEnumeratorPtr;


        SortedList() {}

        SortedList(SharedPtr<IComparer<TKey> > comparer)
            : _BaseType(0, ComparerAdapter<TKey>(comparer)) // use forwarding ctor
        {}

        SortedList(SharedPtr<IDictionary<TKey, TValue> > src)
            : _BaseType(src.get())
        {
        }

        SortedList(const map_t& map)
            : _BaseType(0, map) // 0 - use forwarding ctor
        {}

        SortedList(int capacity)
        {
            this->m_map.reserve(static_cast<typename map_t::size_type>(capacity));
        }

        int get_Capacity() const
        {
            return static_cast<int>(this->m_map.capacity());
        }
        void set_Capacity(int capacity)
        {
            this->m_map.reserve(capacity);
        }

        void RemoveAt(int index)
        {
            this->m_map.erase(this->m_map.begin() + index);
        }

        int IndexOfKey(TKey key) const
        {
            auto iter = this->m_map.find(key);
            if (iter == this->m_map.end())
                return -1;
            return std::distance(this->m_map.begin(), iter);
        }

        int IndexOfValue(TValue value) const
        {
            auto iter = std::find_if(this->m_map.begin(), this->m_map.end(), typename _BaseType::CheckValue(value));
            if (iter == this->m_map.end())
                return -1;
            return std::distance(this->m_map.begin(), iter);
        }

        class Enumerator : virtual public Object, public SimpleEnumerator<map_t, KVPair>
        {
        public:
            Enumerator(const Ptr& dict) : SimpleEnumerator<map_t, KVPair>(dict, dict->m_map) { }
            typedef typename SortedList<TKey, TValue>::Enumerator EnumeratorType;
            RTTI_INFO_TEMPLATE_CLASS(EnumeratorType, System::BaseTypesInfo<System::Object>);
        };

        IEnumeratorPtr GetEnumerator() override
        {
            return MakeObject<Enumerator>(MakeSharedPtr(this));
        }

    protected:
        virtual SharedPtr<KeyCollection> get_KeysInternal() const
        {
            return MakeObject<_KeyList<SortedList<TKey, TValue>>>(MakeSharedPtr(this));
        }

        virtual SharedPtr<ValueCollection> get_ValuesInternal() const
        {
            return MakeObject<_ValueList<SortedList<TKey, TValue>>>(MakeSharedPtr(this));
        }

        DEFINE_GET_SHARED_MEMBERS(_BaseType::m_map)

    public:
        virtual SharedPtr<IList<TKey>> get_Keys() const
        {
            return MakeObject<_KeyList<SortedList<TKey, TValue>>>(MakeSharedPtr(this));
        }
        virtual SharedPtr<IList<TValue>> get_Values() const
        {
            return MakeObject<_ValueList<SortedList<TKey, TValue>>>(MakeSharedPtr(this));
        }
    };

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_sorted_list_h_
