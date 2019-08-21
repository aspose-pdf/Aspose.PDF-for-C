#pragma once

namespace System {
namespace Net {
namespace Sockets {

// Defines constants used by the Socket.Shutdown method.
enum class SocketShutdown
{
    Receive = 0x00,
    Send = 0x01,
    Both = 0x02
};
} // namespace Sockets
} // namespace Net
} // namespace System
