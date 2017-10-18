#ifndef _aspose_system_collections_queue_h_
#define _aspose_system_collections_queue_h_

#include "system/object.h"
#include "system/collections/base_enumerator.h"
#include "system/collections/ienumerable.h"
#include "system/collections/icollection.h"
#include "system/cycles_detection.h"

#include <list>

namespace System {
namespace Collections {
namespace Generic {

    template<typename T> class Queue;

    template<typename T>
    class QueuePtr : public SharedPtr<Queue<T> >
    {
    public:

        QueuePtr() {}
        QueuePtr(const SharedPtr<Queue<T> >& obj) : SharedPtr<Queue<T> >(obj) { }
    };

    template<typename T>
    class Queue : public IEnumerable<T>
    {
        RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::Queue<T>, System::BaseTypesInfo<System::Object>);

    protected:

        typedef SharedPtr<Queue<T> > ThisPtr;
        typedef std::list<T> queue_t;
        typedef typename queue_t::iterator queueIt_t;

        queue_t m_data;

    public:
        typedef T ValueType;

        typedef SharedPtr<IEnumerable<T> > IEnumerablePtr;
        typedef SharedPtr<IEnumerator<T> > IEnumeratorPtr;

        class Enumerator : virtual public Object, public SimpleEnumerator<queue_t>
        {
        public:
            Enumerator(const ThisPtr& data) : SimpleEnumerator<queue_t>(data, data->m_data) { }
            RTTI_INFO_TEMPLATE_CLASS(Queue<T>::Enumerator, System::BaseTypesInfo<System::Object>);
        };

        Queue() {}
        Queue(int capacity) : m_data((size_t)capacity) {}
        Queue(SharedPtr<IEnumerable<T>> items)
        {
            auto e = items->GetEnumerator();
            while (e->MoveNext())
                m_data.push_back(e->get_Current());
        }

        IEnumeratorPtr GetEnumerator() override
        {
            return MakeObject<Enumerator>(MakeSharedPtr(this));
        }

        virtual int get_Count() const
        {
            return m_data.size();
        }

        virtual void Clear()
        {
            m_data.clear();
        }

        virtual bool Contains(const T& item) const
        {
            return std::find(m_data.begin(), m_data.end(), item) != m_data.end();
        }

        void Enqueue(const T& item)
        {
            m_data.push_back(item);
        }

        T Dequeue()
        {
            T rv = m_data.front();
            m_data.pop_front();
            return rv;
        }

        T Peek()
        {
            return m_data.front();
        }

        queue_t& data() { return m_data; }
        const queue_t& data() const { return m_data; }

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            visitor.add_self(this);
            DBG::for_each_of_Object(this, m_data, visitor);
        }

        const char* DBG_class_name() const override { return "Queue<T>"; }
        bool DBG_unknown_type() const override { return false; }
#endif

    protected:
        DEFINE_GET_SHARED_MEMBERS(m_data)
    };

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_queue_h_
