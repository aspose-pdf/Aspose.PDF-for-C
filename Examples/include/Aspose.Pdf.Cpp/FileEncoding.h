#ifndef _Aspose_Pdf_FileEncoding_h_
#define _Aspose_Pdf_FileEncoding_h_

namespace Aspose {

namespace Pdf {

/// <summary>
/// Encoding of the attached file. Possible values: Zip - file is compressed with ZIP, None - file is non compressed.
/// </summary>
enum class FileEncoding
{
    /// <summary>
    ///  File is not compressed.
    /// </summary>
    None,
    /// <summary>
    /// File is compressed with ZIP algorithhm. 
    /// </summary>
    Zip
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_FileEncoding_h_

