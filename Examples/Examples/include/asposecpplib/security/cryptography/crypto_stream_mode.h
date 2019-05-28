/// @file security/cryptography/crypto_stream_mode.h
#ifndef _crypto_stream_mode_h_
#define _crypto_stream_mode_h_

namespace System { namespace Security { namespace Cryptography {

/// CryptoStream direction.
enum class CryptoStreamMode  {
    /// Stream is for reading only.
    Read = 0,
    /// Stream is for writing only.
    Write = 1
};

}}}

#endif
