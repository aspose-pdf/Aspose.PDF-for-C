#ifndef _Aspose_Pdf_Watermark_h_
#define _Aspose_Pdf_Watermark_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/image.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a watermark of the page.
/// </summary>
class ASPOSE_PDF_SHARED_API Watermark : public System::Object
{
    typedef Watermark ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Page;
    
public:

    /// <summary>
    /// Gets an image of the watermark.
    /// </summary>
    System::SharedPtr<System::Drawing::Image> get_Image();
    /// <summary>
    /// Gets a position of the watermark's image on a page.
    /// </summary>
    System::SharedPtr<Rectangle> get_Position();
    /// <summary>
    /// Gets a flag the watermark is present.
    /// </summary>
    bool get_Available();
    
    /// <summary>
    /// Initializes a watermark object with an image and it's position on a page.
    /// </summary>
    /// <param name="image">Image of the watermark. </param>
    /// <param name="rect">Position of the watermark on the page.</param>
    Watermark(System::SharedPtr<System::Drawing::Image> image, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initializes a watermark object with an image.
    /// </summary>
    /// <param name="image">Image of the watermark.</param>
    Watermark(System::SharedPtr<System::Drawing::Image> image);
    
protected:

    /// <summary>
    /// Initializes a new watermark object.
    /// </summary>
    Watermark();
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Drawing::Image> _image;
    System::SharedPtr<Rectangle> _rect;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Watermark_h_

