#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include <net/ip_address.h>

namespace System {
namespace Net {
namespace Sockets {

class ASPOSECPP_SHARED_CLASS IPPacketInformation : public System::Object
{
    typedef IPPacketInformation ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

    FRIEND_FUNCTION_System_MakeObject;
    friend ASPOSECPP_SHARED_API bool operator ==(IPPacketInformation left, IPPacketInformation right);
    friend ASPOSECPP_SHARED_API bool operator !=(IPPacketInformation left, IPPacketInformation right);

public:
    ASPOSECPP_SHARED_API System::SharedPtr<IPAddress> get_Address();
    ASPOSECPP_SHARED_API int32_t get_Interface();

    ASPOSECPP_SHARED_API IPPacketInformation(System::SharedPtr<IPAddress> address, int32_t networkInterface);

    ASPOSECPP_SHARED_API bool Equals(System::SharedPtr<Object> comparand) override;
    ASPOSECPP_SHARED_API int32_t GetHashCode() const override;

    ASPOSECPP_SHARED_API IPPacketInformation();

private:
    System::SharedPtr<IPAddress> m_address;
    int32_t m_networkInterface;
};

ASPOSECPP_SHARED_API bool operator ==(IPPacketInformation left, IPPacketInformation right);
ASPOSECPP_SHARED_API bool operator !=(IPPacketInformation left, IPPacketInformation right);
} // namespace Sockets
} // namespace Net
} // namespace System
