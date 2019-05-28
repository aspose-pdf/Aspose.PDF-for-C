#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include <net/sockets/address_family.h>
#include <net/end_point.h>

namespace System {
namespace Net {

class ASPOSECPP_SHARED_CLASS DnsEndPoint : public System::Net::EndPoint
{
    typedef DnsEndPoint ThisType;
    typedef System::Net::EndPoint BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    ASPOSECPP_SHARED_API String get_Host();
    virtual ASPOSECPP_SHARED_API System::Net::Sockets::AddressFamily get_AddressFamily();
    ASPOSECPP_SHARED_API int32_t get_Port();

    ASPOSECPP_SHARED_API DnsEndPoint(String host, int32_t port);
    ASPOSECPP_SHARED_API DnsEndPoint(String host, int32_t port, System::Net::Sockets::AddressFamily addressFamily);

    ASPOSECPP_SHARED_API bool Equals(System::SharedPtr<Object> comparand) override;
    ASPOSECPP_SHARED_API int32_t GetHashCode() const override;
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;

private:
    String m_host;
    int32_t m_port;
    System::Net::Sockets::AddressFamily m_family;
};
} // namespace Net
} // namespace System
