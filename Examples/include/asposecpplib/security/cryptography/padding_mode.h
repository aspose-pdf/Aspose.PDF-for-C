#ifndef _padding_mode_h_
#define _padding_mode_h_

namespace System { namespace Security { namespace Cryptography {

    enum class PaddingMode {
        //     No padding is done.
        None = 1,
        //     The PKCS #7 padding string consists of a sequence of bytes, each of which is equal to the total number of padding bytes added.
        PKCS7 = 2,
        //     The padding string consists of bytes set to zero.
        Zeros = 3,
        //     The ANSIX923 padding string consists of a sequence of bytes filled with zeros before the length.
        ANSIX923 = 4,
        //     The ISO10126 padding string consists of random data before the length.
        ISO10126 = 5,
    };
}}}

#endif