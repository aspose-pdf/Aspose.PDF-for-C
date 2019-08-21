#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Specifies how much an image is rotated and the axis used to flip the image.
/// </summary>
enum class RotateFlipType
{
    /// <summary>
    /// Specifies no clockwise rotation and no flipping.
    /// </summary>
    RotateNoneFlipNone,
    /// <summary>
    /// Specifies a 90-degree clockwise rotation without flipping.
    /// </summary>
    Rotate90FlipNone,
    /// <summary>
    /// Specifies a 180-degree clockwise rotation without flipping. 
    /// </summary>
    Rotate180FlipNone,
    /// <summary>
    /// Specifies a 270-degree clockwise rotation without flipping. 
    /// </summary>
    Rotate270FlipNone,
    /// <summary>
    /// Specifies no clockwise rotation followed by a horizontal flip. 
    /// </summary>
    RotateNoneFlipX,
    /// <summary>
    /// Specifies a 90-degree clockwise rotation followed by a horizontal flip. 
    /// </summary>
    Rotate90FlipX,
    /// <summary>
    /// Specifies a 180-degree clockwise rotation followed by a horizontal flip. 
    /// </summary>
    Rotate180FlipX,
    /// <summary>
    /// Specifies a 270-degree clockwise rotation followed by a horizontal flip. 
    /// </summary>
    Rotate270FlipX,
    /// <summary>
    /// Specifies no clockwise rotation followed by a vertical flip. 
    /// </summary>
    RotateNoneFlipY,
    /// <summary>
    /// Specifies a 90-degree clockwise rotation followed by a vertical flip. 
    /// </summary>
    Rotate90FlipY,
    /// <summary>
    /// Specifies a 180-degree clockwise rotation followed by a vertical flip. 
    /// </summary>
    Rotate180FlipY,
    /// <summary>
    /// Specifies a 270-degree clockwise rotation followed by a vertical flip. 
    /// </summary>
    Rotate270FlipY,
    /// <summary>
    /// Specifies no clockwise rotation followed by a horizontal and vertical flip. 
    /// </summary>
    RotateNoneFlipXY,
    /// <summary>
    /// Specifies a 90-degree clockwise rotation followed by a horizontal and vertical flip. 
    /// </summary>
    Rotate90FlipXY,
    /// <summary>
    /// Specifies a 180-degree clockwise rotation followed by a horizontal and vertical flip.
    /// </summary>
    Rotate180FlipXY,
    /// <summary>
    /// Specifies a 270-degree clockwise rotation followed by a horizontal and vertical flip.
    /// </summary>
    Rotate270FlipXY
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::RotateFlipType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::RotateFlipType, const char_t*>, 16>& values();
};



