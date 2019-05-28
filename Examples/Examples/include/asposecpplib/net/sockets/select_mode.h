#pragma once

namespace System {
namespace Net {
namespace Sockets {

// Specifies the mode for polling the status of a socket.
enum class SelectMode
{
    SelectRead = 0,
    SelectWrite = 1,
    SelectError = 2
};
} // namespace Sockets
} // namespace Net
} // namespace System
