#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <drawing/imaging/image_format.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { class XImage; } }
namespace Aspose { namespace Pdf { class CompositingParameters; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Matrix; } }

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
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// 
/// // Create ImagePlacementAbsorber object to perform image placement search
/// ImagePlacementAbsorber abs = new ImagePlacementAbsorber();
/// 
/// // Accept the absorber for first page
/// doc.Pages[1].Accept(abs);
/// 
/// // Retrieve images with visible dimensions
/// foreach (ImagePlacement imagePlacement in abs.ImagePlacements)
/// {
///     Bitmap scaledImage;
///     using (MemoryStream imageStream = new MemoryStream())
///     {
///         // Retrieve image from resources
///         imagePlacement.Image.Save(imageStream, ImageFormat.Png);
///         Bitmap resourceImage = (Bitmap) Bitmap.FromStream(imageStream);
///         // Create new bitmap with actual dimensions
///         scaledImage = new Bitmap(resourceImage, (int)imagePlacement.Rectangle.Width, (int)imagePlacement.Rectangle.Height);
///     }
/// } 
/// </code> 
/// </example>
class ASPOSE_PDF_SHARED_API ImagePlacement FINAL : public System::Object
{
    typedef ImagePlacement ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    
public:

    /// <summary>
    /// Current transformation matrix for this image. 
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix();
    /// <summary>
    /// Gets rectangle of the Image.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets rotation angle of the Image.
    /// </summary>
    float get_Rotation();
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
    /// Replace image in collection with another image. 
    /// </summary>
    /// <param name="image">Stream containing image data.</param>
    void Replace(System::SharedPtr<System::IO::Stream> image);
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

    bool get_IsInline();
    
    /// <summary>
    /// Initializes new instance of the <see cref="ImagePlacement"/> object.
    /// </summary>
    ImagePlacement(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<XImage> image, double xIndent, double yIndent, double scaledWidth, double scaledHeight, int32_t resHorizontal, int32_t resVertical, System::SharedPtr<Aspose::Pdf::CompositingParameters> compositingParameters, float rotationAngle, System::SharedPtr<Aspose::Pdf::Matrix> matrix, bool isInline);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution;
    System::SharedPtr<XImage> image;
    System::SharedPtr<Aspose::Pdf::CompositingParameters> compositingParameters;
    System::SharedPtr<Aspose::Pdf::Page> page;
    float rotationAngle;
    bool isInline;
    System::SharedPtr<Aspose::Pdf::Matrix> matrix;
    
};

} // namespace Pdf
} // namespace Aspose


