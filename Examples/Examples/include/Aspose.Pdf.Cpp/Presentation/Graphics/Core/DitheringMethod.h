#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Dithering method.
/// </summary>
enum class DitheringMethod
{
    /// <summary>
    /// Threshold dithering. Simplest and fastest dithering algorithm.
    /// </summary>
    ThresholdDithering,
    /// <summary>
    /// The Floyd-Steinberg dithering. A more complex dithering algorithm, uses nearest neighbors intensity values.
    /// </summary>
    FloydSteinbergDithering
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


