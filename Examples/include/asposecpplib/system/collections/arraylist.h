/// @file system/collections/arraylist.h
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

/// Array with dynamic resize.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T Element type.
template<typename T>
class ArrayList : virtual public Object, public IList<T>
{
public:
    /// Implemented interface considered basetype.
    typedef IList<T> BaseType;
    /// Pointer to collection; used by copy constructor.
    typedef SharedPtr<ICollection<T>> ICollectionPtr;
    /// Poiinter to this type.
    typedef SharedPtr<ArrayList<T>> ThisPtr;
    /// Service class to control contained pointer mode (shared/weak) via allocator.
    typedef System::Details::CollectionHelpers::ContainerPointerMode<T> pointer_mode_t;
    /// Underlying data type.
    typedef std::vector<T, typename pointer_mode_t::allocator_type> storage_type;

    /// Enumerator to iterate through array in C# style.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class Enumerator : virtual public Object, public SimpleEnumerator<storage_type>
    {
    public:
        /// Creates enumerator.
        /// @param data ArrayList to iterate through.
        Enumerator(const ThisPtr& data) : SimpleEnumerator<storage_type>(data, data->m_data) { }
        /// RTTI functions substitutions.
        RTTI_INFO_TEMPLATE_CLASS(ArrayList<T>::Enumerator, System::BaseTypesInfo<System::Object>);
    };

    /// Constructs empty array.
    ArrayList() : m_data(m_pointer_mode.GetAllocator()) {}

    /// Copy constructor.
    /// @param source Collection to copy data from.
    ArrayList(ICollectionPtr source) : m_data(m_pointer_mode.GetAllocator())
    {
        m_data.reserve(source->get_Count());
        SharedPtr<System::Collections::Generic::IEnumerator<T> > enumearator = source->GetEnumerator();
        while (enumearator->MoveNext())
            m_data.push_back(enumearator->Current());
    }

    /// Creates ArrayList of pre-defined capacity and zero size.
    /// @param capacity Container capacity.
    ArrayList(int capacity) : m_data(m_pointer_mode.GetAllocator())
    {
        m_data.reserve(capacity);
    }

    /// Gets container capacity.
    /// @return Actual capacity.
    int get_Capacity() const { return m_data.capacity(); }

    /// Sets container capacity. Has no effect on its size.
    /// @param newCapacity Requested capacity. Must be greater or equal to zero.
    void set_Capacity(int newCapacity)
    {
        if (m_data.capacity() == newCapacity)
            return;

        if (newCapacity < 0)
            throw ArgumentOutOfRangeException(u"newCapacity");

        m_data.reserve(newCapacity);

        if(newCapacity != m_data.capacity()) {
            throw OutOfMemoryException();
        }
    }

    /// Copies elements to the end of container.
    /// @param values Enumerable object to copy elements from.
    void AddRange(const SharedPtr<IEnumerable<T>>& values)
    {
        SharedPtr<IEnumerator<T>> enumearator = values->GetEnumerator();
        while (enumearator->MoveNext())
        {
            m_data.push_back(enumearator->Current());
        }
    }

    /// Gets a slice of container.
    /// @param index Slice beginning position.
    /// @param count Slice size.
    /// @return Created slice.
    SharedPtr<ArrayList<T>> GetRange(int index, int count)
    {
        if (index < 0 || count < 0)
        {
            throw ArgumentOutOfRangeException((index < 0) ? u"index" : u"count");
        }

        if (this->get_Count() - index < count)
        {
            throw ArgumentException(u"index");
        }

        auto result = MakeObject<ArrayList<T>>();
        auto length = index + count;
        for (int i = index; i < length; i++)
        {
            result->Add(idx_get(i));
        }

        return result;
    }

    // IList interface
    /// Linear search for element using operator ==.
    /// @param item Item to look for.
    /// @return Index of element (if found) or -1.
    virtual int IndexOf(const T& item) const override
    {
        typename storage_type::const_iterator it = std::find(m_data.begin(), m_data.end(), item);

        if (m_data.end() == it)
            return -1;

        return static_cast<int>(std::distance(m_data.begin(), it));
    }
    /// Inserts item into container position.
    /// @param index Insertion position, must be in range [0, size].
    /// @param item Element to insert.
    virtual void Insert(int index, const T& item) override
    {
        if (index < 0 || index > (int) m_data.size())
            throw ArgumentOutOfRangeException(u"index");

        m_data.insert(m_data.begin()+index, item);
    }
    /// Removes element at specified position.
    /// @param index Index to delete element from, must be in range [0, size).
    virtual void RemoveAt(int index) override
    {
        if (index < 0 || index >= (int) m_data.size())
            throw ArgumentOutOfRangeException(u"index");

        m_data.erase(m_data.begin() + index);
    }
    /// Element accessor.
    /// @param index Index of element to access in range of [0, size).
    /// @return const reference to selected element.
    typename storage_type::const_reference operator[](int index) const
    {
        if (index < 0 || (size_t)index >= m_data.size())
            throw ArgumentOutOfRangeException(u"index");

        return m_data[index];
    }
    /// Element accessor.
    /// @param index Index of element to access in range of [0, size).
    /// @return Reference to selected element.
    typename storage_type::reference operator[](int index)
    {
        if (index < 0 || (size_t)index >= m_data.size())
            throw ArgumentOutOfRangeException(u"index");

        return m_data[index];
    }
    /// Element getter.
    /// @param index Index of element to access in range of [0, size).
    /// @return Copy of specified element.
    virtual T idx_get(int index) const override
    {
        if (index < 0 || (size_t)index >= m_data.size())
            throw ArgumentOutOfRangeException(u"index");

        return m_data[index];
    }
    /// Element setter.
    /// @param index Index of element to access in range of [0, size).
    /// @param value Value to set to specified element.
    virtual void idx_set(int index, T value) override
    {
        if (index < 0 || (size_t)index >= m_data.size())
            throw ArgumentOutOfRangeException(u"index");

        m_data[index] = value;
    }

    // ICollection interface
    /// Gets current container size.
    /// @return Actual container size.
    virtual int  get_Count() const override { return static_cast<int>(m_data.size()); }
    /// Puts element to the end of container.
    /// @param item Element to push.
    virtual void Add(const T& item) override
    {
        m_data.push_back(item);
    }
    /// Deletes all elements from container, sets its size to zero.
    virtual void Clear() override
    {
        m_data.clear();
    }
    /// Checks if container contains specified element, uses operator == for elements comparison.
    /// @param item Item to look for.
    /// @return true if element is present, false otherwise.
    virtual bool Contains(const T& item) const override
    {
        return m_data.end() != std::find(m_data.begin(), m_data.end(), item);
    }
    /// Removes first instance of passed element found in container.
    /// @param item Element to remove.
    /// @return true if element was found and removed, false otherwise.
    virtual bool Remove(const T& item) override
    {
        typename storage_type::iterator it = std::find(m_data.begin(), m_data.end(), item);

        if(m_data.end() != it)
        {
            m_data.erase(it);
            return true;
        }

        return false;
    }
    /// Copies container contents to existing array positions.
    /// @param arr Pointer to destination array.
    /// @param index Destination array position.
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
    /// Gets enumerator to iterate through container.
    /// @return Enumerator associated with current container.
    virtual SharedPtr<IEnumerator<T> > GetEnumerator() override
    {
        return MakeObject<Enumerator>(MakeSharedPtr(this));
    }

    /// Makes specified template argument to be treated as weak pointer instead of shared one.
    /// @param argument Template argument index (should be 0).
    void SetTemplateWeakPtr(unsigned int argument) override
    {
        m_pointer_mode.SetWeak(argument, m_data);
    }

protected:
    /// Provides GetSharedMember() function for container.
    DEFINE_GET_SHARED_MEMBERS(m_data);

private:
    /// Keeps information on whether elements should be treated as shared or weak pointers (if applicable).
    pointer_mode_t m_pointer_mode;
    /// Container elements.
    storage_type m_data;

#ifdef __DBG_FOR_EACH_MEMEBR
public:
    /// Provides debug iteration throuhg container.
    /// @param visitor Visitor to apply to each element.
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        visitor.add_self(this);
        DBG::for_each_of_Object(this, m_data, visitor);
    }

    /// Provides debug class name.
    /// @return Pointer to string literal specifying class name.
    const char* DBG_class_name() const override { return "ArrayList<T>"; }
    /// Overrides default implementation to specify that class contains debug information.
    bool DBG_unknown_type() const override { return false; }
#endif
};

}}} // namespace System::Collections::Generic

#endif // _aspose_system_collections_arraylist_h_
