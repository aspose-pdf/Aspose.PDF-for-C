#pragma once

#include <system/shared_ptr.h>
#include <system/idisposable.h>

#include <net/sockets/socket.h>
#include <net/sockets/network_stream.h>
#include <net/ip_end_point.h>

namespace System {
namespace Net {
namespace Sockets {

class ASPOSECPP_SHARED_CLASS TcpClient : public System::IDisposable
{
    typedef TcpClient ThisType;
    typedef System::IDisposable BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    ASPOSECPP_SHARED_API System::SharedPtr<Socket> get_Client();
    ASPOSECPP_SHARED_API void set_Client(System::SharedPtr<Socket> value);
    ASPOSECPP_SHARED_API int32_t get_Available();
    ASPOSECPP_SHARED_API bool get_Connected();
    ASPOSECPP_SHARED_API bool get_ExclusiveAddressUse();
    ASPOSECPP_SHARED_API void set_ExclusiveAddressUse(bool value);
    ASPOSECPP_SHARED_API int32_t get_ReceiveBufferSize();
    ASPOSECPP_SHARED_API void set_ReceiveBufferSize(int32_t value);
    ASPOSECPP_SHARED_API int32_t get_SendBufferSize();
    ASPOSECPP_SHARED_API void set_SendBufferSize(int32_t value);
    ASPOSECPP_SHARED_API int32_t get_ReceiveTimeout();
    ASPOSECPP_SHARED_API void set_ReceiveTimeout(int32_t value);
    ASPOSECPP_SHARED_API int32_t get_SendTimeout();
    ASPOSECPP_SHARED_API void set_SendTimeout(int32_t value);
    ASPOSECPP_SHARED_API System::SharedPtr<LingerOption> get_LingerState();
    ASPOSECPP_SHARED_API void set_LingerState(System::SharedPtr<LingerOption> value);
    ASPOSECPP_SHARED_API bool get_NoDelay();
    ASPOSECPP_SHARED_API void set_NoDelay(bool value);

    ASPOSECPP_SHARED_API TcpClient(System::SharedPtr<IPEndPoint> localEP);
    ASPOSECPP_SHARED_API TcpClient();
    ASPOSECPP_SHARED_API TcpClient(AddressFamily family);
    ASPOSECPP_SHARED_API TcpClient(String hostname, int32_t port);

    ASPOSECPP_SHARED_API void Connect(String hostname, int32_t port);
    ASPOSECPP_SHARED_API void Connect(System::SharedPtr<IPAddress> address, int32_t port);
    ASPOSECPP_SHARED_API void Connect(System::SharedPtr<IPEndPoint> remoteEP);
    ASPOSECPP_SHARED_API void Connect(System::ArrayPtr<System::SharedPtr<IPAddress>> ipAddresses, int32_t port);
    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginConnect(String host, int32_t port, AsyncCallback requestCallback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginConnect(System::SharedPtr<IPAddress> address, int32_t port, AsyncCallback requestCallback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginConnect(System::ArrayPtr<System::SharedPtr<IPAddress>> addresses, int32_t port, AsyncCallback requestCallback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API void EndConnect(System::SharedPtr<IAsyncResult> asyncResult);
    ASPOSECPP_SHARED_API System::SharedPtr<NetworkStream> GetStream();
    ASPOSECPP_SHARED_API void Close();

    virtual ASPOSECPP_SHARED_API ~TcpClient();
};
} // namespace Sockets
} // namespace Net
} // namespace System
