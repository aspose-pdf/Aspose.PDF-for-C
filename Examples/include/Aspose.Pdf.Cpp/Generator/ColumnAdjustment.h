#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

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
    AutoFitToContent = 1,
    /// <summary>
    /// Auto fit to window.
    /// </summary>
    AutoFitToWindow = 2
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::ColumnAdjustment>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::ColumnAdjustment, const char_t*>, 3>& values();
};



