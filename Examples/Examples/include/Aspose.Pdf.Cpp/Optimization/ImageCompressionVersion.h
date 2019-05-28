#pragma once

namespace Aspose {

namespace Pdf {

namespace Optimization {

/// <summary>
/// Describes versions of image compression algorithm.
/// </summary>
enum class ImageCompressionVersion
{
    /// <summary>
    /// Standard algorithm. Default value.
    /// </summary>
    Standard,
    /// <summary>
    /// Improved algorithm faster then standard but applicable not for all cases.
    /// </summary>
    Fast = 2,
    /// <summary>
    /// Use fast algorithm when possible and standard for other cases. May be slower then "Fast" but may produce better compression.
    /// </summary>
    Mixed = 3
};

} // namespace Optimization
} // namespace Pdf
} // namespace Aspose


