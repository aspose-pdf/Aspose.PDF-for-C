/// @file system/multi_array.h
/// Contains macro definitions that are shortcuts for functionality that resizes multidimensional arrays.
#ifndef _multi_array_h_
#define _multi_array_h_

/// Resizes the 2-nd dimension of the specified array to the specified value.
/// @param i IGNORED
/// @param arr The array of arrays to resize
/// @param N The new size of the 2-nd dimension of the specified array
#define RESIZE_MARRAY(i, arr, N) \
    for (size_t i=0; i<arr.size(); ++i) { \
        arr[i].resize(N);

/// Resizes the 2-nd dimension of the specified array to the specified value.
/// @param i IGNORED
/// @param arr The array of arrays to resize
/// @param N The new size of the 2-nd dimension of the specified array
/// @param def If N is greater than the current size of the 2-nd dimensio, @p def is used to fill the new elements of each array of the 2-nd dimension 
#define RESIZE_MARRAY_INIT(i, arr, N, def) \
    for (size_t i=0; i<arr.size(); ++i) { \
        arr[i].resize(N, def);

/// Closes the curly brace.
#define RESIZE_MARRAY_END() }

#endif
