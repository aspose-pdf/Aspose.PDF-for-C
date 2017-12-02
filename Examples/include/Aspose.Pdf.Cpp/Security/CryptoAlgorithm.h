#ifndef _Aspose_Pdf_Security_CryptoAlgorithm_h_
#define _Aspose_Pdf_Security_CryptoAlgorithm_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>

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

DECLARE_ENUM_OPERATORS(Aspose::Pdf::CryptoAlgorithm);
DECLARE_USING_GLOBAL_OPERATORS

} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf);


#endif // _Aspose_Pdf_Security_CryptoAlgorithm_h_

