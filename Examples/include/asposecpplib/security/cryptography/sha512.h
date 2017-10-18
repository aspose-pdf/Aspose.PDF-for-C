#ifndef _aspose_cryptography_sha512_h_
#define _aspose_cryptography_sha512_h_

#include "security/cryptography/hash_algorithm.h"

namespace System{ namespace Security{ namespace Cryptography{

    // in C++ SHA512 is not an abstract class!
    class SHA512 : public HashAlgorithm
    {
        FRIEND_FUNCTION_System_MakeObject;

    protected:
        SHA512();

    public:
        static SharedPtr<SHA512> Create();
        static SharedPtr<SHA512> Create(String algName);
    };

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // _aspose_cryptography_sha512_h_