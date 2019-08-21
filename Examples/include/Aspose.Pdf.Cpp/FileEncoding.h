#pragma once

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

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

template<>
struct EnumMetaInfo<Aspose::Pdf::FileEncoding>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::FileEncoding, const char_t*>, 2>& values();
};



