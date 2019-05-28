#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include <net/sockets/tcp_client.h>
#include <net/sockets/socket.h>
#include <net/ip_end_point.h>

namespace System {
namespace Net {
namespace Sockets {

class ASPOSECPP_SHARED_CLASS TcpListener : public System::Object
{
    typedef TcpListener ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    ASPOSECPP_SHARED_API System::SharedPtr<Socket> get_Server();
    ASPOSECPP_SHARED_API System::SharedPtr<EndPoint> get_LocalEndpoint();
    ASPOSECPP_SHARED_API bool get_ExclusiveAddressUse();
    ASPOSECPP_SHARED_API void set_ExclusiveAddressUse(bool value);

    ASPOSECPP_SHARED_API TcpListener(System::SharedPtr<IPEndPoint> localEP);
    ASPOSECPP_SHARED_API TcpListener(System::SharedPtr<IPAddress> localaddr, int32_t port);
    ASPOSECPP_SHARED_API TcpListener(int32_t port);

    static ASPOSECPP_SHARED_API System::SharedPtr<TcpListener> Create(int32_t port);
    ASPOSECPP_SHARED_API void AllowNatTraversal(bool allowed);
    ASPOSECPP_SHARED_API void Start();
    ASPOSECPP_SHARED_API void Start(int32_t backlog);
    ASPOSECPP_SHARED_API void Stop();
    ASPOSECPP_SHARED_API bool Pending();
    ASPOSECPP_SHARED_API System::SharedPtr<Socket> AcceptSocket();
    ASPOSECPP_SHARED_API System::SharedPtr<TcpClient> AcceptTcpClient();
    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginAcceptSocket(AsyncCallback callback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API System::SharedPtr<Socket> EndAcceptSocket(System::SharedPtr<IAsyncResult> asyncResult);
    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginAcceptTcpClient(AsyncCallback callback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API System::SharedPtr<TcpClient> EndAcceptTcpClient(System::SharedPtr<IAsyncResult> asyncResult);

protected:
    ASPOSECPP_SHARED_API bool get_Active();

private:
    System::SharedPtr<IPEndPoint> m_ServerSocketEP;
    System::SharedPtr<Socket> m_ServerSocket;
    bool m_Active;
    bool m_ExclusiveAddressUse;
};
} // namespace Sockets
} // namespace Net
} // namespace System
