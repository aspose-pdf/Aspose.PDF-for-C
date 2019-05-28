/// @file system/collections/object_model/keyed_collection.h
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

/// Abstract collection of elements with embedded keys.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam TKey Key type.
/// @tparam TItem value type.
template<typename TKey, typename TItem>
class ABSTRACT KeyedCollection : public Collection<TItem>
{
    /// This type.
    typedef KeyedCollection<TKey, TItem> ThisType;
    /// Parent interface type.
    typedef Collection<TItem> BaseType;
    /// RTTI info.
    RTTI_INFO_TEMPLATE_CLASS(ThisType, System::BaseTypesInfo<BaseType>);
    /// Allow using MakeObject with non-public constructors.
    FRIEND_FUNCTION_System_MakeObject;

public:
    /// Unhide get_Count method.
    using Collection<TItem>::get_Count;
    /// Unhide get_Items method.
    using Collection<TItem>::get_Items;
    /// Add item to container end.
    /// @param item Item to add.
    virtual void Add(const TItem& item) override
    {
        int index = get_Count();
        InsertItem(index, item);
    }

    /// Lookup dictionary creation threshold, default.
    static const int defaultThreshold;
    /// Comparer to use.
    System::SharedPtr<System::Collections::Generic::IEqualityComparer<TKey>> comparer;
    /// Wrapped dictionary.
    System::SharedPtr<System::Collections::Generic::Dictionary<TKey, TItem>> dict;
    /// Number of keys inserted into collection.
    int keyCount;
    /// Lookup dictionary creation threshold, local.
    int threshold;

    /// Gets comparer.
    /// @return Pointer to comparer in use.
    System::SharedPtr<System::Collections::Generic::IEqualityComparer<TKey>> get_Comparer()
    {
        return comparer;
    }

    /// Gets item at specific index.
    /// @param key Key to look for.
    /// @return Copy of keyed value.
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
    /// Checks if key is present in container.
    /// @param key Key to look for.
    /// @return True if key is found, false otherwise.
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
    /// Removes key from container.
    /// @param key Key to remove.
    /// @return True if key is found and removed, false otherwise.
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

    /// Makes specific template argument to be treated as weak pointer instead of shared pointer (if applicable).
    void SetTemplateWeakPtr(unsigned int argument) override
    {
        dict->SetTemplateWeakPtr(argument);
    }

protected:
    /// Gets dictionary.
    /// @return Lookup dictionary pointer (if created) or nullptr.
    System::SharedPtr<Generic::IDictionary<TKey, TItem>> get_Dictionary()
    {
        return dict;
    }
    /// Creates empty keyed collection.
    KeyedCollection() : KeyedCollection(nullptr, defaultThreshold) { }
    /// Creates empty keyed collection.
    /// @param comparer Comparer to use.
    KeyedCollection(const System::SharedPtr<System::Collections::Generic::IEqualityComparer<TKey>>& comparer)
         : KeyedCollection(comparer, defaultThreshold) { }
    /// Creates empty keyed collection.
    /// @param comparer Comparer to use.
    /// @param dictionaryCreationThreshold Number of elements to create lookup dictionary at.
    KeyedCollection(const System::SharedPtr<System::Collections::Generic::IEqualityComparer<TKey>>& comparer, int dictionaryCreationThreshold)
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
            throw SystemException(u"ArgumentOutOfRange_InvalidThreshold");
            //ThrowHelper.ThrowArgumentOutOfRangeException(ExceptionArgument.dictionaryCreationThreshold, ExceptionResource.ArgumentOutOfRange_InvalidThreshold);
        }
        this->comparer = comparer;
        this->threshold = dictionaryCreationThreshold;
    }
    /// Changes item's key.
    /// @param item Item to change key for.
    /// @param newKey New key to set for item.
    void ChangeItemKey(TItem item, TKey newKey)
    {
        // check if the item exists in the collection
        if (!ContainsItem(item))
        {
            throw ArgumentException(u"Argument_ItemNotExist");
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
    /// Deletes all elements.
    virtual void ClearItems() override
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
    /// Defines a way to extract key from item.
    /// @param item Item to extract key from.
    /// @return Extracted key value.
    virtual TKey GetKeyForItem(TItem item) = 0;
    /// Inserts item at specific index.
    /// @param index Index to insert item at.
    /// @param item Item to insert at specified index.
    virtual void InsertItem(int index, const TItem& item) override
    {
        TKey key = GetKeyForItem(item);
        //if (key != nullptr)
        {
            AddKey(key, item);
        }
        Collection<TItem>::InsertItem(index, item);
    }
    /// Removes item at specified index.
    /// @param index Index to remove item at.
    virtual void RemoveItem(int index) override
    {
        TKey key = GetKeyForItem(get_Items()->idx_get(index));
        //if (key != nullptr)
        {
            RemoveKey(key);
        }
        Collection<TItem>::RemoveItem(index);
    }
    /// Sets item at specified index.
    /// @param index Index to set item at.
    /// @param item Item to set.
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
    /// Item lookup implementation.
    /// @param item Item to look for.
    /// @return True if item is present, false otherwise.
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
    /// Adds key to item.
    /// @param key Key.
    /// @param item Item with specified key.
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
                throw SystemException(u"Argument_AddingDuplicate");
            }

            keyCount++;
        }
    }
    /// Creates lookup dictionary.
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
    /// Removes specific key.
    /// @param key Key to remove.
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

/// Sets default lookup dictionary creation threshold to zero, can be overwrited for concrete types.
template<typename TKey, typename TItem>
const int KeyedCollection<TKey, TItem>::defaultThreshold = 0;

} // namespace ObjectModel
} // namespace Collections
} // namespace System

