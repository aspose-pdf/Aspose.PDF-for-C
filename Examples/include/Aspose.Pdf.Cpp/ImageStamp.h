#ifndef _Aspose_Pdf_ImageStamp_h_
#define _Aspose_Pdf_ImageStamp_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <cstdint>

#include "Stamp_.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Reresents graphic stamp.
/// </summary>
class ASPOSE_PDF_SHARED_API ImageStamp FINAL : public Aspose::Pdf::Stamp
{
    typedef ImageStamp ThisType;
    typedef Aspose::Pdf::Stamp BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets image stream used for stamping.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_Image();
    /// <summary>
    /// Gets or sets image width. Setting this property allos to scal image horizontally.
    /// </summary>
    double get_Width();
    /// <summary>
    /// Gets or sets image width. Setting this property allos to scal image horizontally.
    /// </summary>
    void set_Width(double value);
    /// <summary>
    /// Gets or sets image height. Setting this image allows to scale image vertically.
    /// </summary>
    double get_Height();
    /// <summary>
    /// Gets or sets image height. Setting this image allows to scale image vertically.
    /// </summary>
    void set_Height(double value);
    /// <summary>
    /// Gets or sets quality of image stamp in percent. Valid values are 0..100%. 
    /// </summary>
    int32_t get_Quality();
    /// <summary>
    /// Gets or sets quality of image stamp in percent. Valid values are 0..100%. 
    /// </summary>
    void set_Quality(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="ImageStamp"/> class.
    /// </summary>
    /// <param name="image">
    /// Stream which contains image data.
    /// </param>
    ImageStamp(System::SharedPtr<System::IO::Stream> image);
    
    /// <summary>
    /// Adds graphic stamp on the page.
    /// </summary>
    /// <param name="page">
    /// Page for stamping.
    /// </param>
    virtual void Put(System::SharedPtr<Page> page);
    
    /// <summary>
    /// Creates image stamp by image in the specified file.
    /// </summary>
    /// <param name="fileName">Name of the file which contains image. </param>
    ImageStamp(System::String fileName);
    
protected:

    virtual void ClearCache();
    /// <summary>
    /// Returns rectangle where image stamp
    /// </summary>
    /// <returns>Rectangle of the image stamp.</returns>
    virtual System::SharedPtr<Rectangle> getRect();
    /// <summary>
    /// returns size matrix
    /// </summary>
    /// <returns></returns>
    virtual System::SharedPtr<DOM::Matrix> getSizeMatrix();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::IO::Stream> _image;
    System::String _imageName;
    System::SharedPtr<Engine::Data::IPdfObject> _imageObject;
    double _width;
    double _height;
    int32_t _quality;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ImageStamp_h_

