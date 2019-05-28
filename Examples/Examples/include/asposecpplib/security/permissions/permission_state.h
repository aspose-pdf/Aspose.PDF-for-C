/// @file security/permissions/permission_state.h
#ifndef _permission_state_h_
#define _permission_state_h_

namespace System { namespace Security { namespace Permissions {

/// State of permission.
enum class PermissionState
{
    /// Full access to the resource protected by the permission.
    Unrestricted = 1,
    /// No access to the resource protected by the permission.
    None = 0
};

}}}

#endif
