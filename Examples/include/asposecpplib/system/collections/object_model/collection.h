/// @file system/collections/object_model/collection.h
#ifndef _aspose_system_collections_object_model_collection_h
#define _aspose_system_collections_object_model_collection_h

#include <system/string.h>
#include <system/collections/list.h>

namespace System { namespace Collections { namespace ObjectModel {

/// Base type for generic collection.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T Element type.
template<class T>
class Collection : public Generic::IList<T>
{
    /// Internal data structure.
    Generic::ListPtr<T> items;
public:
    /// Createes empty collection.
    Collection() : items(MakeObject<System::Collections::Generic::List<T>>())
    {}

    /// Internal data structure accessor.
    /// @return Pointer to internal list.
    Generic::ListPtr<T>  get_Items()
    {
        return items;
    }
    /// Gets number of elements.
    /// @return Active element count.
    int get_Count() const override
    {
        return items->get_Count();
    }
    /// Gets value at specified index.
    /// @param index Index to get value from.
    /// @return Copy of value at specified index.
    virtual T idx_get(int index) const override
    {
        if (index < 0 || index >= get_Count())
        {
            throw ArgumentOutOfRangeException(u"index");
        }

        return items[index];
    }
    /// Sets value at specified index.
    /// @param index Index to set value at.
    /// @param value Value to set at specified index.
    virtual void idx_set(int index, T value) override
    {
        if (index < 0 || index >= get_Count())
        {
            throw ArgumentOutOfRangeException(u"index");
        }
        items[index] = value;
    }
    /// Gets value at specified index.
    /// @param index Index to get value from.
    /// @return Reference to existing value at specified index.
    T& operator[](int index)
    {
        if (index < 0 || index >= get_Count())
        {
            throw ArgumentOutOfRangeException(u"index");
        }

        return items[index];
    }
    /// Gets value at specified index.
    /// @param index Index to get value from.
    /// @return Const reference to existing value at specified index.
    const T& operator[](int index) const
    {
        if (index < 0 || index >= get_Count())
        {
            throw ArgumentOutOfRangeException(u"index");
        }
        return items[index];
    }

    /// Adds value to container.
    /// @param item Item to add.
    virtual void Add(const T& item) override
    {
        int index = get_Count();
        InsertItem(index, item);
    }
    /// Deletes all elements.
    void Clear() override
    {
        ClearItems();
    }
    /// Checks if item is present in collection.
    /// @param item to look for.
    /// @return True if item is present, false otherwise.
    bool Contains(const T& item) const override
    {
        return items->Contains(item);
    }
    /// Gets enumerator to iterate through collection.
    /// @return Created enumerator iterating through current collection.
    SharedPtr<Generic::IEnumerator<T> > GetEnumerator() override
    {
        return items->GetEnumerator();
    }
    /// Looks for element in collection.
    /// @param item Item to look for.
    /// @return Index of first occurance of specified item or -1 if not found.
    int IndexOf(const T& item) const override
    {
        return items->IndexOf(item);
    }
    /// Inserts item into specified position.
    /// @param index Index to insert item into.
    /// @param item Item to insert into specified position.
    void Insert(int index, const T& item) override
    {
        if (index < 0 || index > get_Count())
        {
            throw ArgumentOutOfRangeException(u"index");
        }

        InsertItem(index, item);
    }
    /// Removes specific item.
    /// @param item Item to remove.
    /// @return True if item was found and removed, false otherwise.
    bool Remove(const T& item) override
    {
        int index = items->IndexOf(item);
        if (index < 0)
        {
            return false;
        }

        RemoveItem(index);
        return true;
    }
    /// Removes item at specific position.
    /// @param index Index to remove item at.
    void RemoveAt(int index) override {

        if (index < 0 || index >= get_Count())
        {
            throw ArgumentOutOfRangeException(u"index");
        }

        RemoveItem(index);
    }

    /// Copies collection elements into existing array elements.
    /// @param arr Destination array.
    /// @param index Destination array start index.
    virtual void CopyTo(ArrayPtr<T> arr, int index) override
    {
        items->CopyTo(arr, index);
    }
    
    /// Makes stored pointers weak (if applicable).
    /// @param argument Should be 0 as only one template argument is present.
    void SetTemplateWeakPtr(unsigned int argument) override
    {
        items->SetTemplateWeakPtr(argument);
    }

protected:
    /// Deletes all items.
    virtual void ClearItems()
    {
        items->Clear();
    }
    /// Inserts item into specified position.
    /// @param index Index to insert item into.
    /// @param item Item to insert into specified position.
    virtual void InsertItem(int index, const T& item)
    {
        items->Insert(index, item);
    }
    /// Removes item from specified position.
    /// @param index Index to remove item from.
    virtual void RemoveItem(int index)
    {
        items->RemoveAt(index);
    }
    /// Sets item at specified position.
    /// @param index Index to set item at.
    /// @param item Value to set at specified position.
    virtual void SetItem(int index, const T& item)
    {
        items[index] = item;
    }
};

}}} // namespace System::Collections::ObjectModel

#endif // _aspose_system_collections_object_model_collection_h
