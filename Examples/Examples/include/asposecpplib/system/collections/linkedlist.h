/// @file system/collections/linkedlist.h
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

/// LinkedList forward declaration.
template<typename T>
class LinkedList;

/// Node of linked list.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T Stored value type.
template<typename T>
class LinkedListNode final : public Object
{
    /// Access for owning list.
    friend class LinkedList<T>;
    /// Making it possible using any constructor with System::MakeObject().
    FRIEND_FUNCTION_System_MakeObject;
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(LinkedListNode<T>, System::BaseTypesInfo<System::Object>)

    /// Containing list.
    SharedPtr<LinkedList<T>> m_list;
    /// Next element.
    SharedPtr<LinkedListNode<T>> m_next;
    /// Previous element.
    SharedPtr<LinkedListNode<T>> m_previous;
    T m_value;

    /// Constructor.
    /// @param next Next node.
    /// @param list Containing list.
    LinkedListNode(const SharedPtr<LinkedListNode<T>>& next, const SharedPtr<LinkedList<T>>& list = nullptr)
        : m_value()
        , m_list(list)
        , m_next(next)
        , m_previous(nullptr)
    {
    }
    /// Constructor.
    /// @param value Contaied value.
    /// @param list Containing list.
    /// @param previous Previous node.
    LinkedListNode(T value, const SharedPtr<LinkedList<T>>& list, const SharedPtr<LinkedListNode<T>>& previous)
        : m_value(value)
        , m_list(list)
        , m_next(nullptr)
        , m_previous(previous)
    {
    }
    /// Constructor.
    /// @param value Contaied value.
    /// @param list Containing list.
    /// @param next Next node.
    /// @param previous Previous node.
    LinkedListNode(T value, const SharedPtr<LinkedList<T>>& list, const SharedPtr<LinkedListNode<T>>& next, const SharedPtr<LinkedListNode<T>>& previous)
        : m_value(value)
        , m_list(list)
        , m_next(next)
        , m_previous(previous)
    {
    }

public:
    /// Constructor.
    /// @param value Contaied value.
    LinkedListNode(T value)
        : m_value(value)
    {
    }

    /// Gets containing list.
    /// @return Pointer to containing list (if any) or null.
    SharedPtr<LinkedList<T>> get_List() const
    {
        return m_list;
    }
    /// Gets next node.
    /// @return Pointer to next node (if any) or null.
    SharedPtr<LinkedListNode<T>> get_Next() const
    {
        return m_next;
    }
    /// Gets previous node.
    /// @return Pointer to previous node (if any) or null.
    SharedPtr<LinkedListNode<T>> get_Previous() const
    {
        return m_previous;
    }
    /// Gets stored value.
    /// @return Stored value.
    T get_Value() const
    {
        return m_value;
    }
    /// Converts element to string.
    /// @return String representation of contained element.
    virtual String ToString() ASPOSE_CONST override
    {
        return String::Format(u"{0}", m_value);
    }
};

/// Linked list container.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T Contained value type.
template<typename T>
class LinkedList : virtual public Object, public ICollection<T>
{
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(LinkedList<T>, System::BaseTypesInfo<System::Object>)

    /// First element.
    SharedPtr<LinkedListNode<T>> m_first;
    /// Last element.
    SharedPtr<LinkedListNode<T>> m_last;

    /// Enumerator to iterate through linked list.
    class Enumerator : virtual public Object, public IEnumerator<T>
    {
        /// RTTI information.
        RTTI_INFO_TEMPLATE_CLASS(LinkedList<T>::Enumerator, System::BaseTypesInfo<System::Object>);
        /// Pointer to current element.
        SharedPtr<LinkedListNode<T>> m_current;

    public:
        /// Creates enumerator.
        /// @param list List to iterate through.
        Enumerator(const SharedPtr<LinkedList<T>>& list) : m_current(MakeObject<LinkedListNode<T>>(list->get_First()))
        {
        }

        /// Gets current element.
        /// @return Element enumerator points to.
        virtual T get_Current() ASPOSE_CONST override
        {
            return m_current->get_Value();
        }
        /// Points enumerator to the next element (if any).
        /// @return True if next element was selected successfully, otherwise false.
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
    /// Creates empty LinkedList.
    LinkedList()
        : m_first(nullptr)
        , m_last(nullptr)
    {
    }
    /// Copy constructor.
    /// @param collection Collection to copy data from.
    LinkedList(const SharedPtr<IEnumerable<T>>& collection)
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
    /// Gets enumerator to iterate through current LinkedList.
    /// @return Newly created enumerator object.
    SharedPtr<IEnumerator<T>> GetEnumerator() override
    {
        return MakeObject<Enumerator>(MakeSharedPtr(this));
    }
    /// Gets number of elements in list.
    /// @return Actual number of elements in list.
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

    /// Gets pointer to the first element in the list.
    /// @return First element in the list.
    SharedPtr<LinkedListNode<T>> get_First() { return m_first; }
    /// Gets pointer to the last element in the list.
    /// @return Last element in the list.
    SharedPtr<LinkedListNode<T>> get_Last() { return m_last; }

    /// Adds item into LinkedList end.
    /// @param item Item to add into list.
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
    /// Deletes all elements in list.
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
    /// Checks if element is present in list.
    /// @param item Item to look for.
    /// @return True if item is found, false otherwise.
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
    /// Removes first occurance of the specified item from list.
    /// @param item Item to remove.
    /// @return True if item was found and removed, false otherwise.
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
    
    /// Removes node from list (not implemented).
    void Remove(const SharedPtr<LinkedListNode<T>>& item) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
    /// Removes first node from list (not implemented).
    void RemoveFirst() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
    /// Removes last node from list (not implemented).
    void RemoveLast() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
    /// Adds node after another one (not implemented).
    void AddAfter(const SharedPtr<LinkedListNode<T>>&, const SharedPtr<LinkedListNode<T>>&) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
    /// Adds item after one (not implemented).
    SharedPtr<LinkedListNode<T>> AddAfter(const SharedPtr<LinkedListNode<T>>&, const T& item) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
    /// Adds node before another one (not implemented).
    void AddBefore(const SharedPtr<LinkedListNode<T>>&, const SharedPtr<LinkedListNode<T>>&) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
    /// Adds item before one (not implemented).
    SharedPtr<LinkedListNode<T>> AddBefore(const SharedPtr<LinkedListNode<T>>&, const T& item) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

    /// Adds node to the beginning of list.
    /// @param item Item to add.
    void AddFirst(const SharedPtr<LinkedListNode<T>>& item)
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
    /// Adds item to the beginning of list.
    /// @param item Item to add.
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
    /// Adds node to the beginning of list.
    /// @param item Item to add.
    void AddLast(const SharedPtr<LinkedListNode<T>>& item)
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
    /// Adds item to the beginning of list.
    /// @param item Item to add.
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

    /// Copies container data into existing array elements (not implemented).
    virtual void CopyTo(ArrayPtr<T> arr, int index) override
    {
        throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }

    /// Makes list treat stored pointers as weak (not implemented).
    void SetTemplateWeakPtr(unsigned int argument) override
    {
        assert(!"LinkedList doesn't support weak pointers storage");
    }

#ifdef __DBG_FOR_EACH_MEMEBR
public:
    /// Applies visitor to container and elements.
    /// @param visitor Visitor to apply.
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        visitor.add_self(this);

        if (nullptr != m_first)
        {
            SharedPtr<LinkedListNode<T>> current = m_first;

            while (current->get_Next() != nullptr)
            {
                visitor.add_self(current.get_shared());
                current = current->get_Next();
            }

            visitor.add_self(current.get_shared());
        }
    }
    /// Gets class name.
    /// @return Pointer to string literal.
    const char* DBG_class_name() const override { return "LinkedList<T>"; }
    /// Marks class as known.
    /// @return Always returns false.
    bool DBG_unknown_type() const override { return false; }
#endif
};

}}} // namespace System::Collections::Generic

#endif // _aspose_system_collections_linkedlist_h_
