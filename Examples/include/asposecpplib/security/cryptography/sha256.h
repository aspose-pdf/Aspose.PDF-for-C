#ifndef _aspose_cryptography_sha256_h_
#define _aspose_cryptography_sha256_h_

#include "security/cryptography/hash_algorithm.h"

namespace System{ namespace Security{ namespace Cryptography{

    // in C++ SHA256 is not an abstract class!
    class SHA256 : public HashAlgorithm
    {
        FRIEND_FUNCTION_System_MakeObject;

    protected:
        SHA256();

    public:
        static SharedPtr<SHA256> Create();
        static SharedPtr<SHA256> Create(String algName);
    };

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // _aspose_cryptography_sha384_h_