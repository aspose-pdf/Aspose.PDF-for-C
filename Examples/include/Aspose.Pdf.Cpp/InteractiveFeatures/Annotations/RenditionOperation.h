#pragma once

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// The operation to perform when the action is triggered.
/// </summary>
enum class RenditionOperation
{
    /// <summary>
    /// If no rendition is associated with the annotation, play the specified rendition, associating it with the annotation. If a rendition is already associated with the annotation, it shall be stopped, and the new rendition shall be associated with the annotation.
    /// </summary>
    PlayStop = 0,
    /// <summary>
    /// Stop any rendition being played in association with the annotation.
    /// </summary>
    Stop = 1,
    /// <summary>
    /// Pause any rendition being played in association with the annotation.
    /// </summary>
    Pause = 2,
    /// <summary>
    /// Resume any rendition being played in association with the annotation. 
    /// </summary>
    Resume = 3,
    /// <summary>
    /// Play the specified rendition, associating it with the annotation. If a rendition is already associated with the annotation, resume the rendition if it is paused.
    /// </summary>
    PlayResume = 4,
    /// <summary>
    /// Operation not defined.
    /// </summary>
    Undefined = -1
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Annotations::RenditionOperation>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Annotations::RenditionOperation, const char_t*>, 6>& values();
};



