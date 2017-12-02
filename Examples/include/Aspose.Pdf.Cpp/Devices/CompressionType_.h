#ifndef _Aspose_Pdf_Devices_CompressionType__h_
#define _Aspose_Pdf_Devices_CompressionType__h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Used to specify the parameter value passed to a Tiff image device.
/// </summary>
enum class CompressionType
{
    /// <summary>
    /// Specifies the LZW compression scheme. Can be passed to the Tiff encoder as a parameter that belongs to the Compression category.
    /// </summary>
    LZW,
    /// <summary>
    /// Specifies the CCITT4 compression scheme. Can be passed to the CCITT4 encoder as a parameter that belongs to the Compression category.
    /// </summary>
    CCITT4,
    /// <summary>
    /// Specifies the CCITT3 compression scheme. Can be passed to the CCITT3 encoder as a parameter that belongs to the Compression category.
    /// </summary>
    CCITT3,
    /// <summary>
    /// Specifies the RLE compression scheme. Can be passed to the RLE encoder as a parameter that belongs to the Compression category.
    /// </summary>
    RLE,
    /// <summary>
    /// Specifies no compression. Can be passed to the Tiff encoder as a parameter that belongs to the compression category.
    /// </summary>
    None
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_CompressionType__h_

