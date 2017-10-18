#ifndef _Aspose_Pdf_Security_CryptoAlgorithm_h_
#define _Aspose_Pdf_Security_CryptoAlgorithm_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represent type of cryptographic algorithm that used in encryption/decryption routines.
/// </summary>
enum class CryptoAlgorithm
{
    RC4x40,
    RC4x128,
    AESx128,
    AESx256
};

} // namespace Pdf
} // namespace Aspose

DECLARE_ENUM_OPERATORS(Aspose::Pdf::CryptoAlgorithm);


#endif // _Aspose_Pdf_Security_CryptoAlgorithm_h_

