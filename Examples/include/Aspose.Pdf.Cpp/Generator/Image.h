#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/stream.h>
#include <system/collections/list.h>
#include <drawing/imaging/pixel_format.h>
#include <drawing/image.h>

#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class MCRElement; } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { enum class ImageFileType; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
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
    
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Cell;
    
public:

    /// <summary>
    /// Gets the image file.
    /// </summary>
    System::String get_File();
    /// <summary>
    /// Sets the image file.
    /// </summary>
    void set_File(System::String value);
    /// <summary>
    /// Gets the image width.
    /// </summary>
    double get_FixWidth();
    /// <summary>
    /// Sets the image width.
    /// </summary>
    void set_FixWidth(double value);
    /// <summary>
    /// Gets the image height.
    /// </summary>
    double get_FixHeight();
    /// <summary>
    /// Sets the image height.
    /// </summary>
    void set_FixHeight(double value);
    /// <summary>
    /// Gets the image file type.
    /// </summary>
    ImageFileType get_FileType();
    /// <summary>
    /// Sets the image file type.
    /// </summary>
    void set_FileType(ImageFileType value);
    /// <summary>
    /// Gets the image scale.
    /// </summary>
    double get_ImageScale();
    /// <summary>
    /// Sets the image scale.
    /// </summary>
    void set_ImageScale(double value);
    /// <summary>
    /// Gets the image stream.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_ImageStream();
    /// <summary>
    /// Sets the image stream.
    /// </summary>
    void set_ImageStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets a bool value that indicates whether the image use resolution during generation
    /// </summary>
    bool get_IsApplyResolution();
    /// <summary>
    /// Sets a bool value that indicates whether the image use resolution during generation
    /// </summary>
    void set_IsApplyResolution(bool value);
    /// <summary>
    /// Gets a bool value that indicates whether the image is forced to be black-and-white. If TIFF 
    /// image of CCITT subformat is used, this property must be set to true.
    /// </summary>
    bool get_IsBlackWhite();
    /// <summary>
    /// Sets a bool value that indicates whether the image is forced to be black-and-white. If TIFF 
    /// image of CCITT subformat is used, this property must be set to true.
    /// </summary>
    void set_IsBlackWhite(bool value);
    /// <summary>
    /// Gets a string value that indicates the title of the image.
    /// </summary>
    System::SharedPtr<Text::TextFragment> get_Title();
    /// <summary>
    /// Sets a string value that indicates the title of the image.
    /// </summary>
    void set_Title(System::SharedPtr<Text::TextFragment> value);
    
    Image();
    
    static System::String GetMimeType(System::SharedPtr<System::Drawing::Image> i);
    /// <summary>
    /// Clone the image.
    /// </summary>
    /// <returns>The cloned object</returns>
    virtual System::SharedPtr<System::Object> Clone();
    
protected:

    bool isTagged;
    int32_t MCID;
    
    double get_ImageHeight();
    double get_ImageWidth();
    System::SharedPtr<Rectangle> get_BBox();
    
    void SetTaggedInfo(int32_t MCID);
    /// <summary>
    /// Get file from url and local path
    /// </summary>
    static System::String GetFileName(System::String imageFile);
    /// <summary>
    /// Process image generation.
    /// </summary>
    bool Process(double& curX, double& rightX, double& curY, bool isScaleParagraph, System::SharedPtr<MarginInfo> marginInfo, double realWidth, double height, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, bool isCalculatedMode, bool isNextParagraphInline, bool isFooter, System::SharedPtr<Paragraphs>& paragraphs, double footNoteHeight, double bottomY, int32_t processedParagraphsCount);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    double _imageHeight;
    double _imageWidth;
    System::SharedPtr<Rectangle> _bBox;
    System::String pr_File;
    double pr_FixWidth;
    double pr_FixHeight;
    ImageFileType pr_FileType;
    double pr_ImageScale;
    System::SharedPtr<System::IO::Stream> pr_ImageStream;
    bool pr_IsApplyResolution;
    bool pr_IsBlackWhite;
    System::SharedPtr<Text::TextFragment> pr_Title;
    
    System::SharedPtr<Rectangle> GetRectangle(double curX, double curY, double width, double bottomY, Aspose::Pdf::HorizontalAlignment alignment, double realWidth);
    static bool IsSupportedPixelFormat(System::Drawing::Imaging::PixelFormat pixelFormat);
    
};

} // namespace Pdf
} // namespace Aspose


