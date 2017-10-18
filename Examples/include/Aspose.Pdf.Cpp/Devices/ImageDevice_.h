#ifndef _Aspose_Pdf_Devices_ImageDevice__h_
#define _Aspose_Pdf_Devices_ImageDevice__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <drawing/rectangle.h>
#include <drawing/graphics.h>
#include <cstdint>

#include "Devices/PageDevice.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfConverter; } } }
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
class ASPOSE_PDF_SHARED_API ABSTRACT ImageDevice : public Aspose::Pdf::Devices::PageDevice
{
    typedef ImageDevice ThisType;
    typedef Aspose::Pdf::Devices::PageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::PdfConverter;
    friend class Aspose::Pdf::Devices::GraphicsDevice;
    
public:

    PageCoordinateType get_CoordinateType();
    void set_CoordinateType(PageCoordinateType value);
    System::SharedPtr<Aspose::Pdf::RenderingOptions> get_RenderingOptions();
    void set_RenderingOptions(System::SharedPtr<Aspose::Pdf::RenderingOptions> value);
    Aspose::Pdf::Devices::FormPresentationMode get_FormPresentationMode();
    void set_FormPresentationMode(Aspose::Pdf::Devices::FormPresentationMode value);
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> get_Resolution();
    int32_t get_Width();
    int32_t get_Height();
    
    ImageDevice();
    ImageDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    ImageDevice(int32_t width, int32_t height);
    ImageDevice(System::SharedPtr<PageSize> pageSize);
    ImageDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    ImageDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    
protected:

    bool get_ConvertFontsToUnicodeTTF();
    void set_ConvertFontsToUnicodeTTF(bool value);
    
    ImageDevice(System::SharedPtr<Point> origin, int32_t paperWidth, int32_t paperHeight, System::Drawing::Rectangle marginBounds, float scaleFactor, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t rotateDegrees, bool autoSize, VerticalAlignment verticalAlignment, HorizontalAlignment horizontalAlignment, bool isIsXpsPrinting);
    
    System::SharedPtr<Aspose::Pdf::Engine::Presentation::IPresenter> ProcessPresentation(System::SharedPtr<Page> page);
    System::SharedPtr<Aspose::Pdf::Engine::Presentation::IPresenter> ProcessPresentation(System::SharedPtr<Page> page, System::SharedPtr<System::Drawing::Graphics> gr);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ImageDevice"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

#endif // _Aspose_Pdf_Devices_ImageDevice__h_

