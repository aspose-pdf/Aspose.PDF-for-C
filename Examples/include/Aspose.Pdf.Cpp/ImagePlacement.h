#ifndef _Aspose_Pdf_ImagePlacement_h_
#define _Aspose_Pdf_ImagePlacement_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <drawing/imaging/image_format.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { class XImage; } }
namespace Aspose { namespace Pdf { class CompositingParameters; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents characteristics of an image placed to Pdf document page.
/// </summary>
/// <remarks>
/// When an image is placed to a page it may have dimensions other than physical dimensions defined in <see cref="Resources"/>.
/// The object <see cref="ImagePlacement"/> is intended to provide such information like dimensions, resolution and so on.
/// </remarks>
/// <example>
/// The example demonstrates how to find images on the first PDF document page and get images as bitmaps with visible dimensions.
/// <code></code> 
/// </example>
class ASPOSE_PDF_SHARED_API ImagePlacement FINAL : public System::Object
{
    typedef ImagePlacement ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    
public:

    /// <summary>
    /// Gets rectangle of the Image.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets rotation angle of the Image.
    /// </summary>
    int32_t get_Rotation();
    /// <summary>
    /// Gets resolution of the Image.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> get_Resolution();
    /// <summary>
    /// Gets related XImage resource object.
    /// </summary>
    System::SharedPtr<XImage> get_Image();
    /// <summary>
    /// Gets the page containing the image.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    /// <summary>
    /// Gets compositing parameters of graphics state active for the image placed to the page.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::CompositingParameters> get_CompositingParameters();
    
    /// <summary>
    /// Saves image with corresponding transformations: scaling, rotation and resolution.
    /// </summary>
    /// <param name="stream">Stream where image will be saved</param>
    void Save(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Saves image with corresponding transformations: scaling, rotation and resolution.
    /// </summary>
    /// <param name="stream">Stream where image will be saved</param>
    /// <param name="format">Format which will be used for image enconding. <see cref="ImageFormat"/></param>
    void Save(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    
protected:

    /// <summary>
    /// Initializes new instance of the <see cref="ImagePlacement"/> object.
    /// </summary>
    ImagePlacement(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<XImage> image, double xIndent, double yIndent, double scaledWidth, double scaledHeight, int32_t resHorizontal, int32_t resVertical, System::SharedPtr<Aspose::Pdf::CompositingParameters> compositingParameters, int32_t rotationAngle);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution;
    System::SharedPtr<XImage> image;
    System::SharedPtr<Aspose::Pdf::CompositingParameters> compositingParameters;
    System::SharedPtr<Aspose::Pdf::Page> page;
    int32_t rotationAngle;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ImagePlacement_h_

