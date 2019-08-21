/// @file security/cryptography/x509_certificates/x500_distinguished_name_flags.h
#ifndef _security_X500DistinguishedNameFlags_h_
#define _security_X500DistinguishedNameFlags_h_

namespace System {

namespace Security {

namespace Cryptography {

namespace X509Certificates {

/// X509 certificate distinguished name formatting rules.
enum class X500DistinguishedNameFlags
{
    /// No special characteristics.
    None = 0,
    /// Name is reserved.
    Reversed = 1,
    /// Use semicolons.
    UseSemicolons = 16,
    /// Name doesn't use plus sign.
    DoNotUsePlusSign = 32,
    /// Disables quotes in name.
    DoNotUseQuotes = 64,
    /// Enables using commas.
    UseCommas = 128,
    /// Enables using new lines.
    UseNewLines = 256,
    /// Switches from using Unicode to using UTF-8 encoding.
    UseUTF8Encoding = 4096,
    /// Switches to T61 encoding.
    UseT61Encoding = 8192,
    /// Forces using UTF-8 when encoding specific X500 keys.
    ForceUTF8Encoding = 16384
};

} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_X500DistinguishedNameFlags_h_

