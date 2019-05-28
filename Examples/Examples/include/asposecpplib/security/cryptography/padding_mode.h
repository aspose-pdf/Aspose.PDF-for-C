/// @file security/cryptography/padding_mode.h
#ifndef _padding_mode_h_
#define _padding_mode_h_

namespace System { namespace Security { namespace Cryptography {

/// Defines how to treat messages that is shorter than block required by crypto operation.s
enum class PaddingMode {
    /// No padding.
    None = 1,
    /// Use PKCS #7 padding string.
    PKCS7 = 2,
    /// Use zero bytes.
    Zeros = 3,
    /// Use ANSIX923 padding string.
    ANSIX923 = 4,
    /// Use ISO10126 padding string.
    ISO10126 = 5,
};

}}}

#endif
