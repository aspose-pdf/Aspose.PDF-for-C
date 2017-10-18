#ifndef _aspose_cryptography_sha1_h_
#define _aspose_cryptography_sha1_h_

#include "security/cryptography/hash_algorithm.h"

namespace System{ namespace Security{ namespace Cryptography{

    // in C++ SHA1 is not an abstract class!
    class SHA1 : public HashAlgorithm
    {
        FRIEND_FUNCTION_System_MakeObject;

    protected:
        SHA1();

    public:
        static SharedPtr<SHA1> Create();
        static SharedPtr<SHA1> Create(String algName);
    };

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // _aspose_cryptography_sha1_h_