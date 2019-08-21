#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include <net/sockets/address_family.h>
#include <net/socket_address.h>

namespace System {
namespace Details {
ASPOSECPP_3RD_PARTY_CLASS(io_endpoint_impl);
} // namespace Details
} // namespace System

namespace System {
namespace Net {

class ASPOSECPP_SHARED_CLASS ABSTRACT EndPoint : public System::Object
{
    typedef EndPoint ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    virtual ASPOSECPP_SHARED_API System::Net::Sockets::AddressFamily get_AddressFamily();
    virtual ASPOSECPP_SHARED_API System::SharedPtr<EndPoint> Create(System::SharedPtr<SocketAddress> socketAddress);

    typedef std::shared_ptr<System::Details::io_endpoint_impl> ImplPtr;

    virtual ASPOSECPP_SHARED_API ImplPtr GetImpl() = 0;
};
} // namespace Net
} // namespace System
