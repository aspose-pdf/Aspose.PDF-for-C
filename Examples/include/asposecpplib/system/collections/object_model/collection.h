#ifndef _aspose_system_collections_object_model_collection_h
#define _aspose_system_collections_object_model_collection_h

#include <system/string.h>
#include <system/collections/list.h>

namespace System { namespace Collections { namespace ObjectModel {

template<class T>
class Collection : public Generic::IList<T>
{
    Generic::ListPtr<T> items;
public:
    Collection() : items(MakeObject<System::Collections::Generic::List<T>>())
    {}

    Generic::ListPtr<T>  get_Items()
    {
        return items;
    }

    int get_Count() const
    {
        return items->get_Count();
    }

    virtual T idx_get(int index) const
    {
        if (index < 0 || index >= get_Count())
        {
            throw ArgumentOutOfRangeException(L"index");
        }

        return items[index];
    }

    virtual void idx_set(int index, T value)
    {
        if (index < 0 || index >= get_Count())
        {
            throw ArgumentOutOfRangeException(L"index");
        }
        items[index] = value;
    }


    T& operator[](int index)
    {
        if (index < 0 || index >= get_Count())
    {
            throw ArgumentOutOfRangeException(L"index");
    }

        return items[index];
    }

    const T& operator[](int index) const
    {
        if (index < 0 || index >= get_Count())
        {
            throw ArgumentOutOfRangeException(L"index");
        }
        return items[index];
    }

    virtual void Add(const T& item) override
    {
        int index = get_Count();
        InsertItem(index, item);
    }

    void Clear()
    {
        ClearItems();
    }

    bool Contains(const T& item) const
    {
        return items->Contains(item);
    }

    SharedPtr<Generic::IEnumerator<T> > GetEnumerator()
    {
        return items->GetEnumerator();
    }

    int IndexOf(const T& item) const
    {
        return items->IndexOf(item);
    }

    void Insert(int index, const T& item)
    {
        if (index < 0 || index > get_Count())
        {
            throw ArgumentOutOfRangeException(L"index");
        }

        InsertItem(index, item);
    }

    bool Remove(const T& item)
    {
        int index = items->IndexOf(item);
        if (index < 0)
        {
            return false;
        }

        RemoveItem(index);
        return true;
    }

    void RemoveAt(int index) {

        if (index < 0 || index >= get_Count())
        {
            throw ArgumentOutOfRangeException(L"index");
        }

        RemoveItem(index);
    }

    virtual void CopyTo(ArrayPtr<T> arr, int index) override
    {
        items->CopyTo(arr, index);
    }

protected:

    virtual void ClearItems()
    {
        items->Clear();
    }

    virtual void InsertItem(int index, const T& item)
    {
        items->Insert(index, item);
    }

    virtual void RemoveItem(int index)
    {
        items->RemoveAt(index);
    }

    virtual void SetItem(int index, const T& item)
    {
        items[index] = item;
    }
};

}}} // namespace System::Collections::ObjectModel

#endif // _aspose_system_collections_object_model_collection_h