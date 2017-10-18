#ifndef _aspose_cryptography_sha384_h_
#define _aspose_cryptography_sha384_h_

#include "security/cryptography/hash_algorithm.h"

namespace System{ namespace Security{ namespace Cryptography{

    // in C++ SHA384 is not an abstract class!
    class SHA384 : public HashAlgorithm
    {
        FRIEND_FUNCTION_System_MakeObject;

    protected:
        SHA384();

    public:
        static SharedPtr<SHA384> Create();
        static SharedPtr<SHA384> Create(String algName);
    };

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // _aspose_cryptography_sha384_h_