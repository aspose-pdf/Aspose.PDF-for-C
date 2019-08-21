#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { enum class BlendMode; } }
namespace Aspose { namespace Pdf { enum class ImageFilterType; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents an object containing graphics compositing parameters of current graphics state.
/// </summary>
class ASPOSE_PDF_SHARED_API CompositingParameters FINAL : public System::Object
{
    typedef CompositingParameters ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets blend mode of current graphics state.
    /// </summary>
    Aspose::Pdf::BlendMode get_BlendMode();
    /// <summary>
    /// Gets the image filter type.
    /// </summary>
    ImageFilterType get_FilterType();
    /// <summary>
    /// Gets the mask flag.
    /// </summary>
    bool get_IsMasked();
    
    /// <summary>
    /// Initializes new instance of the <see cref="CompositingParameters"/> object.
    /// </summary>
    /// <param name="blendMode">Blend mode of current graphics state.</param>
    CompositingParameters(Aspose::Pdf::BlendMode blendMode);
    /// <summary>
    /// Initializes new instance of the <see cref="CompositingParameters"/> object.
    /// </summary>
    /// <param name="blendMode">Blend mode of current graphics state.</param>
    /// <param name="filterType">The image filter type.</param>
    CompositingParameters(Aspose::Pdf::BlendMode blendMode, ImageFilterType filterType);
    /// <summary>
    /// Initializes new instance of the <see cref="CompositingParameters"/> object.
    /// </summary>
    /// <param name="blendMode">Blend mode of current graphics state.</param>
    /// <param name="filterType">The image filter type.</param>
    /// <param name="isMasked">The adding mask flag.</param>
    CompositingParameters(Aspose::Pdf::BlendMode blendMode, ImageFilterType filterType, bool isMasked);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    Aspose::Pdf::BlendMode _blendMode;
    ImageFilterType _imageFilterType;
    bool _isMasked;
    
};

} // namespace Pdf
} // namespace Aspose


