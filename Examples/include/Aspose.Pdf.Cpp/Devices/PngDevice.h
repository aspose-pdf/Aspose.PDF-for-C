#ifndef _Aspose_Pdf_Devices_PngDevice_h_
#define _Aspose_Pdf_Devices_PngDevice_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "Devices/ImageDevice_.h"

namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { class PageSize; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents image device that helps to save pdf document pages into png. 
/// </summary>
class ASPOSE_PDF_SHARED_API PngDevice FINAL : public Aspose::Pdf::Devices::ImageDevice
{
    typedef PngDevice ThisType;
    typedef Aspose::Pdf::Devices::ImageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"/> class with default resolution.
    /// </summary>
    PngDevice();
    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"/> class.
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    /// </summary>
    PngDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"/> class with provided image dimensions and
    /// resolution.
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
    PngDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"/> class with provided page size and
    /// resolution.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    PngDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    
    /// <summary>
    /// Converts the page into png and saves it in the output stream.
    /// </summary>
    /// <param name="page">
    /// The page to convert.
    /// </param>
    /// <param name="output">
    /// Output stream with png image.
    /// </param>
    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"/> class with provided image dimensions, 
    /// default resolution (=150).
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    PngDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="PngDevice"/> class with provided page size, 
    /// default resolution (=150).
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    PngDevice(System::SharedPtr<PageSize> pageSize);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_PngDevice_h_

