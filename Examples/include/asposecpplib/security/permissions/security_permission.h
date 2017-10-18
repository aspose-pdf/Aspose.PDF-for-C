#ifndef _security_permission_h_
#define _security_permission_h_

#include <system/object.h>
#include <system/reflection_seprt.h>
#include <security/permissions/permission_state.h>
#include <security/permissions/security_permission_flag.h>
#include <cstdint>

namespace System { namespace Security { namespace Permissions {

class SecurityPermission final : public System::Object
{
    typedef SecurityPermission ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();

public:

    SecurityPermissionFlag get_Flags();
    void set_Flags(SecurityPermissionFlag value);

    SecurityPermission(PermissionState state);
    SecurityPermission(SecurityPermissionFlag flag);

    bool IsUnrestricted();

protected:

    System::Object::shared_members_type GetSharedMembers() override;

private:
    void Reset();
    void SetUnrestricted(bool unrestricted);

    SecurityPermissionFlag pr_Flags;
};

}}}

#endif
