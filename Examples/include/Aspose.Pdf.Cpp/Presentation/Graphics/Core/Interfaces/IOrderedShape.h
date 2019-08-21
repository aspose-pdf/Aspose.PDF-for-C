#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Presentation/Graphics/Core/PointF.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Represents an ordered shape. An ordered shape is a continuous set of points having a start point and end point.
/// The continuous set of points connected using a specific rule.
/// </summary>
class ASPOSE_PDF_SHARED_API IOrderedShape : public virtual System::Object
{
    typedef IOrderedShape ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the starting shape point.
    /// </summary>
    /// <value>The starting shape point.</value>
    virtual PointF get_StartPoint() = 0;
    /// <summary>
    /// Gets the ending shape point.
    /// </summary>
    /// <value>The ending shape point.</value>
    virtual PointF get_EndPoint() = 0;
    /// <summary>
    /// Gets a value indicating whether ordered shape is closed. When processing closed ordered shape the starting and ending points have no meaning.
    /// </summary>
    /// <value><c>True</c> if this ordered shape is closed; otherwise, <c>false</c>.</value>
    virtual bool get_IsClosed() = 0;
    /// <summary>
    /// Sets a value indicating whether ordered shape is closed. When processing closed ordered shape the starting and ending points have no meaning.
    /// </summary>
    /// <value><c>True</c> if this ordered shape is closed; otherwise, <c>false</c>.</value>
    virtual void set_IsClosed(bool value) = 0;
    
    /// <summary>
    /// Reverses the order of points for this shape.
    /// </summary>
    virtual void Reverse() = 0;
    
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


