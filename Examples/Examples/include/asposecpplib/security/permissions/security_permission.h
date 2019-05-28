/// @file security/permissions/security_permission.h
#ifndef _security_permission_h_
#define _security_permission_h_

#include <system/object.h>
#include <system/reflection_seprt.h>
#include <security/permissions/permission_state.h>
#include <security/permissions/security_permission_flag.h>
#include <cstdint>

namespace System { namespace Security { namespace Permissions {

/// Class that describes security permission.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SecurityPermission final : public System::Object
{
    /// This type.
    typedef SecurityPermission ThisType;
    /// Parent type.
    typedef System::Object BaseType;
    /// Base types information.
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Gets flags associated with permission.
    /// @return Permission flags.
    ASPOSECPP_SHARED_API SecurityPermissionFlag get_Flags();
    /// Sets flags associated with permission.
    /// @param value Permission flags.
    ASPOSECPP_SHARED_API void set_Flags(SecurityPermissionFlag value);

    /// Constructor.
    /// @param state Permission state.
    ASPOSECPP_SHARED_API SecurityPermission(PermissionState state);
    /// Constructor.
    /// @param flag Permission flag.
    ASPOSECPP_SHARED_API SecurityPermission(SecurityPermissionFlag flag);

    /// Checks if permission is unrestricted.
    /// @return True if permission is unrestricted, false otherwise.
    ASPOSECPP_SHARED_API bool IsUnrestricted();

protected:
    /// Gets list of non-null shared pointers owned by object.
    ASPOSECPP_SHARED_API System::Object::shared_members_type GetSharedMembers() override;

private:
    /// Sets default parameters.
    void Reset();
    /// Toggles unrestricted flag.
    /// @param unrestricted True to make permission unrestricted, false otherwise.
    void SetUnrestricted(bool unrestricted);

    /// Current flags.
    SecurityPermissionFlag pr_Flags;
};

}}}

#endif
