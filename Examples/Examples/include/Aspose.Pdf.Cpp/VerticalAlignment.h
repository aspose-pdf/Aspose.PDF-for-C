#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enumeration of possible vertical alignment values.
/// </summary>
enum class VerticalAlignment
{
    /// <summary>
    /// No alignment (use specified position).
    /// </summary>
    None,
    /// <summary>
    /// Align to top.
    /// </summary>
    Top,
    /// <summary>
    /// Center alignment.
    /// </summary>
    Center,
    /// <summary>
    /// Align to bottom.
    /// </summary>
    Bottom
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::VerticalAlignment>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::VerticalAlignment, const char_t*>, 4>& values();
};



