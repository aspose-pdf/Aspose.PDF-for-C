#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// The blend modes enumeration.
/// </summary>
enum class BlendMode
{
    /// <summary>
    /// Normal blend mode.
    /// </summary>
    Normal,
    /// <summary>
    /// Multiply blend mode.
    /// </summary>
    Multiply,
    /// <summary>
    /// Screen blend mode.
    /// </summary>
    Screen,
    /// <summary>
    /// Overlay blend mode.
    /// </summary>
    Overlay,
    /// <summary>
    /// Darken blend mode.
    /// </summary>
    Darken,
    /// <summary>
    /// Lighten blend mode.
    /// </summary>
    Lighten,
    /// <summary>
    /// ColorDodge blend mode.
    /// </summary>
    ColorDodge,
    /// <summary>
    /// ColorBurn blend mode.
    /// </summary>
    ColorBurn,
    /// <summary>
    /// HardLight blend mode.
    /// </summary>
    HardLight,
    /// <summary>
    /// SoftLight blend mode.
    /// </summary>
    SoftLight,
    /// <summary>
    /// Difference blend mode.
    /// </summary>
    Difference,
    /// <summary>
    /// Exclusion blend mode.
    /// </summary>
    Exclusion,
    /// <summary>
    /// Hue blend mode.
    /// </summary>
    Hue,
    /// <summary>
    /// Saturation blend mode.
    /// </summary>
    Saturation,
    /// <summary>
    /// Color blend mode.
    /// </summary>
    Color,
    /// <summary>
    /// Luminosity blend mode.
    /// </summary>
    Luminosity,
    /// <summary>
    /// Compatible blend mode.
    /// </summary>
    Compatible
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::BlendMode>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::BlendMode, const char_t*>, 17>& values();
};



