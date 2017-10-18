#ifndef _gc_handle_type_h_
#define _gc_handle_type_h_

namespace System { namespace Runtime { namespace InteropServices {

    enum class GCHandleType {
        Weak = 0,
        WeakTrackResurrection = 1,
        Normal = 2,
        Pinned = 3
    };
}}}

#endif