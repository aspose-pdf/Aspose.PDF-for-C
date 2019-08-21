/// @file system/collections/concurrent/concurrent_dictionary.h
#ifndef _aspose_system_collections_concurrent_dictionary_h_
#define _aspose_system_collections_concurrent_dictionary_h_

#include <system/collections/dictionary.h>
#include <system/collections/keyvalue_pair.h>

namespace System {
namespace Collections {
namespace Concurrent {

/// Thread-safe dictionary implementation.
/// @tparam TKey Key type.
/// @tparam TValue Value type.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
template<class TKey, class TValue>
class ConcurrentDictionary : public System::Collections::Generic::Dictionary<TKey, TValue>
{
public:
    /// This type.
    using ThisType = ConcurrentDictionary<TKey, TValue>;
    /// Implementation type.
    using BaseType = System::Collections::Generic::Dictionary<TKey, TValue>;

private:
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(ThisType, System::BaseTypesInfo<BaseType>);

public:
    /// Sets element at specific position.
    /// @param key Position to set element at.
    /// @param value Value to set at specific position.
    virtual void idx_set(const TKey& key, TValue value) OVERRIDE
    {
        LockContext __guard(this);
        BaseType::idx_set(key, value);
    }
    /// Gets wrapper collection to access dictionary keys.
    /// @return Newly created collection to wrap collection's keys.
    virtual SharedPtr<typename ThisType::KeyCollection> get_KeysInternal() const override
    {
        SharedPtr<typename ThisType::KeyCollection> keys;
        {
            LockContext __guard(const_cast<ThisType*>(this));
            keys = BaseType::get_KeysInternal();
        }
        return keys;
    }
protected:
    /// Gets wrapper collection to access dictionary values.
    /// @return Newly created collection to wrap collection's values.
    virtual SharedPtr<typename ThisType::ValueCollection> get_ValuesInternal() const override
    {
        SharedPtr<typename ThisType::ValueCollection> values;
        {
            LockContext __guard(const_cast<ThisType*>(this));
            values = BaseType::get_ValuesInternal();
        }
        return values;
    }
public:
    /// Adds value into dictionary.
    /// @param key Key to add.
    /// @param value Value to add.
    virtual void Add(const TKey& key, const TValue& value) OVERRIDE
    {
        LockContext __guard(this);
        BaseType::Add(key, value);
    }
    /// Deletes all elements in container.
    virtual void Clear() OVERRIDE
    {
        LockContext __guard(this);
        BaseType::Clear();
    }
    /// Copies container elements to existing array elements.
    /// @param arr Destination array.
    /// @param index Index in destination array.
    virtual void CopyTo(ArrayPtr<System::Collections::Generic::KeyValuePair<TKey, TValue>> arr, int index) OVERRIDE
    {
        LockContext __guard(this);
        BaseType::CopyTo(arr, index);
    }
    /// Removes element from container.
    /// @param key Key to remove element at.
    /// @return True if element was found and removed, false otherwise.
    virtual bool Remove(const TKey& key) OVERRIDE
    {
        bool value = false;
        {
            LockContext __guard(this);
            value = BaseType::Remove(key);
        }
        return value;
    }
};

} // namespace ConcurrentGeneric
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_concurrent_dictionary_h_
