#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !COMPACT


#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Specifies how the interior of a closed path is filled.
/// </summary>
enum class FillMode
{
    /// <summary>
    /// Specifies the alternate fill mode.
    /// </summary>
    Alternate,
    /// <summary>
    /// Specifies the winding fill mode.
    /// </summary>
    Winding
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::FillMode>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::FillMode, const char_t*>, 2>& values();
};



