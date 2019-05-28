#pragma once

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Validation {

enum class Severity
{
    Critical = 4,
    High = 3,
    Medium = 2,
    Low = 1
};

} // namespace Validation
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Validation::Severity>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Validation::Severity, const char_t*>, 4>& values();
};



