/// @file system/threading/apartment_state.h
#ifndef _aspose_system_threading_apartment_state_h_
#define _aspose_system_threading_apartment_state_h_

namespace System { namespace Threading {

/// Sets apartment state of the thread.
enum class ApartmentState
{
    /// Thread will be created in single-threaded apartment.
    STA = 0,
    /// Thread will be created in single-threaded apartment.
    MTA = 1,
    /// Thread apartment state is unspecified.
    Unknown = 2
};

} }

#endif
