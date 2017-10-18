#ifndef _Aspose_Pdf_Facades_PdfConverter_h_
#define _Aspose_Pdf_Facades_PdfConverter_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <drawing/rectangle.h>
#include <drawing/imaging/image_format.h>
#include <drawing/graphics.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Tests { namespace Fonts { class FontConversionTests; } } } }
namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }
namespace Aspose { namespace Pdf { namespace Devices { enum class FormPresentationMode; } } }
namespace Aspose { namespace Pdf { class RenderingOptions; } }
namespace Aspose { namespace Pdf { enum class PageCoordinateType; } }
namespace Aspose { namespace Pdf { namespace Devices { class ImageDevice; } } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { class PageSize; } }
namespace Aspose { namespace Pdf { namespace Devices { enum class CompressionType; } } }
namespace Aspose { namespace Pdf { namespace Devices { class TiffSettings; } } }
namespace Aspose { namespace Pdf { class IIndexBitmapConverter; } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to convert a pdf file's each page to images, supporting BMP, JPEG, PNG and TIFF now.
/// Supported content in pdfs: pictures, form, comment.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfConverter FINAL : public Aspose::Pdf::Facades::Facade
{
    typedef PdfConverter ThisType;
    typedef Aspose::Pdf::Facades::Facade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::Fonts::FontConversionTests;
    
public:

    PageCoordinateType get_CoordinateType();
    void set_CoordinateType(PageCoordinateType value);
    bool get_ShowHiddenAreas();
    void set_ShowHiddenAreas(bool value);
    System::SharedPtr<Aspose::Pdf::RenderingOptions> get_RenderingOptions();
    void set_RenderingOptions(System::SharedPtr<Aspose::Pdf::RenderingOptions> value);
    Aspose::Pdf::Devices::FormPresentationMode get_FormPresentationMode();
    void set_FormPresentationMode(Aspose::Pdf::Devices::FormPresentationMode value);
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> get_Resolution();
    void set_Resolution(System::SharedPtr<Aspose::Pdf::Devices::Resolution> value);
    int32_t get_StartPage();
    void set_StartPage(int32_t value);
    int32_t get_EndPage();
    void set_EndPage(int32_t value);
    System::String get_Password();
    void set_Password(System::String value);
    System::String get_UserPassword();
    void set_UserPassword(System::String value);
    int32_t get_PageCount();
    
    void DoConvert();
    void SaveAsTIFF(System::String outputFile);
    void SaveAsTIFF(System::String outputFile, Aspose::Pdf::Devices::CompressionType compressionType);
    void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight);
    void SaveAsTIFF(System::String outputFile, System::SharedPtr<PageSize> pageSize);
    void SaveAsTIFF(System::String outputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight, Aspose::Pdf::Devices::CompressionType compressionType);
    void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    void SaveAsTIFFClassF(System::String outputFile, int32_t imageWidth, int32_t imageHeight);
    void SaveAsTIFFClassF(System::String outputFile, System::SharedPtr<PageSize> pageSize);
    void SaveAsTIFFClassF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight);
    void SaveAsTIFFClassF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream);
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, Aspose::Pdf::Devices::CompressionType compressionType);
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight);
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight, Aspose::Pdf::Devices::CompressionType compressionType);
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    bool HasNextImage();
    void GetNextImage(System::String outputFile);
    void GetNextImage(System::String outputFile, System::SharedPtr<PageSize> pageSize);
    void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    void GetNextImage(System::String outputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream);
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight, int32_t quality);
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight, int32_t quality);
    void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, double imageWidth, double imageHeight, int32_t quality);
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, double imageWidth, double imageHeight, int32_t quality);
    virtual void BindPdf(System::String inputFile);
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> inputStream);
    
    PdfConverter();
    PdfConverter(System::SharedPtr<Aspose::Pdf::Document> document);
    
    virtual void Close();
    void SaveAsTIFFClassF(System::String outputFile);
    void SaveAsTIFFClassF(System::SharedPtr<System::IO::Stream> outputStream);
    void SaveAsTIFF(System::String outputFile, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    void SaveAsTIFF(System::String outputFile, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight);
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight);
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    void GetNextImage(System::String outputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    
protected:

    bool get_ConvertFontsToUnicodeTTF();
    void set_ConvertFontsToUnicodeTTF(bool value);
    
    void GetNextImage(System::SharedPtr<System::Drawing::Graphics> outGraphics, float leftTopX, float leftTopY, int32_t paperWidth, int32_t paperHeight, System::Drawing::Rectangle marginBounds, float scaleFactor, int32_t rotateDegrees, bool autoSize, VerticalAlignment verticalAlignment, HorizontalAlignment horizontalAlignment, bool isXPSPrinting, bool isIntermidiateImage);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfConverter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Devices::Resolution> _resolution;
    int32_t _startPage;
    int32_t _endPage;
    int32_t _currentPage;
    System::String _password;
    System::String _userPassword;
    Aspose::Pdf::Devices::FormPresentationMode _formPresentationMode;
    bool _convertFontsToUnicodeTTF;
    System::SharedPtr<Aspose::Pdf::RenderingOptions> _renderingOptions;
    bool _showHiddenAreas;
    bool _showHiddenAreasExplicitlySet;
    PageCoordinateType _coordinateType;
    
    System::SharedPtr<Aspose::Pdf::Devices::ImageDevice> CreateNonTiffDevice(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    System::SharedPtr<Aspose::Pdf::Devices::ImageDevice> CreateGraphicsDevice(float leftTopX, float leftTopY, int32_t paperWidth, int32_t paperHeight, System::Drawing::Rectangle marginBounds, float scaleFactor, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t rotateDegrees, bool autoSize, VerticalAlignment verticalAlignment, HorizontalAlignment horizontalAlignment, bool isXpsPrinting);
    System::SharedPtr<Aspose::Pdf::Devices::ImageDevice> CreateNonTiffDevice(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    System::SharedPtr<Aspose::Pdf::Devices::ImageDevice> CreateNonTiffDevice(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::Resolution> resolution, int32_t quality);
    void ConvertDynamicXfa();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfConverter_h_

