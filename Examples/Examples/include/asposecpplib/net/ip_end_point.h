#pragma once

#include <cstdint>

#include <net/ip_address.h>
#include <net/end_point.h>

namespace System {
namespace Net {

class ASPOSECPP_SHARED_CLASS IPEndPoint : public System::Net::EndPoint
{
    typedef IPEndPoint ThisType;
    typedef System::Net::EndPoint BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    static ASPOSECPP_SHARED_API const int32_t MinPort;
    static ASPOSECPP_SHARED_API const int32_t MaxPort;

    virtual ASPOSECPP_SHARED_API System::Net::Sockets::AddressFamily get_AddressFamily();
    ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> get_Address();
    ASPOSECPP_SHARED_API void set_Address(System::SharedPtr<IPAddress> value);
    ASPOSECPP_SHARED_API int32_t get_Port();
    ASPOSECPP_SHARED_API void set_Port(int32_t value);

    ASPOSECPP_SHARED_API IPEndPoint(int64_t address, int32_t port);
    ASPOSECPP_SHARED_API IPEndPoint(System::SharedPtr<IPAddress> address, int32_t port);

    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;
    virtual ASPOSECPP_SHARED_API System::SharedPtr<EndPoint> Create(System::SharedPtr<SocketAddress> socketAddress);
    ASPOSECPP_SHARED_API bool Equals(System::SharedPtr<Object> comparand) override;
    ASPOSECPP_SHARED_API int32_t GetHashCode() const override;

    ASPOSECPP_SHARED_API ImplPtr GetImpl();

private:
    ImplPtr io_endpoint;
};
} // namespace Net
} // namespace System
