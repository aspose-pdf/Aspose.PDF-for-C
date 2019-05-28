#pragma once

#include <net/sockets/protocol_type.h>

namespace System {
namespace Net {
namespace Sockets {

// Defines socket option levels for the Socket class.
enum class SocketOptionLevel
{
    Socket = 0xffff,
    IP = static_cast<int32_t>(System::Net::Sockets::ProtocolType::IP),
    IPv6 = static_cast<int32_t>(System::Net::Sockets::ProtocolType::IPv6),
    Tcp = static_cast<int32_t>(System::Net::Sockets::ProtocolType::Tcp),
    Udp = static_cast<int32_t>(System::Net::Sockets::ProtocolType::Udp)
};
} // namespace Sockets
} // namespace Net
} // namespace System
