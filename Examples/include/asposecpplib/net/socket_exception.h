#pragma once

#include <system/exceptions.h>
#include <cstdint>

#include <net/sockets/socket_error.h>

namespace System {
namespace Net {
namespace Sockets {

class ASPOSECPP_SHARED_CLASS SocketException : public System::Exception
{
    typedef SocketException ThisType;
    typedef System::Exception BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    virtual ASPOSECPP_SHARED_API ~SocketException();

    ASPOSECPP_SHARED_API SocketException(const System::String& message);
    ASPOSECPP_SHARED_API SocketException(int32_t errorCode);
    ASPOSECPP_SHARED_API SocketException(SocketError socketError);
    ASPOSECPP_SHARED_API SocketException();
    ASPOSECPP_SHARED_API SocketException(std::nullptr_t);
};
} // namespace Sockets
} // namespace Net
} // namespace System
