#ifndef _Aspose_Pdf_BlendMode_h_
#define _Aspose_Pdf_BlendMode_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// The blend modes enumeration.
/// </summary>
enum class BlendMode
{
    Normal,
    Multiply,
    Screen,
    Overlay,
    Darken,
    Lighten,
    ColorDodge,
    ColorBurn,
    HardLight,
    SoftLight,
    Difference,
    Exclusion,
    Hue,
    Saturation,
    Color,
    Luminosity
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::BlendMode>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::BlendMode, const char_t*>, 16>& values();
};


#endif // _Aspose_Pdf_BlendMode_h_

