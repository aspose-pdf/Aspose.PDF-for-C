/// @file system/runtime/interop_services/gc_handle_type.h
#ifndef _gc_handle_type_h_
#define _gc_handle_type_h_

namespace System { namespace Runtime { namespace InteropServices {

/// Defines how handle is treated by garbage collector.
enum class GCHandleType {
    /// Weak pointer.
    Weak = 0,
    /// Weak pointer with tracked resurrection.
    WeakTrackResurrection = 1,
    /// Strong pointer.
    Normal = 2,
    /// Pinned (undeletable) pointer.
    Pinned = 3
};

}}}

#endif
