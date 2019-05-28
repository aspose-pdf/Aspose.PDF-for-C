/// @file system/collections/ilist.h
#ifndef _aspose_system_collections_ilist_h_
#define _aspose_system_collections_ilist_h_

#include <system/collections/icollection.h>
#include <system/exceptions.h>

namespace System {
namespace Collections {
namespace Generic {

/// Interface of indexed container of elements.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T Element type.
template<typename T>
class IList : public System::Collections::Generic::ICollection<T>
{
public:
    /// Base type.
    typedef ICollection<T> BaseType;
    /// This type.
    typedef IList<T> ThisType;
    /// Value type.
    typedef T ValueType;

    /// Gets index of first appearance of item in container.
    /// @param item Item to look for.
    /// @return Index of first appearance of item in container or -1 if not found.
    virtual int IndexOf(const T& item) const = 0;
    /// Inserts element into specified position, shifting other elements.
    /// @param index Index to insert elements onto.
    /// @param item Item to insert at specified index.
    virtual void Insert(int index, const T& item) = 0;
    /// Removes element at specified index.
    /// @param index Index to remove element at.
    virtual void RemoveAt(int index) = 0;

    /// Gets element at specified index.
    /// @param index Index of element to get.
    /// @return Copy of element at specified index.
    virtual T idx_get(int index) const = 0;
    /// Sets element at specified index.
    /// @param index Index of element to set.
    /// @param value Value to set to selected element.
    virtual void idx_set(int index, T value) = 0;
};

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_ilist_h_
