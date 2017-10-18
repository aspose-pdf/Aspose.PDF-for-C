#ifndef rijndael_h
#define rijndael_h

#include "symmetric_algorithm.h"

namespace System{ namespace Security{ namespace Cryptography{

    class Rijndael : public SymmetricAlgorithm
    {
    protected:
        Rijndael();
    };

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // rijndael_h