#pragma once

namespace System {
namespace Net {
namespace Security {

// WebRequest-specific authentication flags
enum class AuthenticationLevel
{
    None = 0,
    MutualAuthRequested = 1,
    MutualAuthRequired = 2
};
}}} // namespace System::Net::Security
