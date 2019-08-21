#pragma once

namespace System {
namespace Net {

// Defines the transport type allowed for the socket.
enum class TransportType
{
    Udp = 1,
    Connectionless = Udp,
    Tcp = 2,
    ConnectionOriented = Tcp,
    All = 3
};
} // namespace Net
} // namespace System
