#ifndef _multi_array_h_
#define _multi_array_h_

#define RESIZE_MARRAY(i, arr, N) \
    for (size_t i=0; i<arr.size(); ++i) { \
        arr[i].resize(N);

#define RESIZE_MARRAY_INIT(i, arr, N, def) \
    for (size_t i=0; i<arr.size(); ++i) { \
        arr[i].resize(N, def);

#define RESIZE_MARRAY_END() }

#endif