#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/rectangle.h>
#include <drawing/graphics.h>
#include <cstdint>

#include "Devices/PageDevice.h"

namespace Aspose { namespace Pdf { namespace Devices { class GraphicsDevice; } } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Devices { enum class FormPresentationMode; } } }
namespace Aspose { namespace Pdf { class RenderingOptions; } }
namespace Aspose { namespace Pdf { enum class PageCoordinateType; } }
namespace Aspose { namespace Pdf { class PageSize; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { class IPresenter; } } } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// An abstract class for image devices.
/// </summary>
class ASPOSE_PDF_SHARED_API ImageDevice : public Aspose::Pdf::Devices::PageDevice
{
    typedef ImageDevice ThisType;
    typedef Aspose::Pdf::Devices::PageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Devices::GraphicsDevice;
    
public:

    /// <summary>
    /// Gets or sets the page coordinate type (Media/Crop boxes). CropBox value is used by default.
    /// </summary>
    PageCoordinateType get_CoordinateType();
    /// <summary>
    /// Gets or sets the page coordinate type (Media/Crop boxes). CropBox value is used by default.
    /// </summary>
    void set_CoordinateType(PageCoordinateType value);
    /// <summary>
    /// Gets or sets rendering options.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::RenderingOptions> get_RenderingOptions();
    /// <summary>
    /// Gets or sets rendering options.
    /// </summary>
    void set_RenderingOptions(System::SharedPtr<Aspose::Pdf::RenderingOptions> value);
    /// <summary>
    /// Gets or sets form presentation mode.
    /// </summary>
    Aspose::Pdf::Devices::FormPresentationMode get_FormPresentationMode();
    /// <summary>
    /// Gets or sets form presentation mode.
    /// </summary>
    void set_FormPresentationMode(Aspose::Pdf::Devices::FormPresentationMode value);
    /// <summary>
    /// Gets image resolution.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> get_Resolution();
    /// <summary>
    /// Gets image output width.
    /// </summary>
    int32_t get_Width();
    /// <summary>
    /// Gets image output height.
    /// </summary>
    int32_t get_Height();
    
    /// <summary>
    /// Abstract initializer for <see cref="ImageDevice"/> descendants, set resolution to 150x150.
    /// </summary>
    ImageDevice();
    /// <summary>
    /// Abstract initializer for <see cref="ImageDevice"/> descendants.
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    /// </summary>
    ImageDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided image dimensions and default resolution (=150).
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    ImageDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided image dimensions and default resolution (=150).
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    ImageDevice(System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided image dimensions and resolution.
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
    ImageDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="JpegDevice"/> class with provided image dimensions and resolution.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the result image file, see <see cref="Resolution"/> class.
    /// </param>
    ImageDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    
protected:

    ImageDevice(System::SharedPtr<Point> origin, int32_t paperWidth, int32_t paperHeight, System::Drawing::Rectangle marginBounds, float scaleFactor, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t rotateDegrees, bool autoSize, VerticalAlignment verticalAlignment, HorizontalAlignment horizontalAlignment, bool isIsXpsPrinting);
    
    /// <summary>
    /// processes current page and returns presenter
    /// </summary>
    /// <param name="page"></param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Engine::Presentation::IPresenter> ProcessPresentation(System::SharedPtr<Page> page);
    /// <summary>
    /// processes current page with the graphics and returns presenter
    /// </summary>
    /// <param name="page"></param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Engine::Presentation::IPresenter> ProcessPresentation(System::SharedPtr<Page> page, System::SharedPtr<System::Drawing::Graphics> gr);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int32_t width;
    int32_t height;
    bool autoSize;
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution;
    System::SharedPtr<Point> origin;
    float scaleFactor;
    int32_t paperWidth;
    int32_t paperHeight;
    int32_t rotateDegrees;
    System::Drawing::Rectangle marginBounds;
    bool isXpsPrinting;
    VerticalAlignment verticalAlignment;
    HorizontalAlignment horizontalAlignment;
    Aspose::Pdf::Devices::FormPresentationMode formPresentationMode;
    bool convertFontsToUnicodeTtf;
    System::SharedPtr<Aspose::Pdf::RenderingOptions> renderingOptions;
    PageCoordinateType coordinateType;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


