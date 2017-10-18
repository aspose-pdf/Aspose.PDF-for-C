#ifndef _Aspose_Pdf_Devices_TiffDevice_h_
#define _Aspose_Pdf_Devices_TiffDevice_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Pdf.Engine.Presentation.GDIImpl.Utils;

#include "Devices/DocumentDevice.h"

namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { namespace Devices { class TiffSettings; } } }
namespace Aspose { namespace Pdf { class IIndexBitmapConverter; } }
namespace Aspose { namespace Pdf { namespace Devices { enum class FormPresentationMode; } } }
namespace Aspose { namespace Pdf { class RenderingOptions; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class PageSize; } }

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// This class helps to save pdf document page by page into the one tiff image.
/// </summary>
class ASPOSE_PDF_SHARED_API TiffDevice FINAL : public Aspose::Pdf::Devices::DocumentDevice
{
    typedef TiffDevice ThisType;
    typedef Aspose::Pdf::Devices::DocumentDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<Aspose::Pdf::RenderingOptions> get_RenderingOptions();
    void set_RenderingOptions(System::SharedPtr<Aspose::Pdf::RenderingOptions> value);
    Aspose::Pdf::Devices::FormPresentationMode get_FormPresentationMode();
    void set_FormPresentationMode(Aspose::Pdf::Devices::FormPresentationMode value);
    System::SharedPtr<TiffSettings> get_Settings();
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> get_Resolution();
    int32_t get_Width();
    int32_t get_Height();
    
    TiffDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    TiffDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings);
    TiffDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    TiffDevice(System::SharedPtr<TiffSettings> settings);
    TiffDevice(System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    TiffDevice();
    
    virtual void Process(System::SharedPtr<Document> document, int32_t fromPage, int32_t toPage, System::SharedPtr<System::IO::Stream> output);
    
    TiffDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings);
    TiffDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings);
    TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    TiffDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    TiffDevice(int32_t width, int32_t height, System::SharedPtr<TiffSettings> settings);
    TiffDevice(int32_t width, int32_t height, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<TiffSettings> settings);
    TiffDevice(int32_t width, int32_t height);
    TiffDevice(System::SharedPtr<PageSize> pageSize);
    
protected:

    bool get_ConvertFontsToUnicodeTTF();
    void set_ConvertFontsToUnicodeTTF(bool value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TiffDevice"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution;
    System::SharedPtr<TiffSettings> settings;
    System::SharedPtr<IIndexBitmapConverter> converter;
    int32_t width;
    int32_t height;
    Aspose::Pdf::Devices::FormPresentationMode formPresentationMode;
    bool convertFontsToUnicodeTtf;
    System::SharedPtr<Aspose::Pdf::RenderingOptions> renderingOptions;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_TiffDevice_h_

