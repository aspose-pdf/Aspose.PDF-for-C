#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/enum_helpers.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { enum class FileFormat : uint64_t; } } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// The image descriptor. Contains base properties and methods for all other image descriptor types.
/// </summary>
class ASPOSE_PDF_SHARED_API IImageDescriptor : public System::Object
{
    typedef IImageDescriptor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the supported format.
    /// </summary>
    /// <value>The supported format.</value>
    virtual FileFormat get_SupportedFormat() = 0;
    
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


