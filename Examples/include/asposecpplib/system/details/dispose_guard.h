#ifndef _aspose_system_details_dispose_guard_h_
#define _aspose_system_details_dispose_guard_h_

#include "system/shared_ptr.h"
#include "system/string.h"

namespace System { namespace Details {

class DisposeGuard
{
public:
    DisposeGuard(const SharedPtr<Object>& object, const String& func_name);
    ~DisposeGuard();

private:
    DisposeGuard(const DisposeGuard&) = delete;
    void operator = (const DisposeGuard&) = delete;

    const String m_func_name;
    SharedPtr<Object> m_object;
};

}} // System::Details

#endif // _aspose_system_details_dispose_guard_h_
