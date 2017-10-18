#ifndef _operating_system_h_
#define _operating_system_h_
#include "system/version.h"
#include "system/platform_id.h"

namespace System {

    class OperatingSystem
    {
    public:
        OperatingSystem(PlatformID platform, const Version& version);
        OperatingSystem(PlatformID platform, const Version& version, const String& service_pack);

        PlatformID get_Platform() const;
        String get_ServicePack() const;
        const Version& get_Version() const;
        String get_VersionString() const;

        String ToString() const;

    private:
        Version    m_version;
        PlatformID m_platform;
        String     m_service_pack;
        mutable String m_version_string;
    };

} // namespace System
#endif // _operating_system_h_