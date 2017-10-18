#ifndef _algorithms_h_
#define _algorithms_h_

#include "system/shared_ptr.h"
#include "system/collections/icomparer.h"

namespace System {
namespace Collections {
namespace Generic {

template<template<typename, typename> class containterT, class T, class Allocator>
int _net_binnary_search(const containterT<T, Allocator> &container, int index, int count, T value, SharedPtr<System::Collections::Generic::IComparer<T> > comparer)
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

/// classes
template<template<typename, typename> class containterT, class T, class Allocator>
typename std::enable_if<IsSharedPtr<T>::value, int>::type  _net_binnary_search(const containterT<T, Allocator> &container, int index, int count, T value)
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

//structs
template<template<typename, typename> class containterT, class T, class Allocator>
typename std::enable_if<!IsSharedPtr<T>::value && !std::is_scalar<T>::value, int>::type _net_binnary_search(const containterT<T, Allocator> &container, int index, int count, T value)
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

///scalar
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
