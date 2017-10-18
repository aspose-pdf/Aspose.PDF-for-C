#ifndef _aspose_security_cryptography_hmacsha_1_h_
#define _aspose_security_cryptography_hmacsha_1_h_

#include <system/array.h>
#include <system/exceptions.h>

#include <security/cryptography/hash_algorithm.h>

namespace System { namespace Security { namespace Cryptography {
class HMACSHA1 : public HashAlgorithm
{
public:
    HMACSHA1(System::ArrayPtr<uint8_t> key);    
};

}}}
#endif