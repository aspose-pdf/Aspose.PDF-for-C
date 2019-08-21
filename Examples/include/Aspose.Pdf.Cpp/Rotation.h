#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enumeration of possible rotation values.
/// </summary>
enum class Rotation
{
    /// <summary>
    /// Non-rotated.
    /// </summary>
    None,
    /// <summary>
    /// Rotated on 90 degrees clockwise.
    /// </summary>
    on90,
    /// <summary>
    /// Rotated on 180 degrees.
    /// </summary>
    on180,
    /// <summary>
    /// Rotated on 270 degrees clockwise.
    /// </summary>
    on270
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Rotation>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Rotation, const char_t*>, 4>& values();
};



