#pragma once

#include <cstdint>

namespace Aspose {

namespace Pdf {

/// <summary>
/// enumerates strategies for font subsetting
/// </summary>
enum class FontSubsetStrategy : uint8_t
{
    /// <summary>
    /// Declares to subset only fonts which are embedded in document already
    /// </summary>
    SubsetEmbeddedFontsOnly = 0,
    /// <summary>
    /// Declares to subsets all the fonts, non-embedded and embedded both
    /// </summary>
    SubsetAllFonts
};

} // namespace Pdf
} // namespace Aspose


