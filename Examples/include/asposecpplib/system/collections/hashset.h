#ifndef _aspose_system_collections_hashset_h_
#define _aspose_system_collections_hashset_h_

#include "system/object.h"
#include "system/collections/iset.h"
#include "system/collections/base_enumerator.h"
#include "system/cycles_detection.h"

#include <unordered_set>

namespace System {
namespace Collections {
namespace Generic {

    template<typename T> class HashSet;

    template<typename T>
    class HashSetPtr : public SharedPtr<HashSet<T> >
    {
    public:

        HashSetPtr() {}
        HashSetPtr(const SharedPtr<HashSet<T> >& obj) : SharedPtr<HashSet<T> >(obj) { }
    };

    template<typename T>
    class HashSet
        : virtual public System::Object
        , public ICollection<T>
    {
        RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::HashSet<T>, System::BaseTypesInfo<System::Object>);

    protected:

        typedef SharedPtr<HashSet<T> > ThisPtr;
        typedef std::unordered_set<T, std::hash<T>> set_t;
        typedef typename set_t::iterator setIt_t;

        set_t m_data;

    public:
        typedef T ValueType;
        typedef ICollection<T> BaseType;


        typedef SharedPtr<IEnumerable<T> > IEnumerablePtr;
        typedef SharedPtr<IEnumerator<T> > IEnumeratorPtr;

        class Enumerator : virtual public Object, public SimpleEnumerator<set_t>
        {
        public:
            Enumerator(const ThisPtr& set) : SimpleEnumerator<set_t>(set, set->m_data) { }
            RTTI_INFO_TEMPLATE_CLASS(HashSet<T>::Enumerator, System::BaseTypesInfo<System::Object>);
        };

        HashSet() {}

        IEnumeratorPtr GetEnumerator() override
        {
            return MakeObject<Enumerator>(MakeSharedPtr(this));
        }

        int get_Count() const override { return m_data.size(); }

        void Add(const T& item) override
        {
            TryAdd(item);
        }

        bool TryAdd(const T& item)
        {
            if (m_data.find(item) != m_data.end())
                return false;

            m_data.insert(item);
            return true;
        }

        bool Remove(const T& item) override
        {
            auto it = m_data.find(item);
            if (it == m_data.end())
                return false;

            m_data.erase(it);
            return true;
        }

        void Clear() override
        {
            m_data.clear();
        }

        bool Contains(const T& item) const override
        {
            return m_data.find(item) != m_data.end();
        }

        set_t& data() { return m_data; }
        const set_t& data() const { return m_data; }

        using BaseType::get_Count;
        virtual void CopyTo(ArrayPtr<T> arr, int index) override
        {
            if (!arr)
                throw ArgumentNullException();

            if (index < 0)
                throw ArgumentOutOfRangeException();

            if (index + get_Count() > arr->get_Length())
                throw ArgumentException();

            SharedPtr<IEnumerator<T>> e = this->GetEnumerator();
            while (e->MoveNext())
                (*arr)[index++] = e->get_Current();
        }

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            visitor.add_self(this);
            DBG::for_each_of_Object(this, m_data, visitor);
        }

        const char* DBG_class_name() const override { return "HashSet<T>"; }
        bool DBG_unknown_type() const override { return false; }
#endif

    protected:
        DEFINE_GET_SHARED_MEMBERS(m_data);
    };

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_hashset_h_
