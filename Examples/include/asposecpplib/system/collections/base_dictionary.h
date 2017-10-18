#ifndef _aspose_system_collection_generic_base_dictionary_h_
#define _aspose_system_collection_generic_base_dictionary_h_

#include <system/collections/idictionary.h>
#include "system/cycles_detection.h"

#include <algorithm>

namespace System {
namespace Collections {
namespace Generic {

    template<typename map_t>
    class BaseDictionary : public IDictionary<typename map_t::key_type, typename map_t::mapped_type>
    {
        typedef typename map_t::key_type key_t;
        typedef typename map_t::mapped_type mapped_t;
        typedef typename map_t::iterator mapIt_t;

    public:
        typedef ICollection<key_t>  KeyCollection;
        typedef ICollection<mapped_t> ValueCollection;

        typedef IDictionary<typename map_t::key_type, typename map_t::mapped_type> BaseType;

        BaseDictionary() {}

        // forwarding ctor
        template<class... Args>
        BaseDictionary(int, const Args&... args)
            : m_map(args...)
        {}

        BaseDictionary(BaseType* src)
        {
            if (nullptr == src)
                throw ArgumentNullException(L"Argument cannot be nullptr");

            SharedPtr<IEnumerator<KeyValuePair<key_t, mapped_t> > > enumerator = src->GetEnumerator();
            while (enumerator->MoveNext())
                BaseDictionary<map_t>::Add(enumerator->get_Current());
        }

        // IEnumerable

        SharedPtr< IEnumerator<KeyValuePair<key_t, mapped_t> > > GetEnumerator() override = 0;

        // ICollection

        int32_t get_Count() const override
        {
            return static_cast<int32_t>(m_map.size());
        }

        void Clear() override
        {
            m_map.clear();
        }

        // IDictionary interface

        virtual mapped_t& operator[](const key_t& key)
        {
            return m_map[key];
        }

        mapped_t idx_get(const key_t& key) const override
        {
            if( m_map.count(key) == 0 )
                throw KeyNotFoundException();

            return const_cast<map_t&>(m_map)[key];
        }

        void idx_set(const key_t& key, mapped_t value) override
        {
            m_map[key] = value;
        }

        void Add(const key_t& key, const mapped_t& value) override
        {
            if( m_map.count(key) > 0 )
                throw System::ArgumentException(L"key");

            m_map.insert(std::make_pair(key, value));
        }

        bool ContainsKey(const key_t& key) const override
        {
            return m_map.find(key) != m_map.end();
        }

        bool Remove(const key_t& key) override
        {
            mapIt_t it = m_map.find(key);

            if (it != m_map.end())
            {
                m_map.erase(it);
                return true;
            }

            return false;
        }

        bool TryGetValue(const key_t& key, mapped_t& value) override
        {
            mapIt_t it = m_map.find(key);

            if (it != m_map.end())
            {
                value = it->second;
                return true;
            }

            return false;
        }

        // BaseDictionary interface

        bool ContainsValue(const mapped_t& value)
        {
            return std::find_if(m_map.begin(), m_map.end(), CheckValue(value)) != m_map.end();
        }

        map_t& data() { return m_map; }
        const map_t& data() const { return m_map; }

    protected:

        map_t m_map;

        // ICollection

        bool Contains(const KeyValuePair<key_t, mapped_t>& item) const override
        {
            typename map_t::const_iterator it = m_map.find(item.m_pair.first);

            return it != m_map.end() && it->second == item.m_pair.second;
        }

        bool Remove(const KeyValuePair<key_t, mapped_t>& item) override
        {
            mapIt_t it = m_map.find(item.m_pair.first);

            if (it != m_map.end() && it->second == item.m_pair.second)
            {
                m_map.erase(it);
                return true;
            }

            return false;
        }

        struct CheckValue
        {
            CheckValue(const mapped_t& value) : m_value(value) {}

            bool operator()(const std::pair<key_t, mapped_t>& pair) const
            {
                return pair.second == m_value;
            }

        private:

            const mapped_t& m_value;
        };



        virtual Object::shared_members_type GetSharedMembers() override
        {
            Object::shared_members_type result = Object::GetSharedMembers();
            Object::PopulateSharedMembers(result, "System::Collections::Generic::BaseDictionnary<map_t>::m_map[]", m_map);
            return result;
        }

    private:

        void Add(const KeyValuePair<key_t, mapped_t>& item) override
        {
            m_map.insert(item.m_pair);
        }

        static NotSupportedException ReadOnlyException()
        {
            return NotSupportedException(L"The collection is readonly");
        }

#ifdef __DBG_FOR_EACH_MEMEBR
        public:
            void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
            {
                visitor.add_self(this);
                DBG::for_each_of_Object(this, m_map, visitor);
            }

            const char* DBG_class_name() const override { return "BaseDictionary<T>"; }
            bool DBG_unknown_type() const override { return false; }
#endif
    };

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collection_generic_base_dictionary_h_
