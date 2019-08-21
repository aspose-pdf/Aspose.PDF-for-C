#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Defines word wrapping strategies
/// </summary>
enum class WordWrapMode
{
    /// <summary>
    /// Default algorithm (allows breaking words in the middle)
    /// </summary>
    Default,
    /// <summary>
    /// Word wrapping only wraps complete words.
    /// If the complete word cannot be wrapped, attempts
    /// to wrap word in the middle
    /// </summary>
    ByWords
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


