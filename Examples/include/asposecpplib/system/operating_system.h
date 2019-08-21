/// @file system/operating_system.h
/// Contains the declaration of System::OperatingSystem class.
#ifndef _operating_system_h_
#define _operating_system_h_
#include "system/version.h"
#include "system/platform_id.h"

namespace System {

/// Represents a particular operating system and provides information about it.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS OperatingSystem
{
public:
    /// Constructs an instance that represents an operating system specified as particular platform id and version.
    /// @param platform The platform identifier of the operating system to be represented by the object being constructed
    /// @param version The version of the operating system to be represented by the object being constructed
    ASPOSECPP_SHARED_API OperatingSystem(PlatformID platform, const Version& version);
    /// Constructs an instance that represents an operating system specified as particular platform id, version and service pack.
    /// @param platform The platform identifier of the operating system to be represented by the object being constructed
    /// @param version The version of the operating system to be represented by the object being constructed
    /// @param service_pack The name of the service pack of the operating system to be represented by the object being constructed
    ASPOSECPP_SHARED_API OperatingSystem(PlatformID platform, const Version& version, const String& service_pack);

    /// Returns the platform identifier of the operating system represented by the current object.
    ASPOSECPP_SHARED_API PlatformID get_Platform() const;
    /// Returns the service pack name of the operating system represented by the current object.
    ASPOSECPP_SHARED_API String get_ServicePack() const;
    /// Returns a constant reference to a Version object representing the version of the operating system represented by the current object. 
    ASPOSECPP_SHARED_API const Version& get_Version() const;
    /// Returns the string representation of the version of the operating system represented by the current object. 
    ASPOSECPP_SHARED_API String get_VersionString() const;
    /// Returns the string representation of the version of the operating system represented by the current object. 
    ASPOSECPP_SHARED_API String ToString() const;

private:
    /// Version of the operating system.
    Version    m_version;
    /// Platform identifier.
    PlatformID m_platform;
    /// Service pack name.
    String     m_service_pack;
    /// String representation of the version of the operating system.
    mutable String m_version_string;
};

} // namespace System
#endif // _operating_system_h_
