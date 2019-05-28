#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Presentation/Graphics/Core/Size.h"
#include "Presentation/Graphics/Core/Rectangle___.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Represents an object with bounds.
/// </summary>
class ASPOSE_PDF_SHARED_API IObjectWithBounds : public virtual System::Object
{
    typedef IObjectWithBounds ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the object size.
    /// </summary>
    /// <value>The object size.</value>
    virtual Aspose::Pdf::Engine::Presentation::Graphics::Size get_Size() = 0;
    /// <summary>
    /// Gets the object bounds.
    /// </summary>
    /// <value>The object bounds.</value>
    virtual Rectangle get_Bounds() = 0;
    /// <summary>
    /// Gets the object width.
    /// </summary>
    /// <value>The object width.</value>
    virtual int32_t get_Width() = 0;
    /// <summary>
    /// Gets the object height.
    /// </summary>
    /// <value>The object height.</value>
    virtual int32_t get_Height() = 0;
    
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


