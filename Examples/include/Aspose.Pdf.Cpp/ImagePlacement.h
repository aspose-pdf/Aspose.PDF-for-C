#ifndef _Aspose_Pdf_ImagePlacement_h_
#define _Aspose_Pdf_ImagePlacement_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// // Create ImagePlacementAbsorber object to perform image placement search
/// ImagePlacementAbsorber abs = new ImagePlacementAbsorber();
/// // Accept the absorber for first page
/// doc.Pages[1].Accept(abs);
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
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    
public:

    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    int32_t get_Rotation();
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> get_Resolution();
    System::SharedPtr<XImage> get_Image();
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    System::SharedPtr<Aspose::Pdf::CompositingParameters> get_CompositingParameters();
    
    void Save(System::SharedPtr<System::IO::Stream> stream);
    void Save(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    
protected:

    ImagePlacement(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<XImage> image, double xIndent, double yIndent, double scaledWidth, double scaledHeight, int32_t resHorizontal, int32_t resVertical, System::SharedPtr<Aspose::Pdf::CompositingParameters> compositingParameters, int32_t rotationAngle);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ImagePlacement"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

