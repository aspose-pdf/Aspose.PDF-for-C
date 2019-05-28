/// @file security/cryptography/cipher_mode.h
#ifndef _cipher_mode_
#define _cipher_mode_

namespace System { namespace Security { namespace Cryptography {

/// Block cipher mode.
enum class CipherMode
{
    /// Cipher block chaining which combines current block with previous block to improve encryption.
    CBC = 1,
    /// Electronic codebook mode with no inter-block influences; results in weaker encryption.
    ECB = 2,
    /// Output feedback mode that handles large input blocks in small pieces.
    OFB = 3,
    /// Cipher feedback mode that handles large input blocks in small pieces. Mangling rules differ from such of OFB.
    CFB = 4,
    /// Cipher text stealing mode, behaves like CBC for all but two last blocks of text.
    CTS = 5
};

}}}

#endif
