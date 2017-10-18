#ifndef _aspose_system_cycles_detection_h_
#define _aspose_system_cycles_detection_h_

#include "shared_ptr.h"
#include "detail.h"
#include <utility>
#include <type_traits>


#define DEFINE_GET_SHARED_MEMBERS(containerName) \
    Object::shared_members_type GetSharedMembers() override \
    { \
        Object::shared_members_type result = Object::GetSharedMembers(); \
        Object::PopulateSharedMembers(result, #containerName "[]", containerName); \
        return result; \
    }

#endif // _aspose_system_cycles_detection_h_
