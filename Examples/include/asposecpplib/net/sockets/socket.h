#pragma once

#include <system/shared_ptr.h>
#include <system/idisposable.h>
#include <system/enum_helpers.h>
#include <system/collections/ilist.h>
#include <cstdint>

#include <net/socket_type.h>
#include <net/sockets/socket_shutdown.h>
#include <net/sockets/socket_option_name.h>
#include <net/sockets/socket_option_level.h>
#include <net/sockets/socket_flags.h>
#include <net/sockets/socket_error.h>
#include <net/sockets/select_mode.h>
#include <net/sockets/protocol_type.h>
#include <net/sockets/ip_packet_information.h>
#include <net/sockets/io_control_code.h>
#include <net/sockets/address_family.h>
#include <net/linger_option.h>
#include <net/ip_address.h>
#include <net/end_point.h>
#include <system/array_segment.h>

namespace System {
namespace Details {
ASPOSECPP_3RD_PARTY_CLASS(io_service_impl);
ASPOSECPP_3RD_PARTY_CLASS(socket_impl);
} // namespace Details
} // namespace System

namespace System {
namespace Net {
namespace Sockets {

// The Sockets.Socket class implements the Berkeley sockets interface.
class ASPOSECPP_SHARED_CLASS Socket : public System::IDisposable
{
    friend class SocketAsyncResult;
    typedef Socket ThisType;
    typedef System::IDisposable BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    static ASPOSECPP_SHARED_API bool get_SupportsIPv4();
    static ASPOSECPP_SHARED_API bool get_OSSupportsIPv4();
    static ASPOSECPP_SHARED_API bool get_OSSupportsIPv6();
    ASPOSECPP_SHARED_API int32_t get_Available();
    ASPOSECPP_SHARED_API System::SharedPtr<EndPoint> get_LocalEndPoint();
    ASPOSECPP_SHARED_API System::SharedPtr<EndPoint> get_RemoteEndPoint();
    ASPOSECPP_SHARED_API bool get_Blocking();
    ASPOSECPP_SHARED_API void set_Blocking(bool value);
    ASPOSECPP_SHARED_API bool get_Connected();
    ASPOSECPP_SHARED_API System::Net::Sockets::AddressFamily get_AddressFamily();
    ASPOSECPP_SHARED_API System::Net::Sockets::SocketType get_SocketType();
    ASPOSECPP_SHARED_API System::Net::Sockets::ProtocolType get_ProtocolType();
    ASPOSECPP_SHARED_API bool get_IsBound();
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
    ASPOSECPP_SHARED_API int16_t get_Ttl();
    ASPOSECPP_SHARED_API void set_Ttl(int16_t value);
    ASPOSECPP_SHARED_API bool get_DontFragment();
    ASPOSECPP_SHARED_API void set_DontFragment(bool value);
    ASPOSECPP_SHARED_API bool get_MulticastLoopback();
    ASPOSECPP_SHARED_API void set_MulticastLoopback(bool value);
    ASPOSECPP_SHARED_API bool get_EnableBroadcast();
    ASPOSECPP_SHARED_API void set_EnableBroadcast(bool value);
    ASPOSECPP_SHARED_API bool get_DualMode();
    ASPOSECPP_SHARED_API void set_DualMode(bool value);

    ASPOSECPP_SHARED_API Socket(System::Net::Sockets::SocketType socketType, System::Net::Sockets::ProtocolType protocolType);
    ASPOSECPP_SHARED_API Socket(System::Net::Sockets::AddressFamily addressFamily, System::Net::Sockets::SocketType socketType, System::Net::Sockets::ProtocolType protocolType);

    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginSend(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size, SocketFlags socketFlags, AsyncCallback callback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API int32_t EndSend(System::SharedPtr<IAsyncResult> asyncResult);
    ASPOSECPP_SHARED_API int32_t EndSend(System::SharedPtr<IAsyncResult> asyncResult, SocketError& errorCode);

    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginReceive(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size, SocketFlags socketFlags, AsyncCallback callback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API int32_t EndReceive(System::SharedPtr<IAsyncResult> asyncResult);
    ASPOSECPP_SHARED_API int32_t EndReceive(System::SharedPtr<IAsyncResult> asyncResult, SocketError& errorCode);

    ASPOSECPP_SHARED_API void Bind(System::SharedPtr<EndPoint> localEP);
    ASPOSECPP_SHARED_API void Connect(System::SharedPtr<EndPoint> remoteEP);
    ASPOSECPP_SHARED_API void Connect(System::SharedPtr<IPAddress> address, int32_t port);
    ASPOSECPP_SHARED_API void Connect(String host, int32_t port);
    ASPOSECPP_SHARED_API void Connect(System::ArrayPtr<System::SharedPtr<IPAddress>> addresses, int32_t port);

    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginConnect(System::SharedPtr<EndPoint> remoteEP, AsyncCallback callback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginConnect(String host, int32_t port, AsyncCallback requestCallback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginConnect(System::SharedPtr<IPAddress> address, int32_t port, AsyncCallback requestCallback, System::SharedPtr<Object> state);
    ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginConnect(System::ArrayPtr<System::SharedPtr<IPAddress>> addresses, int32_t port, AsyncCallback requestCallback, System::SharedPtr<Object> state);

    ASPOSECPP_SHARED_API void Close();
    ASPOSECPP_SHARED_API void Close(int timeout);

    ASPOSECPP_SHARED_API int32_t EndConnect(System::SharedPtr<IAsyncResult> asyncResult);   

    ASPOSECPP_SHARED_API void Listen(int32_t backlog);
    ASPOSECPP_SHARED_API System::SharedPtr<Socket> Accept();
    ASPOSECPP_SHARED_API int32_t Send(System::ArrayPtr<uint8_t> buffer, int32_t size, SocketFlags socketFlags);
    ASPOSECPP_SHARED_API int32_t Send(System::ArrayPtr<uint8_t> buffer, SocketFlags socketFlags);
    ASPOSECPP_SHARED_API int32_t Send(System::ArrayPtr<uint8_t> buffer);
    ASPOSECPP_SHARED_API int32_t Send(System::SharedPtr<Collections::Generic::IList<ArraySegment<uint8_t>>> buffers);
    ASPOSECPP_SHARED_API int32_t Send(System::SharedPtr<Collections::Generic::IList<ArraySegment<uint8_t>>> buffers, SocketFlags socketFlags);
    ASPOSECPP_SHARED_API int32_t Send(System::SharedPtr<Collections::Generic::IList<ArraySegment<uint8_t>>> buffers, SocketFlags socketFlags, SocketError& errorCode);
    ASPOSECPP_SHARED_API int32_t Send(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size, SocketFlags socketFlags);
    ASPOSECPP_SHARED_API int32_t Send(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size, SocketFlags socketFlags, SocketError& errorCode);
    ASPOSECPP_SHARED_API int32_t SendTo(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size, SocketFlags socketFlags, System::SharedPtr<EndPoint> remoteEP);
    ASPOSECPP_SHARED_API int32_t SendTo(System::ArrayPtr<uint8_t> buffer, int32_t size, SocketFlags socketFlags, System::SharedPtr<EndPoint> remoteEP);
    ASPOSECPP_SHARED_API int32_t SendTo(System::ArrayPtr<uint8_t> buffer, SocketFlags socketFlags, System::SharedPtr<EndPoint> remoteEP);
    ASPOSECPP_SHARED_API int32_t SendTo(System::ArrayPtr<uint8_t> buffer, System::SharedPtr<EndPoint> remoteEP);
    ASPOSECPP_SHARED_API int32_t Receive(System::ArrayPtr<uint8_t> buffer, int32_t size, SocketFlags socketFlags);
    ASPOSECPP_SHARED_API int32_t Receive(System::ArrayPtr<uint8_t> buffer, SocketFlags socketFlags);
    ASPOSECPP_SHARED_API int32_t Receive(System::ArrayPtr<uint8_t> buffer);
    ASPOSECPP_SHARED_API int32_t Receive(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size, SocketFlags socketFlags);
    ASPOSECPP_SHARED_API int32_t Receive(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size, SocketFlags socketFlags, SocketError& errorCode);
    ASPOSECPP_SHARED_API int32_t Receive(System::SharedPtr<Collections::Generic::IList<ArraySegment<uint8_t>>> buffers);
    ASPOSECPP_SHARED_API int32_t Receive(System::SharedPtr<Collections::Generic::IList<ArraySegment<uint8_t>>> buffers, SocketFlags socketFlags);
    ASPOSECPP_SHARED_API int32_t Receive(System::SharedPtr<Collections::Generic::IList<ArraySegment<uint8_t>>> buffers, SocketFlags socketFlags, SocketError& errorCode);
    ASPOSECPP_SHARED_API int32_t ReceiveMessageFrom(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size, SocketFlags& socketFlags, System::SharedPtr<EndPoint>& remoteEP, IPPacketInformation& ipPacketInformation);
    ASPOSECPP_SHARED_API int32_t ReceiveFrom(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t size, SocketFlags socketFlags, System::SharedPtr<EndPoint>& remoteEP);
    ASPOSECPP_SHARED_API int32_t ReceiveFrom(System::ArrayPtr<uint8_t> buffer, int32_t size, SocketFlags socketFlags, System::SharedPtr<EndPoint>& remoteEP);
    ASPOSECPP_SHARED_API int32_t ReceiveFrom(System::ArrayPtr<uint8_t> buffer, SocketFlags socketFlags, System::SharedPtr<EndPoint>& remoteEP);
    ASPOSECPP_SHARED_API int32_t ReceiveFrom(System::ArrayPtr<uint8_t> buffer, System::SharedPtr<EndPoint>& remoteEP);
    ASPOSECPP_SHARED_API int32_t IOControl(int32_t ioControlCode, System::ArrayPtr<uint8_t> optionInValue, System::ArrayPtr<uint8_t> optionOutValue);
    ASPOSECPP_SHARED_API int32_t IOControl(IOControlCode ioControlCode, System::ArrayPtr<uint8_t> optionInValue, System::ArrayPtr<uint8_t> optionOutValue);
    ASPOSECPP_SHARED_API void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int32_t optionValue);
    ASPOSECPP_SHARED_API void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, System::ArrayPtr<uint8_t> optionValue);
    ASPOSECPP_SHARED_API void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, bool optionValue);
    ASPOSECPP_SHARED_API void SetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, System::SharedPtr<Object> optionValue);
    ASPOSECPP_SHARED_API System::SharedPtr<Object> GetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName);
    ASPOSECPP_SHARED_API void GetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, System::ArrayPtr<uint8_t> optionValue);
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> GetSocketOption(SocketOptionLevel optionLevel, SocketOptionName optionName, int32_t optionLength);
    ASPOSECPP_SHARED_API bool Poll(int32_t microSeconds, SelectMode mode);
    ASPOSECPP_SHARED_API void Shutdown(SocketShutdown how);
    ASPOSECPP_SHARED_API void Dispose();

    virtual ASPOSECPP_SHARED_API ~Socket();

private:
    std::shared_ptr<System::Details::io_service_impl> io_service;
    std::shared_ptr<System::Details::socket_impl> socket;
};
} // namespace Sockets
} // namespace Net
} // namespace System
