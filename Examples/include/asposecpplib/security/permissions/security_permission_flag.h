#ifndef _security_permission_flag_h
#define _security_permission_flag_h

namespace System { namespace Security { namespace Permissions {

    enum class SecurityPermissionFlag {
        //     No security access.
        NoFlags = 0,
        //     Ability to assert that all this code's callers have the requisite permission for the operation.
        Assertion = 1,
        //     Ability to call unmanaged code.
        UnmanagedCode = 2,
        //     Ability to skip verification of code in this assembly. Code that is unverifiable can be run if this permission is granted.
        SkipVerification = 4,
        //     Permission for the code to run. Without this permission, managed code will not be executed.
        Execution = 8,
        //     Ability to use certain advanced operations on threads.
        ControlThread = 16,
        //     Ability to provide evidence, including the ability to alter the evidence provided by the common language runtime.
        ControlEvidence = 32,
        //     Ability to view and modify policy.
        ControlPolicy = 64,
        //     Ability to provide serialization services. Used by serialization formatters.
        SerializationFormatter = 128,
        //     Ability to specify domain policy.
        ControlDomainPolicy = 256,
        //     Ability to manipulate the principal object.
        ControlPrincipal = 512,
        //     Ability to create and manipulate an System.AppDomain.
        ControlAppDomain = 1024,
        //     Permission to configure Remoting types and channels.
        RemotingConfiguration = 2048,
        //     Permission to plug code into the common language runtime infrastructure, such as adding Remoting Context Sinks, Envoy Sinks and Dynamic Sinks.
        Infrastructure = 4096,
        //     Permission to perform explicit binding redirection in the application configurationfile.
        //     This includes redirection of .NET Framework assemblies that have been unified as well as other assemblies found outside the .NET Framework.
        BindingRedirects = 8192,
        //     The unrestricted state of the permission.
        AllFlags = 16383,
    };
}}}

#endif