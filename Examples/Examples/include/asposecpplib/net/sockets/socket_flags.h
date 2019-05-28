#pragma once

#include <system/enum_helpers.h>

namespace System {
namespace Net {
namespace Sockets {

// Provides constant values for socket messages.
enum class SocketFlags
{
    None = 0x0000,
    OutOfBand = 0x0001,
    Peek = 0x0002,
    DontRoute = 0x0004,
    Truncated = 0x0100,
    ControlDataTruncated = 0x0200,
    Broadcast = 0x0400,
    Multicast = 0x0800,
    Partial = 0x8000
};

DECLARE_ENUM_OPERATORS(System::Net::Sockets::SocketFlags);
DECLARE_USING_GLOBAL_OPERATORS
} // namespace Sockets
} // namespace Net
} // namespace System

DECLARE_USING_ENUM_OPERATORS(System::Net::Sockets);
