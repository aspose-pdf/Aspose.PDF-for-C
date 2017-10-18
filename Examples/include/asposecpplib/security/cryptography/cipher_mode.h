#ifndef _cipher_mode_
#define _cipher_mode_

namespace System { namespace Security { namespace Cryptography {

    enum class CipherMode
    {
        CBC = 1,
        ECB = 2,
        OFB = 3,
        CFB = 4,
        CTS = 5
    };

}}}

#endif