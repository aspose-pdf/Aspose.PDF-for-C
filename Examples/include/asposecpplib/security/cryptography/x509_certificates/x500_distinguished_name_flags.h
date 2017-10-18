#ifndef _security_X500DistinguishedNameFlags_h_
#define _security_X500DistinguishedNameFlags_h_

namespace System {

namespace Security {

namespace Cryptography {

namespace X509Certificates {

enum class X500DistinguishedNameFlags
{
    None = 0,
    Reversed = 1,
    UseSemicolons = 16,
    DoNotUsePlusSign = 32,
    DoNotUseQuotes = 64,
    UseCommas = 128,
    UseNewLines = 256,
    UseUTF8Encoding = 4096,
    UseT61Encoding = 8192,
    ForceUTF8Encoding = 16384
};

} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_X500DistinguishedNameFlags_h_

