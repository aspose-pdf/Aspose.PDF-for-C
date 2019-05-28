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

/// <summary>
/// Converts xmp values to the XML string representation.
/// </summary>
class ASPOSE_PDF_SHARED_API IXmlValue : public virtual System::Object
{
    typedef IXmlValue ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Converts XMP value to the XML representation.
    /// </summary>
    /// <returns>Returns the XMP value converted to the XML representation.</returns>
    virtual System::String GetXmlValue() = 0;
    
};

} // namespace Xmp
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


