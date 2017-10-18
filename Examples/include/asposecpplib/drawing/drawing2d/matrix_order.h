#ifndef _matrix_order_h_
#define _matrix_order_h_

namespace System { namespace Drawing { namespace Drawing2D {

    enum class MatrixOrder {
        ///       The new operation is applied before the old operation.
        Prepend = 0,
        ///       The new operation is applied after the old operation.
        Append = 1
    };
}}}

#endif