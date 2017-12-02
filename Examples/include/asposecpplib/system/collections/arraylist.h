#ifndef _aspose_system_collections_arraylist_h_
#define _aspose_system_collections_arraylist_h_

#include "system/object.h"
#include "system/collections/ilist.h"
#include "system/array.h"

#include "system/collections/base_enumerator.h"
#include "system/exceptions.h"
#include "system/cycles_detection.h"

#include <vector>

#include "defines.h"

namespace System { namespace Collections { namespace Generic {

    template<typename T>
    class ArrayList : virtual public Object, public IList<T>
    {
    public:
        typedef IList<T> BaseType;
        typedef SharedPtr<ICollection<T>> ICollectionPtr;
        typedef SharedPtr<ArrayList<T>> ThisPtr;
        typedef std::vector<T> storage_type;

        class Enumerator : virtual public Object, public SimpleEnumerator<std::vector<T>>
        {
        public:
            Enumerator(const ThisPtr& data) : SimpleEnumerator<std::vector<T> >(data, data->m_data) { }
            RTTI_INFO_TEMPLATE_CLASS(ArrayList<T>::Enumerator, System::BaseTypesInfo<System::Object>);
        };

        ArrayList() {}

        ArrayList(ICollectionPtr source)
        {
            m_data.reserve(source->get_Count());
            SharedPtr<System::Collections::Generic::IEnumerator<T> > enumearator = source->GetEnumerator();
            while (enumearator->MoveNext())
                m_data.push_back(enumearator->Current());
        }

        ArrayList(int capacity)
        {
            m_data.reserve(capacity);
        }

        int get_Capacity() const { return m_data.capacity(); }

        void set_Capacity(int newCapacity)
        {
            if (m_data.capacity() == newCapacity)
                return;

            if (newCapacity < 0)
                throw ArgumentOutOfRangeException(L"newCapacity");

            m_data.reserve(newCapacity);

            if(newCapacity != m_data.capacity()) {
                throw OutOfMemoryException();
            }
        }

        // IList interface

        virtual int IndexOf(const T& item) const
        {
            typename storage_type::const_iterator it = std::find(m_data.begin(), m_data.end(), item);

            if (m_data.end() == it)
                return -1;

            return static_cast<int>(std::distance(m_data.begin(), it));
        }

        virtual void Insert(int index, const T& item)
        {
            if (index < 0 || index > (int) m_data.size())
                throw ArgumentOutOfRangeException(L"index");

            m_data.insert(m_data.begin()+index, item);
        }

        virtual void RemoveAt(int index)
        {
            if (index < 0 || index > (int) m_data.size())
                throw ArgumentOutOfRangeException(L"index");

            m_data.erase(m_data.begin() + index);
        }

        typename storage_type::const_reference operator[](int index) const
        {
            if (index < 0 || (size_t)index > m_data.size())
                throw ArgumentOutOfRangeException(L"index");

            return m_data[index];
        }

        typename storage_type::reference operator[](int index)
        {
            if (index < 0 || (size_t)index > m_data.size())
                throw ArgumentOutOfRangeException(L"index");

            return m_data[index];
        }

        virtual T idx_get(int index) const
        {
            if (index < 0 || (size_t)index > m_data.size())
                throw ArgumentOutOfRangeException(L"index");

            return m_data[index];
        }

        virtual void idx_set(int index, T value)
        {
            if (index < 0 || (size_t)index > m_data.size())
                throw ArgumentOutOfRangeException(L"index");

            m_data[index] = value;
        }

        // ICollection interface

        virtual int  get_Count() const { return static_cast<int>(m_data.size()); }

        virtual void Add(const T& item)
        {
            m_data.push_back(item);
        }

        virtual void Clear()
        {
            m_data.clear();
        }

        virtual bool Contains(const T& item) const
        {
            return m_data.end() != std::find(m_data.begin(), m_data.end(), item);
        }

        virtual bool Remove(const T& item)
        {
            typename storage_type::iterator it = std::find(m_data.begin(), m_data.end(), item);

            if(m_data.end() != it)
            {
                m_data.erase(it);
                return true;
            }

            return false;
        }

        virtual void CopyTo(System::ArrayPtr<T> arr, int index) override
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


        // IEnumerable interface

        virtual SharedPtr<IEnumerator<T> > GetEnumerator()
        {
            return MakeObject<Enumerator>(MakeSharedPtr(this));
        }

    protected:
        DEFINE_GET_SHARED_MEMBERS(m_data);

    private:

        storage_type m_data;

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            visitor.add_self(this);
            DBG::for_each_of_Object(this, m_data, visitor);
        }

        const char* DBG_class_name() const override { return "ArrayList<T>"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };

}}} // namespace System::Collections::Generic

#endif // _aspose_system_collections_arraylist_h_