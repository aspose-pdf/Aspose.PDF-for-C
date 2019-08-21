/// @file system/collections/idictionary.h
#ifndef _aspose_system_collections_idictionary_h_
#define _aspose_system_collections_idictionary_h_

#include <system/collections/ikvcollection.h>
#include <system/collections/keyvalue_pair.h>
#include <system/array.h>

namespace System {
namespace Collections {
namespace Generic {

/// Interface for dictionary-alike containers.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam TKey Key type.
/// @tparam TValue Value type.
template<typename TKey, typename TValue>
class IDictionary : public ICollection<KeyValuePair<TKey, TValue>>
{
public:
    /// Base interface type.
    typedef ICollection<KeyValuePair<TKey, TValue>> BaseType;
    /// Key value pair type.
    typedef KeyValuePair<TKey, TValue>  KeyValuePairType;
    
    /// Unhiding Add method.
    using ICollection<KeyValuePair<TKey, TValue>>::Add;
    /// Unhiding Remove method.
    using ICollection<KeyValuePair<TKey, TValue>>::Remove;

    /// Adds key-value pair into container.
    /// @param key Key to add.
    /// @param value Value to add.
    virtual void Add(const TKey& key, const TValue& value) = 0;
    /// Checks if container contains key.
    /// @param key Key to look for.
    /// @return True if key is present, false otherwise.
    virtual bool ContainsKey(const TKey& key) const = 0;
    /// Removes key from container.
    /// @param key Key to remove.
    /// @return True if key was found and removed, false otherwise.
    virtual bool Remove(const TKey& key) = 0;
    /// Looks for value and retreives it if found.
    /// @param key Key to look for.
    /// @param value Reference to store retreived value into.
    /// @return True if value was found and retreived, false otherwise.
    virtual bool TryGetValue(const TKey& key, TValue& value) = 0;

    /// Getter function.
    /// @param key Key to look for.
    /// @return Value at specified key.
    virtual TValue idx_get(const TKey& key) const = 0;
    /// Setter function.
    /// @param key Key to look for.
    /// @param value Value to set to specified key.
    virtual void idx_set(const TKey& key, TValue value) = 0;

    /// Accesses key collection.
    /// @return Pointer to interface providing access to stored keys via ICollection interface.
    virtual SharedPtr<ICollection<TKey>> get_Keys() const { return get_KeysInternal(); }
    /// Accesses value collection.
    /// @return Pointer to interface providing access to stored values via ICollection interface.
    virtual SharedPtr<ICollection<TValue>> get_Values() const { return get_ValuesInternal(); }
    
    /// Checks if collection size is fixed.
    /// @return True if size is fixed, false otherwise.
    bool get_IsFixedSize() const { return false; }

    // ICollection interface
    /// Checks if container is thread-safe.
    /// @return True if container access methods are thread-safe, false otherwise.
    bool get_IsSynchronized() const { return false; }
    /// Gets object to use for collection synchronization.
    /// @return Pointer to object to use for synchronization.
    SharedPtr<Object> get_SyncRoot()
    {
        return System::MakeSharedPtr(this);
    }
    /// Unhides get_Count member function.
    using BaseType::get_Count;
    /// Copies dictionary contents into existing array elements.
    /// @param arr Destination array.
    /// @param index Destination array start index.
    virtual void CopyTo(ArrayPtr<KeyValuePair<TKey, TValue>> arr, int index) override
    {
        if (!arr)
            throw ArgumentNullException();

        if (index < 0)
            throw ArgumentOutOfRangeException();

        if (index + get_Count() > arr->get_Length())
            throw ArgumentException();

        SharedPtr<IEnumerator<KeyValuePair<TKey, TValue>>> e = this->GetEnumerator();
        while (e->MoveNext())
            (*arr)[index++] = e->get_Current();
    }

    /// Returns value if found; or <c>Value()</c> otherwise
    virtual TValue GetValueOrDefault(const TKey& key) const
    {
        throw System::NotImplementedException();
    }

    /// Returns value if found; or <c>defaultValue</c> otherwise.
    virtual TValue GetValueOrDefault(const TKey& key, const TValue& defaultValue) const
    {
        throw System::NotImplementedException();
    }

    /// Returns value if found; or <c>null</c> otherwise, make sense only for reference types
    virtual TValue GetValueOrNull(const TKey& key) const
    {
        throw System::NotImplementedException();
    }


protected:
    /// Implementation of get_Keys() method.
    virtual SharedPtr<ICollection<TKey>> get_KeysInternal() const { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
    /// Implementation of get_Values() method.
    virtual SharedPtr<ICollection<TValue>> get_ValuesInternal() const { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); };
};

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_idictionary_h_
