#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace Xmp {

namespace Types {

/// <summary>
/// Base interface for XMP type.
/// </summary>
class ASPOSE_PDF_SHARED_API IXmpType : public virtual System::Object
{
    typedef IXmpType ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the string contained value in XMP format.
    /// </summary>
    /// <returns>Returns the string contained value in XMP format.</returns>
    virtual System::String GetXmpRepresentation() = 0;
    
};

} // namespace Types
} // namespace Xmp
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


