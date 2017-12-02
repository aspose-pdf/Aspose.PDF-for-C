#ifndef _Aspose_Pdf_Devices_EmfDevice_h_
#define _Aspose_Pdf_Devices_EmfDevice_h_

#include "Devices/ImageDevice_.h"

namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { class PageSize; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents image device that helps to save pdf document pages into emf. 
/// </summary>
class ASPOSE_PDF_SHARED_API EmfDevice FINAL : public Aspose::Pdf::Devices::ImageDevice
{
    typedef EmfDevice ThisType;
    typedef Aspose::Pdf::Devices::ImageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the <see cref="EmfDevice"/> class with default resolution of raster image written to emf.
    /// </summary>
    EmfDevice();
    /// <summary>
    /// Initializes a new instance of the <see cref="EmfDevice"/> class.
    /// <param name="resolution">
    /// Resolution for the raster image written to emf, see <see cref="Resolution"/> class.
    /// </param>
    /// </summary>
    EmfDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="EmfDevice"/> class with provided image dimensions, 
    /// and default resolution for the raster image written to emf (=150)
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    EmfDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="EmfDevice"/> class with provided page size, 
    /// and default resolution for the raster image written to emf (=150)
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    EmfDevice(System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided image dimensions, 
    /// and resolution for the raster image written to emf.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the for the raster image written to emf, see <see cref="Resolution"/> class.
    /// </param>
    EmfDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided page size, 
    /// and resolution for the raster image written to emf.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the for the raster image written to emf, see <see cref="Resolution"/> class.
    /// </param>
    EmfDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    
    /// <summary>
    /// Converts the page into emf and saves it in the output stream.
    /// </summary>
    /// <param name="page">
    /// The page to convert.
    /// </param>
    /// <param name="output">
    /// Output stream with emf image.
    /// </param>
    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_EmfDevice_h_

