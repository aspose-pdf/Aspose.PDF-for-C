#ifndef _aspose_system_collection_read_only_collection_h_
#define _aspose_system_collection_read_only_collection_h_

#include "fwd.h"
#include "system/object.h"
#include "system/collections/ilist.h"
#include "system/exceptions.h"
#include "system/cycles_detection.h"
#include "system/array.h"

namespace System {
namespace Collections {
namespace ObjectModel {

    template<typename T>
    class ReadOnlyCollection
        : virtual public Object
        , public Generic::IList<T>
    {
        RTTI_INFO_TEMPLATE_CLASS(ReadOnlyCollection<T>, System::BaseTypesInfo<System::Object>);

    protected:

        typedef SharedPtr<ReadOnlyCollection<T>> ThisPtr;
        SharedPtr<Generic::IList<T>> m_list;

    public:
        typedef T ValueType;
        typedef Generic::IList<T> BaseType;

    public:

        typedef SharedPtr<System::Collections::Generic::IEnumerator<T>> IEnumeratorPtr;

        ReadOnlyCollection(SharedPtr<Generic::IList<T>> list)
        {
            if (!list)
                throw System::ArgumentNullException(L"list");

            m_list = list;
        }

        virtual ~ReadOnlyCollection() override {}

        virtual IEnumeratorPtr GetEnumerator()  override
        {
            return m_list->GetEnumerator();
        }

        virtual int get_Count() const override
        {
            return m_list->get_Count();
        }

        virtual bool Contains(const T& item) const override
        {
            return m_list->Contains(item);
        }

        virtual int IndexOf(const T& item) const override
        {
            return m_list->IndexOf(item);
        }

        virtual T idx_get(int index) const override
        {
            return m_list->idx_get(index);
        }

        virtual void CopyTo(System::ArrayPtr<T> array, int index) override
        {
            m_list->CopyTo(array, index);
        }

    private:

        virtual void Add(const T& item) override
        {
            throw NotSupportedException(L"Operation not supported on read-only collection");
        }

        virtual void Clear() override
        {
            throw NotSupportedException(L"Operation not supported on read-only collection");
        }

        virtual bool Remove(const T& item) override
        {
            throw NotSupportedException(L"Operation not supported on read-only collection");
        }

        void RemoveAt(int index) override
        {
            throw NotSupportedException(L"Operation not supported on read-only collection");
        }

        virtual void Insert(int index, const T& item) override
        {
            throw NotSupportedException(L"Operation not supported on read-only collection");
        }

        virtual T& operator[](int index)
        {
            throw NotSupportedException(L"Operation not supported on read-only collection");
        }

        virtual void idx_set(int index, T value) override
        {
            throw NotSupportedException(L"Operation not supported on read-only collection");
        }

    protected:
        virtual Object::shared_members_type GetSharedMembers() override
        {
            Object::shared_members_type result = Object::GetSharedMembers();
            result.Add("System::Collections::ObjectModel::ReadOnlyCollection<T>::m_list[]", m_list);
            return result;
        }

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            Object::DBG_for_each_member(visitor);

            visitor.add_self(this);
            visitor.add_member(this, m_list.get(), "m_list");
        }

        const char* DBG_class_name() const override { return "ReadOnlyCollection<T>"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };


} // namespace ObjectModel
} // namespace Collections
} // namespace System

#endif // _aspose_system_collection_read_only_collection_h_
