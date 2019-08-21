#pragma once

namespace System {
namespace Net {
namespace Sockets {

// Defines socket option names for the <see cref='System.Net.Sockets.Socket'/> class.
enum class SocketOptionName
{
    Debug = 0x0001,
    AcceptConnection = 0x0002,
    ReuseAddress = 0x0004,
    KeepAlive = 0x0008,
    DontRoute = 0x0010,
    Broadcast = 0x0020,
    UseLoopback = 0x0040,
    Linger = 0x0080,
    OutOfBandInline = 0x0100,
    DontLinger = static_cast<int32_t>(~Linger),
    ExclusiveAddressUse = static_cast<int32_t>(~ReuseAddress),
    SendBuffer = 0x1001,
    ReceiveBuffer = 0x1002,
    SendLowWater = 0x1003,
    ReceiveLowWater = 0x1004,
    SendTimeout = 0x1005,
    ReceiveTimeout = 0x1006,
    Error = 0x1007,
    Type = 0x1008,
    ReuseUnicastPort = 0x3007,
    MaxConnections = 0x7fffffff,
    IPOptions = 1,
    HeaderIncluded = 2,
    TypeOfService = 3,
    IpTimeToLive = 4,
    MulticastInterface = 9,
    MulticastTimeToLive = 10,
    MulticastLoopback = 11,
    AddMembership = 12,
    DropMembership = 13,
    DontFragment = 14,
    AddSourceMembership = 15,
    DropSourceMembership = 16,
    BlockSource = 17,
    UnblockSource = 18,
    PacketInformation = 19,
    HopLimit = 21,
    IPProtectionLevel = 23,
    IPv6Only = 27,
    NoDelay = 1,
    BsdUrgent = 2,
    Expedited = 2,
    NoChecksum = 1,
    ChecksumCoverage = 20,
    UpdateAcceptContext = 0x700B,
    UpdateConnectContext = 0x7010
};
} // namespace Sockets
} // namespace Net
} // namespace System
