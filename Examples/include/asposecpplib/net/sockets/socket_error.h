#pragma once

#include <system/exceptions.h>
#include <cstdint>

namespace System {
namespace Net {
namespace Sockets {

enum class SocketError : int32_t
{
    Success = 0,
    SocketError = static_cast<int32_t>((-1)),
    Interrupted = static_cast<int32_t>((10000 + 4)),
    AccessDenied = static_cast<int32_t>((10000 + 13)),
    Fault = static_cast<int32_t>((10000 + 14)),
    InvalidArgument = static_cast<int32_t>((10000 + 22)),
    TooManyOpenSockets = static_cast<int32_t>((10000 + 24)),
    WouldBlock = static_cast<int32_t>((10000 + 35)),
    InProgress = static_cast<int32_t>((10000 + 36)),
    AlreadyInProgress = static_cast<int32_t>((10000 + 37)),
    NotSocket = static_cast<int32_t>((10000 + 38)),
    DestinationAddressRequired = static_cast<int32_t>((10000 + 39)),
    MessageSize = static_cast<int32_t>((10000 + 40)),
    ProtocolType = static_cast<int32_t>((10000 + 41)),
    ProtocolOption = static_cast<int32_t>((10000 + 42)),
    ProtocolNotSupported = static_cast<int32_t>((10000 + 43)),
    SocketNotSupported = static_cast<int32_t>((10000 + 44)),
    OperationNotSupported = static_cast<int32_t>((10000 + 45)),
    ProtocolFamilyNotSupported = static_cast<int32_t>((10000 + 46)),
    AddressFamilyNotSupported = static_cast<int32_t>((10000 + 47)),
    AddressAlreadyInUse = static_cast<int32_t>((10000 + 48)),
    AddressNotAvailable = static_cast<int32_t>((10000 + 49)),
    NetworkDown = static_cast<int32_t>((10000 + 50)),
    NetworkUnreachable = static_cast<int32_t>((10000 + 51)),
    NetworkReset = static_cast<int32_t>((10000 + 52)),
    ConnectionAborted = static_cast<int32_t>((10000 + 53)),
    ConnectionReset = static_cast<int32_t>((10000 + 54)),
    NoBufferSpaceAvailable = static_cast<int32_t>((10000 + 55)),
    IsConnected = static_cast<int32_t>((10000 + 56)),
    NotConnected = static_cast<int32_t>((10000 + 57)),
    Shutdown = static_cast<int32_t>((10000 + 58)),
    TimedOut = static_cast<int32_t>((10000 + 60)),
    ConnectionRefused = static_cast<int32_t>((10000 + 61)),
    HostDown = static_cast<int32_t>((10000 + 64)),
    HostUnreachable = static_cast<int32_t>((10000 + 65)),
    ProcessLimit = static_cast<int32_t>((10000 + 67)),
    SystemNotReady = static_cast<int32_t>((10000 + 91)),
    VersionNotSupported = static_cast<int32_t>((10000 + 92)),
    NotInitialized = static_cast<int32_t>((10000 + 93)),
    Disconnecting = static_cast<int32_t>((10000 + 101)),
    TypeNotFound = static_cast<int32_t>((10000 + 109)),
    HostNotFound = static_cast<int32_t>((10000 + 1001)),
    TryAgain = static_cast<int32_t>((10000 + 1002)),
    NoRecovery = static_cast<int32_t>((10000 + 1003)),
    NoData = static_cast<int32_t>((10000 + 1004)),
};
} // namespace Sockets
} // namespace Net
} // namespace System
