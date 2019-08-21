#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <drawing/imaging/image_format.h>
#include <drawing/image.h>
#include <drawing/color.h>
#include <drawing/bitmap.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequenceXObject; } } }
namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequenceXImage; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Redaction; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class TransparentContentRemoval; } } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class ImageElement; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace EmptyPageDetection { class EmptyPageDetectionManager; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ImageCompressor; } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ImageCompressor2; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfConverter; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfExtractor; } } }
namespace Aspose { namespace Pdf { class ImageStamp; } }
namespace Aspose { namespace Pdf { namespace Forms { class SignatureField; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class ImagePlacement; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class XImageCollection; } }
namespace Aspose { namespace Pdf { class DataUtils; } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class PdfFileStampTests; } } } }
namespace Aspose { namespace Pdf { enum class ImageFilterType; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDataStream; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { enum class ColorType; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing image X-Object.
/// </summary>
class ASPOSE_PDF_SHARED_API XImage FINAL : public System::Object
{
    typedef XImage ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Interchange::ContentSequenceXObject;
    friend class Aspose::Pdf::Interchange::ContentSequenceXImage;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::EmptyPageDetection::EmptyPageDetectionManager;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Optimization::ImageCompressor;
    friend class Aspose::Pdf::Optimization::ImageCompressor2;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfConverter;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacement;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::Facades::PdfFileStampTests;
    
public:

    /// <summary>
    /// If the image contains transparancy than return true; otherwise, false.
    /// </summary>
    bool get_ContainsTransparency();
    /// <summary>
    /// Gets grayscaled version of image.
    /// </summary>
    System::SharedPtr<System::Drawing::Image> get_Grayscaled();
    /// <summary>
    /// Gets width of the image.
    /// </summary>
    int32_t get_Width();
    /// <summary>
    /// Gets height of the image.
    /// </summary>
    int32_t get_Height();
    /// <summary>
    /// Gets image name.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Sets image name.
    /// </summary>
    void set_Name(System::String value);
    
    /// <summary>
    /// Saves image data into stream as JPEG image.
    /// </summary>
    /// <param name="stream">Stream where image data will be saved.</param>
    void Save(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Saves image into stream with requested format. 
    /// </summary>
    /// <param name="stream">Stream where image will be saved</param>
    /// <param name="format">Format which will be used for image enconding. <see cref="ImageFormat"/></param>
    void Save(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    /// <summary>
    /// Saves image data into stream as JPEG image with specified resolution.
    /// </summary>
    /// <param name="stream">Stream where image data will be saved.</param>
    /// <param name="resolution">Image resolution</param>
    void Save(System::SharedPtr<System::IO::Stream> stream, int32_t resolution);
    /// <summary>
    /// Saves image into stream with requested format with specified resolution. 
    /// </summary>
    /// <param name="stream">Stream where image will be saved</param>
    /// <param name="format">Format which will be used for image enconding. <see cref="ImageFormat"/></param>
    /// <param name="resolution">Image resolution</param>
    void Save(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::Drawing::Imaging::ImageFormat> format, int32_t resolution);
    /// <summary>
    /// Returns color type of image.
    /// </summary>
    /// <returns>The color type value.</returns>
    ColorType GetColorType();
    /// <summary>
    /// Returns true if both images references to the same object.
    /// </summary>
    /// <param name="image">Image to be compared with "this" image.</param>
    /// <returns>Boolean value which is true if images references to the same object. </returns>
    bool IsTheSameObject(System::SharedPtr<XImage> image);
    /// <summary>
    /// Returns name of the image in ints collection.
    /// </summary>
    /// <returns>Image key (name).</returns>
    System::String GetNameInCollection();
    /// <summary>
    /// Returns the original image stream.
    /// </summary>
    /// <returns>The original image stream.</returns>
    System::SharedPtr<System::IO::Stream> ToStream();
    
protected:

    /// <summary>
    /// If the image contains smask than return true; otherwise, false.
    /// </summary>
    bool get_HasSMask();
    System::SharedPtr<XImageCollection> get_Parent();
    /// <summary>
    /// Gets black and white version of image.
    /// </summary>
    System::SharedPtr<System::Drawing::Image> get_BlackAndWhite();
    ImageFilterType get_FilterType();
    
    System::SharedPtr<Engine::Data::IPdfDataStream> EngineImg;
    
    /// <summary>
    /// Gets default image format.
    /// </summary>
    static System::SharedPtr<System::Drawing::Imaging::ImageFormat> get_DefaultImageFormat();
    System::SharedPtr<Engine::Data::IPdfObject> get_EngineObject();
    
    XImage(System::SharedPtr<Engine::Data::IPdfDataStream> image, System::SharedPtr<XImageCollection> parent);
    
    /// <summary>
    /// Deletes image from the parent collection. 
    /// </summary>
    void Delete();
    /// <summary>
    /// Replaces image onto stream specified in <paramref name="image"/>.
    /// </summary>
    /// <param name="image">
    /// Stream with image data.
    /// </param>
    void Replace(System::SharedPtr<System::IO::Stream> image);
    
    XImage(System::SharedPtr<Engine::Data::IPdfDataStream> image);
    
    System::SharedPtr<System::Drawing::Image> GetImage();
    void SaveWithBlending(System::SharedPtr<System::IO::Stream> stream, int32_t resolution);
    /// <summary>
    /// Returns true if the primitive is an image.
    /// </summary>
    static bool IsImage(System::SharedPtr<Engine::Data::IPdfPrimitive> primitive);
    static System::SharedPtr<System::Drawing::Bitmap> MakeGrayscale(System::SharedPtr<System::IO::Stream> original, System::SharedPtr<Document> document);
    static bool IsBitmapFilled(System::SharedPtr<System::Drawing::Bitmap> bitmap, uint8_t whiteColorReplace);
    static bool IsBitmapFilledRgb(System::SharedPtr<System::Drawing::Bitmap> bitmap, uint8_t whiteColorReplace);
    /// <summary>
    /// Grayscale would have a delta of 0.
    /// </summary>
    /// <param name="color">The color for which to calculate the delta.</param>
    /// <returns>The difference in the RGB values.</returns>
    static int32_t GetRgbDelta(System::Drawing::Color color);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::WeakPtr<XImageCollection> _parent;
    
    System::SharedPtr<System::Drawing::Bitmap> MakeBlackAndWhite(System::SharedPtr<System::Drawing::Bitmap> original);
    /// <summary>
    /// Creates grayscaled version of image.
    /// </summary>
    /// <returns>Grayscaled version of original image.</returns>
    System::SharedPtr<System::Drawing::Bitmap> MakeGrayscale();
    static ColorType DetectColorFromBmp(System::SharedPtr<System::Drawing::Bitmap> bmp);
    
};

} // namespace Pdf
} // namespace Aspose


