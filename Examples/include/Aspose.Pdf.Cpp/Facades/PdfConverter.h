#ifndef _Aspose_Pdf_Facades_PdfConverter_h_
#define _Aspose_Pdf_Facades_PdfConverter_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets or sets the page coordinate type (Media/Crop boxes). CropBox value is used by default.
    /// </summary>
    PageCoordinateType get_CoordinateType();
    /// <summary>
    /// Gets or sets the page coordinate type (Media/Crop boxes). CropBox value is used by default.
    /// </summary>
    void set_CoordinateType(PageCoordinateType value);
    /// <summary>
    /// Gets or sets flag that controls visibility of hidden areas on the page.
    /// </summary>
    bool get_ShowHiddenAreas();
    /// <summary>
    /// Gets or sets flag that controls visibility of hidden areas on the page.
    /// </summary>
    void set_ShowHiddenAreas(bool value);
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
    /// Gets or sets resolution during convertting. The higher resolution, the slower convertting speed. The default value is 150.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Devices::Resolution> get_Resolution();
    /// <summary>
    /// Gets or sets resolution during convertting. The higher resolution, the slower convertting speed. The default value is 150.
    /// </summary>
    void set_Resolution(System::SharedPtr<Aspose::Pdf::Devices::Resolution> value);
    /// <summary>
    /// Gets or sets start position which you want to convert. The minimal value is 1.
    /// </summary>
    int32_t get_StartPage();
    /// <summary>
    /// Gets or sets start position which you want to convert. The minimal value is 1.
    /// </summary>
    void set_StartPage(int32_t value);
    /// <summary>
    /// Gets or sets end position which you want to convert.
    /// </summary>
    int32_t get_EndPage();
    /// <summary>
    /// Gets or sets end position which you want to convert.
    /// </summary>
    void set_EndPage(int32_t value);
    /// <summary>
    /// Gets or sets document OwnerPassword.
    /// </summary>
    System::String get_Password();
    /// <summary>
    /// Gets or sets document OwnerPassword.
    /// </summary>
    void set_Password(System::String value);
    /// <summary>
    /// Gets or sets document UserPassword.
    /// </summary>
    System::String get_UserPassword();
    /// <summary>
    /// Gets or sets document UserPassword.
    /// </summary>
    void set_UserPassword(System::String value);
    /// <summary>
    /// Gets the page count.
    /// </summary>
    int32_t get_PageCount();
    
    /// <summary>
    /// Do some initial works for converting a pdf document to images.
    /// </summary>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfConverter> converter = System::MakeObject<Aspose::Pdf::Facades::PdfConverter>();
    /// converter->BindPdf(L"D:\\Test\\test.pdf");
    /// converter->DoConvert();
    /// System::String prefix = L"D:\\Test\\";
    /// System::String suffix = L".jpg";
    /// int32_t imageCount = 1;
    /// while (converter->HasNextImage())
    /// {
    ///     converter->GetNextImage(prefix + imageCount + suffix);
    ///     imageCount++;
    /// }
    /// </code>
    /// </example>
    void DoConvert();
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file to save the TIFF image.</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfConverter> converter = System::MakeObject<Aspose::Pdf::Facades::PdfConverter>();
    /// converter->BindPdf(L"D:\\Test\\test.pdf");
    /// converter->DoConvert();
    /// converter->SaveAsTIFF(L"D:\\Test\\test.tiff");
    /// </code>
    /// </example>
    void SaveAsTIFF(System::String outputFile);
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The output file.</param>
    /// <param name="compressionType">Type of the compression.</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfConverter> converter = System::MakeObject<Aspose::Pdf::Facades::PdfConverter>();
    /// converter->BindPdf(L"D:\\Test\\test.pdf");
    /// converter->DoConvert();
    /// converter->SaveAsTIFF(L"D:\\Test\\test.tiff");
    /// </code>
    /// </example>
    void SaveAsTIFF(System::String outputFile, Aspose::Pdf::Devices::CompressionType compressionType);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Converts each pages of a pdf document to images with page size and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="pageSize">The page size of the image.</param>
    void SaveAsTIFF(System::String outputFile, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Converts each pages of a pdf document to images with page size and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    void SaveAsTIFF(System::String outputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="compressionType">Type of the compression.</param>
    void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight, Aspose::Pdf::Devices::CompressionType compressionType);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    /// <param name="converter">External converter</param>
    void SaveAsTIFF(System::String outputFile, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF file.
    /// </summary>
    /// <param name="outputFile">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfConverter> converter = System::MakeObject<Aspose::Pdf::Facades::PdfConverter>();
    /// converter->BindPdf(L"D:\\Test\\test.pdf");
    /// converter->DoConvert();
    /// converter->SaveAsTIFFClassF(L"D:\\Test\\test.tiff", 204, 196);
    /// </code>
    /// </example>
    void SaveAsTIFFClassF(System::String outputFile, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF file.
    /// </summary>
    /// <param name="outputFile">The stream to save the TIFF image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    void SaveAsTIFFClassF(System::String outputFile, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    void SaveAsTIFFClassF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    void SaveAsTIFFClassF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputStream">The output stream.</param>
    /// <param name="compressionType">Type of the compression.</param>
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, Aspose::Pdf::Devices::CompressionType compressionType);
    /// <summary>
    /// Converts each pages of a pdf document to images with page size and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Converts each pages of a pdf document to images with page size and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="compressionType">Type of the compression.</param>
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight, Aspose::Pdf::Devices::CompressionType compressionType);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images with dimensions, and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    /// <param name="converter">External converter</param>
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, int32_t imageWidth, int32_t imageHeight, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Indicates whether the pdf file has more images or not.
    /// </summary>
    /// <returns>Can get more images or not, true if can, or false.</returns>
    bool HasNextImage();
    /// <summary>
    /// Saves image to file with default image format - jpeg.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    void GetNextImage(System::String outputFile);
    /// <summary>
    /// Saves image to file with ith given page size and default image format - jpeg.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    void GetNextImage(System::String outputFile, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Saves image to file with the givin image format.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfConverter> converter = System::MakeObject<Aspose::Pdf::Facades::PdfConverter>();
    /// converter->BindPdf(L"D:\\Test\\test.pdf");
    /// converter->DoConvert();
    /// System::String prefix = L"D:\\Test\\";
    /// System::String suffix = L".png";
    /// int32_t imageCount = 1;
    /// while (converter->HasNextImage())
    /// {
    ///     converter->GetNextImage(prefix + imageCount + suffix, System::Drawing::Imaging::ImageFormat::get_Png());
    ///     imageCount++;
    /// }
    /// </code>
    /// </example>
    void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Saves image to file with given page size and image format.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="format">The format of the image.</param>
    void GetNextImage(System::String outputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Saves image to stream with default image format - jpeg.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Saves image to stream with given page size.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Saves image to stream with given image format.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="format">The format of the image.</param>
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Saves image to stream with given page size.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="format">The format of the image.</param>
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Saves image to file with the given image format, dimensions and quality.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfConverter> converter = System::MakeObject<Aspose::Pdf::Facades::PdfConverter>();
    /// converter->BindPdf(L"D:\\Test\\test.pdf");
    /// converter->DoConvert();
    /// System::String prefix = L"D:\\Test\\";
    /// System::String suffix = L".jpg";
    /// int32_t imageCount = 1;
    /// while (converter->HasNextImage())
    /// {
    ///     converter->GetNextImage(prefix + imageCount + suffix, System::Drawing::Imaging::ImageFormat::get_Jpeg(), 800, 1000, 50);
    ///     imageCount++;
    /// }
    /// </code>
    /// </example>
    void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight, int32_t quality);
    /// <summary>
    /// Saves image to stream with the givin image format, dimensions and quality.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight, int32_t quality);
    /// <summary>
    /// Saves image to file with the givin image format, image size,  and quality.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixels.</param>
    /// <param name="imageHeight">The image height, the unit is pixels..</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfConverter> converter = System::MakeObject<Aspose::Pdf::Facades::PdfConverter>();
    /// converter->BindPdf(L"D:\\Test\\test.pdf");
    /// converter->DoConvert();
    /// System::String prefix = L"D:\\Test\\";
    /// System::String suffix = L".jpg";
    /// int32_t imageCount = 1;
    /// float pixelX = 800.f;
    /// float pixelY = 600.f;
    /// while (converter->HasNextImage())
    /// {
    ///     converter->GetNextImage(prefix + imageCount + suffix, System::Drawing::Imaging::ImageFormat::get_Jpeg(), pixelX, pixelY, 50);
    ///     imageCount++;
    /// }
    /// </code>
    /// </example>
    void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, double imageWidth, double imageHeight, int32_t quality);
    /// <summary>
    /// Saves image to stream with the givin image format, size and quality.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, double imageWidth, double imageHeight, int32_t quality);
    /// <summary>
    /// Binds a Pdf file for converting.
    /// </summary>
    /// <param name="inputFile">The pdf file.</param>		
    virtual void BindPdf(System::String inputFile);
    /// <summary>
    /// Binds a Pdf Stream for convert.
    /// </summary>
    /// <param name="inputStream">The pdf Stream.</param>
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> inputStream);
    
    /// <summary>
    /// Initializes new <see cref="PdfConverter"/> object.
    /// </summary>
    PdfConverter();
    /// <summary>
    /// Initializes new <see cref="PdfConverter"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    PdfConverter(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    ///  Close the instance of PdfConverter and release the resources.
    /// </summary>
    virtual void Close();
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF file.
    /// </summary>
    /// <param name="outputFile">The stream to save the TIFF image.</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfConverter> converter = System::MakeObject<Aspose::Pdf::Facades::PdfConverter>();
    /// converter->BindPdf(L"D:\\Test\\test.pdf");
    /// converter->DoConvert();
    /// converter->SaveAsTIFFClassF(L"D:\\Test\\test.tiff");
    /// </code>
    /// </example>
    void SaveAsTIFFClassF(System::String outputFile);
    /// <summary>
    /// Converts each pages of a pdf document to images and save images to a single TIFF ClassF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    void SaveAsTIFFClassF(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Converts each pages of a pdf document to images with and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    void SaveAsTIFF(System::String outputFile, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images with and saves images to a single TIFF file.
    /// </summary>
    /// <param name="outputFile">The file name to save the TIFF image</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    /// <param name="converter">External converter</param>
    void SaveAsTIFF(System::String outputFile, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings);
    /// <summary>
    /// Converts each pages of a pdf document to images and saves images to a single TIFF stream.
    /// </summary>
    /// <param name="outputStream">The stream to save the TIFF image.</param>
    /// <param name="settings">Settings object that defines TIFF parameters.</param>
    /// <param name="converter">External converter</param>
    void SaveAsTIFF(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<Aspose::Pdf::Devices::TiffSettings> settings, System::SharedPtr<IIndexBitmapConverter> converter);
    /// <summary>
    /// Saves image to file with the given image format and dimensions.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfConverter> converter = System::MakeObject<Aspose::Pdf::Facades::PdfConverter>();
    /// converter->BindPdf(L"D:\\Test\\test.pdf");
    /// converter->DoConvert();
    /// System::String prefix = L"D:\\Test\\";
    /// System::String suffix = L".jpg";
    /// int32_t imageCount = 1;
    /// while (converter->HasNextImage())
    /// {
    ///     converter->GetNextImage(prefix + imageCount + suffix, System::Drawing::Imaging::ImageFormat::get_Jpeg(), 800, 1000);
    ///     imageCount++;
    /// }
    /// </code>
    /// </example>
    void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Saves image to stream with the givin image format, size and quality.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="imageWidth">The image width, the unit is pixel.</param>
    /// <param name="imageHeight">The image height, the unit is pixel.</param>
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t imageWidth, int32_t imageHeight);
    /// <summary>
    /// Saves image to stream with given image format and quality.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    /// <summary>
    /// Saves image to stream with given page size, image format and quality.
    /// </summary>
    /// <param name="outputStream">The stream to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    void GetNextImage(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    /// <summary>
    /// Saves image to file with given image format and quality.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    void GetNextImage(System::String outputFile, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    /// <summary>
    /// Saves image to file with given page size, image format and quality.
    /// </summary>
    /// <param name="outputFile">The file path and name to save the image.</param>
    /// <param name="pageSize">The page size of the image.</param>
    /// <param name="format">The format of the image.</param>
    /// <param name="quality">The Jpeg file's quality (0~100), 0 is lowest and 100 is highest</param>
    void GetNextImage(System::String outputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t quality);
    
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
    
    /// <summary>
    /// draws page to graphics
    /// </summary>
    void GetNextImage(System::SharedPtr<System::Drawing::Graphics> outGraphics, float leftTopX, float leftTopY, int32_t paperWidth, int32_t paperHeight, System::Drawing::Rectangle marginBounds, float scaleFactor, int32_t rotateDegrees, bool autoSize, VerticalAlignment verticalAlignment, HorizontalAlignment horizontalAlignment, bool isXPSPrinting, bool isIntermidiateImage);
    System::Object::shared_members_type GetSharedMembers() override;
    
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
    /// <summary>
    /// Convert Dynamic Xfa Fomrs into "static" pdf document
    /// </summary>
    void ConvertDynamicXfa();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfConverter_h_

