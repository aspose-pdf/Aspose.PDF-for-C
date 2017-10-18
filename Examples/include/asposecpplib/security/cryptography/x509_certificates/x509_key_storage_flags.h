#ifndef _security_x509_key_storage_flags_h_
#define _security_x509_key_storage_flags_h_

#include <system/enum_helpers.h>

namespace System {

namespace Security {

namespace Cryptography {

namespace X509Certificates {

enum class X509KeyStorageFlags
{
    DefaultKeySet = 0,
    UserKeySet = 1,
    MachineKeySet = 2,
    Exportable = 4,
    UserProtected = 8,
    PersistKeySet = 16
};
DECLARE_ENUM_OPERATORS(System::Security::Cryptography::X509Certificates::X509KeyStorageFlags);

} // namespace X509Certificates
} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_x509_key_storage_flags_h_

