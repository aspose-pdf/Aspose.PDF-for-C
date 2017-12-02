#ifndef _Aspose_Pdf_Devices_JpegDevice_h_
#define _Aspose_Pdf_Devices_JpegDevice_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/stream.h>

#include "Devices/ImageDevice_.h"

namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { class PageSize; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents image device that helps to save pdf document pages into jpeg. 
/// </summary>
class ASPOSE_PDF_SHARED_API JpegDevice FINAL : public Aspose::Pdf::Devices::ImageDevice
{
    typedef JpegDevice ThisType;
    typedef Aspose::Pdf::Devices::ImageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with default resolution and maximum quality.
    /// </summary>
    JpegDevice();
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class.
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    /// </summary>
    JpegDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class.
    /// </summary>
    /// <param name="quality">
    /// Specifies the level of compression for an image. 
    /// The range of useful values for the quality is from 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// Zero would give you the lowest quality image and 100 the highest.
    /// </param>
    JpegDevice(int32_t quality);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class.
    /// </summary>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    /// <param name="quality">
    /// Specifies the level of compression for an image. 
    /// The range of useful values for the quality is from 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// Zero would give you the lowest quality image and 100 the highest.
    /// </param>
    JpegDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided image dimensions, 
    /// default resolution (=150) and maximum quality.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    JpegDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided page size, 
    /// default resolution (=150) and maximum quality.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    JpegDevice(System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided image dimensions, 
    /// resolution and maximum quality.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    JpegDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided page size, 
    /// resolution and maximum quality.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    JpegDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided image dimensions, 
    /// resolution and quality.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    /// <param name="quality">
    /// Specifies the level of compression for an image. 
    /// The range of useful values for the quality is from 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// Zero would give you the lowest quality image and 100 the highest.
    /// </param>
    JpegDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided page size, 
    /// resolution and quality.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    /// <param name="quality">
    /// Specifies the level of compression for an image. 
    /// The range of useful values for the quality is from 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// Zero would give you the lowest quality image and 100 the highest.
    /// </param>
    JpegDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    
    /// <summary>
    /// Converts the page into jpeg and saves it in the output stream.
    /// </summary>
    /// <param name="page">
    /// The page to convert.
    /// </param>
    /// <param name="output">
    /// Output stream with jpeg image.
    /// </param>
    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output);
    
private:

    int32_t quality;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_JpegDevice_h_

