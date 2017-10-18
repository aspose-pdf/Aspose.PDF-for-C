#ifndef _aspose_security_cryptography_md5_h_
#define _aspose_security_cryptography_md5_h_
#include <security/cryptography/hash_algorithm.h>

namespace System {
    namespace Security {
        namespace Cryptography {

            class MD5 : public HashAlgorithm
            {
                FRIEND_FUNCTION_System_MakeObject;

            public:
                typedef SharedPtr<MD5> ptr;

                static SharedPtr<MD5> Create();
                static SharedPtr<MD5> Create(String algName);

            protected:
                MD5();
            };

        }
    }
}

#endif // _aspose_security_cryptography_md5_h_