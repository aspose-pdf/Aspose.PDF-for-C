/// @file system/cycles_detection.h
#ifndef _aspose_system_cycles_detection_h_
#define _aspose_system_cycles_detection_h_

#include "shared_ptr.h"
#include "detail.h"
#include <utility>
#include <type_traits>

/// Macros that defines GetSharedMembers() function to use with container types.
#define DEFINE_GET_SHARED_MEMBERS(containerName) \
    Object::shared_members_type GetSharedMembers() override \
    { \
        Object::shared_members_type result = Object::GetSharedMembers(); \
        result.PopulateSharedMembers(#containerName "[]", containerName); \
        return result; \
    }


#if defined(ENABLE_CYCLES_DETECTION) || defined(ENABLE_CYCLES_DETECTION_EXT)
namespace System
{
    namespace Debug { class CyclesInfo; }

    class Object;
}
#endif


namespace System { namespace Details {

#if defined(ENABLE_CYCLES_DETECTION) || defined(ENABLE_CYCLES_DETECTION_EXT)
    /// @brief Detects cycles. Shouldn't be called directly, use CYCLES_DETECTION related macros instead.
    /// @param object Object to use as root.
    /// @param refs Number of shared references found to current object.
    void ASPOSECPP_SHARED_API DetectCycles(Object *object, int refs);
    /// Deletes object by dropping all (loop) references to it.
    /// @param object Object to delete.
    /// @param info Full list of loop references to object.
    void ASPOSECPP_SHARED_API DeleteObject(Object *object, System::Debug::CyclesInfo &info);
#endif

#ifdef ENABLE_CYCLES_DETECTION_EXT
    /// @brief Service method of CYCLES_DETECTION feature. Restarts collecting objects.
    void ASPOSECPP_SHARED_API ObjectCollection_Begin();
    /// @brief Service method of CYCLES_DETECTION feature. Finishes collecting objects and prints report.
    /// @param show_all Whether to report objects without reference cycles.
    /// @param total_objects Pointer to variable to store total number of objects into.
    /// @param circular_refs Pointer to variable to store number of detected cycles into.
    void ASPOSECPP_SHARED_API ObjectCollection_End(bool show_all = false,
                                     unsigned int* total_objects = nullptr,
                                     unsigned int* circular_refs = nullptr);
#endif // ENABLE_CYCLES_DETECTION_EXT

} } // namespace System::Details


#endif // _aspose_system_cycles_detection_h_
