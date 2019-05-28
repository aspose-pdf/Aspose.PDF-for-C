#pragma once

#include <net/sockets/address_family.h>

namespace System {
namespace Net {
namespace Sockets {

enum class ProtocolFamily
{
    Unknown = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Unknown),
    Unspecified = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Unspecified),
    Unix = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Unix),
    InterNetwork = static_cast<int32_t>(System::Net::Sockets::AddressFamily::InterNetwork),
    ImpLink = static_cast<int32_t>(System::Net::Sockets::AddressFamily::ImpLink),
    Pup = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Pup),
    Chaos = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Chaos),
    NS = static_cast<int32_t>(System::Net::Sockets::AddressFamily::NS),
    Ipx = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Ipx),
    Iso = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Iso),
    Osi = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Osi),
    Ecma = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Ecma),
    DataKit = static_cast<int32_t>(System::Net::Sockets::AddressFamily::DataKit),
    Ccitt = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Ccitt),
    Sna = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Sna),
    DecNet = static_cast<int32_t>(System::Net::Sockets::AddressFamily::DecNet),
    DataLink = static_cast<int32_t>(System::Net::Sockets::AddressFamily::DataLink),
    Lat = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Lat),
    HyperChannel = static_cast<int32_t>(System::Net::Sockets::AddressFamily::HyperChannel),
    AppleTalk = static_cast<int32_t>(System::Net::Sockets::AddressFamily::AppleTalk),
    NetBios = static_cast<int32_t>(System::Net::Sockets::AddressFamily::NetBios),
    VoiceView = static_cast<int32_t>(System::Net::Sockets::AddressFamily::VoiceView),
    FireFox = static_cast<int32_t>(System::Net::Sockets::AddressFamily::FireFox),
    Banyan = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Banyan),
    Atm = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Atm),
    InterNetworkV6 = static_cast<int32_t>(System::Net::Sockets::AddressFamily::InterNetworkV6),
    Cluster = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Cluster),
    Ieee12844 = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Ieee12844),
    Irda = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Irda),
    NetworkDesigners = static_cast<int32_t>(System::Net::Sockets::AddressFamily::NetworkDesigners),
    Max = static_cast<int32_t>(System::Net::Sockets::AddressFamily::Max)
};
} // namespace Sockets
} // namespace Net
} // namespace System
