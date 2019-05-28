/// @file system/collections/stack.h
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

/// Stack class forward declaration.
template<typename T> class Stack;

/// Stack pointer.
/// This type is a pointer to manage other object's deletion.
/// It should be allocated on stack and passed to functions either by value or by const reference.
/// @tparam T Element type.
template<typename T>
class StackPtr : public SharedPtr<Stack<T> >
{
public:
    /// Constructs null pointer.
    StackPtr() {}
    /// Constructs pointer referencing specific stack.
    /// @param obj Stack to refeence.
    StackPtr(const SharedPtr<Stack<T> >& obj) : SharedPtr<Stack<T> >(obj) { }
};

/// Stack class wrapping std::list.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T Element type.
template<typename T>
class Stack : public IEnumerable<T>
{
public:
    /// Value type.
    typedef T ValueType;

private:
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::Stack<T>, System::BaseTypesInfo<System::Object>);
    /// Type which stores information on stored pointers mode (weak/shared), if applicable.
    typedef System::Details::CollectionHelpers::ContainerPointerMode<ValueType> pointer_mode_t;
    /// Information on stored pointers mode (weak/shared), if applicable.
    pointer_mode_t m_pointer_mode;

public:
    /// Underlying data type.
    typedef std::list<T, typename pointer_mode_t::allocator_type> stack_t;

protected:
    /// Pointer type.
    typedef SharedPtr<Stack<T> > ThisPtr;
    /// Iterator type.
    typedef typename stack_t::reverse_iterator queueIt_t;
    /// Underlying data structure.
    stack_t m_data;

public:
    /// Collection containing elements of same type.
    typedef SharedPtr<IEnumerable<T> > IEnumerablePtr;
    /// Enumerator type.
    typedef SharedPtr<IEnumerator<T> > IEnumeratorPtr;

    /// Enumerator to iterate through stack.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class Enumerator : virtual public Object, public ReverseEnumerator<stack_t>
    {
    public:
        /// Constructs enumerator iterating through given stack.
        /// @param data Stack to iterate through.
        Enumerator(const ThisPtr& data) : ReverseEnumerator<stack_t>(data, data->m_data) { }
        /// RTTI information.
        RTTI_INFO_TEMPLATE_CLASS(Stack<T>::Enumerator, System::BaseTypesInfo<System::Object>);
    };

    /// Constructs empty stack.
    Stack() : m_data(m_pointer_mode.GetAllocator()) {}
    /// Constructs empty stack.
    /// @param capacity Number of elements to reserve; ignored.
    Stack(int capacity) : m_data((size_t)capacity, m_pointer_mode.GetAllocator()) { /* do nothing */ }
    /// Copy constructor.
    /// @param collection Collection to copy elements from.
    Stack(IEnumerablePtr collection) : m_data(m_pointer_mode.GetAllocator())
    {
        AddRange(collection);
    }

    /// Gets enumerator to iterate through current stack.
    /// @return Newly created enumerator to iterate through current stack.
    IEnumeratorPtr GetEnumerator() override
    {
        return MakeObject<Enumerator>(MakeSharedPtr(this));
    }
    /// Gets number of elements in stack.
    /// @return Actual elements count.
    virtual int get_Count() const
    {
        return ASPOSECPP_CHECKED_CAST(int, m_data.size());
    }
    /// Deletes all elements from stack.
    virtual void Clear()
    {
        m_data.clear();
    }

    /// Checks if specific item is present in container; uses operator == for comparison.
    /// @param item Item to look for.
    /// @return True if item is found, false otherwise.
    virtual bool Contains(const T& item) const
    {
        return std::find(m_data.begin(), m_data.end(), item) != m_data.end();
    }
    /// Puts element of top of the stack.
    /// @param item Element to push into stack.
    void Push(const T& item)
    {
        m_data.push_back(item);
    }
    /// Gets element from top of the stack.
    /// @return Popped element.
    T Pop()
    {
        if (m_data.empty())
            throw InvalidOperationException(u"Stack is empty");

        T rv = m_data.back();
        m_data.pop_back();
        return rv;
    }
    /// Gets element from stack top, but keeps it in stack.
    /// @return Top element of the stack.
    T Peek()
    {
        if (m_data.empty())
            throw InvalidOperationException(u"Stack is empty");

        return m_data.back();
    }

    /// Internal data structure accessor.
    /// @return Reference to internal data structure.
    stack_t& data() { return m_data; }
    /// Internal data structure accessor.
    /// @return Const reference to internal data structure.
    const stack_t& data() const { return m_data; }

    /// Converts stack to array.
    /// @return Newly created element with copies of all elements in stack.
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

    /// Puts elements into stack.
    /// @param collection Container of elements to push into stack.
    void AddRange(IEnumerablePtr collection)
    {
        IEnumeratorPtr it = collection->GetEnumerator();
        while (it->MoveNext())
        {
            m_data.push_back(it->Current());
        }
    }

    /// Makes stack treat stored pointers as weak (if applicable).
    /// @param argument Should be 0 as there is only one template argument present.
    void SetTemplateWeakPtr(unsigned int argument) override
    {
        m_pointer_mode.SetWeak(argument, m_data);
    }

#ifdef __DBG_FOR_EACH_MEMEBR
public:
    /// Applies visitor to container and elements.
    /// @param visitor Visitor to apply.
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        visitor.add_self(this);
        DBG::for_each_of_Object(this, m_data, visitor);
    }

    /// Gets class name.
    /// @return String literal pointer.
    const char* DBG_class_name() const override { return "Stack<T>"; }
    /// Marks class as known.
    /// @return Always returns false.
    bool DBG_unknown_type() const override { return false; }
#endif

protected:
    /// Defines loop references lookup algorithm for stack.
    DEFINE_GET_SHARED_MEMBERS(m_data)
};

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_stack_h_
