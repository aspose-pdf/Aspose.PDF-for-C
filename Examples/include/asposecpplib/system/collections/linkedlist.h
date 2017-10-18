#ifndef _aspose_system_collections_linkedlist_h_
#define _aspose_system_collections_linkedlist_h_

#include <system/object.h>
#include <system/string.h>
#include <system/type_info.h>
#include <system/shared_ptr.h>
#include <system/exceptions.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/collections/icollection.h>
#include <system/array.h>

#include <cassert>

namespace System { namespace Collections { namespace Generic {

    template<typename T>
    class LinkedList;

    template<typename T>
    class LinkedListNode final : public Object
    {
        friend class LinkedList<T>;
        FRIEND_FUNCTION_System_MakeObject;

        RTTI_INFO_TEMPLATE_CLASS(LinkedListNode<T>, System::BaseTypesInfo<System::Object>)

        SharedPtr<LinkedList<T>> m_list;
        SharedPtr<LinkedListNode<T>> m_next;
        SharedPtr<LinkedListNode<T>> m_previous;
        T m_value;

        LinkedListNode(SharedPtr<LinkedListNode<T>> next, SharedPtr<LinkedList<T>> list = nullptr)
            : m_value()
            , m_list(list)
            , m_next(next)
            , m_previous(nullptr)
        {
        }

        LinkedListNode(T value, SharedPtr<LinkedList<T>> list, SharedPtr<LinkedListNode<T>> previous)
            : m_value(value)
            , m_list(list)
            , m_next(nullptr)
            , m_previous(previous)
        {
        }

        LinkedListNode(T value, SharedPtr<LinkedList<T>> list, SharedPtr<LinkedListNode<T>> next, SharedPtr<LinkedListNode<T>> previous)
            : m_value(value)
            , m_list(list)
            , m_next(next)
            , m_previous(previous)
        {
        }

    public:

        LinkedListNode(T value)
            : m_value(value)
        {
        }

        SharedPtr<LinkedList<T>> get_List() const
        {
            return m_list;
        }

        SharedPtr<LinkedListNode<T>> get_Next() const
        {
            return m_next;
        }

        SharedPtr<LinkedListNode<T>> get_Previous() const
        {
            return m_previous;
        }

        T get_Value() const
        {
            return m_value;
        }

        virtual String ToString() ASPOSE_CONST override
        {
            return String::Format(L"{0}", m_value);
        }
    };

    template<typename T>
    class LinkedList : virtual public Object, public ICollection<T>
    {
        RTTI_INFO_TEMPLATE_CLASS(LinkedList<T>, System::BaseTypesInfo<System::Object>)

        SharedPtr<LinkedListNode<T>> m_first;
        SharedPtr<LinkedListNode<T>> m_last;

        class Enumerator : virtual public Object, public IEnumerator<T>
        {
            RTTI_INFO_TEMPLATE_CLASS(LinkedList<T>::Enumerator, System::BaseTypesInfo<System::Object>);

            SharedPtr<LinkedListNode<T>> m_current;

        public:
            Enumerator(SharedPtr<LinkedList<T>> list) : m_current(MakeObject<LinkedListNode<T>>(list->get_First()))
            {
            }

            virtual T get_Current() ASPOSE_CONST override
            {
                return m_current->get_Value();
            }

            virtual bool MoveNext() override
            {
                if (nullptr != m_current->get_Next())
                {
                    m_current = m_current->get_Next();
                    return true;
                }

                return false;
            }
        };

    public:

        LinkedList()
            : m_first(nullptr)
            , m_last(nullptr)
        {
        }

        LinkedList(SharedPtr<IEnumerable<T>> collection)
            : m_first(nullptr)
            , m_last(nullptr)
        {
            SharedPtr<LinkedList<T>> list = MakeSharedPtr(this);
            SharedPtr<LinkedListNode<T>> previous = nullptr;

            auto enumerator = collection->GetEnumerator();
            decltype(enumerator->get_Current()) element;
            while (enumerator->MoveNext() && (element = enumerator->get_Current(), true))
            {
                auto current = MakeObject<LinkedListNode<T>>(element, list, previous);

                if (nullptr != previous)
                {
                    previous->m_next = current;
                }
                else
                {
                    m_first = current;
                }

                previous = current;
            }

            m_last = previous;
        }

        SharedPtr<IEnumerator<T>> GetEnumerator()
        {
            return MakeObject<Enumerator>(MakeSharedPtr(this));
        }

        virtual int get_Count() const override
        {
            int count = 0;

            if (nullptr == m_first)
            {
                return count;
            }

            ++count;
            auto current = m_first;

            while (current->get_Next() != nullptr)
            {
                ++count;
                current = current->get_Next();
            }

            return count;
        }

        SharedPtr<LinkedListNode<T>> get_First() { return m_first; }
        SharedPtr<LinkedListNode<T>> get_Last() { return m_last; }

        virtual void Add(const T& item) override
        {
            if (nullptr == m_first)
            {
                m_first = MakeObject<LinkedListNode<T>>(item);

                m_first->m_list = MakeSharedPtr(this);
                m_first->m_next = nullptr;
                m_first->m_previous = nullptr;

                m_last = m_first;
            }
            else
            {
                m_last->m_next = MakeObject<LinkedListNode<T>>(item);
                m_last->m_next->m_previous = m_last;

                m_last = m_last->m_next;

                m_last->m_next = nullptr;
                m_last->m_list = m_first->m_list;
            }
        }

        virtual void Clear() override
        {
            if (nullptr != m_first)
            {
                auto current = m_first;

                while (current->get_Next() != nullptr)
                {
                    auto previous = current;
                    current = current->get_Next();
                    previous->m_list = nullptr;
                    previous->m_next = nullptr;
                    previous->m_previous = nullptr;
                    previous.reset();
                }

                current->m_list = nullptr;
                current->m_next = nullptr;
                current->m_previous = nullptr;
                current.reset();

                m_first = nullptr;
                m_last = nullptr;
            }
        }

        virtual bool Contains(const T& item) const override
        {
            if (nullptr != m_first)
            {
                auto current = m_first;

                while (current->get_Next() != nullptr)
                {
                    if (item == current->get_Value())
                    {
                        return true;
                    }

                    current = current->get_Next();
                }

                if (item == current->get_Value())
                {
                    return true;
                }
            }

            return false;
        }

        virtual bool Remove(const T& item) override
        {
            if (!Contains(item))
            {
                return false;
            }

            auto current = m_first;

            while (current->get_Next() != nullptr)
            {
                if (item == current->get_Value())
                {
                    if (current == m_first)
                    {
                        m_first = current->m_next;
                    }

                    if (current == m_last)
                    {
                        m_last = current->m_previous;
                    }

                    current->m_list = nullptr;

                    if (nullptr != current->m_previous)
                    {
                        current->m_previous->m_next = current->m_next;
                    }

                    if (nullptr != current->m_next)
                    {
                        current->m_next->m_previous = current->m_previous;
                    }

                    current->m_next = nullptr;
                    current->m_previous = nullptr;
                    current.reset();

                    break;
                }

                current = current->get_Next();
            }

            return true;
        }

        void Remove(SharedPtr<LinkedListNode<T>> item) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

        void RemoveFirst() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

        void RemoveLast() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

        void AddAfter(SharedPtr<LinkedListNode<T>>, SharedPtr<LinkedListNode<T>>) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

        SharedPtr<LinkedListNode<T>> AddAfter(SharedPtr<LinkedListNode<T>>, const T& item) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

        void AddBefore(SharedPtr<LinkedListNode<T>>, SharedPtr<LinkedListNode<T>>) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

        SharedPtr<LinkedListNode<T>> AddBefore(SharedPtr<LinkedListNode<T>>, const T& item) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

        void AddFirst(SharedPtr<LinkedListNode<T>> item)
        {
            assert(item);

            if (m_first)
            {
                item->m_previous = nullptr;
                item->m_next = m_first;
                item->m_list = m_first->m_list;
                m_first->m_previous = item;
                m_first = item;
            }
            else
            {
                Add(item->m_value);
            }
        }

        SharedPtr<LinkedListNode<T>> AddFirst(const T& item)
        {
            if (m_first)
            {
                auto new_first = MakeObject<LinkedListNode<T>>(item, m_first->m_list, m_first, nullptr);
                m_first->m_previous = new_first;
                m_first = new_first;
            }
            else
            {
                Add(item);
            }

            return m_first;
        }

        void AddLast(SharedPtr<LinkedListNode<T>> item)
        {
            assert(item);

            if (m_last)
            {
                item->m_previous = m_last;
                item->m_next = nullptr;
                item->m_list = m_last->m_list;
                m_last->m_next = item;
                m_last = item;
            }
            else
            {
                Add(item->m_value);
            }
        }

        SharedPtr<LinkedListNode<T>> AddLast(const T& item)
        {
            if (m_last)
            {
                auto new_last = MakeObject<LinkedListNode<T>>(item, m_last->m_list, nullptr, m_last);
                m_last->m_next = new_last;
                m_last = new_last;
            }
            else
            {
                Add(item);
            }

            return m_last;
        }
        virtual void CopyTo(ArrayPtr<T> arr, int index) override
        {
            throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            visitor.add_self(this);

            if (nullptr != m_first)
            {
                SharedPtr<LinkedListNode<T>> current = m_first;

                while (current->get_Next() != nullptr)
                {
                    visitor.add_self(current.get());
                    current = current->get_Next();
                }

                visitor.add_self(current.get());
            }
        }

        const char* DBG_class_name() const override { return "LinkedList<T>"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };

}}} // namespace System::Collections::Generic

#endif // _aspose_system_collections_linkedlist_h_
