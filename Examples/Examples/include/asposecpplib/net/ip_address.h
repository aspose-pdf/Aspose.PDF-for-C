#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include <net/sockets/address_family.h>

namespace System {
namespace Details {
ASPOSECPP_3RD_PARTY_CLASS(ip_address_impl);
} // namespace Details
} // namespace System

namespace System {
namespace Net {

class ASPOSECPP_SHARED_CLASS IPAddress : public System::Object
{
    typedef IPAddress ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    static ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> Any;
    static ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> Loopback;
    static ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> Broadcast;
    static ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> None;
    static ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> IPv6Any;
    static ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> IPv6Loopback;
    static ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> IPv6None;

    ASPOSECPP_SHARED_API System::Net::Sockets::AddressFamily get_AddressFamily();
    ASPOSECPP_SHARED_API int64_t get_ScopeId();
    ASPOSECPP_SHARED_API void set_ScopeId(int64_t value);
    ASPOSECPP_SHARED_API bool get_IsIPv6Multicast();
    ASPOSECPP_SHARED_API bool get_IsIPv6LinkLocal();
    ASPOSECPP_SHARED_API bool get_IsIPv6SiteLocal();
    ASPOSECPP_SHARED_API bool get_IsIPv6Teredo();
    ASPOSECPP_SHARED_API bool get_IsIPv4MappedToIPv6();

    ASPOSECPP_SHARED_API IPAddress(int64_t newAddress);
    ASPOSECPP_SHARED_API IPAddress(System::ArrayPtr<uint8_t> address, int64_t scopeid);
    ASPOSECPP_SHARED_API IPAddress(System::ArrayPtr<uint8_t> address);

    static ASPOSECPP_SHARED_API bool TryParse(String ipString, System::SharedPtr<IPAddress> address);
    static ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> Parse(String ipString);
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetAddressBytes();
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;
    static ASPOSECPP_SHARED_API int64_t HostToNetworkOrder(int64_t host);
    static ASPOSECPP_SHARED_API int32_t HostToNetworkOrder(int32_t host);
    static ASPOSECPP_SHARED_API int16_t HostToNetworkOrder(int16_t host);
    static ASPOSECPP_SHARED_API int64_t NetworkToHostOrder(int64_t network);
    static ASPOSECPP_SHARED_API int32_t NetworkToHostOrder(int32_t network);
    static ASPOSECPP_SHARED_API int16_t NetworkToHostOrder(int16_t network);
    static ASPOSECPP_SHARED_API bool IsLoopback(System::SharedPtr<IPAddress> address);
    ASPOSECPP_SHARED_API bool Equals(System::SharedPtr<Object> comparand) override;
    ASPOSECPP_SHARED_API int32_t GetHashCode() const override;
    ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> MapToIPv6();
    ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> MapToIPv4();

    ASPOSECPP_SHARED_API IPAddress();
    typedef std::shared_ptr<System::Details::ip_address_impl> ImplPtr;
    ASPOSECPP_SHARED_API ImplPtr GetImpl();
    ASPOSECPP_SHARED_API void SetImpl(ImplPtr impl);

private:
    ImplPtr ip_address;
};
} // namespace Net
} // namespace System
