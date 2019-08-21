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
/// Specifies the resize type.
/// </summary>
enum class ResizeType
{
    /// <summary>
    /// The pixels are not preserved during resize operation.
    /// </summary>
    None,
    /// <summary>
    /// Left top point of the new image will coincide with the left top point of the original image. Crop will occur if required.
    /// </summary>
    LeftTopToLeftTop,
    /// <summary>
    /// Right top point of the new image will coincide with the right top point of the original image. Crop will occur if required.
    /// </summary>
    RightTopToRightTop,
    /// <summary>
    /// Right bottom point of the new image will coincide with the right bottom point of the original image. Crop will occur if required.
    /// </summary>
    RightBottomToRightBottom,
    /// <summary>
    /// Left bottom point of the new image will coincide with the left bottom point of the original image. Crop will occur if required.
    /// </summary>
    LeftBottomToLeftBottom,
    /// <summary>
    /// Center of the new image will coincide with the center of the original image. Crop will occur if required.
    /// </summary>
    CenterToCenter,
    /// <summary>
    /// Resample using lanczos algorithm with a=3.
    /// </summary>
    LanczosResample,
    /// <summary>
    /// Resample using nearest neighbour algorithm.
    /// </summary>
    NearestNeighbourResample,
    /// <summary>
    /// Resample using adaptive algorithm based on weighted and blended rational function and lanczos3 interpolation algorithms.
    /// </summary>
    AdaptiveResample,
    /// <summary>
    /// Resample using bilinear interpolation. Image pre-filtering is allowed to remove the noice before resample, when needed 
    /// </summary>
    BilinearResample,
    /// <summary>
    /// The high quality resample
    /// </summary>
    HighQualityResample
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::ResizeType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::ResizeType, const char_t*>, 11>& values();
};



