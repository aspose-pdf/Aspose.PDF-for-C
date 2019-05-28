/// @file system/collections/iset.h
#ifndef _ISet_h_
#define _ISet_h_

#include "system/collections/icollection.h"

namespace System {
namespace Collections {
namespace Generic {

/// Interface of collection containing a set of unique elements.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T Element type.
template<typename T>
class ISet : public ICollection<T>
{
public:
    /// Enumerable type to compare contents of current set to.
    typedef SharedPtr<IEnumerable<T> > IEnumerablePtr;

    /// Destructor.
    virtual ~ISet() {}

    /// Removes group of elements.
    /// @param other Elements to remove.
    virtual void ExceptWith(IEnumerablePtr other) = 0;

    /// Removes elements not present in different container.
    /// @param other Elements to keep (if present).
    virtual void IntersectWith(IEnumerablePtr other) = 0;

    /// Checks if current set is a strict subset of other container.
    /// @param other Superset to check against.
    /// @return True if all elements in current set are present in @p other and @p other has more elements than current set, false otherwise.
    virtual bool IsProperSubsetOf(IEnumerablePtr other) = 0;

    /// Checks if current set is a strict superset of other container.
    /// @param other Subset to check against.
    /// @return True if all elements in @p other are present in set and set has more elements that @p other, false otherwise.
    virtual bool IsProperSupersetOf(IEnumerablePtr other) = 0;

    /// Checks if current set is a subset of other container.
    /// @param other Superset to check against.
    /// @return True if all elements in current set are present in @p other, false otherwise.
    virtual bool IsSubsetOf(IEnumerablePtr other) = 0;

    /// Checks if current set is a superset of other container.
    /// @param other Subset to check against.
    /// @return True if all elements in @p other are present in set, false otherwise.
    virtual bool IsSupersetOf(IEnumerablePtr other) = 0;

    /// Checks if set overlaps with other container.
    /// @param other Container to check against.
    /// @return True if current set and @p other have at least one common element, false otherwise.
    virtual bool Overlaps(IEnumerablePtr other) = 0;

    /// Checks if set and container contain same elements.
    /// @param other Container to check against.
    /// @return True if both containers contain same elements, false otherwise.
    virtual bool SetEquals(IEnumerablePtr other) = 0;

    /// Calculates symmetric exception of two containers.
    /// Removes all elements that are present in both containers, but at the same time adds all elements present in @p other, but not in current set.
    /// @param other Container to calculate exception with.
    virtual void SymmetricExceptWith(IEnumerablePtr other) = 0;

    /// Adds elements from specified collection that are not present in current set yet.
    /// @param other Collection to add eleements from.
    virtual void UnionWith(IEnumerablePtr other) = 0;
};


} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _ISet_h_
