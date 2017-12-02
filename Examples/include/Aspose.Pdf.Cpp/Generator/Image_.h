#ifndef _Aspose_Pdf_Generator_Image__h_
#define _Aspose_Pdf_Generator_Image__h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if SUPPORT_ASPOSE_SVG 

/* C# INACTIVE CODE:
using Aspose.Svg.Aps;
*/

// C# preprocessor directive: #endif 


#include <system/string.h>
#include <system/io/stream.h>
#include <system/collections/list.h>

#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { enum class ImageFileType; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Paragraphs; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents image.
/// </summary>
class ASPOSE_PDF_SHARED_API Image FINAL : public Aspose::Pdf::BaseParagraph
{
    typedef Image ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Cell;
    
public:

    /// <summary>
    /// Gets or sets the image file.
    /// </summary>
    System::String get_File();
    /// <summary>
    /// Gets or sets the image file.
    /// </summary>
    void set_File(System::String value);
    /// <summary>
    /// Gets or sets the image width.
    /// </summary>
    double get_FixWidth();
    /// <summary>
    /// Gets or sets the image width.
    /// </summary>
    void set_FixWidth(double value);
    /// <summary>
    /// Gets or sets the image height.
    /// </summary>
    double get_FixHeight();
    /// <summary>
    /// Gets or sets the image height.
    /// </summary>
    void set_FixHeight(double value);
    /// <summary>
    /// Gets or sets the image file type.
    /// </summary>
    ImageFileType get_FileType();
    /// <summary>
    /// Gets or sets the image file type.
    /// </summary>
    void set_FileType(ImageFileType value);
    /// <summary>
    /// Gets or sets the image scale.
    /// </summary>
    double get_ImageScale();
    /// <summary>
    /// Gets or sets the image scale.
    /// </summary>
    void set_ImageScale(double value);
    /// <summary>
    /// Gets or sets the image stream.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_ImageStream();
    /// <summary>
    /// Gets or sets the image stream.
    /// </summary>
    void set_ImageStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets or sets a bool value that indicates whether the image is forced to be black-and-white. If TIFF 
    /// image of CCITT subformat is used, this property must be set to true.
    /// </summary>
    bool get_IsBlackWhite();
    /// <summary>
    /// Gets or sets a bool value that indicates whether the image is forced to be black-and-white. If TIFF 
    /// image of CCITT subformat is used, this property must be set to true.
    /// </summary>
    void set_IsBlackWhite(bool value);
    
    /// <summary>
    /// Clone the image.
    /// </summary>
    /// <returns>The cloned object</returns>
    System::SharedPtr<Image> Clone();
    
    Image();
    
protected:

    /// <summary>
    /// Get file from url and local path
    /// </summary>
    static System::String GetFileName(System::String imageFile);
    /// <summary>
    /// Process image generation.
    /// </summary>
    bool Process(double& curX, double& curY, bool isScaleParagraph, System::SharedPtr<MarginInfo> marginInfo, double realWidth, double height, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, bool isCalculatedMode, bool isNextParagraphInline, System::SharedPtr<Paragraphs>& paragraphs);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String file;
    double fixWidth;
    double fixHeight;
    ImageFileType fileType;
    double imageScale;
    System::SharedPtr<System::IO::Stream> imageStream;
    bool isBlackWhite;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Image__h_

