/// @file system/details/gc_wrapper.h
#ifndef _details_gc_wrapper_h_
#define _details_gc_wrapper_h_


#include "defines.h"


namespace System
{
namespace Details
{

/// Guard to call System::Details::__collectGarbage() in destructor.
class GCWrapper
{
public:
    /// Initializes guard.
    /// @param free Whether to free collected objects.
    /// @param report Whether to report collected objects.
    /// @param generation Generation to collect.
    ASPOSECPP_SHARED_API GCWrapper(bool free = false, bool report = true, int generation = 0);
    /// Destructor; actually does garbage collection.
    ASPOSECPP_SHARED_API ~GCWrapper();
private:
    /// Whether to free collected objects.
    const bool m_free;
    /// Whether to report collected objects.
    const bool m_report;
    /// Generation to collect.
    const int m_generation;
};

} //namespace Details
} //namespace System


#endif //_details_gc_wrapper_h_
