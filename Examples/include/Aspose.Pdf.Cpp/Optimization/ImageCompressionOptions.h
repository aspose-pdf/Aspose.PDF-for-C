#pragma once

#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Optimization { enum class ImageCompressionVersion; } } }
namespace Aspose { namespace Pdf { namespace Optimization { enum class ImageEncoding; } } }

namespace Aspose {

namespace Pdf {

namespace Optimization {

/// <summary>
/// Class contains set  options for image compression.
/// </summary>
class ASPOSE_PDF_SHARED_API ImageCompressionOptions : public System::Object
{
    typedef ImageCompressionOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// If this flag is set to true images will be compressed in the document. compression level is specfied with ImageQuality property.
    /// </summary>
    bool get_CompressImages();
    /// <summary>
    /// If this flag is set to true images will be compressed in the document. compression level is specfied with ImageQuality property.
    /// </summary>
    void set_CompressImages(bool value);
    /// <summary>
    /// If this flag set to true and CompressImages is true images will be resized if image resoultion is greater then specified MaxResolution parameter.
    /// </summary>
    bool get_ResizeImages();
    /// <summary>
    /// If this flag set to true and CompressImages is true images will be resized if image resoultion is greater then specified MaxResolution parameter.
    /// </summary>
    void set_ResizeImages(bool value);
    /// <summary>
    /// Specifies level of image compression when CompressIamges flag is used.
    /// </summary>
    int32_t get_ImageQuality();
    /// <summary>
    /// Specifies level of image compression when CompressIamges flag is used.
    /// </summary>
    void set_ImageQuality(int32_t value);
    /// <summary>
    /// Specifies maximum resolution of images. If image has higher resolition it will be scaled 
    /// </summary>
    int32_t get_MaxResolution();
    /// <summary>
    /// Specifies maximum resolution of images. If image has higher resolition it will be scaled 
    /// </summary>
    void set_MaxResolution(int32_t value);
    /// <summary>
    /// Version of compression algorithm. Possible values are: 1. standard compression, 2. fast (improved compression which is faster then standard but may be applicable not for all images), 3. mixed (standard compression is applied to images which can not be compressed by  faster algorithm, this may give best compression but more slow then "fast" algorithm. Version "Fast" is not applicable for resizing images (standard method will be used). Default is "Standard".
    /// </summary>
    ImageCompressionVersion get_Version();
    /// <summary>
    /// Version of compression algorithm. Possible values are: 1. standard compression, 2. fast (improved compression which is faster then standard but may be applicable not for all images), 3. mixed (standard compression is applied to images which can not be compressed by  faster algorithm, this may give best compression but more slow then "fast" algorithm. Version "Fast" is not applicable for resizing images (standard method will be used). Default is "Standard".
    /// </summary>
    void set_Version(ImageCompressionVersion value);
    /// <summary>
    /// Gets encoding used to store images. 
    /// </summary>
    ImageEncoding get_Encoding();
    /// <summary>
    /// Sets encoding used to store images. 
    /// </summary>
    void set_Encoding(ImageEncoding value);
    
    ImageCompressionOptions();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int32_t _imageQuality;
    int32_t _maxResolution;
    ImageCompressionVersion _version;
    bool _resizeImages;
    bool _compressImages;
    ImageEncoding _imageEncoding;
    
};

} // namespace Optimization
} // namespace Pdf
} // namespace Aspose


