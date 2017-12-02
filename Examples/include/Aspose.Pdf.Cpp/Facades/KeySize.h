#ifndef _Aspose_Pdf_Facades_KeySize_h_
#define _Aspose_Pdf_Facades_KeySize_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Defines different key sizes which can be used to encrypt pdf documents.
/// </summary>
enum class KeySize
{
    /// <summary>
    /// 40 bit key. Such key size is used with RC4 algorithm and provides low level of security. 
    /// Nevertheless old versions of pdf documents can be encrypted only with such keys (v. 1.3 and lower);
    /// </summary>
    x40,
    /// <summary>
    /// 128 bit key. Both RC4 and AES algorithms can use such key size.
    /// </summary>
    x128,
    /// <summary>
    /// 256 bit key. Such key size can be used only with AES and is recognized with the last Adobe Reader versions (starting from v.9).
    /// </summary>
    x256
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_KeySize_h_

