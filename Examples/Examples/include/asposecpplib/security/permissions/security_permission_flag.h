/// @file security/permissions/security_permission_flag.h
#ifndef _security_permission_flag_h
#define _security_permission_flag_h

namespace System { namespace Security { namespace Permissions {

/// Flags of security permission.
enum class SecurityPermissionFlag {
    /// No access.
    NoFlags = 0,
    /// Assert that permission is given.
    Assertion = 1,
    /// Call unmanaged code.
    UnmanagedCode = 2,
    /// Skip code verification.
    SkipVerification = 4,
    /// Execute code.
    Execution = 8,
    /// Perform operations on threads.
    ControlThread = 16,
    /// Control or alter CLR evidence.
    ControlEvidence = 32,
    /// View and change policy.
    ControlPolicy = 64,
    /// Serialize.
    SerializationFormatter = 128,
    /// Set domain policy.
    ControlDomainPolicy = 256,
    /// Control principal object.
    ControlPrincipal = 512,
    /// Control application domain.
    ControlAppDomain = 1024,
    /// Configure remoting.
    RemotingConfiguration = 2048,
    /// Plug into CLR infrastructure.
    Infrastructure = 4096,
    /// Perform explicit binding redirection.
    BindingRedirects = 8192,
    /// Unrestricted.
    AllFlags = 16383,
};

}}}

#endif
