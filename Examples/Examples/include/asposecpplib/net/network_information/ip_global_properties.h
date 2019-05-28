#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

namespace System {
namespace Net {
namespace NetworkInformation {

class ASPOSECPP_SHARED_CLASS IPGlobalProperties : public System::Object
{
    typedef IPGlobalProperties ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    static ASPOSECPP_SHARED_API System::SharedPtr<IPGlobalProperties> GetIPGlobalProperties();

    /// Gets the domain in which the local computer is registered.
    virtual ASPOSECPP_SHARED_API String get_DomainName();
    /// Gets the host name for the local computer.
    virtual ASPOSECPP_SHARED_API String get_HostName();
};
}}} // namespace System::Net::NetworkInformation
