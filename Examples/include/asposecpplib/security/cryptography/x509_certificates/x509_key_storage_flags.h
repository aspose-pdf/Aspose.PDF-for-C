/// @file security/cryptography/x509_certificates/x509_key_storage_flags.h
#ifndef _security_x509_key_storage_flags_h_
#define _security_x509_key_storage_flags_h_

#include <system/enum_helpers.h>

namespace System {
namespace Security {
namespace Cryptography {
namespace X509Certificates {

/// Defines how to store key.
enum class X509KeyStorageFlags
{
    /// Use default key set.
    DefaultKeySet = 0,
    /// Use user-associated store instead of machine-local one.
    UserKeySet = 1,
    /// Use local machine store instead of user one.
    MachineKeySet = 2,
    /// Marks imported keys as exportable.
    Exportable = 4,
    /// Notify user that the key is being used.
    UserProtected = 8,
    /// The key is persisted when importing certificate.
    PersistKeySet = 16
};
/// Declaration of template arithmetic operators for values of X509KeyStorageFlags enum type.
DECLARE_ENUM_OPERATORS(System::Security::Cryptography::X509Certificates::X509KeyStorageFlags);

} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_x509_key_storage_flags_h_

