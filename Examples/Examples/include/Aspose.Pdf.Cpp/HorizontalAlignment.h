#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Describes horizontal alignment.
/// </summary>
enum class HorizontalAlignment
{
    /// <summary>
    /// No alignment.
    /// </summary>
    None,
    /// <summary>
    /// Align to left.
    /// </summary>
    Left,
    /// <summary>
    /// Center alignment.
    /// </summary>
    Center,
    /// <summary>
    /// Align to right.
    /// </summary>
    Right,
    /// <summary>
    /// Justify alignment. Text will be aligned on both left and right margins.
    /// </summary>
    Justify,
    /// <summary>
    /// Similar to 'Justify' alignment, except that the very last line will only be 
    ///	left-aligned in 'Justify' mode, while in 'FullJustify' mode all lines will be
    ///	left- and right-aligned.
    /// </summary>
    FullJustify
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::HorizontalAlignment>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::HorizontalAlignment, const char_t*>, 6>& values();
};



