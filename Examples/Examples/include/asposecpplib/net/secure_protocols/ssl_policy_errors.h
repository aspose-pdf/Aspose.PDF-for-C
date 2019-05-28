#pragma once

#include <system/enum_helpers.h>

namespace System {
namespace Net {
namespace Security {

enum class SslPolicyErrors
{
    None = 0x0,
    RemoteCertificateNotAvailable = 0x1,
    RemoteCertificateNameMismatch = 0x2,
    RemoteCertificateChainErrors = 0x4
};

DECLARE_ENUM_OPERATORS(System::Net::Security::SslPolicyErrors);
DECLARE_USING_GLOBAL_OPERATORS
}}} // System::Net::Security

DECLARE_USING_ENUM_OPERATORS(System::Net::Security);
