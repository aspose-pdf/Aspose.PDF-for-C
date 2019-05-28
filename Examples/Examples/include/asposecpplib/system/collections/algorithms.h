/// @file system/collections/algorithms.h
#ifndef _algorithms_h_
#define _algorithms_h_

#include "system/shared_ptr.h"
#include "system/collections/icomparer.h"

namespace System {
namespace Collections {
namespace Generic {

/// Implements binary search in random access container.
/// @tparam containerT STL-styled container template type with two template arguments: element type and allocator type.
/// @tparam T Element type.
/// @tparam Allocator Allocator type.
/// @param container Container to search in.
/// @param index Search range beginning index.
/// @param count Search range length.
/// @param value Value to look for.
/// @param comparer Comparer object.
/// @return If found, index of the next element; otherwise, complements of index at which the search stopped.
template<template<typename, typename> class containterT, class T, class Allocator>
int _net_binnary_search(const containterT<T, Allocator> &container, int index, int count, T value, const SharedPtr<System::Collections::Generic::IComparer<T> >& comparer)
{
    int s = index;
    int f = index + count - 1;
    int c, m;

    while (s <= f)
    {
        m = s + ((f - s) / 2);
        c = comparer->Compare(value, container[m]);

        if (c < 0) {
            f = m - 1;
        }
        else if (c > 0) {
            s = m + 1;
        }
        else {
            return m;
        }
    }

    return ~s;
}

/// Implements binary search in random access container. Specialization for smart pointers. Uses System::Object::CompareTo method.
/// @tparam containerT STL-styled container template type with two template arguments: element type and allocator type.
/// @tparam T Element type.
/// @tparam Allocator Allocator type.
/// @param container Container to search in.
/// @param index Search range beginning index.
/// @param count Search range length.
/// @param value Value to look for.
/// @return If found, index of the next element; otherwise, complements of index at which the search stopped.
template<template<typename, typename> class containterT, class T, class Allocator>
typename std::enable_if<IsSmartPtr<T>::value, int>::type  _net_binnary_search(const containterT<T, Allocator> &container, int index, int count, T value)
{
    int s = index;
    int f = index + count - 1;
    int c, m;

    while (s <= f)
    {
        m = s + ((f - s) / 2);
        c = value->CompareTo(container[m]);

        if (c < 0) {
            f = m - 1;
        }
        else if (c > 0) {
            s = m + 1;
        }
        else {
            return m;
        }
    }

    return ~s;
}

/// Implements binary search in random access container. Specialization for value types. Uses CompareTo method.
/// @tparam containerT STL-styled container template type with two template arguments: element type and allocator type.
/// @tparam T Element type.
/// @tparam Allocator Allocator type.
/// @param container Container to search in.
/// @param index Search range beginning index.
/// @param count Search range length.
/// @param value Value to look for.
/// @return If found, index of the next element; otherwise, complements of index at which the search stopped.
template<template<typename, typename> class containterT, class T, class Allocator>
typename std::enable_if<!IsSmartPtr<T>::value && !std::is_scalar<T>::value, int>::type _net_binnary_search(const containterT<T, Allocator> &container, int index, int count, T value)
{
    int s = index;
    int f = index + count - 1;
    int c, m;

    while (s <= f)
    {
        m = s + ((f - s) / 2);

        c = value.CompareTo(container[m]);

        if (c < 0) {
            f = m - 1;
        }
        else if (c > 0) {
            s = m + 1;
        }
        else {
            return m;
        }
    }

    return ~s;
}

/// Implements binary search in random access container. Specialization for scalar types. Compares elements using greater and less operators.
/// @tparam containerT STL-styled container template type with two template arguments: element type and allocator type.
/// @tparam T Element type.
/// @tparam Allocator Allocator type.
/// @param container Container to search in.
/// @param index Search range beginning index.
/// @param count Search range length.
/// @param value Value to look for.
/// @return If found, index of the next element; otherwise, complements of index at which the search stopped.
template<template<typename, typename> class containterT, class T, class Allocator>
typename std::enable_if<std::is_scalar<T>::value, int>::type _net_binnary_search(const containterT<T, Allocator> &container, int index, int count, T value)
{
    int s = index;
    int f = index + count - 1;
    int m;

    while (s <= f)
    {
        m = s + ((f - s) / 2);

        if (value < container[m]) {
            f = m - 1;
        }
        else if (value > container[m]) {
            s = m + 1;
        }
        else {
            return m;
        }
    }

    return ~s;
}


}}}

#endif
