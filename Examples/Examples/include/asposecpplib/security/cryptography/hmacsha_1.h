/// @file security/cryptography/hmacsha_1.h
#ifndef _aspose_security_cryptography_hmacsha_1_h_
#define _aspose_security_cryptography_hmacsha_1_h_

#include <system/array.h>
#include <system/exceptions.h>

#include <security/cryptography/hash_algorithm.h>

namespace System { namespace Security { namespace Cryptography {

/// Hash-based Message Authentication Code that uses the SHA1 hash function. Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS HMACSHA1 : public HashAlgorithm
{
public:
    /// Constructor.
    /// @param key Hasher key.
    ASPOSECPP_SHARED_API HMACSHA1(const System::ArrayPtr<uint8_t>& key);    
};

}}}
#endif
