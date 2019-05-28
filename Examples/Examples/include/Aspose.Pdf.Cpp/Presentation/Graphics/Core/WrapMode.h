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
/// Specifies how a texture or gradient is tiled when it is smaller than the area being filled.
/// </summary>
enum class WrapMode
{
    /// <summary>
    /// Tiles the gradient or texture.
    /// </summary>
    Tile,
    /// <summary>
    /// Reverses the texture or gradient horizontally and then tiles the texture or gradient.
    /// </summary>
    TileFlipX,
    /// <summary>
    /// Reverses the texture or gradient vertically and then tiles the texture or gradient.
    /// </summary>
    TileFlipY,
    /// <summary>
    /// Reverses the texture or gradient horizontally and vertically and then tiles the texture or gradient.
    /// </summary>
    TileFlipXY,
    /// <summary>
    /// The texture or gradient is not tiled.
    /// </summary>
    Clamp
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::WrapMode>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::WrapMode, const char_t*>, 5>& values();
};



