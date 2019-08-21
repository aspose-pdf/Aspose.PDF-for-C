#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represent type of cryptographic algorithm that used in encryption/decryption routines.
/// </summary>
enum class CryptoAlgorithm
{
    /// <summary>
    /// RC4 with key length 40.
    /// </summary>
    RC4x40,
    /// <summary>
    /// RC4 with key length 128.
    /// </summary>
    RC4x128,
    /// <summary>
    /// AES with key length 128.
    /// </summary>
    AESx128,
    /// <summary>
    /// AES with key length 256.
    /// </summary>
    AESx256
};

} // namespace Pdf
} // namespace Aspose


