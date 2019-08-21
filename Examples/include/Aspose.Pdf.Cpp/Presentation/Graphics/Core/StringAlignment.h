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
/// Specifies the alignment of a text string relative to its layout rectangle.
/// </summary>
enum class StringAlignment
{
    /// <summary>
    /// Specifies the text be aligned near the layout. In a left-to-right layout, the near position is left. In a right-to-left layout, the near position is right.
    /// </summary>
    Near,
    /// <summary>
    /// Specifies that text is aligned in the center of the layout rectangle.
    /// </summary>
    Center,
    /// <summary>
    /// Specifies that text is aligned far from the origin position of the layout rectangle. In a left-to-right layout, the far position is right. In a right-to-left layout, the far position is left.
    /// </summary>
    Far
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::StringAlignment>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::StringAlignment, const char_t*>, 3>& values();
};



