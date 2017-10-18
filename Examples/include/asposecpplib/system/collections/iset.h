#ifndef _ISet_h_
#define _ISet_h_

#include "system/collections/icollection.h"

namespace System {
namespace Collections {
namespace Generic {

    template<typename T>
    class ISet : public ICollection<T>
    {
    public:

        typedef SharedPtr<IEnumerable<T> > IEnumerablePtr;

        virtual ~ISet() {}

        //     Adds an element to the current set and returns a value to indicate if the
        //     element was successfully added.
        //virtual bool Add(const T& item) = 0;

        //     Removes all elements in the specified collection from the current set.
        virtual void ExceptWith(IEnumerablePtr other) = 0;

        //     Modifies the current set so that it contains only elements that are also
        //     in a specified collection.
        virtual void IntersectWith(IEnumerablePtr other) = 0;

        //     Determines whether the current set is a proper (strict) subset of a specified
        //     collection.
        virtual bool IsProperSubsetOf(IEnumerablePtr other) = 0;

        //     Determines whether the current set is a proper (strict) superset of a specified
        //     collection.
        virtual bool IsProperSupersetOf(IEnumerablePtr other) = 0;

        //     Determines whether a set is a subset of a specified collection.
        virtual bool IsSubsetOf(IEnumerablePtr other) = 0;

        //     Determines whether the current set is a superset of a specified collection.
        virtual bool IsSupersetOf(IEnumerablePtr other) = 0;

        //     Determines whether the current set overlaps with the specified collection.
        virtual bool Overlaps(IEnumerablePtr other) = 0;

        //     Determines whether the current set and the specified collection contain the
        //     same elements.
        virtual bool SetEquals(IEnumerablePtr other) = 0;

        //     Modifies the current set so that it contains only elements that are present
        //     either in the current set or in the specified collection, but not both.
        virtual void SymmetricExceptWith(IEnumerablePtr other) = 0;

        //     Modifies the current set so that it contains all elements that are present
        //     in either the current set or the specified collection.
        virtual void UnionWith(IEnumerablePtr other) = 0;
    };


} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _ISet_h_
