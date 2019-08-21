/// @file system/collections/icollection.h
#ifndef _aspose_system_collections_icollection_h_
#define _aspose_system_collections_icollection_h_

#include <system/collections/ienumerable.h>
#include <system/details/pointer_collection_helpers.h>


namespace System {
namespace Collections {
namespace Generic {

/// Interface of collection of elements.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @param T Stored type.
template<typename T>
class ICollection : public virtual System::Collections::Generic::IEnumerable<T>
{
public:
    /// Value type name.
    typedef T ValueType;
    /// Collection type name.
    typedef ICollection<T> ThisType;

    /// Gets number of elements in collection.
    /// @return Number of elements.
    virtual int get_Count() const = 0;
    /// Adds element into collection.
    /// @param item to add.
    virtual void Add(const T& item) = 0;
    /// Deletes all elements from collection.
    virtual void Clear() = 0;
    /// Checks if element is present in collection.
    /// @param item Item to look for.
    /// @return True if element is present, false otherwise.
    virtual bool Contains(const T& item) const = 0;
    /// Deletes element from collection.
    /// @param item Item to remove.
    /// @return True if element was found and removed, false otherwise.
    virtual bool Remove(const T& item) = 0;
    /// Checks if collection is read only.
    /// @return true if collection is read only, false otherwise.
    virtual bool get_IsReadOnly() const { return false; }

    /// Copies all collection elements to existing array elements.
    /// @param array Destination array.
    /// @param arrayIndex Destination array start index.
    virtual void CopyTo(System::ArrayPtr<T> array, int arrayIndex) = 0;

    // Explicit definitions to avoid GCC warnings.
    /// Move assignment operator.
    /// @return Reference to this.
    ICollection& operator = (ICollection&&) { return *this; }
    /// Move assignment operator.
    /// @return Reference to this.
    ICollection& operator = (const ICollection&) { return *this; }
    /// Default constructor.
    ICollection() {}
    /// Copy constructor.
    ICollection(const ICollection&) {}
    /// Move constructor.
    ICollection(ICollection&&) {}
    /// Destructor.
    virtual ~ICollection() {}
};

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_icollection_h_
