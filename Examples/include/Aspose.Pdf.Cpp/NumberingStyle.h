#ifndef _Aspose_Pdf_NumberingStyle_h_
#define _Aspose_Pdf_NumberingStyle_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enumeration of supported page numbering style for PageLabel class.
/// 'None' should be first item to be compatible with c++
/// </summary>
enum class NumberingStyle
{
    None,
    NumeralsArabic,
    NumeralsRomanUppercase,
    NumeralsRomanLowercase,
    LettersUppercase,
    LettersLowercase
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::NumberingStyle>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::NumberingStyle, const char_t*>, 6>& values();
};


#endif // _Aspose_Pdf_NumberingStyle_h_

