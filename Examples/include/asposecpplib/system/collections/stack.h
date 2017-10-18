#ifndef _aspose_system_collections_stack_h_
#define _aspose_system_collections_stack_h_

#include "system/object.h"
#include "system/array.h"
#include "system/collections/base_enumerator.h"
#include "system/collections/icollection.h"
#include "system/cycles_detection.h"

#include <list>

namespace System {
namespace Collections {
namespace Generic {

    template<typename T> class Stack;

    template<typename T>
    class StackPtr : public SharedPtr<Stack<T> >
    {
    public:

        StackPtr() {}
        StackPtr(const SharedPtr<Stack<T> >& obj) : SharedPtr<Stack<T> >(obj) { }
    };

    template<typename T>
    class Stack : public IEnumerable<T>
    {
        RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::Stack<T>, System::BaseTypesInfo<System::Object>);

    protected:

        typedef SharedPtr<Stack<T> > ThisPtr;
        typedef std::list<T> stack_t;
        typedef typename stack_t::reverse_iterator queueIt_t;

        stack_t m_data;

    public:
        typedef T ValueType;

        typedef SharedPtr<IEnumerable<T> > IEnumerablePtr;
        typedef SharedPtr<IEnumerator<T> > IEnumeratorPtr;

        class Enumerator : virtual public Object, public ReverseEnumerator<stack_t>
        {
        public:
            Enumerator(const ThisPtr& data) : ReverseEnumerator<stack_t>(data, data->m_data) { }
            RTTI_INFO_TEMPLATE_CLASS(Stack<T>::Enumerator, System::BaseTypesInfo<System::Object>);
        };

        Stack() {}
        Stack(int capacity) { /* do nothing */ }
        Stack(IEnumerablePtr collection)
        {
            AddRange(collection);
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

        void Push(const T& item)
        {
            m_data.push_back(item);
        }

        T Pop()
        {
            T rv = m_data.back();
            m_data.pop_back();
            return rv;
        }

        T Peek()
        {
            return m_data.back();
        }

        stack_t& data() { return m_data; }
        const stack_t& data() const { return m_data; }

        virtual ArrayPtr<T> ToArray()
        {
            ArrayPtr<T> result = System::MakeObject<Array<T> >(this->get_Count());
            queueIt_t it = m_data.rbegin();
            queueIt_t end = m_data.rend();
            int i = 0;
            while (it != end)
                result[i++] = *it++;
            return result;
        }

        void AddRange(IEnumerablePtr collection)
        {
            IEnumeratorPtr it = collection->GetEnumerator();
            while (it->MoveNext())
            {
                m_data.push_back(it->Current());
            }
        }


#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            visitor.add_self(this);
            DBG::for_each_of_Object(this, m_data, visitor);
        }

        const char* DBG_class_name() const override { return "Stack<T>"; }
        bool DBG_unknown_type() const override { return false; }
#endif

    protected:
        DEFINE_GET_SHARED_MEMBERS(m_data)
    };

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_stack_h_
