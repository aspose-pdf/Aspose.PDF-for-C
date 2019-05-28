#pragma once

namespace System {
namespace Net {
namespace Sockets {

enum class SocketType
{
    Stream = 1,
    Dgram = 2,
    Raw = 3,
    Rdm = 4,
    Seqpacket = 5,
    Unknown = static_cast<int32_t>(-1)
};
} // namespace Sockets
} // namespace Net
} // namespace System
