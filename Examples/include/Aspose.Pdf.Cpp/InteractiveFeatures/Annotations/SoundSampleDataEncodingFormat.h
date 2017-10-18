#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_SoundSampleDataEncodingFormat_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_SoundSampleDataEncodingFormat_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// The encoding format for the sound sample data.
/// </summary>
enum class SoundSampleDataEncodingFormat
{
    Raw,
    Signed,
    muLaw,
    ALaw
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::InteractiveFeatures::Annotations::SoundSampleDataEncodingFormat>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::InteractiveFeatures::Annotations::SoundSampleDataEncodingFormat, const char_t*>, 4>& values();
};


#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_SoundSampleDataEncodingFormat_h_

