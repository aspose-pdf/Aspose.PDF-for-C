#pragma once
#include <assert.h>

#include <system/shared_ptr.h>
#include <system/primitive_types.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/collections/object_model/collection.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <system/collections/iequality_comparer.h>
#include <system/collections/ienumerator.h>
#include <system/collections/dictionary.h>

#include "system/object_ext.h"

namespace System {

namespace Collections {

namespace ObjectModel {

template<typename TKey, typename TItem>
class ABSTRACT KeyedCollection : public Collection<TItem>
{
    typedef KeyedCollection<TKey, TItem> ThisType;
    typedef Collection<TItem> BaseType;

    RTTI_INFO_TEMPLATE_CLASS(ThisType, System::BaseTypesInfo<BaseType>);

    FRIEND_FUNCTION_System_MakeObject;

public:

    using Collection<TItem>::get_Count;
    using Collection<TItem>::get_Items;

    virtual void Add(const TItem& item) override
    {
        int index = get_Count();
        InsertItem(index, item);
    }


    static const int defaultThreshold;
    System::SharedPtr<System::Collections::Generic::IEqualityComparer<TKey>> comparer;
    System::SharedPtr<System::Collections::Generic::Dictionary<TKey, TItem>> dict;
    int keyCount;
    int threshold;

    System::SharedPtr<System::Collections::Generic::IEqualityComparer<TKey>> get_Comparer()
    {
        return comparer;
    }

    TItem idx_get(TKey key)
    {
        if (dict != nullptr)
        {
            return dict->idx_get(key);
        }

        auto enumerator_0 = (get_Items())->GetEnumerator();
        decltype(enumerator_0->get_Current()) item_0;
        while (enumerator_0->MoveNext() && (item_0 = enumerator_0->get_Current(), true))
        {
            if (comparer->Equals(GetKeyForItem(item_0), key))
            {
                return item_0;
            }
        }
        throw Generic::KeyNotFoundException();
    }

    bool Contains(TKey key)
    {
        if (dict != nullptr)
        {
            return dict->ContainsKey(key);
        }

        auto enumerator_1 = (get_Items())->GetEnumerator();
        decltype(enumerator_1->get_Current()) item_1;
        while (enumerator_1->MoveNext() && (item_1 = enumerator_1->get_Current(), true))
        {
            if (comparer->Equals(GetKeyForItem(item_1), key))
            {
                return true;
            }
        }
        return false;
    }

    bool Remove(TKey key)
    {
        if (dict != nullptr)
        {
            if (dict->ContainsKey(key))
            {
                return Collection<TItem>::Remove(dict->idx_get(key));
            }

            return false;
        }

        for (int i = 0; i < get_Items()->get_Count(); i++)
        {
            if (comparer->Equals(GetKeyForItem(get_Items()->idx_get(i)), key))
            {
                RemoveItem(i);
                return true;
            }
        }
        return false;
    }

protected:

    System::SharedPtr<Generic::IDictionary<TKey, TItem>> get_Dictionary()
    {
        return dict;
    }

    KeyedCollection() : KeyedCollection(nullptr, defaultThreshold) { }


    KeyedCollection(System::SharedPtr<System::Collections::Generic::IEqualityComparer<TKey>> comparer)
         : KeyedCollection(comparer, defaultThreshold) { }


    KeyedCollection(System::SharedPtr<System::Collections::Generic::IEqualityComparer<TKey>> comparer, int dictionaryCreationThreshold)
         : /*Collection<TItem>(System::MakeObject<Generic::List<TItem>>()),*/ keyCount(0), threshold(0)
    {
        if (comparer == nullptr)
        {
          //  comparer = System::Collections::Generic::EqualityComparer<TKey>::get_Default();
        }
        if (dictionaryCreationThreshold == -1)
        {
            dictionaryCreationThreshold = std::numeric_limits<int>::max();
        }
        if (dictionaryCreationThreshold < -1)
        {
            throw SystemException(L"ArgumentOutOfRange_InvalidThreshold");
            //ThrowHelper.ThrowArgumentOutOfRangeException(ExceptionArgument.dictionaryCreationThreshold, ExceptionResource.ArgumentOutOfRange_InvalidThreshold);
        }
        this->comparer = comparer;
        this->threshold = dictionaryCreationThreshold;
    }

    void ChangeItemKey(TItem item, TKey newKey)
    {
        // check if the item exists in the collection
        if (!ContainsItem(item))
        {
            throw ArgumentException(L"Argument_ItemNotExist");
        }

        TKey oldKey = GetKeyForItem(item);
        if (!comparer->Equals(oldKey, newKey))
        {
            //if (newKey != nullptr)
            {
                AddKey(newKey, item);
            }

            //if (oldKey != nullptr)
            {
                RemoveKey(oldKey);
            }
        }
    }

    virtual void ClearItems()
    {
        Collection<TItem>::ClearItems();
        if (dict != nullptr)
        {
            dict->Clear();
        }

        keyCount = 0;
    }

    /*
    You can implement this method to return null for a collection that contains items without keys,
    in which case the items can be accessed only by their index. This method is an O(1) operation.
    */
    virtual TKey GetKeyForItem(TItem item) = 0;

    virtual void InsertItem(int index, const TItem& item) override
    {
        TKey key = GetKeyForItem(item);
        //if (key != nullptr)
        {
            AddKey(key, item);
        }
        Collection<TItem>::InsertItem(index, item);
    }

    virtual void RemoveItem(int index)
    {
        TKey key = GetKeyForItem(get_Items()->idx_get(index));
        //if (key != nullptr)
        {
            RemoveKey(key);
        }
        Collection<TItem>::RemoveItem(index);
    }

    virtual void SetItem(int index, TItem item)
    {
        TKey newKey = GetKeyForItem(item);
        TKey oldKey = GetKeyForItem(get_Items()->idx_get(index));

        if (comparer->Equals(oldKey, newKey))
        {
            //if (newKey != nullptr && dict != nullptr)
            {
                dict->idx_set(newKey, item);
            }
        }
        else
        {
            //if (newKey != nullptr)
            {
                AddKey(newKey, item);
            }

            //if (oldKey != nullptr)
            {
                RemoveKey(oldKey);
            }
        }
        Collection<TItem>::SetItem(index, item);
    }

private:
    bool ContainsItem(TItem item)
    {
        TKey key;
        if ((dict == nullptr) /*|| ((key = GetKeyForItem(item)) == nullptr)*/)
        {
            return get_Items()->Contains(item);
        }

        TItem itemInDict;
        bool exist = dict->TryGetValue(key, itemInDict);
        if (exist)
        {
            //return Generic::EqualityComparer<TItem>::get_Default()->Equals(itemInDict, item);
            return itemInDict == item;
        }
        return false;
    }

    void AddKey(TKey key, TItem item)
    {
        if (dict != nullptr)
        {
            dict->Add(key, item);
        }
        else if (keyCount == threshold)
        {
            CreateDictionary();
            dict->Add(key, item);
        }
        else
        {
            if (Contains(key))
            {
                throw SystemException(L"Argument_AddingDuplicate");
            }

            keyCount++;
        }
    }

    void CreateDictionary()
    {
        dict = System::MakeObject<System::Collections::Generic::Dictionary<TKey, TItem>>(comparer);

        for (int i = 0; i < get_Count(); i++)
        {
            TItem item = Collection<TItem>::idx_get(i);
            TKey key = GetKeyForItem(item);
            //if (key != nullptr)
            {
                dict->Add(key, item);
            }

        }
    }

    void RemoveKey(TKey key)
    {
        //assert(key != nullptr);
        if (dict != nullptr)
        {
            dict->Remove(key);
        }
        else
        {
            keyCount--;
        }
    }


};

template<typename TKey, typename TItem>
const int KeyedCollection<TKey, TItem>::defaultThreshold = 0;

} // namespace ObjectModel
} // namespace Collections
} // namespace System

