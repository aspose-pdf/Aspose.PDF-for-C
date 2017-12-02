#ifndef _Aspose_Pdf_Generator_ColumnAdjustment_h_
#define _Aspose_Pdf_Generator_ColumnAdjustment_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enumerates column adjustment types.
/// </summary>
enum class ColumnAdjustment
{
    /// <summary>
    /// Customized.
    /// </summary>
    Customized = 0,
    /// <summary>
    /// Auto fit to content.
    /// </summary>
    AutoFitToContent = 1
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::ColumnAdjustment>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::ColumnAdjustment, const char_t*>, 2>& values();
};


#endif // _Aspose_Pdf_Generator_ColumnAdjustment_h_

