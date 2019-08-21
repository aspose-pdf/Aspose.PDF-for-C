#pragma once

#include <system/enum_helpers.h>

namespace System {
namespace Net {

enum class AuthenticationSchemes
{
    None = 0x00000000,
    Digest = 0x00000001,
    Negotiate = 0x00000002,
    Ntlm = 0x00000004,
    Basic = 0x00000008,
    Anonymous = 0x00008000,
    IntegratedWindowsAuthentication = static_cast<int32_t>(Negotiate | Ntlm)
};

DECLARE_ENUM_OPERATORS(System::Net::AuthenticationSchemes);
DECLARE_USING_GLOBAL_OPERATORS
} // namespace Net
} // namespace System

DECLARE_USING_ENUM_OPERATORS(System::Net);
