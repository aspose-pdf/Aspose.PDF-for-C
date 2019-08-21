#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !COMPACT


namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Specifies the quality level to use during compositing.
/// </summary>
enum class CompositingQuality
{
    /// <summary>
    /// Invalid quality.
    /// </summary>        
    Invalid = -1,
    /// <summary>
    /// Default quality.
    /// </summary>
    Default = 0,
    /// <summary>
    /// High speed, low quality.
    /// </summary>
    HighSpeed = 1,
    /// <summary>
    /// High quality, low speed compositing.
    /// </summary>
    HighQuality = 2,
    /// <summary>
    /// Gamma correction is used.
    /// </summary>
    GammaCorrected = 3,
    /// <summary>
    /// Assume linear values.
    /// </summary>
    AssumeLinear = 4
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif



