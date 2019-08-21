#pragma once

#include <system/enum_helpers.h>

namespace System {
namespace Security {
namespace Authentication {

enum class SslProtocols
{
    None = 0,
    Ssl2 = 12,
    Ssl3 = 48,
    Tls = 192,
    Default = 240
};

DECLARE_ENUM_OPERATORS(System::Security::Authentication::SslProtocols);
DECLARE_USING_GLOBAL_OPERATORS

enum class CipherAlgorithmType
{
    None = 0,
    Null = 24576,
    Des = 26113,
    Rc2 = 26114,
    TripleDes = 26115,
    Aes128 = 26126,
    Aes192 = 26127,
    Aes256 = 26128,
    Aes = 26129,
    Rc4 = 26625
};

enum class HashAlgorithmType
{
    None = 0,
    Md5 = 32771,
    Sha1 = 32772
};
}}} // namespace System::Security::Authentication

DECLARE_USING_ENUM_OPERATORS(System::Security::Authentication);
