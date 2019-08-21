#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Devices/DocumentDevice.h"

namespace Aspose { namespace Pdf { namespace Devices { enum class FormPresentationMode; } } }
namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { namespace Devices { class TiffSettings; } } }
namespace Aspose { namespace Pdf { class IIndexBitmapConverter; } }
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

    /// <summary>
    /// Gets rendering options.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::RenderingOptions> get_RenderingOptions();
    /// <summary>
    /// Sets rendering options.
    /// </summary>
    void set_RenderingOptions(System::SharedPtr<Aspose::Pdf::RenderingOptions> value);
    /// <summary>
    /// Gets form presentation mode.
    /// </summary>
    Aspose::Pdf::Devices::FormPresentationMode get_FormPresentationMode();
    /// <summary>
    /// Sets form presentation mode.
    /// </summary>
    void set_FormPresentationMode(Aspose::Pdf::Devices::FormPresentationMode value);
    /// <summary>
    /// Gets settings for mapping pdf into tiff image.
    /// </summary>
    System::SharedPtr<TiffSettings> get_Settings();
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
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="resolution">
    /// Resolution for the result image file.
    /// </param>
    TiffDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    TiffDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>        
    TiffDevice(System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    TiffDevice(System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>
    TiffDevice(System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class with default settings.
    /// </summary>
    TiffDevice();
    
    /// <summary>
    /// Converts certain document pages into tiff and save it in the output stream.
    /// </summary>
    /// <param name="document">
    /// The document to convert.
    /// </param>
    /// <param name="fromPage">
    /// Defines page number from which converting will start.
    /// </param>
    /// <param name="toPage">
    /// Defines page number which will end the converting.
    /// </param>
    /// <param name="output">
    /// Output stream with tiff image.
    /// </param>
    virtual void Process(System::SharedPtr<Aspose::Pdf::Document> document, int32_t fromPage, int32_t toPage, System::SharedPtr<System::IO::Stream> output);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    TiffDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>
    TiffDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>
    TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    TiffDevice(int32_t width, int32_t height, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="resolution">
    /// Resolution for the output image.
    /// </param>
    TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    TiffDevice(int32_t width, int32_t height, System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>
    TiffDevice(int32_t width, int32_t height, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    /// <param name="converter">
    /// External converter
    /// </param>
    TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    /// <param name="settings">
    /// Tiff settings, see <see cref="TiffSettings"/> class.
    /// </param>
    TiffDevice(System::SharedPtr<PageSize> pageSize, System::SharedPtr<TiffSettings> settings);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="width">
    /// Image output width.
    /// </param>
    /// <param name="height">
    /// Image output height.
    /// </param>
    TiffDevice(int32_t width, int32_t height);
    /// <summary>
    /// Initializes a new instance of the <see cref="TiffDevice"/> class.
    /// </summary>
    /// <param name="pageSize">
    /// Page size of the output image.
    /// </param>
    TiffDevice(System::SharedPtr<PageSize> pageSize);
    
protected:

    /// <summary>
    /// For internal usage only
    /// replaces fonts with TTF unicode fonts to solve compatibility issues
    /// </summary>
    bool get_ConvertFontsToUnicodeTTF();
    /// <summary>
    /// For internal usage only
    /// replaces fonts with TTF unicode fonts to solve compatibility issues
    /// </summary>
    void set_ConvertFontsToUnicodeTTF(bool value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
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


