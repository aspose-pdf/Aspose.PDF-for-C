#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace Xmp {

/// <summary>
/// Represents array type in <see cref="XmpArray"/>.
/// </summary>
enum class XmpArrayType
{
    /// <summary>
    /// The unordered array.
    /// </summary>        
    UNORDERED,
    /// <summary>
    /// The ordered array.
    /// </summary>
    ORDERED,
    /// <summary>
    /// The alternative array.
    /// </summary>
    ALTERNATIVE
};

/// <summary>
/// The helper class for processing RDF logic
/// </summary>
class XmpArrayHelper
{
    typedef XmpArrayHelper ThisType;
    
public:

    /// <summary>
    /// Gets the RDF code for specific <see cref="XmpArrayType"/>.
    /// </summary>
    /// <param name="xmpArrayType">Type of the XMP array.</param>
    /// <returns>Returns the RDF code for specific <see cref="XmpArrayType"/>.</returns>
    /// <exception cref="XmpException">Invalid enum argument exception</exception>
    static System::String GetRdfCode(XmpArrayType xmpArrayType);
    
};

} // namespace Xmp
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


