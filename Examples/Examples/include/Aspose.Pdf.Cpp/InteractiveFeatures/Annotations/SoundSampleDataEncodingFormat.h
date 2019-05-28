#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// The encoding format for the sound sample data.
/// </summary>
enum class SoundSampleDataEncodingFormat
{
    /// <summary>
    /// Unspecified or unsigned values in the range 0 to 2B − 1.
    /// </summary>
    Raw,
    /// <summary>
    /// Twos-complement values.
    /// </summary>
    Signed,
    /// <summary>
    /// μ-law–encoded samples.
    /// </summary>
    muLaw,
    /// <summary>
    /// A-law–encoded samples.
    /// </summary>
    ALaw
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Annotations::SoundSampleDataEncodingFormat>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Annotations::SoundSampleDataEncodingFormat, const char_t*>, 4>& values();
};



