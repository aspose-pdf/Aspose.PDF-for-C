#ifndef _Aspose_Pdf_XImage_h_
#define _Aspose_Pdf_XImage_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Redaction; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class ImageElement; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfExtractor; } } }
namespace Aspose { namespace Pdf { class ImageStamp; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class SignatureField; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class ImagePlacement; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class XImageCollection; } }
namespace Aspose { namespace Pdf { class DataUtils; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDataStream; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
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
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Redaction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::SignatureField;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacement;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::DataUtils;
    
public:

    static int32_t DefaultResolution;
    
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
    /// Gets or sets image name.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Gets or sets image name.
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
    
protected:

    System::SharedPtr<XImageCollection> get_Parent();
    
    System::SharedPtr<Engine::Data::IPdfDataStream> EngineImg;
    
    /// <summary>
    /// Gets default image format.
    /// </summary>
    static System::SharedPtr<System::Drawing::Imaging::ImageFormat> get_DefaultImageFormat();
    
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
    /// <summary>
    /// Returns true if the primitive is an image.
    /// </summary>
    static bool IsImage(System::SharedPtr<Engine::Data::IPdfPrimitive> primitive);
    /// <summary>
    /// Grayscale would have a delta of 0.
    /// </summary>
    /// <param name="color">The color for which to calculate the delta.</param>
    /// <returns>The difference in the RGB values.</returns>
    static int32_t GetRgbDelta(System::Drawing::Color color);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::WeakPtr<XImageCollection> _parent;
    
    /// <summary>
    /// Creates grayscaled version of image.
    /// </summary>
    /// <param name="original">The original image to convert.</param>
    /// <returns>Grayscaled version of original image.</returns>
    System::SharedPtr<System::Drawing::Bitmap> MakeGrayscale(System::SharedPtr<System::Drawing::Bitmap> original);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XImage_h_

