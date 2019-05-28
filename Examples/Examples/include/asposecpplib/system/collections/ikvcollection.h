/// @file system/collections/ikvcollection.h
#ifndef _aspose_system_collections_ikvcollection_h_
#define _aspose_system_collections_ikvcollection_h_

#include <system/array.h>
#include <system/collections/ilist.h>

namespace System { namespace Collections { namespace Generic {

/// Interface of container containing keys or values of the dictionary-like container.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T KeyValuePair type.
template <typename T>
class IKVCollection : public IList<T>
{
public:
    // IEnumerable
    /// Gets enumerator for container.
    /// @return Newly created enumerator object.
    virtual SharedPtr<IEnumerator<T> > GetEnumerator() override = 0;

    // ICollection
    /// Gets number of elements in container.
    /// @return Actual number of container elements.
    virtual int get_Count() const override = 0;
    /// Adds item to container.
    /// @param item Item to add to container.
    virtual void Add(const T& item) override { throw MakeReadonlyException(); }
    /// Deletes all elements from container.
    virtual void Clear() override { throw MakeReadonlyException(); }
    /// Checks if item is present in container.
    /// @param item Item to look for.
    /// @return True if item is found, false otherwise.
    virtual bool Contains(const T& item) const override { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
    /// Removes item from container.
    /// @param item Item to remove.
    /// @return True if item was found and removed, false otherwise.
    virtual bool Remove(const T& item) override { throw MakeReadonlyException(); }
    /// Checks if container is read only.
    /// @return True if container is read only, false otherwise.
    virtual bool get_IsReadOnly() const override { return true; }

    // IList
    /// Gets index of item in container.
    /// @param item Item to look for.
    /// @return Index of item in container.
    virtual int IndexOf(const T& item) const override { throw System::NotSupportedException(ASPOSE_CURRENT_FUNCTION); }

    /// Inserts item at specified position.
    /// @param index Position to put item to.
    /// @param item Item to put at specified position.
    virtual void Insert(int index, const T& item) override { throw MakeReadonlyException(); }
    /// Removes item at specified position.
    /// @param index Index to delete element from.
    virtual void RemoveAt(int index) override { throw MakeReadonlyException(); }

    /// Getter function.
    /// @param index Index to get element from.
    /// @return Element at specified position.
    virtual T idx_get(int index) const override = 0;
    /// Setter function.
    /// @param index Index to set element at.
    /// @param value Value to set to specified element.
    virtual void idx_set(int index, T value) override { throw MakeReadonlyException(); }

protected:
    /// Creates exception which corresponds to calling modifying methods of read-only container.
    static System::NotSupportedException MakeReadonlyException()
    {
        return System::NotSupportedException(u"The collection is readonly.");
    }
};

} } }

#endif // _aspose_system_collections_ikvcollection_h_
