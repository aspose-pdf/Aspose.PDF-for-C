#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace FileFormats {

namespace Jpeg {

/// <summary>
/// Defines a way in which an n-bit value is converted to an 8-bit value.
/// </summary>
enum class SampleRoundingMode
{
    /// <summary>
    /// Extrapolate an 8-bit value to fit it into n bits, where 1 &lt; n &lt; 8.
    /// The number of all possible 8-bit values is 1 &lt;&lt; 8 = 256, from 0 to 255.
    /// The number of all possible n-bit values is 1 &lt;&lt; n, from 0 to (1 &lt;&lt; n) - 1.
    /// The most reasonable n-bit value Vn corresponding to some 8-bit value V8 is equal to Vn = V8 &gt;&gt; (8 - n).        
    /// </summary>
    Extrapolate = 0,
    /// <summary>
    /// Truncate an 8-bit value to fit it into n bits, where 1 &lt; n &lt; 8.
    /// The number of all possible n-bit values is 1 &lt;&lt; n, from 0 to (1 &lt;&lt; n) - 1.
    /// The most reasonable n-bit value Vn corresponding to some 8-bit value V8 is equal to Vn = V8 &amp; ((1 &lt;&lt; n) - 1).
    /// </summary>
    Truncate = 1
};

} // namespace Jpeg
} // namespace FileFormats
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


